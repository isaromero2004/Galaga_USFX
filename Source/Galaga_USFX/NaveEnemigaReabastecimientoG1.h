// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaReabastecimientoG1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaReabastecimientoG1 : public ANaveEnemigaReabastecimiento
{
	GENERATED_BODY()
	

private:
	int vidas;

public:
	ANaveEnemigaReabastecimientoG1();
	FORCEINLINE float GetVidas() const { return vidas; }
	FORCEINLINE void SetVidas(float _vidas) { vidas = _vidas; }

protected:
	virtual void Mover();
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();

};
