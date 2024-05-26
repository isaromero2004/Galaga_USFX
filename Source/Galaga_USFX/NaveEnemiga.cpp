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

	MovimientoNaves= CreateDefaultSubobject<UMovimiento>(TEXT("MovimientoNaves"));

	//// Establece el componente de movimiento como tickeable
	// puede recibir eventos de "tick" usando el Pr
	MovimientoNaves->PrimaryComponentTick.bCanEverTick = true;

	//velocidad = 1;
	//energia=100;

	
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

FString ANaveEnemiga::GetNombreNave()
{
	return NombreNave;
}

//void ANaveEnemiga::setRadar(ARadarEnemigo* _radar)
//{
//	if (!_radar) {
//		UE_LOG(LogTemp, Warning, TEXT("No se ha encontrado el radar"));
//		return;
//	}
//	Radar = _radar;
//	Radar -> suscribe(this);
//}
//
//void ANaveEnemiga::Update()
//{
//	if (!Radar) {
//		UE_LOG(LogTemp, Error, TEXT("No hay radar."));
//		return;
//	}
//
//	//Get the current time of the Clock Tower
//	float promedioEnergiaNavesEnemigas = Radar->getPromedioEnergiaNavesEnemigas();
//	if (!promedioEnergiaNavesEnemigas < 10.0f)
//	{
//		moverA(Radar->posicionReabastecimiento);
//	}
//}
//
//void ANaveEnemiga::Destroyed()
//{
//	Super::Destroyed();
//	if (!Radar) {
//		UE_LOG(LogTemp, Error, TEXT("No hay radar enemigo."));
//		return;
//	}
//
//	Radar->unsuscribe(this);
//}


