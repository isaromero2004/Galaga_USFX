// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteG1.h"
#include "NaveEnemigaTransporteG2.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaG1.h"
#include "NaveEnemigaCazaG2.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaG1.h"
#include "NaveEnemigaEspiaG2.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaReabastecimientoG1.h"
#include "NaveEnemigaReabastecimientoG2.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaG1.h"
#include "NaveEnemigaNodrizaG2.h"
#include "Bonus.h"
#include "Puntaje.h"

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
	// NaveEnemiga01 = nullptr;
	Bonus01 = nullptr;
	Puntaje01 = nullptr;

}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionNaveTransporte01 = FVector(-500.0f, 1000.0f, 200.0f);
	FVector ubicacionNaveTransporte02 = FVector(-300.0f, 1000.0f, 200.0f);
	FVector ubicacionNaveCaza01 = FVector(-500.0f, 500.0f, 200.0f);
	FVector ubicacionNaveCaza02 = FVector(-300.0f, 500.0f, 200.0f);
	FVector ubicacionNaveEspia01 = FVector(-500.0f, -1000.0f, 200.0f);
	FVector ubicacionNaveEspia02 = FVector(-300.0f, -1000.0f, 200.0f);
	FVector ubicacionNaveReabastecimiento01 = FVector(-500.0f, -500.0f, 200.0f);
	FVector ubicacionNaveReabastecimiento02 = FVector(-300.0f, -500.0f, 200.0f);
	FVector ubicacionNaveNodriza01 = FVector(-500.0f, 0.0f, 200.0f);
	FVector ubicacionNaveNodriza02 = FVector(-300.0f, 0.0f, 200.0f);
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	FVector ubicacionBonus = FVector(300.0f, 0.0f, 200.0f);
	FRotator rotacionBonus = FRotator(0.0f, 0.0f, 0.0f);


	FVector ubicacionPuntaje = FVector(100.0f, 700.0f, 350.0f);
	FRotator rotacionPuntaje = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporteG1>(ubicacionNaveTransporte01, rotacionNave);
		NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCazaG1>(ubicacionNaveCaza01, rotacionNave);
		NaveEnemigaEspia01 = World->SpawnActor<ANaveEnemigaEspiaG1>(ubicacionNaveEspia01, rotacionNave);
		NaveEnemigaReabastecimiento01 = World->SpawnActor<ANaveEnemigaReabastecimientoG1>(ubicacionNaveReabastecimiento01, rotacionNave);
		NaveEnemigaNodriza01 = World->SpawnActor<ANaveEnemigaNodrizaG1>(ubicacionNaveNodriza01, rotacionNave);
		NaveEnemigaTransporte02 = World->SpawnActor<ANaveEnemigaTransporteG2>(ubicacionNaveTransporte02, rotacionNave);
		NaveEnemigaCaza02 = World->SpawnActor<ANaveEnemigaCazaG2>(ubicacionNaveCaza02, rotacionNave);
		NaveEnemigaEspia02 = World->SpawnActor<ANaveEnemigaEspiaG2>(ubicacionNaveEspia02, rotacionNave);
		NaveEnemigaReabastecimiento02 = World->SpawnActor<ANaveEnemigaReabastecimientoG2>(ubicacionNaveReabastecimiento02, rotacionNave);
		NaveEnemigaNodriza02 = World->SpawnActor<ANaveEnemigaNodrizaG2>(ubicacionNaveNodriza02, rotacionNave);

		Bonus01 = World->SpawnActor<ABonus>(ubicacionBonus, rotacionBonus);
		Puntaje01 = World->SpawnActor<APuntaje>(ubicacionPuntaje, rotacionPuntaje);
	}

	NaveEnemigaCaza01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
	NaveEnemigaTransporte01->SetPosicion(FVector(500.0f, 500.0f, 200.0f));
	NaveEnemigaEspia01->SetPosicion(FVector(0.0f, 500.0f, 200.0f));
	NaveEnemigaReabastecimiento01->SetPosicion(FVector(1000.0f, 500.0f, 200.0f));
	NaveEnemigaNodriza01->SetPosicion(FVector(-1000.0f, 500.0f, 200.0f));
	NaveEnemigaCaza02->SetPosicion(FVector(-500.0f, 1000.0f, 200.0f));
	NaveEnemigaTransporte02->SetPosicion(FVector(500.0f, 1000.0f, 200.0f));
	NaveEnemigaEspia02->SetPosicion(FVector(0.0f, 1000.0f, 200.0f));
	NaveEnemigaReabastecimiento02->SetPosicion(FVector(1000.0f, 1000.0f, 200.0f));
	NaveEnemigaNodriza02->SetPosicion(FVector(-1000.0f, 1000.0f, 200.0f));
	Bonus01->SetPosicion(FVector(1000.0f, 0.0f, 130.0f));
	Puntaje01->SetPosicion(FVector(3000.0f, 100.0f, 500.0f));
}