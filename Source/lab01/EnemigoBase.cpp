#include "EnemigoBase.h"
#include "Components/StaticMeshComponent.h"

AEnemigoBase::AEnemigoBase()
{
    PrimaryActorTick.bCanEverTick = true;

    // Creamos el componente de malla una sola vez aquí
    MeshEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshEnemigo"));
    RootComponent = MeshEnemigo;
}

void AEnemigoBase::BeginPlay()
{
    Super::BeginPlay();

    // Cada enemigo durará 8 segundos antes de desaparecer
    SetLifeSpan(8.0f);
}

void AEnemigoBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    MoverEnemigo(DeltaTime);
}

void AEnemigoBase::MoverEnemigo(float DeltaTime) { /* Implementación base vacía */ }