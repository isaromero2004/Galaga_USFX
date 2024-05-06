// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmamentoNodriza.h"

// Sets default values
AArmamentoNodriza::AArmamentoNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/Shape_Trim_90_In_2.Shape_Trim_90_In_2'"));
	ArmamentoNodrizaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArmamentoNodrizaMesh"));
	ArmamentoNodrizaMesh->SetupAttachment(RootComponent);
	ArmamentoNodrizaMesh->SetStaticMesh(malla.Object);
	RootComponent = ArmamentoNodrizaMesh;

	MovimientoNodriza = CreateDefaultSubobject<UMovimiento>(TEXT("MovimientoNodriza"));
	MovimientoNodriza->PrimaryComponentTick.bCanEverTick = true;
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
	MovimientoNodriza->TickComponent(DeltaTime, ELevelTick::LEVELTICK_TimeOnly, nullptr);

}

