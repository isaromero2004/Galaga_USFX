// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyMovimientoZigZag.h"
#include "ProyectilEnemigo.h"


// Sets default values
AStrategyMovimientoZigZag::AStrategyMovimientoZigZag()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ZigZagAmplitude = 100.0f; // Amplitud de la oscilaci�n
	ZigZagFrequency = 5.0f;   // Frecuencia de la oscilaci�n
	Velocidad = 1000.0f;

}

// Called when the game starts or when spawned
void AStrategyMovimientoZigZag::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrategyMovimientoZigZag::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStrategyMovimientoZigZag::Mover(AProyectilEnemigo* ProyectilEnemigo, float DeltaTime)
{
    if (!ProyectilEnemigo)
        return;

    FVector Location = ProyectilEnemigo->GetActorLocation();
    FVector ForwardVector = -ProyectilEnemigo->GetActorForwardVector(); // Direcci�n hacia adelante
    FVector RightVector = ProyectilEnemigo->GetActorRightVector();     // Direcci�n hacia la derecha

    // Movimiento hacia abajo en el eje -X y oscilaci�n en el eje Y
    Location += -ForwardVector * Velocidad * DeltaTime; // Movimiento hacia abajo (eje -X)
    Location += RightVector * FMath::Sin(ProyectilEnemigo->GetWorld()->TimeSeconds * ZigZagFrequency) * ZigZagAmplitude; // Oscilaci�n en el eje Y

    ProyectilEnemigo->SetActorLocation(Location);
}



