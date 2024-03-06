// Fill out your copyright notice in the Description page of Project Settings.


#include "Puntaje.h"

// Sets default values
APuntaje::APuntaje()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	mallaPuntaje= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaPuntaje->SetStaticMesh(ShipMesh.Object);
	mallaPuntaje->SetupAttachment(RootComponent);
	RootComponent = mallaPuntaje;
}

// Called when the game starts or when spawned
void APuntaje::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APuntaje::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

