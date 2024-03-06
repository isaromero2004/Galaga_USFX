// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "proyectilEnemigo.generated.h"

UCLASS()
class GALAGA_USFX_API AproyectilEnemigo : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaproyectilEnemigo;

protected:

	float velocidad;
	float intervaloProyectiles; //Intervalo entre la salida de cada proyectil
	FVector posicion;
	int trayectoria; //Cada valor numerico representa a una funcion que la nave debe asumir para moverse
	float radio;
	float volumen;

public:
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetIntervaloProyectiles() const { return intervaloProyectiles; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }
	FORCEINLINE int GetTrayectoria() const { return trayectoria; }
	FORCEINLINE int GetRadio() const { return radio; }
	FORCEINLINE float GetVolumen() const { return volumen; }

	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetIntervaloProyectiles(float _intervaloProyectiles) { intervaloProyectiles = _intervaloProyectiles; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void SetTrayectoria(int _trayectoria) { trayectoria = _trayectoria; }
	FORCEINLINE void SetRadio(int _radio) { radio = _radio; }
	FORCEINLINE void SetVolumen(float _volumen) { volumen = _volumen; }

	
public:	
	// Sets default values for this actor's properties
	AproyectilEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
