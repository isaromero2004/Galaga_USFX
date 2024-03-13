// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimientoG2.h"


ANaveEnemigaReabastecimientoG2::ANaveEnemigaReabastecimientoG2()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaReabastecimientoG2::Mover()
{

}

void ANaveEnemigaReabastecimientoG2::Destruirse()
{
}
void ANaveEnemigaReabastecimientoG2::Escapar()
{
}
void ANaveEnemigaReabastecimientoG2::Atacar()
{
}