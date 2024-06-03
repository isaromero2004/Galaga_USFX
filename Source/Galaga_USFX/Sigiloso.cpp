// Fill out your copyright notice in the Description page of Project Settings.


#include "Sigiloso.h"

// Sets default values
ASigiloso::ASigiloso()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASigiloso::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASigiloso::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASigiloso::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

