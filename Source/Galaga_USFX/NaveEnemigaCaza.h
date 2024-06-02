// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	int cantidadBombas;

public:
	ANaveEnemigaCaza();
	FORCEINLINE int GetCantidadBombas() const { return cantidadBombas; }
	FORCEINLINE void SetCantidadBombas(int _cantidadBombas) { cantidadBombas = _cantidadBombas; }

protected:
	
	
	virtual void Escapar();
	virtual void Atacar();

	void Destruirse();


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

