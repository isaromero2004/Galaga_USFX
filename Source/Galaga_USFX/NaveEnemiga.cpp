// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"


// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	NaveEnemigaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	
	NaveEnemigaMesh->SetupAttachment(RootComponent);
	RootComponent = NaveEnemigaMesh;

	MovimientoNaves= CreateDefaultSubobject<UMovimiento>(TEXT("MovimientoNavesComponente"));

	//// Establece el componente de movimiento como tickeable
	// puede recibir eventos de "tick" usando el Pr
	MovimientoNaves->PrimaryComponentTick.bCanEverTick = true;

	
}


// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{

	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovimientoNaves->TickComponent(DeltaTime, ELevelTick::LEVELTICK_TimeOnly, nullptr);
}


