// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	float capacidadVisualizacion;

public:
	ANaveEnemigaEspia();
	FORCEINLINE float GetCapacidadVisualizacion() const { return capacidadVisualizacion; }
	FORCEINLINE void SetCapacidadVisualizacion(float _capacidadVisualizacion) { capacidadVisualizacion = _capacidadVisualizacion; }

protected:
	
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();

public:

	virtual void Tick(float DeltaTime) override;

};
