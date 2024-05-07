// Fill out your copyright notice in the Description page of Project Settings.


#include "CascosNodriza.h"

// Sets default values
ACascosNodriza::ACascosNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_2.TwinStickUFO_2'"));
	NaveNodrizaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveNodrizaMesh"));
	NaveNodrizaMesh->SetupAttachment(RootComponent);
	NaveNodrizaMesh->SetStaticMesh(malla.Object);
	RootComponent = NaveNodrizaMesh;

	MovimientoNodriza = CreateDefaultSubobject<UMovimiento>(TEXT("MovimientoNodrizaCo"));
	MovimientoNodriza->PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACascosNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACascosNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MovimientoNodriza->TickComponent(DeltaTime, ELevelTick::LEVELTICK_TimeOnly, nullptr);

}

