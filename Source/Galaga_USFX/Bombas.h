//// Fill out your copyright notice in the Description page of Project Settings.
//
//#pragma once
//
//#include "CoreMinimal.h"
//#include "GameFramework/Actor.h"
//#include "Bombas.generated.h"
//
//UCLASS()
//class GALAGA_USFX_API ABombas : public AActor
//{
//	GENERATED_BODY()
//
//public:
//	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
//	UStaticMeshComponent* mallaBombas;
//
//private:
//	int velocidadBombas;
//	FVector posicion;
//	int trayectoria;
//	float LimiteX;
//
//	
//public:	
//	// Sets default values for this actor's properties
//	ABombas();
//
//	FORCEINLINE int GetVelocidadBombas() const { return velocidadBombas; }
//	FORCEINLINE FVector GetPosicion() const { return posicion; }
//	FORCEINLINE int GetTrayectoria() const { return trayectoria; }
//	FORCEINLINE float GetLimiteX() const { return LimiteX; }
//
//	FORCEINLINE void SetVelocidadBombas(int _velocidadBombas) { velocidadBombas = _velocidadBombas; }
//	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }
//	FORCEINLINE void SetTrayectoria(int _trayectoria) { trayectoria = _trayectoria; }
//	FORCEINLINE void SetLimiteX(float _LimiteX) { LimiteX = _LimiteX; }
//
//	virtual void Recoger();
//	virtual void Soltar(const FTransform& PutDownLocation);
//
//protected:
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;
//	void MoverBombas(float DeltaTime);
//	void ColisionBombas();
//
//public:	
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;

};
