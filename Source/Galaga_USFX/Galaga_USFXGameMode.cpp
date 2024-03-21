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
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
	// NaveEnemiga01 = nullptr;
	//Bonus01 = nullptr;
	//Puntaje01 = nullptr;

}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionInicioNavesEnemigas = FVector(0.0f, 0.0f, 250.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	//FVector ubicacionBonus = FVector(300.0f, 0.0f, 200.0f);
	//FRotator rotacionBonus = FRotator(0.0f, 0.0f, 0.0f);

	//FVector ubicacionPuntaje = FVector(100.0f, 700.0f, 350.0f);
	//FRotator rotacionPuntaje = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		TArray<TSubclassOf<ANaveEnemiga>> claseNave = { ANaveEnemigaCazaG1::StaticClass(), ANaveEnemigaCazaG2::StaticClass(),ANaveEnemigaEspiaG1::StaticClass(),ANaveEnemigaEspiaG2::StaticClass(),
		ANaveEnemigaNodrizaG1::StaticClass(),ANaveEnemigaNodrizaG2::StaticClass(),ANaveEnemigaReabastecimientoG1::StaticClass(),ANaveEnemigaReabastecimientoG2::StaticClass(),
		ANaveEnemigaTransporteG1::StaticClass(),ANaveEnemigaTransporteG2::StaticClass() };

		FVector InicialSpawnLocation = FVector(100.f, -500.f, 200.f);

		for (int i = 0; i < 30; i++) {
			TSubclassOf<ANaveEnemiga> ClaseRandom = claseNave[FMath::RandRange(0, claseNave.Num() - 1)];

			FVector SpawnLocation = ubicacionInicioNavesEnemigas + FVector(0.f, i * 80.f, 0.f);

			FRotator SpawnRotation = FRotator::ZeroRotator;
			ANaveEnemiga* NuevaNaveSpawn = GetWorld()->SpawnActor<ANaveEnemiga>(ClaseRandom, SpawnLocation, SpawnRotation);


		}

		TiempoTranscurrido = 0;

	}
}

void AGalaga_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;

	if(TiempoTranscurrido>=100)
	{
		int numeroEnemigo = FMath::RandRange(0, 9);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Hola estoy aqui")));


			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Entero: %d"), numeroEnemigo));

		}
		//TANavesEnemigas[numeroEnemigo]->PrimaryActorTick.bCanEverTick = false;
		//TANavesEnemigas[numeroEnemigo]->SetVelocidad(0);
	}
}