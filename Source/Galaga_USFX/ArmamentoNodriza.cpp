// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmamentoNodriza.h"

// Sets default values
AArmamentoNodriza::AArmamentoNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_In.Shape_Trim_90_In'"));
	ArmamentoNodrizaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArmamentoNodrizaMesh"));
	ArmamentoNodrizaMesh->SetupAttachment(RootComponent);
	ArmamentoNodrizaMesh->SetStaticMesh(malla.Object);
	RootComponent = ArmamentoNodrizaMesh;
}

// Called when the game starts or when spawned
void AArmamentoNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArmamentoNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

