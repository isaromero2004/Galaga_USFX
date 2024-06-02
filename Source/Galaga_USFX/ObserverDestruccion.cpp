//// Fill out your copyright notice in the Description page of Project Settings.
//
//
//#include "ObserverDestruccion.h"
//
//
//// Sets default values
//AObserverDestruccion::AObserverDestruccion()
//{
// 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = false;
//
//}
//
//void AObserverDestruccion::Update(ANaveEnemiga* Nave)
//{
//	if (Facade)
//	{
//		FVector Pos = Nave->GetPosition();
//        UE_LOG(LogTemp, Warning, TEXT("Nave destruida en la posición (%s)"), *Pos.ToString());
//        Facade->SpawnearCapsula(Pos);
//	}
//}
//
//// Called when the game starts or when spawned
//void AObserverDestruccion::BeginPlay()
//{
//	Super::BeginPlay();
//	
//}
//
//// Called every frame
//void AObserverDestruccion::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}
//
//
