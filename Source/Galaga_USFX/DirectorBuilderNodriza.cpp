// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorBuilderNodriza.h"
#include "BuilderNodriza.h"
#include "NaveNodriza.h"

// Sets default values
ADirectorBuilderNodriza::ADirectorBuilderNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorBuilderNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorBuilderNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirectorBuilderNodriza::SetBuilder(AActor* Builder)
{
	NaveBuilder = Cast<IBuilderNodriza>(Builder);
}

ANaveNodriza* ADirectorBuilderNodriza::GetNaveNodriza()
{
	if (NaveBuilder)
	{
		return NaveBuilder->GetNaveNodriza();

	}
	return nullptr;
}

void ADirectorBuilderNodriza::ConstruirNaveNodriza()
{
	if(NaveBuilder)
	{
		NaveBuilder->BuildCascos();
		NaveBuilder->BuildMotor();
		NaveBuilder->BuildArmamento();
		NaveBuilder->BuildArmamento();
		NaveBuilder->BuildEscudos();
	}


}