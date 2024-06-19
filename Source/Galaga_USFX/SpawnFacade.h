// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subscriptor.h"
#include "GameFramework/Actor.h"
#include "Capsulas.h"
#include "SpawnFacade.generated.h"

UCLASS()
class GALAGA_USFX_API ASpawnFacade : public AActor, public ISubscriptor
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
	virtual void Update(FVector PosicionNave) ;

protected:
	//Lista de naves
	TArray<class ANaveEnemiga*> TANavesEnemigas;
	TArray<class AObstaculo*> Obstaculos;
	TArray<class ACapsula*> Capsulas;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TArray<AActor*> SpawnObjects;

public:
//irtual void TransformacionNave(FVector Ubicacion);
	void SpawnearNaves();
	void SpawnearObstaculos();
	ACapsulas* SpawnearCapsulas(FVector Posicion);
	void SpawnearTodo();
	void SpawnComponentes(const FString _Componente);

private:
	int NavesDestruidas;
	FVector UltimaPosicionNave;
	FTimerHandle  AparicionObstaculo;

};
