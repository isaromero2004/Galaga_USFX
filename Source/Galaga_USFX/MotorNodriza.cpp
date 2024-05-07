// Fill out your copyright notice in the Description page of Project Settings.


#include "MotorNodriza.h"

// Sets default values
AMotorNodriza::AMotorNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/Shape_Trim_2.Shape_Trim_2'"));
	MotorNodrizaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshMotor"));
	MotorNodrizaMesh->SetupAttachment(RootComponent);
	MotorNodrizaMesh->SetStaticMesh(malla.Object);
	RootComponent = MotorNodrizaMesh;

	MovimientoNodriza = CreateDefaultSubobject<UMovimiento>(TEXT("MovimientoNodriza"));
	MovimientoNodriza->PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMotorNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMotorNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MovimientoNodriza->TickComponent(DeltaTime, ELevelTick::LEVELTICK_TimeOnly, nullptr);

}

