// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}
void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaTransporte::Mover(float DeltaTime)
{
    FVector PosicionActual = GetActorLocation();
    FVector NuevaPosicion = FVector(PosicionActual.X - 100 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);

    SetActorLocation(NuevaPosicion);


    if (NuevaPosicion.X < limiteX) {

        SetActorLocation(FVector(1500.0f, PosicionActual.Y, PosicionActual.Z));

    }

    /*/MoverParabolico
   
        static FVector PosicionActual = GetActorLocation();
        float VelocidadHorizontal = GetVelocidad();

        float VelocidadInicialY = 50.0f; // Velocidad inicial en dirección vertical
        float Gravedad = -980.0f; // Valor de la gravedad (puedes ajustarlo según tu necesidad)

        FVector DireccionMovimiento = FVector(-100.0f, 0.0f, 0.0f);
        FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;

        float TiempoTranscurrido = GetWorld()->TimeSeconds;

        // Calcular la posición vertical en función del tiempo usando la ecuación de movimiento parabólico
        float PosicionY = VelocidadInicialY * TiempoTranscurrido + 0.5f * Gravedad * FMath::Square(TiempoTranscurrido);

        // Combinar el desplazamiento horizontal y vertical para obtener la nueva posición
        FVector NuevaPosicion = PosicionActual + DesplazamientoHorizontal + FVector(0.0f, 0.0f, PosicionY);

        // Verificar si la nave ha alcanzado el límite inferior
        //static float TopeAbajo = PosicionActual.X - 1300.0f;
        static float Reaparicion = PosicionActual.X + 200.0f;
        if (NuevaPosicion.X < TopeAbajo)
        {
            // Reposicionar la nave en la parte superior cuando alcanza el límite inferior
            NuevaPosicion.X = Reaparicion;
        }

        // Actualizar la posición de la nave
        SetActorLocation(NuevaPosicion);*/
    

}


void ANaveEnemigaTransporte::Destruirse()
{
}
void ANaveEnemigaTransporte::Escapar()
{
}
void ANaveEnemigaTransporte::Atacar()
{
}
