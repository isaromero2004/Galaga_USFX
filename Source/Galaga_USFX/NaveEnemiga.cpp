// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "Movimiento.h"
#include "Subscriptor.h"
#include "Galaga_USFXProjectile.h"
#include "Engine/CollisionProfile.h"



// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	NaveEnemigaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	
	NaveEnemigaMesh->SetupAttachment(RootComponent);
	RootComponent = NaveEnemigaMesh;

	MovimientoNaves= CreateDefaultSubobject<UMovimiento>(TEXT("MovimientoNaves"));

	//// Establece el componente de movimiento como tickeable
	// puede recibir eventos de "tick" usando el Pr
	MovimientoNaves->PrimaryComponentTick.bCanEverTick = true;

	//velocidad = 1;
	//energia=100;
	resistencia = 5;

}


// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{

	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovimientoNaves->TickComponent(DeltaTime, ELevelTick::LEVELTICK_TimeOnly, nullptr);
}

void ANaveEnemiga::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	AGalaga_USFXProjectile* proyectil = Cast<AGalaga_USFXProjectile>(Other);
	if (proyectil)
	{

		Destruirse();
		/*proyectil->Destroy();*/

	}
	
}

void ANaveEnemiga::Destruirse()
{

	/*proyectil->ColisionarNave();*/
	resistencia--;
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Nave colisiona con proyectil, resistencia sobrante: %d"), resistencia);
	if (resistencia <= 0)
	{
		FVector PosicionNave = GetActorLocation();
		notifySuscribers(PosicionNave);

		Destroy();

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Nave destruida en la posición: " + PosicionNave.ToString()));
	}
}
//
//FString ANaveEnemiga::GetNombreNave()
//{
//	return NombreNave;
//}



