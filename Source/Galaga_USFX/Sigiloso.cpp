// Fill out your copyright notice in the Description page of Project Settings.


#include "Sigiloso.h"
#include "Galaga_USFXPawn.h"

// Sets default values
ASigiloso::ASigiloso()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> StealthMeshAsset(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_2.TwinStickUFO_2'"));
	if (StealthMeshAsset.Succeeded())
	{
		StealthMesh = StealthMeshAsset.Object;
	}

	static ConstructorHelpers::FObjectFinder<UStaticMesh> OriginalMeshAsset(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO'"));

	if (OriginalMeshAsset.Succeeded())
	{
		OriginalMesh1 = OriginalMeshAsset.Object;
	}

	naveJugador = nullptr;

}

// Called when the game starts or when spawned
void ASigiloso::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASigiloso::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASigiloso::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ASigiloso::ActivarSigilio()
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("Se esta usando Estado Sigiloso"));

    if (naveJugador != nullptr && StealthMesh != nullptr)
    {
		UStaticMeshComponent* MeshComponent = naveJugador->GetShipMeshComponent();
		UStaticMesh* OriginalMesh = MeshComponent->GetStaticMesh();

        if (MeshComponent != nullptr)
        {
            MeshComponent->SetStaticMesh(StealthMesh);
        }
		// Cambia la malla de vuelta a la original después de 5 segundos
		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, MeshComponent, OriginalMesh]()
			{
				if (MeshComponent != nullptr)
				{
					MeshComponent->SetStaticMesh(OriginalMesh1);
				}
			}, 5.0f, false);

    }
}



void ASigiloso::ActivarPotencia()
{
}



void ASigiloso::ActivarProteccion()
{
}


FString ASigiloso::EscribirEstado()
{
	return "Nave jugador en estado sigiloso";
}

void ASigiloso::SetPawn(AGalaga_USFXPawn* pawn)
{

	naveJugador = Cast<AGalaga_USFXPawn>(pawn);
	//NavePawn = NaveJugador;

	naveJugador->EstablecerState(naveJugador->GetSigilosoState());
}
