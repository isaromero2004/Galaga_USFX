// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaG1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaNodrizaG1 : public ANaveEnemigaNodriza
{
	GENERATED_BODY()

private:
	float duracionAparicion;


public:
	ANaveEnemigaNodrizaG1();
	FORCEINLINE float GetDuracionAparicion() const { return duracionAparicion; }
	FORCEINLINE void SetDuracionAparicion(float _duracionAparicion) { duracionAparicion = _duracionAparicion; }

protected:
	virtual void Mover();
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();
};


