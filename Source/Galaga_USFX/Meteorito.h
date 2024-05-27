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
public:
	AMeteorito();

	//virtual void estrellar();

protected:
	float VelocidadMeteorito;

public:
	FORCEINLINE float GetVelocidadMeteorito() const { return VelocidadMeteorito; }
	FORCEINLINE void SetVelocidadMeteorito(float Velocidad) { VelocidadMeteorito = Velocidad; }
protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void Mover(float DeltaTime);
	virtual float DanioProducido();



};