// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyMovimientoRecto.h"

// Sets default values
AStrategyMovimientoRecto::AStrategyMovimientoRecto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStrategyMovimientoRecto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrategyMovimientoRecto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStrategyMovimientoRecto::Mover(AProyectilEnemigo* ProyectilEnemigo, float DeltaTime)
{
    if (!ProyectilEnemigo)
        return;

    FVector Location = ProyectilEnemigo->GetActorLocation();
    FVector ForwardVector = ProyectilEnemigo->GetActorForwardVector(); // Dirección hacia adelante

    // Movimiento en línea recta en la dirección hacia adelante
    Location += ForwardVector * Velocidad * DeltaTime;

    ProyectilEnemigo->SetActorLocation(Location);
}

