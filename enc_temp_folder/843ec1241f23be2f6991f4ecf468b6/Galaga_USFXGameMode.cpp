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
#include "TimerManager.h"
#include "FabricaNaves.h"


AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
	// NaveEnemiga01 = nullptr;
	//Puntaje01 = nullptr;
    SpawnLocationInicial = FVector(-700.0f, -400.0f, 250.0f);
    //SeparacionColumnas = 200.0f; 
    //SeparacionFilas = 150.0f;

}
void AGalaga_USFXGameMode::BeginPlay()
{
    Super::BeginPlay();

    //const int32 NumeroDeColumnas = 5; // Número de columnas
    //const int32 NumeroDeFilas = 6;    // Número de filas

    FVector InicialSpawnNaveLocation = FVector(-100.f, -500.f, 200.f);
    FRotator RotacionNave = FRotator::ZeroRotator;

    FVector SpawnCapsulasLocation = FVector(100.f, -500.f, 200.f);
    FRotator rotacionCapsulas = FRotator(0.0f, 0.0f, 0.0f);

    UWorld* const World = GetWorld();
    if (World != nullptr)
    {

        AFabricaNaves* FabricarNaves = World->SpawnActor<AFabricaNaves>();
        FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaEspiaG1::StaticClass(), InicialSpawnNaveLocation, RotacionNave);
        FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaEspiaG2::StaticClass(), InicialSpawnNaveLocation + FVector(-50.0f, 250.0f, 0.0f), RotacionNave);
        FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaNodrizaG1::StaticClass(), InicialSpawnNaveLocation + FVector(-100.0f, 500.0f, 0.0f), RotacionNave);
        FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaNodrizaG2::StaticClass(), InicialSpawnNaveLocation + FVector(-150.0f, 750.0f, 0.0f), RotacionNave);
        FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaReabastecimientoG1::StaticClass(), InicialSpawnNaveLocation + FVector(-200.0f, 1000.0f, 0.0f), RotacionNave);
        FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaReabastecimientoG2::StaticClass(), InicialSpawnNaveLocation + FVector(-250.0f, 1250.0f, 0.0f), RotacionNave);
        FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaTransporteG1::StaticClass(), InicialSpawnNaveLocation + FVector(-300.0f, 1500.0f, 0.0f), RotacionNave);
        FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaTransporteG2::StaticClass(), InicialSpawnNaveLocation + FVector(-350.0f, 1750.0f, 0.0f), RotacionNave);
        FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaCazaG1::StaticClass(), InicialSpawnNaveLocation + FVector(-400.0f, 2000.0f, 0.0f), RotacionNave);
        FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaCazaG2::StaticClass(), InicialSpawnNaveLocation + FVector(-450.0f, 2250.0f, 0.0f), RotacionNave);


        //// Matriz que contiene arrays de clases de naves para cada columna
        ////TArray<TArray<TSubclassOf<ANaveEnemiga>>> ClasesNavesColumnas;
        //TArray<TSubclassOf<ACapsulas>> ClasesCapsulas = { ACapsulasArmas::StaticClass(), ACapsulasEnergia::StaticClass() };
        //// Agregar arrays de clases de naves a la matriz para cada columna

        ////AFabricaNaves* FabricaNaves = NewObject<AFabricaNaves>();

        //for (int32 Columna = 0; Columna < NumeroDeColumnas; ++Columna)
        //{
        //    TArray<ANaveEnemiga*> NavesColumna;
        //    // Agregar diferentes tipos de naves a la columna (puedes modificar esto según tus necesidades)
        //    //NavesColumna.Add(ANaveEnemigaCazaG1::StaticClass());
        //    //NavesColumna.Add(ANaveEnemigaCazaG2::StaticClass());
        //    //NavesColumna.Add(ANaveEnemigaTransporteG1::StaticClass());
        //    //NavesColumna.Add(ANaveEnemigaTransporteG2::StaticClass());
        //    //NavesColumna.Add(ANaveEnemigaEspiaG1::StaticClass());
        //    //NavesColumna.Add(ANaveEnemigaEspiaG2::StaticClass());
        //    //NavesColumna.Add(ANaveEnemigaReabastecimientoG1::StaticClass());
        //    //NavesColumna.Add(ANaveEnemigaReabastecimientoG2::StaticClass());
        //    //NavesColumna.Add(ANaveEnemigaNodrizaG1::StaticClass());
        //    //NavesColumna.Add(ANaveEnemigaNodrizaG2::StaticClass());
        //   
        //    AFabricaNaves* FabricarNaves = World->SpawnActor<AFabricaNaves>();

        //    ANaveEnemiga* NuevaNaveEspiaG1 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaEspiaG1::StaticClass(), InicialSpawnNaveLocation, RotacionNave);
        //    NavesColumna.Add(NuevaNaveEspiaG1);

        //    ANaveEnemiga* NuevaNaveEspiaG2 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaEspiaG2::StaticClass(), InicialSpawnNaveLocation + FVector(0.0f, 250.0f, 0.0f), RotacionNave);
        //    NavesColumna.Add(NuevaNaveEspiaG2);

        //    ANaveEnemiga* NuevaNaveNodrizaG1 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaNodrizaG1::StaticClass(), InicialSpawnNaveLocation + FVector(0.0f, 500.0f, 0.0f), RotacionNave);
        //    NavesColumna.Add(NuevaNaveNodrizaG1);

        //    ANaveEnemiga* NuevaNaveNodrizaG2 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaNodrizaG2::StaticClass(), InicialSpawnNaveLocation + FVector(0.0f, 750.0f, 0.0f), RotacionNave);
        //    NavesColumna.Add(NuevaNaveNodrizaG2);

        //    ANaveEnemiga* NuevaNaveReabastecimientoG1 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaReabastecimientoG1::StaticClass(), InicialSpawnNaveLocation + FVector(0.0f, 1000.0f, 0.0f), RotacionNave);
        //    NavesColumna.Add(NuevaNaveReabastecimientoG1);

        //    ANaveEnemiga* NuevaNaveReabastecimientoG2 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaReabastecimientoG2::StaticClass(), InicialSpawnNaveLocation + FVector(0.0f, 1250.0f, 0.0f), RotacionNave);
        //    NavesColumna.Add(NuevaNaveReabastecimientoG2);

        //    ANaveEnemiga* NuevaNaveTransporteG1 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaTransporteG1::StaticClass(), InicialSpawnNaveLocation + FVector(0.0f, 1500.0f, 0.0f), RotacionNave);
        //    NavesColumna.Add(NuevaNaveTransporteG1);

        //    ANaveEnemiga* NuevaNaveTransporteG2 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaTransporteG2::StaticClass(), InicialSpawnNaveLocation + FVector(0.0f, 1750.0f, 0.0f), RotacionNave);
        //    NavesColumna.Add(NuevaNaveTransporteG2);

        //    ANaveEnemiga* NuevaNaveCazaG1 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaCazaG1::StaticClass(), InicialSpawnNaveLocation + FVector(0.0f, 2000.0f, 0.0f), RotacionNave);
        //    NavesColumna.Add(NuevaNaveCazaG1);   


        //    /*TSubclassOf<ANaveEnemiga> NuevaNaveEspiaG1 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaEspiaG1::StaticClass(), InicialSpawnNaveLocation, RotacionNave);
        //    NavesColumna.Add(NuevaNaveEspiaG1);
        //    
   //         TSubclassOf<ANaveEnemiga> NuevaNaveEspiaG2 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaEspiaG2::StaticClass(), InicialSpawnNaveLocation + FVector(0.0f, 250.0f, 0.0f), RotacionNave);
   //         NavesColumna.Add(NuevaNaveEspiaG2);

   //         TSubclassOf<ANaveEnemiga> NuevaNaveNodrizaG1 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaNodrizaG1::StaticClass(), InicialSpawnNaveLocation + FVector(0.0f, 500.0f, 0.0f), RotacionNave);
   //         NavesColumna.Add(NuevaNaveNodrizaG1);

   //         TSubclassOf<ANaveEnemiga> NuevaNaveNodrizaG2 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaNodrizaG2::StaticClass(), InicialSpawnNaveLocation + FVector(0.0f, 750.0f, 0.0f), RotacionNave);
   //         NavesColumna.Add(NuevaNaveNodrizaG2);

   //         TSubclassOf<ANaveEnemiga> NuevaNaveReabastecimientoG1 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaReabastecimientoG1::StaticClass(), InicialSpawnNaveLocation + FVector(0.0f, 1000.0f, 0.0f), RotacionNave);
   //         NavesColumna.Add(ANaveEnemigaReabastecimientoG1::StaticClass());

   //         TSubclassOf<ANaveEnemiga> NuevaNaveReabastecimientoG2 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaReabastecimientoG2::StaticClass(), InicialSpawnNaveLocation + FVector(0.0f, 1250.0f, 0.0f), RotacionNave);
   //         NavesColumna.Add(NuevaNaveReabastecimientoG2);

   //         TSubclassOf<ANaveEnemiga> NuevaNaveTransporteG1 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaTransporteG1::StaticClass(), InicialSpawnNaveLocation + FVector(0.0f, 1500.0f, 0.0f), RotacionNave);
   //         NavesColumna.Add(NuevaNaveTransporteG1);

   //         TSubclassOf<ANaveEnemiga> NuevaNaveTransporteG2 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaTransporteG2::StaticClass(), InicialSpawnNaveLocation + FVector(0.0f, 1750.0f, 0.0f), RotacionNave);
   //         NavesColumna.Add(NuevaNaveTransporteG2);

   //         TSubclassOf<ANaveEnemiga> NuevaNaveCazaG1 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaCazaG1::StaticClass(), InicialSpawnNaveLocation + FVector(0.0f, 2000.0f, 0.0f), RotacionNave);
   //         NavesColumna.Add(NuevaNaveCazaG1);

   //         TSubclassOf<ANaveEnemiga> NuevaNaveCazaG2 = FabricarNaves->FabricarNaveEnemiga(ANaveEnemigaCazaG2::StaticClass(), InicialSpawnNaveLocation + FVector(0.0f, 2250.0f, 0.0f), RotacionNave);
			//NavesColumna.Add(NuevaNaveCazaG2);*/

			//// Agregar el array de clases de naves a la matriz
			//MatrizNavesEnemigas.Add(Columna, NavesColumna);
   //     }
   //     
   //     // Spawnear las naves de acuerdo a la matriz de clases de naves
   //     for (int32 Columna = 0; Columna < NumeroDeColumnas; ++Columna)
   //     {
   //         for (int32 Fila = 0; Fila < NumeroDeFilas; ++Fila)
   //         {
   //             TSubclassOf<ANaveEnemiga> ClaseNaveSeleccionada = ClasesNavesColumnas[Columna][FMath::RandRange(0, ClasesNavesColumnas[Columna].Num() - 1)];

   //             FVector SpawnLocation = InicialSpawnNaveLocation + FVector(Columna * SeparacionColumnas, Fila * SeparacionFilas, 0.f);

   //             ANaveEnemiga* NuevaNave = World->SpawnActor<ANaveEnemiga>(ClaseNaveSeleccionada, SpawnLocation, RotacionNave);

   //         }
   //     }/*

        //TSubclassOf<ACapsulas> CapsulasRandom = ClasesCapsulas[FMath::RandRange(0, ClasesCapsulas.Num() - 1)];

        //FVector SpawnLocation = FVector(400.0f, FMath::RandRange(-1000.f, 1000.f), 200.f);

        //FRotator SpawnRotation = FRotator::ZeroRotator;
        //ACapsulas* CapsulasSpawn = GetWorld()->SpawnActor<ACapsulas>(CapsulasRandom, SpawnLocation, SpawnRotation);

        GetWorldTimerManager().SetTimer(AparicionCapsula, this, & AGalaga_USFXGameMode::SpawnCapsula, 20.0f, true);
        //GetWorld()->GetTimerManager().SetTimer(AparicionCapsula, this, &AGalaga_USFXGameMode::AparicionDeCapsula, 20.0f, false);

    }

    TiempoTranscurrido = 0;


}
void AGalaga_USFXGameMode::SpawnCapsula()
{
    TArray<TSubclassOf<ACapsulas>> ClasesCapsulas = { ACapsulasArmas::StaticClass(), ACapsulasEnergia::StaticClass() };

    TSubclassOf<ACapsulas> RandomCapsulas = ClasesCapsulas[FMath::RandRange(0, ClasesCapsulas.Num() - 1)];


    GetWorld()->SpawnActor<ACapsulas>(RandomCapsulas, FVector(400.0f, FMath::RandRange(-1000.f, 1000.f), 200.f), FRotator(0, 0, 0));

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