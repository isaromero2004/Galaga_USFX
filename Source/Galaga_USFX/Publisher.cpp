// Fill out your copyright notice in the Description page of Project Settings.


#include "Publisher.h"
#include "Subscriptor.h"
#include "NaveEnemiga.h"


// Sets default values
APublisher::APublisher()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APublisher::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APublisher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APublisher::suscribe(AActor* neSuscribe)
{

	listaSuscriptores.Add(neSuscribe);
}

void APublisher::unsuscribe(AActor* neUnsuscribe)
{
	listaSuscriptores.Remove(neUnsuscribe);
}

void APublisher::notifySuscribers(FVector PosicionNave)
{
	for (AActor* actor : listaSuscriptores)
	{
		//Cast each of them to a concrete Subscriber
		ISubscriptor* Sub = Cast<ISubscriptor>(actor);
		if (Sub)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("Notificando a suscriptores"));
			Sub->Update(PosicionNave);
		}
	}

}

