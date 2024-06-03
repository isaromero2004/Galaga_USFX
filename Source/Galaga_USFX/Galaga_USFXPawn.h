// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Inventario.h"
#include "Capsulas.h"
#include "State.h"
#include "Galaga_USFXPawn.generated.h"

UCLASS(Blueprintable)
class AGalaga_USFXPawn : public APawn
{
	GENERATED_BODY()

	/* The mesh component */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ShipMeshComponent;

	/** The camera */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;


public:
	AGalaga_USFXPawn();

	UPROPERTY()
	UInventario* MyInventory;
	UFUNCTION()
	void DropItem();
	UFUNCTION()
	void TakeItem(ACapsulas* InventoryItem);
	UFUNCTION()
	virtual void NotifyHit(class UPrimitiveComponent* MyComp,
		AActor* Other, class UPrimitiveComponent* OtherComp,
		bool bSelfMoved, FVector HitLocation, FVector
		HitNormal, FVector NormalImpulse, const FHitResult&
		Hit) override;

	UFUNCTION()
	void MoveForward(float Value);
	void MoveRight(float AxisValue);
	void MovNoroeste(float AxisValue);
	void PitchCamera(float AxisValue);
	void YawCamera(float AxisValue);
	void ReloadAmmo();
	void ActivarDoubleShot();
	void DesactivarDoubleShot();

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	FVector GunOffset;
	FVector GunOffset2;
	FVector PosicionInicial;

	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	/* The speed our ship moves around the level */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float MoveSpeed;

	/** Sound to play each time we fire */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
	class USoundBase* FireSound;

	// Begin Actor Interface
	virtual void Tick(float DeltaSeconds) override;
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End Actor Interface

	/* Fire a shot in the specified direction */
	void FireShot(FVector FireDirection);

	/* Handler for the fire timer expiry */
	void ShotTimerExpired();

	void ReloadEnergy();

	void CheckInventory();

	// Static names for axis bindings
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName FireForwardBinding;
	static const FName FireRightBinding;

private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;
	FTimerHandle DoubleShotTimer;
	bool bDoubleFireEnabled;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

	int32 NumProyectilesDisparados;
	int32 ProyectilesPorDisparar;
	int32 NumItems;
	bool Saltar;


public:
	/** Returns ShipMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMeshComponent; }
	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	int vidas;
	float energia;
	void RecibirDano(float dano);
	void Respawn();
	FVector PosicionPawn;
	void EstablecerVelocidad(float Velocidad);



private:
	FVector MovementInput;
	FVector CameraInput;

protected:


	FTimerHandle TimerHandle_Salto;

	virtual void noroeste(float Value);
	virtual void noreste(float Value);
	virtual void suroeste(float Value);
	virtual void sureste(float Value);
	virtual void Salto();
	virtual void descender();

public:
	FVector posicionPawn = GetActorLocation();
	FORCEINLINE void Setvidas(int _vida) { vidas = _vida; }
	FORCEINLINE void Setenergia(float _energia) { energia = _energia; }
	FORCEINLINE int Getvidas() const { return vidas; }
	FORCEINLINE float Getenergia() const { return energia; }

private:
	IState* State;
	//IState* BasicoState;
	IState* SigilosoState;
	IState* ProtegidoState;
	IState* PotenciadoState;

public:
	IState* GetState() { return State; }
	//IState* GetBasicoState() { return BasicoState; }
	IState* GetSigilosoState() { return SigilosoState; }
	IState* GetProtegidoState() { return ProtegidoState; }
	IState* GetPotenciadoState() { return PotenciadoState; }

	void inicializarStates();

	void EstablecerState(IState* _state);
	//void SetBasicoState(IState* _basico) { BasicoState = _basico; }
	void SetSigilosoState(IState* _sigiloso) { SigilosoState = _sigiloso; }
	void SetProtegidoState(IState* _protegido) { ProtegidoState = _protegido; }
	void SetPotenciadoState(IState* _potenciado) { PotenciadoState = _potenciado; }

	void AspectoInvisible();
	void ConEscudo();
	void DisparoVelocidadPlus();


	FString ObtenerEstadoActual() {
		return State->EscribirEstado();

	}

};