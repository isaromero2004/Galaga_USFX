// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimientoG2.h"


ANaveEnemigaReabastecimientoG2::ANaveEnemigaReabastecimientoG2()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaReabastecimientoG2::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X - 100 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.X < limiteX) {

		SetActorLocation(FVector(1500.0f, PosicionActual.Y, PosicionActual.Z));

	}

	/*/MoverOndulado
	static FVector PosicionActual = GetActorLocation();
	float VelocidadHorizontal = GetVelocidad();

	float VelocidadRotacion = 100.0f;

	FVector DireccionMovimiento = FVector(-1.0f, 0.0f, 0.0f);
	FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;

	float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f;

	float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion;

	float Radio = 150.0f;
	float X = FMath::Cos(Angulo) * Radio;
	float Y = FMath::Sin(Angulo) * Radio;

	//static float TopeAbajo = PosicionActual.X - 1300.0f;
	static float Reaparicion = PosicionActual.X + 200.0f;
	static float MovimientoY = 50.0f;
	static float Amplitud = 100.0f;

	FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal;
	NuevaPosicion.Y += FMath::Sin(TiempoTranscurrido) * Amplitud; // Agregar movimiento ondulado

	if (NuevaPosicion.X < TopeAbajo)
	{
		NuevaPosicion.X = Reaparicion;
	}
	SetActorLocation(NuevaPosicion);*/

}

void ANaveEnemigaReabastecimientoG2::Destruirse()
{
}
void ANaveEnemigaReabastecimientoG2::Escapar()
{
}
void ANaveEnemigaReabastecimientoG2::Atacar()
{
}