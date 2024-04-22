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

void AFabricaNaves::FabricarNaveEnemiga(TSubclassOf<class ANaveEnemiga> claseNave, FVector Posicion, FRotator Rotacion)
{
	if (claseNave)
	{
		GetWorld()->SpawnActor<ANaveEnemiga>(claseNave, Posicion, Rotacion);
	}
}

