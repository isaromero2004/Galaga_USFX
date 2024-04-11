// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsulas.h"


// Sets default values
ACapsulas::ACapsulas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mallaCapsulas= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaCapsulas->SetupAttachment(RootComponent);
	RootComponent=mallaCapsulas;
	SetActorEnableCollision(true);
	limiteX= -16000.0f;
}
void ACapsulas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACapsulas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACapsulas::Recoger()
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(true);
}

void ACapsulas::Soltar(FTransform TargetLocation)
{
	SetActorLocation(TargetLocation.GetLocation());
	SetActorTickEnabled(true);
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
}






