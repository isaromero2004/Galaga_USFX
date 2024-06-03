// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Galaga_USFXPawn.h"
#include "State.h"
#include "Sigiloso.generated.h"

UCLASS()
class GALAGA_USFX_API ASigiloso : public APawn,public IState
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASigiloso();

private:
	UPROPERTY()
	class AGalaga_USFXPawn* naveJugador;

public:

	class UStaticMesh* StealthMesh;
	class UStaticMesh* OriginalMesh1;


	virtual void ActivarSigilio() override;

	virtual void ActivarPotencia() override;

	virtual void ActivarProteccion() override;


	virtual FString EscribirEstado() override;
	virtual void SetPawn(class AGalaga_USFXPawn* pawn) override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
