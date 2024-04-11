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

//void UInventario::Recoger()
//{
//	TArray<AActor*> FoundActors;
//	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACapsulas::StaticClass(), FoundActors);
//	for (AActor* Actor : FoundActors)
//	{
//		ACapsulas* Capsula = Cast<ACapsulas>(Actor);
//		if (Capsula)
//		{
//			if (Capsula->IsOverlappingActor(GetOwner()))
//			{
//				AddToInventory(Capsula);
//				Capsula->Destroy();
//			}
//		}
//	}
//}
//
//void UInventario::Soltar(FTransform TargetLocation)
//{
//	ACapsulas* Capsula = nullptr;
//	if (CurrentInventory.Peek(Capsula))
//	{
//		FVector SpawnLocation = GetOwner()->GetActorLocation() + GetOwner()->GetActorForwardVector() * 100;
//		FRotator SpawnRotation = GetOwner()->GetActorRotation();
//		FActorSpawnParameters SpawnInfo;
//		SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
//		GetWorld()->SpawnActor<ACapsulas>(Capsula->GetClass(), SpawnLocation, SpawnRotation, SpawnInfo);
//		RemoveFromInventory(Capsula);
//	}
//}




