// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProyectilEnemigo.generated.h"

class UProjectileMovementComponent;
class UStaticMeshComponent;

UCLASS(config = Game)
class AProyectilEnemigo : public AActor
{
	GENERATED_BODY()

	/** Sphere collision component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ProjectileMesh;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileMovement;

public:
	AProyectilEnemigo();
	
	/** Function to handle the projectile hitting something */
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/** Returns ProjectileMesh subobject **/
	FORCEINLINE UStaticMeshComponent* GetProjectileMesh() const { return ProjectileMesh; }
	/** Returns ProjectileMovement subobject **/
	FORCEINLINE UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }
protected:
	float Dano;
	class IStrategy* Movimiento;

public:
		FORCEINLINE float GetDano() const { return Dano; }
		FORCEINLINE void SetDano(float NewDano) { Dano = NewDano; }

		void CambiarMovimiento(class IStrategy* NuevoMovimiento);
		void Mover(float DeltaTime);
		virtual void Tick(float DeltaTime) override;
};

