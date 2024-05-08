// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveProyectil.h"

// Sets default values
ANaveProyectil::ANaveProyectil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaPM(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	meshProyectil = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));//crea el objeto mallaProyectil
	meshProyectil->SetStaticMesh(mallaPM.Object);  //asigna la malla al objeto mallaProyectil
	meshProyectil->SetupAttachment(RootComponent);//asigna el objeto mallaProyectil al componente raiz
	RootComponent = meshProyectil; //asigna el objeto mallaProyectil al componente raiz
	meshProyectil->BodyInstance.SetCollisionProfileName("Projectile");
	meshProyectil->OnComponentHit.AddDynamic(this, &ANaveProyectil::OnHit);
	SetActorScale3D(FVector(1.5f, 1.5f, 1.5f));

	//ProjectileMesh->OnComponentHit.AddDynamic(this, &AEnemyProjectile::OnHit);  // set up a notification for when this component hits something
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->UpdatedComponent = meshProyectil;
	ProjectileMovement->InitialSpeed = 3000.0f;
	ProjectileMovement->MaxSpeed = 3000.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;//
	ProjectileMovement->bShouldBounce = false;//
	ProjectileMovement->ProjectileGravityScale = 0.0f; // No gravity
	InitialLifeSpan = 3.0f;
}

// Called when the game starts or when spawned
void ANaveProyectil::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveProyectil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ANaveProyectil::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovement->Velocity = GetActorForwardVector() * ProjectileMovement->InitialSpeed;
}

void ANaveProyectil::Fire()
{
	FVector NewLocation = GetActorLocation() + GetActorForwardVector() * 300.0f;
	SetActorLocation(NewLocation);
}

void ANaveProyectil::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	
}