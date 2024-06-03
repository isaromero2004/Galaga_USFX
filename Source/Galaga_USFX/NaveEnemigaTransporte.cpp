// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"
#include "ProyectilEnemigo.h"
#include "StrategyMovimientoZigZag.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_5.TwinStickUFO_5'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);
	resistencia = 10;

	NaveEnemigaMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));

	

}

void ANaveEnemigaTransporte::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TiempoDisparo, this, &ANaveEnemigaTransporte::Disparar, 2.0f, true);
	Strategy = NewObject <AStrategyMovimientoZigZag>();
}

void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemigaTransporte::Destruirse()
{
}
void ANaveEnemigaTransporte::Escapar()
{
}
void ANaveEnemigaTransporte::Disparar()
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

