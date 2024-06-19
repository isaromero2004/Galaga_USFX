// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Capsulas.h"
#include "Containers/Queue.h"
#include "Inventario.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_API UInventario : public UActorComponent
{
	GENERATED_BODY()

//public:
//	virtual void Recoger();
//	virtual void Soltar(FTransform TargetLocation);

public:	
	// Sets default values for this component's properties
	UInventario();

	TQueue<ACapsulas*> CurrentInventory;
	int CapacidadMaxima = 2;
	int CurrentSize = 0;

	UFUNCTION()
	int32 AddToInventory(ACapsulas* ActorToAdd);
	UFUNCTION()
	void RemoveFromInventory(ACapsulas* ActorToRemove);
	UFUNCTION()
	bool InventarioLleno() const;
	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
