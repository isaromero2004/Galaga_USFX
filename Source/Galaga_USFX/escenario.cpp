// Fill out your copyright notice in the Description page of Project Settings.


#include "escenario.h"

// Sets default values
Aescenario::Aescenario()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	// Create the mesh component
	escenarioMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	escenarioMesh->SetStaticMesh(ShipMesh.Object);
	escenarioMesh->SetupAttachment(RootComponent);
	RootComponent = escenarioMesh;
}


// Called when the game starts or when spawned
void Aescenario::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aescenario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

