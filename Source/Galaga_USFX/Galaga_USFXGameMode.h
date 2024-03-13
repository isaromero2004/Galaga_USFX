// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFXGameMode.generated.h"

//class ANaveEnemiga;
class ANaveEnemigaTransporte;
class ANaveEnemigaCaza;
class ANaveEnemigaEspia;
class ANaveEnemigaReabastecimiento;
class ANaveEnemigaNodriza;
class ANaveEnemigaTransporteG1;
class ANaveEnemigaCazaG1;
class ANaveEnemigaEspiaG1;
class ANaveEnemigaReabastecimientoG1;
class ANaveEnemigaNodrizaG1;
class ANaveEnemigaTransporteG2;
class ANaveEnemigaCazaG2;
class ANaveEnemigaEspiaG2;
class ANaveEnemigaReabastecimientoG2;
class ANaveEnemigaNodrizaG2;


class ABonus;
class APuntaje;


UCLASS(MinimalAPI)
class AGalaga_USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFXGameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	ANaveEnemigaTransporteG1* NaveEnemigaTransporte01;
	ANaveEnemigaCazaG1* NaveEnemigaCaza01;
	ANaveEnemigaEspiaG1* NaveEnemigaEspia01;
	ANaveEnemigaReabastecimientoG1* NaveEnemigaReabastecimiento01;
	ANaveEnemigaNodrizaG1* NaveEnemigaNodriza01;
	ANaveEnemigaTransporteG2* NaveEnemigaTransporte02;
	ANaveEnemigaCazaG2* NaveEnemigaCaza02;
	ANaveEnemigaEspiaG2* NaveEnemigaEspia02;
	ANaveEnemigaReabastecimientoG2* NaveEnemigaReabastecimiento02;
	ANaveEnemigaNodrizaG2* NaveEnemigaNodriza02;
	ABonus* Bonus01;
	APuntaje* Puntaje01;

};


