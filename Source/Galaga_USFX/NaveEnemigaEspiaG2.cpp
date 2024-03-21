// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspiaG2.h"

ANaveEnemigaEspiaG2::ANaveEnemigaEspiaG2()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaEspiaG2::Mover(float DeltaTime)
{
	//moverse en zigzag

	float VelocidadHorizontal = GetVelocidad();

	float VelocidadRotacion = 50.0f;

	FVector DireccionMovimiento = FVector(0.0f, -1.0f, 0.0f);
	FVector DesplazamientoHorizontal = GetActorForwardVector() * VelocidadHorizontal * DeltaTime;

	float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f;

	float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion;

	float AmplitudZigzag = 150.0f;
	float ZigzagOffset = FMath::Sin(Angulo) * AmplitudZigzag;

	FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal + FVector(0.0f, ZigzagOffset, 0.0f);

	SetActorLocation(NuevaPosicion);
}

void ANaveEnemigaEspiaG2::Destruirse()
{
}
void ANaveEnemigaEspiaG2::Escapar()
{
}
void ANaveEnemigaEspiaG2::Atacar()
{
}