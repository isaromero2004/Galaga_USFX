// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaG2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaEspiaG2 : public ANaveEnemigaEspia
{
	GENERATED_BODY()
	
private:
	float visionAnticipada;

public:
	ANaveEnemigaEspiaG2();
	FORCEINLINE float GetVisionAnticipada() const { return visionAnticipada; }
	FORCEINLINE void SetvisionAnticipada(float _visionAnticipada) { visionAnticipada = _visionAnticipada; }

protected:
	
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();
};


