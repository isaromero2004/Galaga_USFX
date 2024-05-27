// Fill out your copyright notice in the Description page of Project Settings.


#include "ParedObstaculo.h"

AParedObstaculo::AParedObstaculo()
{
    // Carga el StaticMesh
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/Pared.Pared'"));
    mallaObstaculo->SetStaticMesh(ShipMesh.Object);
    // Crea el componente de malla estática
    PrimaryActorTick.bCanEverTick = true;


    ciclos = 0;
}
void AParedObstaculo::BeginPlay()
{
    Super::BeginPlay();
	posicionInicial = GetActorLocation();
}
void AParedObstaculo::Tick(float DeltaTime)
{
    if (ciclos < 4)
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
    float VelocidadHorizontal = 300.0f;

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
            SetActorLocation(FVector(NuevaPosicion.X, NuevaPosicion.Y - 100.0f, NuevaPosicion.Z));
        }
    }
}