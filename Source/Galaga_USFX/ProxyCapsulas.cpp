// Fill out your copyright notice in the Description page of Project Settings.


#include "ProxyCapsulas.h"

// Sets default values
AProxyCapsulas::AProxyCapsulas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
void AProxyCapsulas::SetCapsulaReal(ACapsulas* Capsula)
{
	CapsulaReal = Capsula;
}

void AProxyCapsulas::SetInventario(UInventario* InventarioRef)
{
	Inventario = InventarioRef;
}

void AProxyCapsulas::Recoger(ACapsulas* Capsulas)
{
	if (!Inventario->InventarioLleno())
	{
		//Inventario->AddToInventory(CapsulaReal);
		Capsulas->Recoger(Capsulas);


		//Inventario->CurrentSize++;
	}
	else
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Inventario lleno, no se puede agarrar otro Item");
		}

	}
}

void AProxyCapsulas::Soltar(const FTransform& PutDownLocation)
{
	if (Inventario && Inventario->CurrentSize > 0)
	{
		//ACapsulas* Capsula;
		//Inventario->CurrentInventory.Dequeue(Capsula);
		CapsulaReal->Soltar(PutDownLocation);
		//Inventario->CurrentSize--;
	}
	else
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Inventario vacio, no hay Item para soltar");
		}
	}
}
// Called when the game starts or when spawned
void AProxyCapsulas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProxyCapsulas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

