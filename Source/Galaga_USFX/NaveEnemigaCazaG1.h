// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaG1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaCazaG1 : public ANaveEnemigaCaza
{
	GENERATED_BODY()
private:
	float alcanceBombas;
public:
	ANaveEnemigaCazaG1();
	FORCEINLINE float GetAlcanceBombas() const { return alcanceBombas; }
	FORCEINLINE void SetAlcanceBombas(float _alcanceBombas) { alcanceBombas = _alcanceBombas; }

protected:
	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();
};
	

