// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyMovimientoOscilante.h"

// Sets default values
AStrategyMovimientoOscilante::AStrategyMovimientoOscilante()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	OscillationAmplitude = 100.0f; // Amplitud de la oscilación
	OscillationFrequency = 2.0f;   // Frecuencia de la oscilación
	Velocidad = 10.0f;

}

// Called when the game starts or when spawned
void AStrategyMovimientoOscilante::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrategyMovimientoOscilante::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStrategyMovimientoOscilante::Mover(AProyectilEnemigo* ProyectilEnemigo, float DeltaTime)
{
    if (!ProyectilEnemigo)
        return;

    FVector Location = ProyectilEnemigo->GetActorLocation();
    FVector ForwardVector = -ProyectilEnemigo->GetActorForwardVector(); // Dirección hacia abajo (eje -X)

    // Movimiento hacia abajo
    Location += ForwardVector * Velocidad * DeltaTime;

    // Oscilación en el eje Y
    Location.Y += FMath::Sin(GetWorld()->TimeSeconds * OscillationFrequency) * OscillationAmplitude;

    ProyectilEnemigo->SetActorLocation(Location);
}

