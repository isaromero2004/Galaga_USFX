// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimiento.h"

ANaveEnemigaReabastecimiento::ANaveEnemigaReabastecimiento()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}



void ANaveEnemigaReabastecimiento::Destruirse()
{
}
void ANaveEnemigaReabastecimiento::Escapar()
{
}
void ANaveEnemigaReabastecimiento::Atacar()
{
}

void ANaveEnemigaReabastecimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}