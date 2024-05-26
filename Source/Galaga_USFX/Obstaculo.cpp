// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo.h"

// Sets default values
AObstaculo::AObstaculo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mallaObstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ObstaculoMesh"));
	mallaObstaculo->SetupAttachment(RootComponent);
	RootComponent = mallaObstaculo;
	SetActorEnableCollision(true);
	danio = 10.0f;
	tiempoGeneracion = 10.0f;
	velocidad = 10.0f;
	limiteCaida = -1600.0f;


}

// Called when the game starts or when spawned
void AObstaculo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObstaculo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



