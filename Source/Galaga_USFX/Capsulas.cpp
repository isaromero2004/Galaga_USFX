// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsulas.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Movimiento.h"


// Sets default values
ACapsulas::ACapsulas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mallaCapsulas= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaCapsulas->SetupAttachment(RootComponent);
	RootComponent=mallaCapsulas;
	SetActorEnableCollision(true);

	
}


void ACapsulas::Recoger(ACapsulas* Capsulas)
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);

	Capsulas->Inventario = Inventario;
	Inventario->AddToInventory(Capsulas);
	NumItems ++;


}

void ACapsulas::Soltar(const FTransform& NewPutDownLocation)
{
	/*AActor* Capsula = Capsulas;*/
	Inventario->RemoveFromInventory();
	NumItems --;

	SetActorTickEnabled(true);
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorLocation(NewPutDownLocation.GetLocation());
}






