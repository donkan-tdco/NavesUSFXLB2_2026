#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemigoBase.generated.h"

UCLASS()
class LAB01_API AEnemigoBase : public AActor
{
    GENERATED_BODY()

public:
    AEnemigoBase();

    // Componente de malla que heredarán todos
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enemigo")
    class UStaticMeshComponent* MeshEnemigo;

    // Función que cada hijo sobreescribirá (Polimorfismo)
    virtual void MoverEnemigo(float DeltaTime);

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
};