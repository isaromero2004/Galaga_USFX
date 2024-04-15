//// Fill out your copyright notice in the Description page of Project Settings.
//
//
//#include "Bombas.h"
//
//// Sets default values
//ABombas::ABombas()
//{
// 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//
//	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
//	mallaBombas = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
//	mallaBombas->SetStaticMesh(ShipMesh.Object);
//	mallaBombas->SetupAttachment(RootComponent);
//	RootComponent = mallaBombas;
//
//}
//
//// Called when the game starts or when spawned
//void ABombas::BeginPlay()
//{
//	Super::BeginPlay();
//	
//}
//
//// Called every frame
//void ABombas::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//	MoverBombas(DeltaTime);
//
//}
//
//void ABombas::MoverBombas(float DeltaTime)
//{
//	float velocidad = GetVelocidadBombas();
//	FVector PosicionActual = GetActorLocation();
//	FVector NuevaPosicion = FVector(PosicionActual.X - 100 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);
//
//	SetActorLocation(NuevaPosicion);
//
//
//	if (NuevaPosicion.X < LimiteX) {
//
//		SetActorLocation(FVector(1500.0f, PosicionActual.Y, PosicionActual.Z));
//
//	}
//}



