// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsulas.generated.h"

UCLASS(abstract)
class GALAGA_USFX_API ACapsulas : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaCapsulas;

protected:

	float velocidadCapsulas = 5.0f;
	float intervaloAparicion= 10.0f;
	FVector posicion;
	int trayectoria;
	float duracion;
	float limiteX;

	//UMovimiento* MovimientoCapsulas;

public:
	
	FORCEINLINE float GetVelocidadCapsulas() const { return velocidadCapsulas; }
	FORCEINLINE float GetIntervaloAparicion() const { return intervaloAparicion; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }
	FORCEINLINE int GetTrayectoria() const { return trayectoria; }
	FORCEINLINE float GetDuracion() const { return duracion; }
	FORCEINLINE float GetLimiteX() const { return limiteX; }


	FORCEINLINE void SetVelocidadCapsulas(float _velocidadCapsulas) { velocidadCapsulas = _velocidadCapsulas; }
	FORCEINLINE void SetIntervaloAparicion(float _intervaloAparicion) { intervaloAparicion = _intervaloAparicion; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void SetTrayectoria(int _trayectoria) { trayectoria = _trayectoria; }
	FORCEINLINE void SetDuracion(float _duracion) { duracion = _duracion; }
	FORCEINLINE void SetLimiteX(float _limiteX) { limiteX = _limiteX; }
	
public:	
	// Sets default values for this actor's properties
	ACapsulas();

	virtual void Recoger();
	virtual void Soltar(const FTransform& PutDownLocation);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:

	void MoverCapsulas(float DeltaTime) PURE_VIRTUAL(ACapsulas::MoverCapsulas, );
	void ColisionCapsulas() PURE_VIRTUAL(ACapsulas::ColisionCapsulas, );

	


	

};
