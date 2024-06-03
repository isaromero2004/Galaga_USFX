// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "ProyectilEnemigo.h"
#include "StrategyMovimientoRecto.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//// Create the mesh component
	//NaveEnemigaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);
	//resistencia= 15;
	
}
void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TiempoDisparo, this, &ANaveEnemigaCaza::Disparar, 1.0f, true);
	Strategy = NewObject <AStrategyMovimientoRecto>();
}

//Called every frame
void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}


void ANaveEnemigaCaza::Escapar()
{

}
void ANaveEnemigaCaza::Atacar()
{

}

void ANaveEnemigaCaza::Destruirse()
{	
}

void ANaveEnemigaCaza::Disparar()
{
	const FRotator FireRotation = FRotator(180, 0, 0);
	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

	FVector PosicionNave = GetActorLocation();
	FVector Offset = FVector(0.0f, 90.0f, 0.0f);
	FRotator Rotacion = FRotator(180, 0, 0);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		ProyectilEnemigo=World->SpawnActor<AProyectilEnemigo>(PosicionNave + Offset, Rotacion);
		ProyectilEnemigo->CambiarMovimiento(Strategy);
	}
}
