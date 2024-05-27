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

	float danio;
	float tiempoGeneracion;
	float velocidad;
	float limiteCaida;
	FVector posicionObstaculo;

public:
	FORCEINLINE float GetDanio() const { return danio; }
	FORCEINLINE float GetTiempoGeneracion() const { return tiempoGeneracion; }
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetLimiteCaida() const { return limiteCaida; }
	FORCEINLINE FVector GetPosicionObstaculo() const { return posicionObstaculo; }

	FORCEINLINE void SetDanio(float _danio) { danio = _danio; }
	FORCEINLINE void SetTiempoGeneracion(float _tiempoGeneracion) { tiempoGeneracion = _tiempoGeneracion; }
	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetLimiteCaida(float _limiteCaida) { limiteCaida = _limiteCaida; }
	FORCEINLINE void SetPosicionObstaculo(FVector _posicionObstaculo) { posicionObstaculo = _posicionObstaculo; }

public:
	void Mover(float DeltaTime) PURE_VIRTUAL(AObstaculo::Mover, );
};