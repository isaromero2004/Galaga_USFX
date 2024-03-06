// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Puntaje.generated.h"

UCLASS()
class GALAGA_USFX_API APuntaje : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaPuntaje;

protected:

	int valor;
	FString fechaRegistro; //fecha en la que se registro la puntuacion
	FVector posicion;
	float velocidadCambio; //velocidad en que los digitos cambian al incrementar score
	int record; 

public:
	FORCEINLINE float GetValor() const { return valor; }
	FORCEINLINE FString GetFechaRegistro() const { return fechaRegistro; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }
	FORCEINLINE float GetVelocidadCambio() const { return velocidadCambio; }
	FORCEINLINE int GetRecord() const { return record; }

	FORCEINLINE void SetValor(float _valor) { valor = _valor; }
	FORCEINLINE void SetFechaRegistro(FString _fechaRegistro) { fechaRegistro = _fechaRegistro; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void SetVelocidadCambio(float _velocidadCambio) { velocidadCambio = _velocidadCambio; }
	FORCEINLINE void SetRecord(int _record) { record = _record; }

	
public:	
	// Sets default values for this actor's properties
	APuntaje();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
