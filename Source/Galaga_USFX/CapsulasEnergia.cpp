// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulasEnergia.h"

ACapsulasEnergia::ACapsulasEnergia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	mallaCapsulas->SetStaticMesh(ShipMesh.Object);
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
	FVector NuevaPosicion = FVector(PosicionActual.X, -100 * DeltaTime * velocidad, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.X < limiteX) {

		SetActorLocation(FVector(1500.0f, FMath::RandRange(-500.0f, 200.0f) + 100.0f, PosicionActual.Z));

	}
}


