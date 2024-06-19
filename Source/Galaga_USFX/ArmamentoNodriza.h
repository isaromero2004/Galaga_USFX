// Fill out your copyright notice in the Description page of Project Settingngs
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "NaveNodriza.h"
#include "ArmamentoNodriza.generated.h"

UCLASS()
class GALAGA_USFX_API AArmamentoNodriza :  public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArmamentoNodriza();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ArmamentoNodrizaMesh;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Disparar();
	float FireRate;
	FTimerHandle TimerHandle_Disparo;
};
