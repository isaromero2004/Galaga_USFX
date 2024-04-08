// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"

ANaveEnemigaEspia::ANaveEnemigaEspia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaEspia::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X - 100 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.X < limiteX) {

		SetActorLocation(FVector(1500.0f, PosicionActual.Y, PosicionActual.Z));

	}
	/*//moverse en zigzag
	float VelocidadHorizontal = GetVelocidad();

	FVector DireccionMovimiento = FVector(0.0f, -1.0f, 0.0f);
	

	float VelocidadRotacion = 40.0f;

	FVector DesplazamientoHorizontal = GetActorForwardVector() * VelocidadHorizontal * DeltaTime;

	float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f;

	float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion;

	float AmplitudZigzag = 50.0f;
	float ZigzagOffset = FMath::Sin(Angulo) * AmplitudZigzag;

	FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal;//FVector(0.0f, ZigzagOffset, 0.0f);

	SetActorLocation(NuevaPosicion);*/
}

void ANaveEnemigaEspia::Destruirse()
{
}
void ANaveEnemigaEspia::Escapar()
{
}
void ANaveEnemigaEspia::Atacar()
{
}