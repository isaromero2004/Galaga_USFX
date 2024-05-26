// Fill out your copyright notice in the Description page of Project Settings.


#include "Meteorito.h"

AMeteorito::AMeteorito()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	mallaObstaculo->SetStaticMesh(ShipMesh.Object);

	PrimaryActorTick.bCanEverTick = true;
}

void AMeteorito::BeginPlay()
{
	Super::BeginPlay();
}

void AMeteorito::Mover(float DeltaTime)
{
	float velocidad = GetVelocidad();
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X - 100 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.X < limiteCaida) {

		SetActorLocation(FVector(1500.0f, PosicionActual.Y, PosicionActual.Z));

	}
}

float AMeteorito::DanioProducido()
{
	danio = 10.0f;
	return danio;
}

