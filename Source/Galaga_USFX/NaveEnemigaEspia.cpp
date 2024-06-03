// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"
#include "ProyectilEnemigo.h"

ANaveEnemigaEspia::ANaveEnemigaEspia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

	

}

void ANaveEnemigaEspia::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TiempoDisparo, this, &ANaveEnemigaEspia::Disparar, 3.0f, true);
}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ANaveEnemigaEspia::Destruirse()
{
	FVector PosicionNave = GetActorLocation();
	FVector Offset = FVector(0.0f, 90.0f, 0.0f);
	FRotator Rotacion = FRotator(180, 0, 0);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		World->SpawnActor<AProyectilEnemigo>(PosicionNave + Offset, Rotacion);
	}
}
void ANaveEnemigaEspia::Escapar()
{
}
void ANaveEnemigaEspia::Disparar()
{
	FVector PosicionNave = GetActorLocation();
	FVector Offset = FVector(0.0f, 90.0f, 0.0f);
	FRotator Rotacion = FRotator(180, 0, 0);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		World->SpawnActor<AProyectilEnemigo>(PosicionNave + Offset, Rotacion);
	}
}