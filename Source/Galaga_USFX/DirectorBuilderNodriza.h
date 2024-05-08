// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderNodriza.h"
#include "DirectorBuilderNodriza.generated.h"

UCLASS()
class GALAGA_USFX_API ADirectorBuilderNodriza : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorBuilderNodriza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private: 

	IBuilderNodriza* NaveBuilder;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void ConstruirNaveNodriza();
	void SetBuilder(AActor* Builder);
	class ANaveNodriza * GetNaveNodriza();


};
