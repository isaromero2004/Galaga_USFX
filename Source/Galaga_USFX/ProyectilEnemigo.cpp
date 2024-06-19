// Copyright Epic Games, Inc. All Rights Reserve

#include "ProyectilEnemigo.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Galaga_USFXPawn.h"
#include "Engine/StaticMesh.h"
#include "Strategy.h"

AProyectilEnemigo::AProyectilEnemigo()
{
	PrimaryActorTick.bCanEverTick = true;
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

	// Create mesh component for the projectile sphere
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AProyectilEnemigo::OnHit);		// set up a notification for when this component hits something
	RootComponent = ProjectileMesh;
	ProjectileMesh->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));

	Dano = 100;

}

void AProyectilEnemigo::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{

	if (OtherActor != nullptr && OtherActor != this && OtherComp != nullptr)
	{
		AGalaga_USFXPawn* HitPawn = Cast<AGalaga_USFXPawn>(OtherActor);
		if (HitPawn)
		{
			HitPawn->RecibirDano(Dano);
			//Destroy(); // Destroy the projectile after impact
		}
	}
	Destroy();

}

void AProyectilEnemigo::CambiarMovimiento(IStrategy* NuevoMovimiento)
{
	Movimiento = NuevoMovimiento;
}

void AProyectilEnemigo::MoverProyectil(float DeltaTime)
{
	if (Movimiento)
	{
		Movimiento->Mover(this, DeltaTime);
	}
}

void AProyectilEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoverProyectil(DeltaTime);



}




