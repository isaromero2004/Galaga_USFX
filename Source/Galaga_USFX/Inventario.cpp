// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventario.h"
#include "Containers/Queue.h"

// Sets default values for this component's properties
UInventario::UInventario()
{
		PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UInventario::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventario::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	// ...
}

int32 UInventario::AddToInventory(ACapsulas* ActorToAdd)
{
	//return CurrentInventory.Add(ActorToAdd);
	return CurrentInventory.Enqueue(ActorToAdd);
}
void UInventario::RemoveFromInventory(ACapsulas* ActorToRemove)
{
	//CurrentInventory.Remove(ActorToRemove);
	CurrentInventory.Dequeue(ActorToRemove);
}





