// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Strategy.h"
#include "ProyectilEnemigo.h"
#include "StrategyMovimientoEspiral.generated.h"

UCLASS()
class GALAGA_USFX_API AStrategyMovimientoEspiral : public AActor, public IStrategy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStrategyMovimientoEspiral();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Mover(AProyectilEnemigo* ProyectilEnemigo, float DeltaTime) override;
private:
	float Velocidad = 1000.0f;          // Velocidad hacia adelante
	float SpiralRadius = 100.0f;    // Radio de la espiral
	float SpiralFrequency = 2.0f;
};
