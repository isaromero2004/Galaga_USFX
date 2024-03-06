// Fill out your copyright notice in the Description page of Project Settings.


#include "Bonus.h"

// Sets default values
ABonus::ABonus()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	// Create the mesh component
	mallaBonus = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaBonus->SetStaticMesh(ShipMesh.Object);
	mallaBonus->SetupAttachment(RootComponent);
	RootComponent = mallaBonus;

}

// Called when the game starts or when spawned
void ABonus::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABonus::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

