// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFXGameMode.generated.h"

class ANaveEnemiga;
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


class ACapsulas;
class ACapsulasArmas;
class ACapsulasEnergia;
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

	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<TSubclassOf<ANaveEnemiga>> TANavesEnemigasClase;
	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
	TArray<ANaveEnemigaCazaG1*> TANavesEnemigasCazaG1;
	TArray<ANaveEnemigaCazaG2*> TANavesEnemigasCazaG2;
	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;
	TArray<ANaveEnemigaTransporteG1*> TANavesEnemigasTransporteG1;
	TArray<ANaveEnemigaTransporteG2*> TANavesEnemigasTransporteG2;
	TArray<ANaveEnemigaEspia*> TANavesEnemigasEspia;
	TArray<ANaveEnemigaEspiaG1*> TANavesEnemigasEspiaG1;
	TArray<ANaveEnemigaEspiaG2*> TANavesEnemigasEspiaG2;
	TArray<ANaveEnemigaReabastecimiento*> TANavesEnemigasReabastecimiento;
	TArray<ANaveEnemigaReabastecimientoG1*> TANavesEnemigasReabastecimientoG1;
	TArray<ANaveEnemigaReabastecimientoG2*> TANavesEnemigasReabastecimientoG2;
	TArray<ANaveEnemigaNodriza*> TANavesEnemigasNodriza;
	TArray<ANaveEnemigaNodrizaG1*> TANavesEnemigasNodrizaG1;
	TArray<ANaveEnemigaNodrizaG2*> TANavesEnemigasNodrizaG2;

	TArray<ACapsulas*> TACapsulas;
	TArray<TSubclassOf<ACapsulas>> TACapsulasClase;
	TArray<ACapsulasArmas*> TACapsulasArmas;
	TArray<ACapsulasEnergia*> TACapsulasEnergia;

private:
	int TiempoTranscurrido;
	
public:
	virtual void Tick(float DeltaTime) override;

};


