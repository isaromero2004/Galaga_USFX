// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bonus.generated.h"

UCLASS()
class GALAGA_USFX_API ABonus : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaBonus;

protected:

	float velocidad;
	float intervaloAparicion; //Tiempo que debe transcurrir entre cada aparicion de un bonus
	FVector posicion;
	int trayectoria; //Cada valor numerico representa a una funcion que la nave debe asumir para moverse
	float duracion; //Tiempo de duracion del bonus
	int tipoBonus; //Cada valor numerico representa a un tipo de bonus
	float energia; //Potencia del bonus

public:
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetIntervaloAparicion() const { return intervaloAparicion; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }
	FORCEINLINE int GetTrayectoria() const { return trayectoria; }
	FORCEINLINE float GetDuracion() const { return duracion; }
	FORCEINLINE int GetTipoBonus() const { return tipoBonus; }
	FORCEINLINE float GetEnergia() const { return energia; }

	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetIntervaloAparicion(float _intervaloAparicion) { intervaloAparicion = _intervaloAparicion; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void SetTrayectoria(int _trayectoria) { trayectoria = _trayectoria; }
	FORCEINLINE void SetDuracion(float _duracion) { duracion = _duracion; }
	FORCEINLINE void SetTipoBonus(float _tipoBonus) { tipoBonus = _tipoBonus; }
	FORCEINLINE void SetEnergia(float _energia) { energia = _energia; }


public:	
	// Sets default values for this actor's properties
	ABonus();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//virtual void incremento() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
