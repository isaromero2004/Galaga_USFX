// Fill out your copyright notice in the Description page of Project Settings.


#include "Meteorito.h"

AMeteorito::AMeteorito()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/meteorito.meteorito'"));
	mallaObstaculo->SetStaticMesh(ShipMesh.Object);

	PrimaryActorTick.bCanEverTick = true;
	VelocidadMeteorito = 10.0f;
	limiteCaida = -1000.0f;
}

void AMeteorito::BeginPlay()
{
	Super::BeginPlay();
}

void AMeteorito::Mover(float DeltaTime)
{
	float velocidadMeteorito = GetVelocidadMeteorito();
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X - 100 * DeltaTime * velocidadMeteorito, PosicionActual.Y, PosicionActual.Z);

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

void AMeteorito::estrellar()
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

