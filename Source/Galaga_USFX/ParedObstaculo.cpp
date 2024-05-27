// Fill out your copyright notice in the Description page of Project Settings.


#include "ParedObstaculo.h"
#include "Galaga_USFXPawn.h"
#include "Kismet/GameplayStatics.h"

AParedObstaculo::AParedObstaculo()
{
    // Carga el StaticMesh
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/Pared.Pared'"));
    mallaObstaculo->SetStaticMesh(ShipMesh.Object);

    mallaObstaculo->SetRelativeScale3D(FVector(3.0f, 3.0f, 3.0f));
    PrimaryActorTick.bCanEverTick = true;

    velocidadObstaculo = 1000.0f;
    ciclos = 0;
   
}
void AParedObstaculo::BeginPlay()
{
    Super::BeginPlay();
    AGalaga_USFXPawn* Pawn = Cast<AGalaga_USFXPawn>(UGameplayStatics::GetPlayerPawn(this, 0));
    if (Pawn)
    {
        // Establece la posición inicial a 100 unidades en frente del Pawn
        posicionInicial = Pawn->GetActorLocation() + FVector(100.0f, 0.0f, 0.0f);
    }
}
void AParedObstaculo::Tick(float DeltaTime)
{
    if (ciclos < 10)
    {

        Mover(DeltaTime);
    }
    else Destroy();
}

void AParedObstaculo::Mover(float DeltaTime)
{
    FVector PosicionActual = GetActorLocation();

    // Definir los límite DERECHO E IZQUIERDO de movimiento
    float LimiteDerecho = 1000.0f;
    float LimiteIzquierdo = -1000.0f;

    // Definir la velocidad de movimiento horizontal
    float VelocidadHorizontal = GetVelocidadPared();

    // Calcular el desplazamiento horizontal para este fotograma
    float DesplazamientoHorizontal = VelocidadHorizontal * DeltaTime;

    // Verificar si la nave está moviéndose hacia derecha o izquierda

    if (direccion == 1) // Movimiento hacia derecha
    {

        // Mover la nave hacia derecha
        FVector NuevaPosicion = PosicionActual + FVector(0.0f, DesplazamientoHorizontal - 1.0f, 0.0f);
        if (NuevaPosicion.Y <= LimiteDerecho)
        {
            SetActorLocation(NuevaPosicion);
        }
        else
        {
            // Si alcanza el límite superior, cambiar la dirección de movimiento a hacia izquierda
            direccion = -1;
        }
    }
    else // Movimiento hacia izquierda
    {
        // Mover la nave hacia izquierda
        FVector NuevaPosicion = PosicionActual - FVector(0.0f, DesplazamientoHorizontal - 1.0f, 0.0f);
        if (NuevaPosicion.Y >= LimiteIzquierdo)
        {
            SetActorLocation(NuevaPosicion);
        }
        else
        {
            // Si alcanza el límite de la izquierda, cambiar la dirección de movimiento a hacia la derecha
            direccion = 1;
            ciclos++;
            SetActorLocation(FVector(NuevaPosicion.X, NuevaPosicion.Y - 100.0f, NuevaPosicion.Z));
        }
    }
}