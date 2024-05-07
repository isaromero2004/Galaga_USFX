// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmamentoNodriza.h"
#include "Galaga_USFXProjectile.h"

// Sets default values
AArmamentoNodriza::AArmamentoNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/Shape_Pipe_2.Shape_Pipe_2'"));
	ArmamentoNodrizaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArmamentoNodrizaMesh"));
	ArmamentoNodrizaMesh->SetupAttachment(RootComponent);
	ArmamentoNodrizaMesh->SetStaticMesh(malla.Object);
	RootComponent = ArmamentoNodrizaMesh;

	MovimientoNodriza = CreateDefaultSubobject<UMovimiento>(TEXT("MovimientoNodriza"));
	MovimientoNodriza->PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AArmamentoNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArmamentoNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MovimientoNodriza->TickComponent(DeltaTime, ELevelTick::LEVELTICK_TimeOnly, nullptr);

}

void AArmamentoNodriza::Disparar()
{

	FVector PosicionArmamento = GetActorLocation();
	FVector OffSet = FVector(-70.0f, 0.0f, 0.0f);
	FRotator Rotacion = FRotator(180, 0, 0);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		World->SpawnActor<AGalaga_USFXProjectile>(PosicionArmamento + OffSet, Rotacion);
	}

	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Disparo, this, &AArmamentoNodriza::Disparar, 3.0f, false, 1.0f);



}

