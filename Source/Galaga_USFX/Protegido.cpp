// Fill out your copyright notice in the Description page of Project Settings.


#include "Protegido.h"
#include "Galaga_USFXPawn.h"
#include "EscudosNodriza.h"

// Sets default values
AProtegido::AProtegido()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProtegido::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProtegido::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AProtegido::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AProtegido::ActivarSigilio()
{
}


void AProtegido::ActivarPotencia()
{
}



void AProtegido::ActivarProteccion()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Se activo el estado defensivo"));
	//en este codigo crearemos un escudo para la nave

	FVector PosicionEscudo = naveJugador->GetActorLocation();
	AEscudosNodriza* Escudo = GetWorld()->SpawnActor<AEscudosNodriza>(AEscudosNodriza::StaticClass(), PosicionEscudo, FRotator::ZeroRotator);

	if (Escudo != nullptr) {
		Escudo->AttachToActor(naveJugador, FAttachmentTransformRules::SnapToTargetIncludingScale);
		Escudo->SetActorRelativeLocation(FVector(0.0f, 320.0f, 100.0f));
		Escudo->SetActorScale3D(FVector(1.0f, 0.6f, 1.0f));
		Escudo->SetActorRotation(FRotator(0.0f, 90.0f, -100.0f));

		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, [Escudo]()
			{
				Escudo->Destroy();
			}, 5.0f, false);
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se pudo crear el escudo"));
	}
}


FString AProtegido::EscribirEstado()
{
	return "Nave Jugador Protegida";
}

void AProtegido::SetPawn(AGalaga_USFXPawn* pawn)
{
	
	naveJugador = pawn;

	

}





