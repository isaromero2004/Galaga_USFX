// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodrizaG2.h"


ANaveEnemigaNodrizaG2::ANaveEnemigaNodrizaG2()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_A.Shape_Wedge_A'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaNodrizaG2::Mover(float DeltaTime)
{
	//MOvimiento eliptico
	static FVector PosicionActual = GetActorLocation();
	float VelocidadHorizontal = GetVelocidad();

	float VelocidadRotacion = 70.0f;

	FVector DireccionMovimiento = FVector(-100.0f, 0.0f, 0.0f);
	FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;

	float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f;

	float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion;

	float RadioX = 100.0f; // Radio en el eje X
	float RadioY = 800.0f; // Radio en el eje Y

	float X = FMath::Cos(Angulo) * RadioX;
	float Y = FMath::Sin(Angulo) * RadioY;

//	static float TopeAbajo = PosicionActual.X - 1300.0f;
	static float Reaparicion = PosicionActual.X + 200.0f;
	static float MovimientoY = 0.0f;

	FVector NuevaPosicion = FVector(X, Y, PosicionActual.Z);
	FVector ReaparicionPosicion = NuevaPosicion + DesplazamientoHorizontal;

	if (ReaparicionPosicion.X < TopeAbajo)
	{
		ReaparicionPosicion.X = Reaparicion;
	}

	SetActorLocation(ReaparicionPosicion);

}

void ANaveEnemigaNodrizaG2::Destruirse()
{
}
void ANaveEnemigaNodrizaG2::Escapar()
{
}
void ANaveEnemigaNodrizaG2::Atacar()
{
}