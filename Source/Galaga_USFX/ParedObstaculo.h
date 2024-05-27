// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ParedObstaculo.generated.h"

/**
 *
 */
UCLASS()
class GALAGA_USFX_API AParedObstaculo : public AObstaculo
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AParedObstaculo();
	int ciclos = 0;
	int direccion = 1;
	float velocidad = 10.0f;
	FVector posicionInicial;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void Mover(float DeltaTime);



};