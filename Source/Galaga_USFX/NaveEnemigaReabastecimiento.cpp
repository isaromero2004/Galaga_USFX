// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimiento.h"

ANaveEnemigaReabastecimiento::ANaveEnemigaReabastecimiento()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaReabastecimiento::Mover(float DeltaTime)
{
	//MoverOndulado
	static FVector PosicionActual = GetActorLocation();
	float VelocidadHorizontal = 100.0f;

	float VelocidadRotacion = 200.0f;

	FVector DireccionMovimiento = FVector(-1.0f, 0.0f, 0.0f);
	FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;

	float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.2f;

	float Angulo = FMath::Fmod(TiempoTranscurrido, 60.0f) * VelocidadRotacion;

	float Radio = 50.0f;
	float X = FMath::Cos(Angulo) * Radio;
	float Y = FMath::Sin(Angulo) * Radio;

	//static float TopeAbajo = PosicionActual.X - 1300.0f;
	static float Reaparicion = PosicionActual.X + 200.0f;
	static float MovimientoY = 30.0f;
	static float Amplitud = 100.0f;

	FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal;
	NuevaPosicion.Y += FMath::Sin(TiempoTranscurrido) * Amplitud; // Agregar movimiento ondulado

	if (NuevaPosicion.X < TopeAbajo)
	{
		NuevaPosicion.X = Reaparicion;
	}
	SetActorLocation(NuevaPosicion);

}

void ANaveEnemigaReabastecimiento::Destruirse()
{
}
void ANaveEnemigaReabastecimiento::Escapar()
{
}
void ANaveEnemigaReabastecimiento::Atacar()
{
}

void ANaveEnemigaReabastecimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}