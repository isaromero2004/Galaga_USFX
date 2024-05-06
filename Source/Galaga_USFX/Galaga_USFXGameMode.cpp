// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "FabricaNaves.h"
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
#include "NaveNodriza.h"
#include "DirectorBuilderNodriza.h"
#include "BuilderNodriza.h"
#include "ConcretoBuilderNodriza.h"



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

    ConcretoBuilderNodriza = GetWorld()->SpawnActor<AConcretoBuilderNodriza>(AConcretoBuilderNodriza::StaticClass());
    DirectorBuilderNodriza = GetWorld()->SpawnActor<ADirectorBuilderNodriza>(ADirectorBuilderNodriza::StaticClass());
    DirectorBuilderNodriza->SetNaveNodriza(ConcretoBuilderNodriza);

    FVector InicialSpawnNaveLocation = FVector(-100.f, -500.f, 200.f);
    FRotator RotacionNave = FRotator::ZeroRotator;

    FVector SpawnCapsulasLocation = FVector(100.f, -500.f, 200.f);
    FRotator rotacionCapsulas = FRotator(0.0f, 0.0f, 0.0f);

    UWorld* const World = GetWorld();
    if (World != nullptr)
    {

        for (int i = 0; i < 6; i++)
        {
            FVector PosicionNaveActual = FVector(InicialSpawnNaveLocation.X, InicialSpawnNaveLocation.Y + i * 200, InicialSpawnNaveLocation.Z);
            ANaveEnemiga* NuevaNaveEnemigaCaza = AFabricaNaves::FabricarNaveEnemiga("Caza", World, PosicionNaveActual, RotacionNave);
            TANavesEnemigas.Push(NuevaNaveEnemigaCaza);
		}

        for (int i = 0; i < 6; i++)
        {
			FVector PosicionNaveActual = FVector(InicialSpawnNaveLocation.X+200, InicialSpawnNaveLocation.Y + i * 200, InicialSpawnNaveLocation.Z);
			ANaveEnemiga* NuevaNaveEnemigaEspia = AFabricaNaves::FabricarNaveEnemiga("Espia", World, PosicionNaveActual, RotacionNave);
			TANavesEnemigas.Push(NuevaNaveEnemigaEspia);
		}

        /*for (int i = 0; i < 6; i++)
        {
            FVector PosicionNaveActual = FVector(InicialSpawnNaveLocation.X +400, InicialSpawnNaveLocation.Y + i * 200, InicialSpawnNaveLocation.Z);
            ANaveEnemiga* NuevaNaveEnemigaNodriza = AFabricaNaves::FabricarNaveEnemiga("Nodriza", World, PosicionNaveActual, RotacionNave);
            TANavesEnemigas.Push(NuevaNaveEnemigaNodriza);
        }*/

        for (int i = 0; i < 6; i++)
        {
			FVector PosicionNaveActual = FVector(InicialSpawnNaveLocation.X - 200, InicialSpawnNaveLocation.Y + i * 200, InicialSpawnNaveLocation.Z);
			ANaveEnemiga* NuevaNaveEnemigaReabastecimiento = AFabricaNaves::FabricarNaveEnemiga("Reabastecimiento", World, PosicionNaveActual, RotacionNave);
			TANavesEnemigas.Push(NuevaNaveEnemigaReabastecimiento);
		}

        for (int i = 0; i < 6; i++)
        {
            FVector PosicionNaveActual = FVector(InicialSpawnNaveLocation.X - 400, InicialSpawnNaveLocation.Y + i * 200, InicialSpawnNaveLocation.Z);
            ANaveEnemiga* NuevaNaveEnemigaTransporte = AFabricaNaves::FabricarNaveEnemiga("Transporte", World, PosicionNaveActual, RotacionNave);
            TANavesEnemigas.Push(NuevaNaveEnemigaTransporte);
        }



        GetWorldTimerManager().SetTimer(AparicionCapsula, this, & AGalaga_USFXGameMode::SpawnCapsula, 10.0f, true);
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