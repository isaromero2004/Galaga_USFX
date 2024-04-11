// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaG1.h"

ANaveEnemigaCazaG1::ANaveEnemigaCazaG1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

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


