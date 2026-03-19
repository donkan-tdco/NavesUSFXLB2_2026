#include "EnemigoAcuatico.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoAcuatico::AEnemigoAcuatico() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
    if (MeshAsset.Succeeded()) MeshEnemigo->SetStaticMesh(MeshAsset.Object);
}

void AEnemigoAcuatico::MoverEnemigo(float DeltaTime) {
    // Movimiento circular suave
    float T = GetGameTimeSinceCreation();
    FVector Offset(FMath::Cos(T) * 5.0f, FMath::Sin(T) * 5.0f, 0.0f);
    AddActorWorldOffset(Offset);
}