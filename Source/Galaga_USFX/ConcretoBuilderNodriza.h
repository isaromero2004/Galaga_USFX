// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveNodriza.h"
#include "BuilderNodriza.h"
#include "ConcretoBuilderNodriza.generated.h"

UCLASS()
class GALAGA_USFX_API AConcretoBuilderNodriza : public AActor, public IBuilderNodriza
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConcretoBuilderNodriza();

private:
	UPROPERTY(VisibleAnywhere, Category = "NaveNodriza")
	ANaveNodriza* NaveNodriza;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void BuildCascos() override;
	void BuildMotor() override;
	void BuildArmamento()override;
	void BuildEscudos()override;
	virtual class ANaveNodriza* GetNaveNodriza() const override;

};
