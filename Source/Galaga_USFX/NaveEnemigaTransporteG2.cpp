// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporteG2.h"

ANaveEnemigaTransporteG2::ANaveEnemigaTransporteG2()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaTransporteG2::Mover(float DeltaTime)
{
    FVector PosicionActual = GetActorLocation();
    FVector NuevaPosicion = FVector(PosicionActual.X - 100 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);

    SetActorLocation(NuevaPosicion);


    if (NuevaPosicion.X < limiteX) {

        SetActorLocation(FVector(1500.0f, FMath::RandRange(-500.0f, 200.0f) + 100.0f, PosicionActual.Z));

    }

    /*/MoverParabolico
    static FVector PosicionActual = GetActorLocation();
    float VelocidadHorizontal = GetVelocidad();

    float VelocidadInicialY = 100.0f; // Velocidad inicial en direcci�n vertical
    float Gravedad = -980.0f; // Valor de la gravedad (puedes ajustarlo seg�n tu necesidad)

    FVector DireccionMovimiento = FVector(-100.0f, 0.0f, 0.0f);
    FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;

    float TiempoTranscurrido = GetWorld()->TimeSeconds;

    // Calcular la posici�n vertical en funci�n del tiempo usando la ecuaci�n de movimiento parab�lico
    float PosicionY = VelocidadInicialY * TiempoTranscurrido + 0.5f * Gravedad * FMath::Square(TiempoTranscurrido);

    // Combinar el desplazamiento horizontal y vertical para obtener la nueva posici�n
    FVector NuevaPosicion = PosicionActual + DesplazamientoHorizontal + FVector(0.0f, 0.0f, PosicionY);

    // Verificar si la nave ha alcanzado el l�mite inferior
//    static float TopeAbajo = PosicionActual.X - 1300.0f;
    static float Reaparicion = PosicionActual.X + 200.0f;
    if (NuevaPosicion.X < TopeAbajo)
    {
        // Reposicionar la nave en la parte superior cuando alcanza el l�mite inferior
        NuevaPosicion.X = Reaparicion;
    }

    // Actualizar la posici�n de la nave
    SetActorLocation(NuevaPosicion);*/
}

void ANaveEnemigaTransporteG2::Destruirse()
{
}
void ANaveEnemigaTransporteG2::Escapar()
{
}
void ANaveEnemigaTransporteG2::Atacar()
{
}