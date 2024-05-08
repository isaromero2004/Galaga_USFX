// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmamentoNodriza.h"
#include "Galaga_USFXProjectile.h"
//#include "NaveProyectil.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"


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

	FireRate=1.0f;

}

// Called when the game starts or when spawned
void AArmamentoNodriza::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Disparo, this, &AArmamentoNodriza::Disparar, FireRate, true);
}

// Called every frame
void AArmamentoNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}

void AArmamentoNodriza::Disparar()
{
	//ANaveProyectil* Projectile = GetWorld()->SpawnActor<ANaveProyectil>(ANaveProyectil::StaticClass(), GetActorLocation(), GetActorRotation());
	//if (Projectile)
	//{

	//	//Obtén la dirección hacia adelante de la nave enemiga
	//	FVector ForwardDirection = GetActorForwardVector();

	//	// Calcula la rotación basada en la dirección hacia adelante
	//	FRotator SpawnRotation = ForwardDirection.Rotation();

	//	// Configura la posición y dirección del proyectil
	//	FVector SpawnLocation = GetActorLocation();
	//	Projectile->SetActorLocationAndRotation(SpawnLocation, SpawnRotation);

	//	Projectile->Fire();
	//}
	FVector PosicionArmamento = GetActorLocation();
	FVector OffSet = FVector(-70.0f, 0.0f, 0.0f);
	FRotator Rotacion = FRotator(180, 0, 0);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		World->SpawnActor<AGalaga_USFXProjectile>(PosicionArmamento + OffSet, Rotacion);
	}

	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Disparo, this, &AArmamentoNodriza::Disparar, 1.0f, false, 1.0f);

}

