// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimientoG1.h"


ANaveEnemigaReabastecimientoG1::ANaveEnemigaReabastecimientoG1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaReabastecimientoG1::Destruirse()
{
}
void ANaveEnemigaReabastecimientoG1::Escapar()
{
}
void ANaveEnemigaReabastecimientoG1::Atacar()
{
}

