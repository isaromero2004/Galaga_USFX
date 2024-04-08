// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaG1.h"

ANaveEnemigaCazaG1::ANaveEnemigaCazaG1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaCazaG1::Mover(float DeltaTime)
{
    FVector PosicionActual = GetActorLocation();
    FVector NuevaPosicion = FVector(PosicionActual.X - 100 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);

    SetActorLocation(NuevaPosicion);


    if (NuevaPosicion.X < limiteX) {

        SetActorLocation(FVector(1500.0f, PosicionActual.Y, PosicionActual.Z));

    }
    /*FVector PosicionActual = GetActorLocation();

    float VelocidadHorizontal = GetVelocidad();

    float VelocidadRotacion = 60.0f;

    FVector DireccionMovimiento = FVector(0.0f, -1.0f, 0.0f);

    FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;

    float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f;
    float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion;

    float Radio = 50.0f;

    float X = FMath::Cos(Angulo) * Radio;
    float Y = FMath::Sin(Angulo) * Radio;

    FVector NuevaPosicion = FVector(X, Y, PosicionActual.Z);

    float TopeAbajo = PosicionActual.X - 1300.0f;
    float Reaparicion = PosicionActual.X + 200.0f;


    NuevaPosicion += DesplazamientoHorizontal;

    if (NuevaPosicion.X < TopeAbajo)
    {
        NuevaPosicion.X = Reaparicion;
    }


    SetActorLocation(NuevaPosicion);*/
}

void ANaveEnemigaCazaG1::Destruirse()
{
}
void ANaveEnemigaCazaG1::Escapar()
{

}
void ANaveEnemigaCazaG1::Atacar()
{

}


