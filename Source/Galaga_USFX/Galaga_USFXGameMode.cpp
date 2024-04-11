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
#include "Capsulas.h"
#include "CapsulasArmas.h"
#include "CapsulasEnergia.h"

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
	// NaveEnemiga01 = nullptr;
	//Puntaje01 = nullptr;
    SpawnLocationInicial = FVector(-700.0f, -400.0f, 250.0f);
    SeparacionColumnas = 200.0f; 
    SeparacionFilas = 150.0f;

}
void AGalaga_USFXGameMode::BeginPlay()
{
    Super::BeginPlay();

    const int32 NumeroDeColumnas = 5; // Número de columnas
    const int32 NumeroDeFilas = 6;    // Número de filas

    FVector InicialSpawnNaveLocation = FVector(100.f, -500.f, 200.f);
    FRotator RotacionNave = FRotator::ZeroRotator;

    FVector SpawnCapsulasLocation = FVector(100.f, -500.f, 200.f);
    FRotator rotacionCapsulas = FRotator(0.0f, 0.0f, 0.0f);

    UWorld* const World = GetWorld();
    if (World != nullptr)
    {
        // Matriz que contiene arrays de clases de naves para cada columna
        TArray<TArray<TSubclassOf<ANaveEnemiga>>> ClasesNavesColumnas;
        TArray<TSubclassOf<ACapsulas>> ClasesCapsulas = { ACapsulasArmas::StaticClass(), ACapsulasEnergia::StaticClass() };
        // Agregar arrays de clases de naves a la matriz para cada columna
        for (int32 Columna = 0; Columna < NumeroDeColumnas; ++Columna)
        {
            TArray<TSubclassOf<ANaveEnemiga>> NavesColumna;
            // Agregar diferentes tipos de naves a la columna (puedes modificar esto según tus necesidades)
            NavesColumna.Add(ANaveEnemigaCazaG1::StaticClass());
            NavesColumna.Add(ANaveEnemigaCazaG2::StaticClass());
            NavesColumna.Add(ANaveEnemigaTransporteG1::StaticClass());
            NavesColumna.Add(ANaveEnemigaTransporteG2::StaticClass());
            NavesColumna.Add(ANaveEnemigaEspiaG1::StaticClass());
            NavesColumna.Add(ANaveEnemigaEspiaG2::StaticClass());
            NavesColumna.Add(ANaveEnemigaReabastecimientoG1::StaticClass());
            NavesColumna.Add(ANaveEnemigaReabastecimientoG2::StaticClass());
            NavesColumna.Add(ANaveEnemigaNodrizaG1::StaticClass());
            NavesColumna.Add(ANaveEnemigaNodrizaG2::StaticClass());

            ClasesNavesColumnas.Add(NavesColumna);
        }

        // Spawnear las naves de acuerdo a la matriz de clases de naves
        for (int32 Columna = 0; Columna < NumeroDeColumnas; ++Columna)
        {
            for (int32 Fila = 0; Fila < NumeroDeFilas; ++Fila)
            {
                TSubclassOf<ANaveEnemiga> ClaseNaveSeleccionada = ClasesNavesColumnas[Columna][FMath::RandRange(0, ClasesNavesColumnas[Columna].Num() - 1)];

                FVector SpawnLocation = InicialSpawnNaveLocation + FVector(Columna * SeparacionColumnas, Fila * SeparacionFilas, 0.f);

                ANaveEnemiga* NuevaNave = World->SpawnActor<ANaveEnemiga>(ClaseNaveSeleccionada, SpawnLocation, RotacionNave);
                
            }
        }

		TSubclassOf<ACapsulas> CapsulasRandom = ClasesCapsulas[FMath::RandRange(0, ClasesCapsulas.Num() - 1)];

		FVector SpawnLocation = FVector(FMath::RandRange(-200.f, 200.f), -500.f, 200.f);

			FRotator SpawnRotation = FRotator::ZeroRotator;
			ACapsulas* CapsulasSpawn = GetWorld()->SpawnActor<ACapsulas>(CapsulasRandom, SpawnLocation, SpawnRotation);

		

		TiempoTranscurrido = 0;

	}
}




void AGalaga_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;

	/*if (TiempoTranscurrido >= 100)
	{
		int numeroEnemigo = FMath::RandRange(0, 9);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Hola estoy aqui")));


			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Entero: %d"), numeroEnemigo));

		}
		//TANavesEnemigas[numeroEnemigo]->PrimaryActorTick.bCanEverTick = false;
		//TANavesEnemigas[numeroEnemigo]->SetVelocidad(0);
	}*/
}