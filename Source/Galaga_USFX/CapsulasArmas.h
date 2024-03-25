// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsulas.h"
#include "CapsulasArmas.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ACapsulasArmas : public ACapsulas
{
	GENERATED_BODY()

private:
	int cantidadArmas;

public:
	ACapsulasArmas();
	FORCEINLINE int GetCantidadArmas() const { return cantidadArmas; }
	FORCEINLINE void SetCantidadArmas(int cantidad) { cantidadArmas = cantidad; }
	
protected:
		virtual void MoverCapsulas(float DeltaTime);
		virtual void DestruirCapsulas();
public:
	virtual void Tick(float DeltaTime) override;
	
	
};
