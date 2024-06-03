// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstaculo.generated.h"

UCLASS(abstract)
class GALAGA_USFX_API AObstaculo : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaObstaculo;

public:
	// Sets default values for this actor's properties
	AObstaculo();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	
	float tiempoGeneracion;
	float limiteCaida;
	FVector posicionObstaculo;
	float velocidadObstaculo;

public:
	
	FORCEINLINE float GetTiempoGeneracion() const { return tiempoGeneracion; }
	FORCEINLINE float GetLimiteCaida() const { return limiteCaida; }
	FORCEINLINE FVector GetPosicionObstaculo() const { return posicionObstaculo; }
	FORCEINLINE float GetVelocidadObstaculo() const { return velocidadObstaculo; }

	
	FORCEINLINE void SetTiempoGeneracion(float _tiempoGeneracion) { tiempoGeneracion = _tiempoGeneracion; }
	FORCEINLINE void SetLimiteCaida(float _limiteCaida) { limiteCaida = _limiteCaida; }
	FORCEINLINE void SetPosicionObstaculo(FVector _posicionObstaculo) { posicionObstaculo = _posicionObstaculo; }
	FORCEINLINE void SetVelocidadObstaculo(float _velocidadObstaculo) { velocidadObstaculo = _velocidadObstaculo; }

public:
	void Mover(float DeltaTime) PURE_VIRTUAL(AObstaculo::Mover, );
};