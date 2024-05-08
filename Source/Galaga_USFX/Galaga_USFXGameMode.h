// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DirectorBuilderNodriza.h"
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

class ANaveNodriza;
class AConcretoBuilderNodriza;
class ADirectorBuilderNodriza;


UCLASS(MinimalAPI)
class AGalaga_USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFXGameMode();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:

	TArray<ANaveEnemiga*> TANavesEnemigas;
	//TArray<TSubclassOf<ANaveEnemiga>> ClaseNaveEnemiga;

	TMap < int32, TArray<TSubclassOf<ANaveEnemiga*>>> MatrizNavesEnemigas;

	TArray<ACapsulas*> TACapsulas;
	//TArray<TSubclassOf<ACapsulas>> ClasesCapsulas;


private:
	int TiempoTranscurrido;

	FVector SpawnLocationInicial; 

	FTimerHandle  AparicionCapsula;

	float SeparacionColumnas; 

	float SeparacionFilas; 

	bool aparecerCap;

protected:

	virtual void SpawnCapsula();

public:
	virtual void Tick(float DeltaTime) override;
private:

	
	class ADirectorBuilderNodriza* director;
	class AConcretoBuilderNodriza* BuilderNaveNodriza;




};


