// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaG2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaNodrizaG2 : public ANaveEnemigaNodriza
{
	GENERATED_BODY()

private:
	float duracionAparicion;
	
public:
	ANaveEnemigaNodrizaG2();
	FORCEINLINE float GetDuracionAparicion() const { return duracionAparicion; }
	FORCEINLINE void SetDuracionAparicion(float _duracionAparicion) { duracionAparicion = _duracionAparicion; }

protected:
	virtual void Mover()override;
	virtual void Destruirse()override;
	virtual void Escapar()override;
	virtual void Atacar()override;
};



