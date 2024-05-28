// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnFacade.h"
#include "FabricaNaves.h"
#include "NaveEnemiga.h"
#include "Capsulas.h"
#include "CapsulasArmas.h"
#include "CapsulasEnergia.h"
#include "Obstaculo.h"
#include "Meteorito.h"
#include "ParedObstaculo.h"
#include "Galaga_USFXPawn.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ASpawnFacade::ASpawnFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnFacade::BeginPlay()
{
    Super::BeginPlay();
    UWorld* const World = GetWorld();
    if (World != nullptr) {
        GetWorldTimerManager().SetTimer(AparicionCapsula, this, &ASpawnFacade::SpawnearCapsula, 5.0f, true);
        GetWorldTimerManager().SetTimer(AparicionObstaculo, this, &ASpawnFacade::SpawnearObstaculos, 5.0f, true);
    }
}

// Called every frame
void ASpawnFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnFacade::SpawnearNaves()
{
    FVector InicialSpawnNaveLocation = FVector(-100.f, -500.f, 200.f);
    FRotator RotacionNave = FRotator::ZeroRotator;

    UWorld* const World = GetWorld();
    if (World != nullptr)
    {

        for (int i = 0; i < 6; i++)
        {
            FVector PosicionNaveActual = FVector(InicialSpawnNaveLocation.X, InicialSpawnNaveLocation.Y + i * 200, InicialSpawnNaveLocation.Z);
            ANaveEnemiga* NuevaNaveEnemigaCaza = AFabricaNaves::FabricarNaveEnemiga("Caza", World, PosicionNaveActual, RotacionNave);
            TANavesEnemigas.Push(NuevaNaveEnemigaCaza);
        }

        for (int i = 0; i < 6; i++)
        {
            FVector PosicionNaveActual = FVector(InicialSpawnNaveLocation.X + 200, InicialSpawnNaveLocation.Y + i * 200, InicialSpawnNaveLocation.Z);
            ANaveEnemiga* NuevaNaveEnemigaEspia = AFabricaNaves::FabricarNaveEnemiga("Espia", World, PosicionNaveActual, RotacionNave);
            TANavesEnemigas.Push(NuevaNaveEnemigaEspia);
        }

        for (int i = 0; i < 6; i++)
        {
            FVector PosicionNaveActual = FVector(InicialSpawnNaveLocation.X - 200, InicialSpawnNaveLocation.Y + i * 200, InicialSpawnNaveLocation.Z);
            ANaveEnemiga* NuevaNaveEnemigaReabastecimiento = AFabricaNaves::FabricarNaveEnemiga("Reabastecimiento", World, PosicionNaveActual, RotacionNave);
            TANavesEnemigas.Push(NuevaNaveEnemigaReabastecimiento);
        }

        for (int i = 0; i < 6; i++)
        {
            FVector PosicionNaveActual = FVector(InicialSpawnNaveLocation.X - 400, InicialSpawnNaveLocation.Y + i * 200, InicialSpawnNaveLocation.Z);
            ANaveEnemiga* NuevaNaveEnemigaTransporte = AFabricaNaves::FabricarNaveEnemiga("Transporte", World, PosicionNaveActual, RotacionNave);
            TANavesEnemigas.Push(NuevaNaveEnemigaTransporte);
        }
    }
}

 void ASpawnFacade::SpawnearObstaculos()
 {
    FVector SpawnMeteoritosLocation = FVector(700.f, FMath::RandRange(-1000.f, 1000.f) , 200.f);
    FRotator rotacionObstaculos = FRotator::ZeroRotator;

    TArray<TSubclassOf<AObstaculo>> ClasesObstaculos = { AMeteorito::StaticClass(), AParedObstaculo::StaticClass() };

    TSubclassOf<AObstaculo> ObstaculosRandom = ClasesObstaculos[FMath::RandRange(0, ClasesObstaculos.Num() - 1)];
       
    if(ObstaculosRandom == ClasesObstaculos[0])
	{
    	GetWorld()->SpawnActor<AObstaculo>(ObstaculosRandom, SpawnMeteoritosLocation, FRotator(0, 0, 0));
	}
    else if(ObstaculosRandom == ClasesObstaculos[1])
    {

        AGalaga_USFXPawn* Pawn = Cast<AGalaga_USFXPawn>(UGameplayStatics::GetPlayerPawn(this, 0));
        if (Pawn)
        {
            // Establece SpawnParedObstaculosLocation a 100 unidades en frente del Pawn
            FVector SpawnParedObstaculosLocation = Pawn->GetActorLocation() + FVector(100.0f, 0.0f, 0.0f);
            GetWorld()->SpawnActor<AObstaculo>(ObstaculosRandom, SpawnParedObstaculosLocation, FRotator(0, 0, 0));
        }
    }
    
 }

    void ASpawnFacade::SpawnearCapsula()
    {
        FVector SpawnCapsulasLocation = FVector(100.f, -500.f, 200.f);
        FRotator rotacionCapsulas = FRotator(0.0f, 0.0f, 0.0f);

        TArray<TSubclassOf<ACapsulas>> ClasesCapsulas = { ACapsulasArmas::StaticClass(), ACapsulasEnergia::StaticClass() };

        TSubclassOf<ACapsulas> RandomCapsulas = ClasesCapsulas[FMath::RandRange(0, ClasesCapsulas.Num() - 1)];


        GetWorld()->SpawnActor<ACapsulas>(RandomCapsulas, FVector(800.0f, FMath::RandRange(-1000.f, 1000.f), 200.f), FRotator(0, 0, 0));

    }

    void ASpawnFacade::SpawnearTodo()
    {
        SpawnearNaves();
		SpawnearCapsula();
		SpawnearObstaculos();
    }

    void ASpawnFacade::SpawnComponentes(const FString _Componente) {
        if (_Componente == "Naves")
            SpawnearNaves();
        else if (_Componente == "Capsulas")
            SpawnearCapsula();
        else if (_Componente == "Obstaculos")
            SpawnearObstaculos();
        else if (_Componente == "Todo")
            SpawnearTodo();

    }

    

