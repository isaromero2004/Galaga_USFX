// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaNaves.h"
#include "NaveEnemigaCaza.h"

#include "NaveEnemigaEspia.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaTransporte.h"


// Sets default values
AFabricaNaves::AFabricaNaves()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaNaves::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaNaves::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ANaveEnemiga * AFabricaNaves::FabricarNaveEnemiga(FString ClaseNave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{
    if (!World)
    {
        return nullptr;
    }
    FVector NuevaSpawnLocation = SpawnLocation;
    if (ClaseNave == "Caza")
    {
        ANaveEnemigaCaza* Nave = World->SpawnActor<ANaveEnemigaCaza>(NuevaSpawnLocation, SpawnRotation);
        return Nave;
    }
    else if (ClaseNave == "Espia")
    {
		ANaveEnemigaEspia* Nave = World->SpawnActor<ANaveEnemigaEspia>(NuevaSpawnLocation, SpawnRotation);
		return Nave;
	}
    else if (ClaseNave == "Nodriza")
    {
		ANaveEnemigaNodriza* Nave = World->SpawnActor<ANaveEnemigaNodriza>(NuevaSpawnLocation, SpawnRotation);
		return Nave;
	}
    else if (ClaseNave == "Reabastecimiento")
    {
		ANaveEnemigaReabastecimiento* Nave = World->SpawnActor<ANaveEnemigaReabastecimiento>(NuevaSpawnLocation, SpawnRotation);
		return Nave;
	}
    else if (ClaseNave == "Transporte")
    {
		ANaveEnemigaTransporte* Nave = World->SpawnActor<ANaveEnemigaTransporte>(NuevaSpawnLocation, SpawnRotation);
		return Nave;
	}



    return nullptr;
}
