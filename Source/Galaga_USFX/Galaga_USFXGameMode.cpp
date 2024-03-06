// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
#include "Bonus.h"
#include "Puntaje.h"

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
	NaveEnemiga01 = nullptr;
	Bonus01 = nullptr;
	Puntaje01 = nullptr;

}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionNave = FVector(-900.0f, 50.0f, 250.0f);
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	FVector ubicacionBonus = FVector(-700.0f, 80.0f, 300.0f);
	FRotator rotacionBonus = FRotator(0.0f, 0.0f, 0.0f);


	FVector ubicacionPuntaje = FVector(-1200.0f, 100.0f, 500.0f);
	FRotator rotacionPuntaje = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		NaveEnemiga01 = World->SpawnActor<ANaveEnemiga>(ubicacionNave, rotacionNave);
		Bonus01 = World->SpawnActor<ABonus>(ubicacionNave, rotacionNave);
		Puntaje01 = World->SpawnActor<APuntaje>(ubicacionNave, rotacionNave);
	}

	NaveEnemiga01->SetPosicion(FVector(2000.0f, 0.0f, 120.0f));
	Bonus01->SetPosicion(FVector(1000.0f, 0.0f, 130.0f));
	Puntaje01->SetPosicion(FVector(3000.0f, 100.0f, 500.0f));
}