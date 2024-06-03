// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaReabastecimiento.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaReabastecimiento : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	float capacidadCombustible;

public:
	ANaveEnemigaReabastecimiento();
	FORCEINLINE float GetCapacidadCombustible() const { return capacidadCombustible; }
	FORCEINLINE void SetCapacidadCombustible(float _capacidadCombustible) { capacidadCombustible = _capacidadCombustible; }

protected:
	
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Disparar();
	virtual void BeginPlay() override;
	

public:

	virtual void Tick(float DeltaTime) override;

};
