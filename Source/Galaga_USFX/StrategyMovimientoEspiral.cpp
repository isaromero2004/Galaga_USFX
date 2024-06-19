// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyMovimientoEspiral.h"


// Sets default values
AStrategyMovimientoEspiral::AStrategyMovimientoEspiral()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStrategyMovimientoEspiral::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrategyMovimientoEspiral::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AStrategyMovimientoEspiral::Mover( AProyectilEnemigo* ProyectilEnemigo, float DeltaTime)
{
    if (!ProyectilEnemigo)
        return;

    FVector Location = ProyectilEnemigo->GetActorLocation();
    FVector ForwardVector = ProyectilEnemigo->GetActorForwardVector(); // Dirección hacia adelante

    // Movimiento hacia adelante
    Location += ForwardVector * Velocidad * DeltaTime;

    // Movimiento en espiral (combinación de seno y coseno para X y Y)
    //float Time = GetWorld()->TimeSeconds;
    float OffsetX = FMath::Cos(DeltaTime * SpiralFrequency) * SpiralRadius;
    float OffsetY = FMath::Sin(DeltaTime * SpiralFrequency) * SpiralRadius;

    Location.X -= OffsetX;
    Location.Y += OffsetY;

    ProyectilEnemigo->SetActorLocation(Location);
}

