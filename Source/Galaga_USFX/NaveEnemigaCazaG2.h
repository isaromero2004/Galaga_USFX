// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaG2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaCazaG2 : public ANaveEnemigaCaza
{
	GENERATED_BODY()
	
private:
	float defensas;
	float alcanceBombas;
public:
	ANaveEnemigaCazaG2();
	FORCEINLINE float GetDefensas() const { return defensas; }
	FORCEINLINE void SetDefensas(float _defensas) { defensas = _defensas; }
	FORCEINLINE float GetAlcanceBombas() const { return alcanceBombas; }
	FORCEINLINE void SetAlcanceBombas(float _alcanceBombas) { alcanceBombas = _alcanceBombas; }

protected:
	virtual void Mover();
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();
};



