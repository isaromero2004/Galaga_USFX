// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspiaG1.h"

ANaveEnemigaEspiaG1::ANaveEnemigaEspiaG1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}


void ANaveEnemigaEspiaG1::Destruirse()
{
}
void ANaveEnemigaEspiaG1::Escapar()
{
}
void ANaveEnemigaEspiaG1::Atacar()
{
}