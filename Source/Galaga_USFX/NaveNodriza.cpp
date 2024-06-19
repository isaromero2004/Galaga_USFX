 //Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodriza.h"



 //Sets default values
ANaveNodriza::ANaveNodriza()
{
// 	 Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	NaveNodriza = nullptr;
	MovimientoNodriza = CreateDefaultSubobject<UMovimiento>(TEXT("MovimientoNodriza"));
	MovimientoNodriza->PrimaryComponentTick.bCanEverTick = true;

}

 //Called when the game starts or when spawned
void ANaveNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}


 //Called every frame
void ANaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MovimientoNodriza->TickComponent(DeltaTime, ELevelTick::LEVELTICK_TimeOnly, nullptr);

}

void ANaveNodriza::SetCascos()
{
	FVector Posicion = FVector(500.0f, 0.0f, 200.0f);
	FRotator Rotacion = FRotator(0.0f, 180.0f, 0.0f);
	ACascosNodriza* NuevoCascos = GetWorld()->SpawnActor<ACascosNodriza>(Posicion, Rotacion);

	Cascos = NuevoCascos;
}

void ANaveNodriza::SetMotor(int a)
{
	FVector Posicion = FVector(570.0f, 0.0f, 200.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	AMotorNodriza* NuevoMotor = GetWorld()->SpawnActor<AMotorNodriza>(Posicion, Rotacion);

	Motor = NuevoMotor;
}

void ANaveNodriza::SetArmamento(int b)
{
	if (b == 1)
	{
		FVector Posicion = FVector(500.0f, -80.0f, 200.0f);
		FRotator Rotacion = FRotator(0.0f, 90.0f, 0.0f);
		AArmamentoNodriza* NuevoArmamento = GetWorld()->SpawnActor<AArmamentoNodriza>(Posicion, Rotacion);

		Armamento[0] = NuevoArmamento;
	}
	if (b == 2)
	{
		FVector Posicion1 = FVector(500.0f, -80.0f, 200.0f);
		FRotator Rotacion1 = FRotator(0.0f, 90.0f, 0.0f);
		FVector Posicion2 = FVector(500.0f, 80.0f, 200.0f);
		FRotator Rotacion2 = FRotator(0.0f, 90.0f, 0.0f);
		AArmamentoNodriza* Armamento1 = GetWorld()->SpawnActor<AArmamentoNodriza>(Posicion1, Rotacion1);
		AArmamentoNodriza* Armamento2 = GetWorld()->SpawnActor<AArmamentoNodriza>(Posicion2, Rotacion2);

		if (Armamento1)
		{

			Armamento1->Disparar();
			Armamento[0] = Armamento1;
		}
		if (Armamento2)
		{

			Armamento2->Disparar();
			Armamento[1] = Armamento2;
		}
	}
}

void ANaveNodriza::SetEscudo(int c)
{
	FVector Posicion = FVector(450.0f, 0.0f, 200.0f);
	FRotator Rotacion = FRotator(0.0f, 180.0f, 0.0f);
	AEscudosNodriza* NuevoEscudo = GetWorld()->SpawnActor<AEscudosNodriza>(Posicion, Rotacion);
	Escudo = NuevoEscudo;
}



