// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodrizaG1.h"

ANaveEnemigaNodrizaG1::ANaveEnemigaNodrizaG1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaNodrizaG1::Mover()
{

}

void ANaveEnemigaNodrizaG1::Destruirse()
{
}
void ANaveEnemigaNodrizaG1::Escapar()
{
}
void ANaveEnemigaNodrizaG1::Atacar()
{
}