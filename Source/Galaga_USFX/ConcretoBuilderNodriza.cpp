// Fill out your copyright notice in the Description page of Project Settings.


#include "ConcretoBuilderNodriza.h"
#include "NaveNodriza.h"
#include "CascosNodriza.h"
#include "MotorNodriza.h"
#include "ArmamentoNodriza.h"
#include "EscudosNodriza.h"

// Sets default values
AConcretoBuilderNodriza::AConcretoBuilderNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConcretoBuilderNodriza::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void AConcretoBuilderNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConcretoBuilderNodriza::BuildCascos()
{
	FVector Posicion = FVector(400.0f, 0.0f, 200.0f);
	FRotator Rotacion = FRotator(0.0f, -180.0f, 0.0f);
	ACascosNodriza* Cascos = GetWorld()->SpawnActor<ACascosNodriza>(Posicion, Rotacion);

	if (Cascos)
	{
		Cascos-> AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	}

}

void AConcretoBuilderNodriza::BuildMotor()
{
	FVector Posicion = FVector(470.0f, 0.0f, 200.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	AMotorNodriza* Motor = GetWorld()->SpawnActor<AMotorNodriza>(Posicion, Rotacion);

	if (Motor)
	{
		Motor->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	}
}

void AConcretoBuilderNodriza::BuildArmamento()
{
	FVector Posicion1 = FVector(350.0f, -50.0f, 200.0f);
	FRotator Rotacion1 = FRotator(0.0f, 0.0f, 0.0f);
	FVector Posicion2 = FVector(350.0f, 50.0f, 200.0f);
	FRotator Rotacion2 = FRotator(0.0f, 90.0f, 0.0f);
	AArmamentoNodriza* Armamento1 = GetWorld()->SpawnActor<AArmamentoNodriza>(Posicion1, Rotacion1);
	AArmamentoNodriza* Armamento2 = GetWorld()->SpawnActor<AArmamentoNodriza>(Posicion2, Rotacion2);

	if (Armamento1)
	{
		Armamento1->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	}
	if (Armamento2)
	{
		Armamento2->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	}
}

void AConcretoBuilderNodriza::BuildEscudos()
{
	FVector Posicion = FVector(350.0f, 0.0f, 200.0f);
	FRotator Rotacion = FRotator(0.0f, 180.0f, 0.0f);
	AEscudosNodriza* Escudos = GetWorld()->SpawnActor<AEscudosNodriza>(Posicion, Rotacion);

	if (Escudos)
	{
		Escudos->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	}
}

ANaveNodriza* AConcretoBuilderNodriza::GetNaveNodriza() const
{
	return NaveNodriza;
}