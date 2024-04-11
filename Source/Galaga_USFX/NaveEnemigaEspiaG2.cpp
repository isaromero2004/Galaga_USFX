// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspiaG2.h"

ANaveEnemigaEspiaG2::ANaveEnemigaEspiaG2()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}


void ANaveEnemigaEspiaG2::Destruirse()
{
}
void ANaveEnemigaEspiaG2::Escapar()
{
}
void ANaveEnemigaEspiaG2::Atacar()
{
}