// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//// Create the mesh component
	//NaveEnemigaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

//Called every frame
void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaCaza::Mover(float DeltaTime)

{
        // Parámetros del círculo
        float Radio = 200.0f; // Radio del círculo
        float VelocidadAngular = 2.0f * PI; // Velocidad angular (en radianes por segundo)


        // Calcula la nueva posición circular
        float PosicionX = Radio * FMath::Cos(VelocidadAngular * DeltaTime);
        float PosicionY = Radio * FMath::Sin(VelocidadAngular * DeltaTime);

        // Obtiene la posición actual del actor
        FVector PosicionActual = GetActorLocation();

        // Calcula la nueva posición teniendo en cuenta el círculo
        FVector NuevaPosicion = FVector(PosicionX, PosicionY, PosicionActual.Z);

        // Establece la nueva posición
        SetActorLocation(NuevaPosicion);

        // Restablece la posición cuando alcanza el límite en el eje X
        if (NuevaPosicion.X < TopeAbajo) {
            SetActorLocation(FVector(1500.0f, FMath::RandRange(-500.0f, 200.0f) + 100.0f, PosicionActual.Z));
        }
    }

    /*//movimiento circular
    FVector PosicionActual = GetActorLocation();

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
    }*/
    /*float velocidad = GetVelocidad();
    FVector PosicionActual = GetActorLocation();
    FVector NuevaPosicion = FVector(PosicionActual.X, -100 * DeltaTime * velocidad, PosicionActual.Z);

    SetActorLocation(NuevaPosicion);


    if (NuevaPosicion.X < limiteX) {

        SetActorLocation(FVector(1500.0f, FMath::RandRange(-500.0f, 200.0f) + 100.0f, PosicionActual.Z));

    }*/
	


void ANaveEnemigaCaza::Destruirse()
{
}
void ANaveEnemigaCaza::Escapar()
{

}
void ANaveEnemigaCaza::Atacar()
{

}

