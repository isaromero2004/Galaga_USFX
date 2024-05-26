// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "Meteorito.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API AMeteorito : public AObstaculo
{
	GENERATED_BODY()

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Mover(float DeltaTime);
	virtual float DanioProducido();

	
};
