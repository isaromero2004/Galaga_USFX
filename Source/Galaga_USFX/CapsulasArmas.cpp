// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulasArmas.h"

ACapsulasArmas::ACapsulasArmas()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	mallaCapsulas->SetStaticMesh(ShipMesh.Object);

	PrimaryActorTick.bCanEverTick = true;

}

void ACapsulasArmas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoverCapsulas(DeltaTime);
}

void ACapsulasArmas::MoverCapsulas(float DeltaTime)
{
	float velocidad = GetVelocidadCapsulas();
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X -100 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.X < limiteX) {

		SetActorLocation(FVector(1500.0f, PosicionActual.Y, PosicionActual.Z));

	}
}
