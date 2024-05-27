// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulasEnergia.h"

ACapsulasEnergia::ACapsulasEnergia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	mallaCapsulas->SetStaticMesh(ShipMesh.Object);

	PrimaryActorTick.bCanEverTick = true;
}

void ACapsulasEnergia::BeginPlay()
{
	Super::BeginPlay();
}

void ACapsulasEnergia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoverCapsulas(DeltaTime);
}

void ACapsulasEnergia::MoverCapsulas(float DeltaTime)
{
	float velocidad = GetVelocidadCapsulas();
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X -100 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.X < limiteX) {

		Destroy(); //SetActorLocation(FVector(1500.0f, PosicionActual.Y, PosicionActual.Z));

	}
	//else Destroy();
}


