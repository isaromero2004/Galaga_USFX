﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "Movimiento.h"

// Sets default values for this component's properties
UMovimiento::UMovimiento()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	// ...
}


// Called when the game starts
void UMovimiento::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMovimiento::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{

    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    AActor* Parent = GetOwner();

    if (Parent)
    {
        FVector PosicionActual = Parent->GetActorLocation();

        // Definir la velocidad de movimiento horizontal
        float Velocidad = 50.0f;

        // Calcular el desplazamiento horizontal para este fotograma
        float DesplazamientoX = Velocidad * DeltaTime;
        float LimiteInferior = -1600.0f;

        FVector NuevaPosicion = FVector(PosicionActual.X + DesplazamientoX * -1, PosicionActual.Y, PosicionActual.Z);
        Parent->SetActorLocation(NuevaPosicion);

        //este codigo hace que vuelva ala posicion inicial
        if (NuevaPosicion.X < LimiteInferior)
        {
            Parent->SetActorLocation(FVector(1800.0f, PosicionActual.Y, 160.0f));
        }
    }
}
//        if (DireccionMovimientoHorizontal == 1) // Movimiento hacia derecha
//        {
//   
//
//            // Mover la nave hacia derecha
//            FVector NuevaPosicion = PosicionActual + FVector(0.0f, DesplazamientoHorizontal-1.0f, 0.0f);
//            if (NuevaPosicion.Y <= LimiteDerecho)
//            {
//                Parent->SetActorLocation(NuevaPosicion);
//            }
//            else
//            {
//                // Si alcanza el límite superior, cambiar la dirección de movimiento a hacia izquierda
//                DireccionMovimientoHorizontal = -1;
//            }
//        }
//        else // Movimiento hacia izquierda
//        {
//            // Mover la nave hacia izquierda
//            FVector NuevaPosicion = PosicionActual - FVector(0.0f, DesplazamientoHorizontal-1.0f, 0.0f);
//            if (NuevaPosicion.Y >= LimiteIzquierdo)
//            {
//                Parent->SetActorLocation(NuevaPosicion);
//            }
//            else
//            {
//                // Si alcanza el límite de la izquierda, cambiar la dirección de movimiento a hacia la derecha
//                DireccionMovimientoHorizontal = 1;
//                Parent->SetActorLocation(FVector(NuevaPosicion.X, NuevaPosicion.Y-100.0f, NuevaPosicion.Z));
//            }
//        }
//    }
//}

