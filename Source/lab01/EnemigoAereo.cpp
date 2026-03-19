#include "EnemigoAereo.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoAereo::AEnemigoAereo() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
    if (MeshAsset.Succeeded()) MeshEnemigo->SetStaticMesh(MeshAsset.Object);
}

void AEnemigoAereo::MoverEnemigo(float DeltaTime) {
    // Movimiento vertical: Sube y baja en Z
    FVector NuevaLoc = GetActorLocation();
    NuevaLoc.Z += FMath::Sin(GetGameTimeSinceCreation() * 2.0f) * 5.0f;
    SetActorLocation(NuevaLoc);
}