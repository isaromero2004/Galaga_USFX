// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaG1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaEspiaG1 : public ANaveEnemigaEspia
{
	GENERATED_BODY()
	

private:
	float visionNocturna;

public:
	ANaveEnemigaEspiaG1();
	FORCEINLINE float GetVisionNocturna() const { return visionNocturna; }
	FORCEINLINE void SetvisionNocturna(float _visionNocturna) { visionNocturna = _visionNocturna; }

protected:
	
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();
};

