// Fill out your copyright notice in the Description page of Project Settings.


#include "ConcretoBuilderNodriza.h"
#include "NaveNodriza.h"
#include "CascosNodriza.h"
#include "MotorNodriza.h"
#include "ArmamentoNodriza.h"
#include "EscudosNodriza.h"
#include "Galaga_USFXProjectile.h"

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
	
	NaveNodriza = GetWorld()->SpawnActor<ANaveNodriza>(ANaveNodriza::StaticClass());

	NaveNodriza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void AConcretoBuilderNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AConcretoBuilderNodriza::  BuildCascos()
{
	NaveNodriza->SetCascos();
	//FVector Posicion = FVector(500.0f, 0.0f, 200.0f);
	//FRotator Rotacion = FRotator(0.0f, 180.0f, 0.0f);
	//ACascosNodriza* NuevoCascos = GetWorld()->SpawnActor<ACascosNodriza>(Posicion, Rotacion);

	//NaveNodriza->Cascos= NuevoCascos;

}

void AConcretoBuilderNodriza::BuildMotor()
{
	NaveNodriza->SetMotor(1);
	/*FVector Posicion = FVector(570.0f, 0.0f, 200.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	AMotorNodriza* NuevoMotor = GetWorld()->SpawnActor<AMotorNodriza>(Posicion, Rotacion); 	

	NaveNodriza->Motor=NuevoMotor*/;
}

void AConcretoBuilderNodriza::BuildArmamento()
{
	NaveNodriza->SetArmamento(2);

	//FVector Posicion1 = FVector(500.0f, -80.0f, 200.0f);
	//FRotator Rotacion1 = FRotator(0.0f, 90.0f, 0.0f);
	//FVector Posicion2 = FVector(500.0f, 80.0f, 200.0f);
	//FRotator Rotacion2 = FRotator(0.0f, 90.0f, 0.0f);
	//AArmamentoNodriza* Armamento1 = GetWorld()->SpawnActor<AArmamentoNodriza>(Posicion1, Rotacion1);
	//AArmamentoNodriza* Armamento2 = GetWorld()->SpawnActor<AArmamentoNodriza>(Posicion2, Rotacion2);

	//if (Armamento1)
	//{
	//	
	//	Armamento1->Disparar();
	//	NaveNodriza->Armamento[0]=Armamento1;
	//}
	//if (Armamento2)
	//{
	//	
	//	Armamento2->Disparar();
	//	NaveNodriza->Armamento[1]=Armamento2;
	//}
}

 void AConcretoBuilderNodriza::BuildEscudos()
{
	 NaveNodriza->SetEscudo(1);

	//FVector Posicion = FVector(450.0f, 0.0f, 200.0f);
	//FRotator Rotacion = FRotator(0.0f, 180.0f, 0.0f);
	//AEscudosNodriza* NuevoEscudo = GetWorld()->SpawnActor<AEscudosNodriza>(Posicion, Rotacion);
	//NaveNodriza->Escudo=NuevoEscudo;
	/*if (Escudos)
	{
		Escudos->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	}*/
}

 ANaveNodriza* AConcretoBuilderNodriza::GetNaveNodriza()
 {
	 return NaveNodriza;
  }