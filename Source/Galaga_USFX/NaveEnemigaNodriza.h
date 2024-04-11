// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	float tamano;
	int cantidadSubnaves;
	float intervaloAparicion;


public:
	ANaveEnemigaNodriza();
	FORCEINLINE float GetTamano() const { return tamano; }
	FORCEINLINE void SetTamano(float _tamano) { tamano = _tamano; }
	FORCEINLINE int GetCantidadSubnaves() const { return cantidadSubnaves; }
	FORCEINLINE void SetCantidadSubnaves(int _cantidadSubnaves) { cantidadSubnaves = _cantidadSubnaves; }
	FORCEINLINE float GetIntervaloAparicion() const { return intervaloAparicion; }
	FORCEINLINE void SetIntervaloAparicion(float _intervaloAparicion) { intervaloAparicion = _intervaloAparicion; }

protected:
	
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();

public:
	virtual void Tick(float DeltaTime) override;
};

