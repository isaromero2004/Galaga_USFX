// Fill out your copyright notice in the Description page of Project Settings.


#include "Potenciado.h"
#include "Galaga_USFXPawn.h"

// Sets default values
APotenciado::APotenciado()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APotenciado::BeginPlay()
{
	Super::BeginPlay();
	
}

void APotenciado::ActivarSigilio()
{
}


void APotenciado::ActivarPotencia()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Se activo el estado potenciado"));
	naveJugador->EstablecerVelocidad(3000.0f);
	naveJugador->ActivarDoubleShot();
}




void APotenciado::ActivarProteccion()
{
}



FString APotenciado::EscribirEstado()
{
	return "Nave jugador Potenciada";
}

void APotenciado::SetPawn(AGalaga_USFXPawn* pawn)
{
	naveJugador = Cast<AGalaga_USFXPawn>(pawn);
	//NavePawn = NaveJugador;

	naveJugador->EstablecerState(naveJugador->GetPotenciadoState());
}
// Called every frame
void APotenciado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Called to bind functionality to input
void APotenciado::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

