// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "Meteorito.generated.h"

/**
 *
 */
UCLASS()
class GALAGA_USFX_API AMeteorito : public AObstaculo
{
	GENERATED_BODY()
public:
	AMeteorito();

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	//virtual void estrellar();

protected:
	float VelocidadMeteorito;

public:
	FORCEINLINE float GetVelocidadMeteorito() const { return VelocidadMeteorito; }
	FORCEINLINE void SetVelocidadMeteorito(float Velocidad) { VelocidadMeteorito = Velocidad; }
protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void Mover(float DeltaTime);
	float Dano;

public:
	FORCEINLINE float GetDano() const { return Dano; }
	FORCEINLINE void SetDanio(float _danio) { Dano = _danio; }
	



};