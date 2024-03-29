// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodrizaG1.h"

ANaveEnemigaNodrizaG1::ANaveEnemigaNodrizaG1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_A.Shape_Wedge_A'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaNodrizaG1::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X - 100 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.X < limiteX) {

		SetActorLocation(FVector(1500.0f, FMath::RandRange(-500.0f, 200.0f) + 100.0f, PosicionActual.Z));

	}
	/*/movimiento eliptico
	static FVector PosicionActual = GetActorLocation();
	float VelocidadHorizontal = GetVelocidad();

	float VelocidadRotacion = 70.0f;

	FVector DireccionMovimiento = FVector(-100.0f, 0.0f, 0.0f);
	FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;

	float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f;

	float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion;

	float RadioX = 500.0f; // Radio en el eje X
	float RadioY = 100.0f; // Radio en el eje Y

	float X = FMath::Cos(Angulo) * RadioX;
	float Y = FMath::Sin(Angulo) * RadioY;

	//static float TopeAbajo = PosicionActual.X - 1300.0f;
	static float Reaparicion = PosicionActual.X + 200.0f;
	static float MovimientoY = 0.0f;

	FVector NuevaPosicion = FVector(X, Y, PosicionActual.Z);
	FVector ReaparicionPosicion = NuevaPosicion + DesplazamientoHorizontal;

	if (ReaparicionPosicion.X < TopeAbajo)
	{
		ReaparicionPosicion.X = Reaparicion;
	}

	SetActorLocation(ReaparicionPosicion);*/

}

void ANaveEnemigaNodrizaG1::Destruirse()
{
}
void ANaveEnemigaNodrizaG1::Escapar()
{
}
void ANaveEnemigaNodrizaG1::Atacar()
{
}