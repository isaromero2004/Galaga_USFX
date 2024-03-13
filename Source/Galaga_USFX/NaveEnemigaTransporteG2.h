// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteG2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaTransporteG2 : public ANaveEnemigaTransporte
{
	GENERATED_BODY()

private:
	
	float velocidadTransportacion;

public:
	ANaveEnemigaTransporteG2();
	FORCEINLINE float GetvelocidadTransportacion() const { return velocidadTransportacion; }
	FORCEINLINE void SetvelocidadTransportacion(float _velocidadTransportacion) { velocidadTransportacion = _velocidadTransportacion; }

protected:
	virtual void Mover()override;
	virtual void Destruirse()override;
	virtual void Escapar()override;
	virtual void Atacar()override;


};


