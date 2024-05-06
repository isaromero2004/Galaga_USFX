// Fill out your copyright notice in the Description page of Project Settings.


#include "EscudosNodriza.h"

// Sets default values
AEscudosNodriza::AEscudosNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_In.Shape_Trim_90_In'"));
	EscudosNodrizaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscudosNodrizaMesh"));
	EscudosNodrizaMesh->SetupAttachment(RootComponent);
	EscudosNodrizaMesh->SetStaticMesh(malla.Object);
	RootComponent =EscudosNodrizaMesh;

}

// Called when the game starts or when spawned
void AEscudosNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscudosNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

