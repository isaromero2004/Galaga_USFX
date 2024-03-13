// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodriza.h"

ANaveEnemigaNodriza::ANaveEnemigaNodriza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_A.Shape_Wedge_A'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaNodriza::Mover()
{

}

void ANaveEnemigaNodriza::Destruirse()
{
}
void ANaveEnemigaNodriza::Escapar()
{
}
void ANaveEnemigaNodriza::Atacar()
{
}