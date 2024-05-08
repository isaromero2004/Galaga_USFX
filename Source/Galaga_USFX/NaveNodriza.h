// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CascosNodriza.h"
#include "MotorNodriza.h"
#include "ArmamentoNodriza.h"
#include "EscudosNodriza.h"
#include "NaveNodriza.generated.h"
UCLASS()
class GALAGA_USFX_API ANaveNodriza : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveNodriza();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UMovimiento* MovimientoNodriza;
	class ANaveNodriza* NaveNodriza;

protected:
	// Called when the game starts or when spawned 
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	ACascosNodriza* Cascos;
	AMotorNodriza* Motor;
	AArmamentoNodriza* Armamento[2];
	AEscudosNodriza* Escudo;

	void SetCascos();
	void SetMotor(int a);
	void SetArmamento(int b);
	void SetEscudo(int c);

};
