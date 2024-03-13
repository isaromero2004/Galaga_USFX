// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaG2.h"

ANaveEnemigaCazaG2::ANaveEnemigaCazaG2()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaCazaG2::Mover()
{

}

void ANaveEnemigaCazaG2::Destruirse()
{
}
void ANaveEnemigaCazaG2::Escapar()
{

}
void ANaveEnemigaCazaG2::Atacar()
{

}



