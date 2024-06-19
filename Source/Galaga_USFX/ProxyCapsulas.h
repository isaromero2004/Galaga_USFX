// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsulas.h"
#include "Inventario.h"
#include "InterfazProxy.h"
#include "ProxyCapsulas.generated.h"

UCLASS()
class GALAGA_USFX_API AProxyCapsulas : public AActor, public IInterfazProxy
{
	GENERATED_BODY()

private: 
	ACapsulas* CapsulaReal;
	UInventario* Inventario;
	
public:	
	// Sets default values for this actor's properties
	AProxyCapsulas();

	void SetCapsulaReal(ACapsulas* Capsula);
	void SetInventario(UInventario* InventarioRef);

	virtual void Recoger() override;
	virtual void Soltar(const FTransform& PutDownLocation) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
