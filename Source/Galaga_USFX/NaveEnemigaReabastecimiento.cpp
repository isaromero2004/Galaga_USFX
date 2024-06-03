// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimiento.h"
#include "ProyectilEnemigo.h"
#include "StrategyMovimientoEspiral.h"


ANaveEnemigaReabastecimiento::ANaveEnemigaReabastecimiento()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

	
}

void ANaveEnemigaReabastecimiento::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TiempoDisparo, this, &ANaveEnemigaReabastecimiento::Disparar, 2.0f, true);
	Strategy = NewObject<AStrategyMovimientoEspiral>();
}



void ANaveEnemigaReabastecimiento::Destruirse()
{
}
void ANaveEnemigaReabastecimiento::Escapar()
{
}
void ANaveEnemigaReabastecimiento::Disparar()
{
	FVector PosicionNave = GetActorLocation();
	FVector Offset = FVector(0.0f, 90.0f, 0.0f);
	FRotator Rotacion = FRotator(180, 0, 0);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		ProyectilEnemigo=World->SpawnActor<AProyectilEnemigo>(PosicionNave + Offset, Rotacion);
		ProyectilEnemigo->CambiarMovimiento(Strategy);
	}
}


void ANaveEnemigaReabastecimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}