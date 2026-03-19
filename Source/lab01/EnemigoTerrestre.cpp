#include "EnemigoTerrestre.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoTerrestre::AEnemigoTerrestre() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (MeshAsset.Succeeded()) MeshEnemigo->SetStaticMesh(MeshAsset.Object);
}

void AEnemigoTerrestre::MoverEnemigo(float DeltaTime) {
    // Movimiento horizontal: Izquierda a derecha en Y
    FVector NuevaLoc = GetActorLocation();
    NuevaLoc.Y += FMath::Sin(GetGameTimeSinceCreation() * 3.0f) * 10.0f;
    SetActorLocation(NuevaLoc);
}