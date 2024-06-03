// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Strategy.h"
#include "ProyectilEnemigo.h"
#include "StrategyMovimientoZigZag.generated.h"

UCLASS()
class GALAGA_USFX_API AStrategyMovimientoZigZag : public AActor, public IStrategy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStrategyMovimientoZigZag();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Mover(AProyectilEnemigo* ProyectilEnemigo, float DeltaTime) override;
private:
	float ZigZagAmplitude; // Amplitud de la oscilación
	float ZigZagFrequency;   // Frecuencia de la oscilación
	float Velocidad;
};
