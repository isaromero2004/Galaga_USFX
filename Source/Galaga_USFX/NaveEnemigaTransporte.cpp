// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaTransporte::Mover()
{
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