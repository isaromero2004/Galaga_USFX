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
	FVector posicionInicial;

	FORCEINLINE FVector GetPosicionInicial() const { return posicionInicial; }
	FORCEINLINE void SetPosicionInicial(FVector posicion) { posicionInicial = posicion; }



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void Mover(float DeltaTime);



};