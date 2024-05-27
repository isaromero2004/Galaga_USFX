// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
//#include "FabricaNaves.h"
//#include "NaveEnemiga.h"
//#include "NaveEnemigaTransporte.h"
//#include "NaveEnemigaTransporteG1.h"
//#include "NaveEnemigaTransporteG2.h"
//#include "NaveEnemigaCaza.h"
//#include "NaveEnemigaCazaG1.h"
//#include "NaveEnemigaCazaG2.h"
//#include "NaveEnemigaEspia.h"
//#include "NaveEnemigaEspiaG1.h"
//#include "NaveEnemigaEspiaG2.h"
//#include "NaveEnemigaReabastecimiento.h"
//#include "NaveEnemigaReabastecimientoG1.h"
//#include "NaveEnemigaReabastecimientoG2.h"
//#include "Capsulas.h"
//#include "CapsulasArmas.h"
//#include "CapsulasEnergia.h"
#include "TimerManager.h"
#include "FabricaNaves.h"
#include "NaveNodriza.h"
#include "DirectorBuilderNodriza.h"
#include "BuilderNodriza.h"
#include "ConcretoBuilderNodriza.h"
#include "SpawnFacade.h"



AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
    SpawnLocationInicial = FVector(-700.0f, -400.0f, 250.0f);


}
void AGalaga_USFXGameMode::BeginPlay()
{
    Super::BeginPlay();

    SpawnFacade = GetWorld()->SpawnActor<ASpawnFacade>(ASpawnFacade::StaticClass());
    SpawnFacade->SpawnearNaves();
    SpawnFacade->SpawnearObstaculos();
    SpawnFacade->SpawnearCapsula();



    BuilderNaveNodriza= GetWorld()->SpawnActor<AConcretoBuilderNodriza>(AConcretoBuilderNodriza::StaticClass());
    director = GetWorld()->SpawnActor<ADirectorBuilderNodriza>(ADirectorBuilderNodriza::StaticClass());
    
    director->SetBuilder(BuilderNaveNodriza);
    director->ConstruirNaveNodriza();

    ANaveNodriza* NaveNodriza = director->GetNaveNodriza();
}


void AGalaga_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;

}