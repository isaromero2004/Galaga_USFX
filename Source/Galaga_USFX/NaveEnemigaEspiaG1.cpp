// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspiaG1.h"

ANaveEnemigaEspiaG1::ANaveEnemigaEspiaG1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaEspiaG1::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X - 100 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.X < limiteX) {

		SetActorLocation(FVector(1500.0f, PosicionActual.Y, PosicionActual.Z));

	}
	/*/moverse en zigzag
	float VelocidadHorizontal = GetVelocidad();

	float VelocidadRotacion = 40.0f;

	FVector DireccionMovimiento = FVector(0.0f, -1.0f, 0.0f);
	FVector DesplazamientoHorizontal = GetActorForwardVector() * VelocidadHorizontal * DeltaTime;

	float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f;

	float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion;

	float AmplitudZigzag = 100.0f;
	float ZigzagOffset = FMath::Sin(Angulo) * AmplitudZigzag;

	FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal;//FVector(0.0f, ZigzagOffset, 0.0f);

	SetActorLocation(NuevaPosicion);*/
}
void ANaveEnemigaEspiaG1::Destruirse()
{
}
void ANaveEnemigaEspiaG1::Escapar()
{
}
void ANaveEnemigaEspiaG1::Atacar()
{
}