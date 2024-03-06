// Fill out your copyright notice in the Description page of Project Settings.


#include "proyectilEnemigo.h"

// Sets default values
AproyectilEnemigo::AproyectilEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	// Create the mesh component
	mallaproyectilEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaproyectilEnemigo->SetStaticMesh(ShipMesh.Object);
	mallaproyectilEnemigo->SetupAttachment(RootComponent);
	RootComponent = mallaproyectilEnemigo;
}

// Called when the game starts or when spawned
void AproyectilEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AproyectilEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

