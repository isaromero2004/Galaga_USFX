// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "escenario.generated.h"

UCLASS()
class GALAGA_USFX_API Aescenario : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* escenarioMesh;

private:
	float ancho;
	float alto;
	float velocidadDesplazamiento; //velocidad a la que se desplaza la pantalla hacia arriba
	int score;
	int nivel ;
	int vidas ;

public:
	FORCEINLINE float GetAncho() const { return ancho; }
	FORCEINLINE float GetAlto() const { return alto; }
	FORCEINLINE float GetVelocidadDesplazamiento() const { return velocidadDesplazamiento; }
	FORCEINLINE int GetScore() const { return score; }
	FORCEINLINE int GetNivel() const { return nivel; }
	FORCEINLINE int GetVidas() const { return vidas; }

	FORCEINLINE void SetAncho(float _ancho) { ancho = _ancho; }
	FORCEINLINE void SetVelocidadDesplazamiento(float _velocidadDesplazamiento) { velocidadDesplazamiento = _velocidadDesplazamiento; }
	FORCEINLINE void SetAlto(float _alto) { alto = _alto; }
	FORCEINLINE void SetScore(float _score) { score = _score; }
	FORCEINLINE void SetNivel(float _nivel) { nivel = _nivel; }
	FORCEINLINE void SetVidas(float _vidas) { vidas = _vidas; }

	
public:	
	// Sets default values for this actor's properties
	Aescenario();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
