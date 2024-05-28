// Fill out your copyright notice in the Description page of Project Settings.


#include "Meteorito.h"

AMeteorito::AMeteorito()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/meteorito.meteorito'"));
	mallaObstaculo->SetStaticMesh(ShipMesh.Object);

	mallaObstaculo->SetRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));

	PrimaryActorTick.bCanEverTick = true;
	velocidadObstaculo = 20.0f;
	limiteCaida = -1600.0f;
}

void AMeteorito::BeginPlay()
{
	Super::BeginPlay();
}

void AMeteorito::Mover(float DeltaTime)
{
	float velocidadMeteorito = GetVelocidadObstaculo();
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X - 100 * DeltaTime * velocidadMeteorito, PosicionActual.Y, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.X < limiteCaida) {

		Destroy(); //SetActorLocation(FVector(1500.0f, PosicionActual.Y, PosicionActual.Z));

	}
	//else Destroy();
}

void AMeteorito::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

float AMeteorito::DanioProducido()
{
	danio = 10.0f;
	return danio;
}

//void AMeteorito::estrellar()
//{
//	SetActorTickEnabled(false);
//	SetActorHiddenInGame(true);
//	SetActorEnableCollision(false);
//}

