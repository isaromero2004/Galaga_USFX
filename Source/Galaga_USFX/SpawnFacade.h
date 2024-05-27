// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnFacade.generated.h"

UCLASS()
class GALAGA_USFX_API ASpawnFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnFacade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	//Lista de naves
	TArray<class ANaveEnemiga*> TANavesEnemigas;
	TArray<class AObstaculo*> Obstaculos;
	TArray<class ACapsula*> Capsulas;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TArray<AActor*> SpawnObjects;

public:
	
	void SpawnearNaves();
	void SpawnearObstaculos();
	void SpawnearCapsula();
	void SpawnComponentes();

private:
	
	FTimerHandle  AparicionCapsula;
	FTimerHandle  AparicionObstaculo;
};
