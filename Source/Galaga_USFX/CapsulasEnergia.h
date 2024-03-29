// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsulas.h"
#include "CapsulasEnergia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ACapsulasEnergia : public ACapsulas
{
	GENERATED_BODY()

private:
	float potenciadorEnergia;

public:
	ACapsulasEnergia();
	FORCEINLINE float GetPotenciadorEnergia() const { return potenciadorEnergia; }
	FORCEINLINE void SetPotenciadorEnergia(float potenciador) { potenciadorEnergia = potenciador; }

protected:
	virtual void MoverCapsulas(float DeltaTime);
public:
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;

};
