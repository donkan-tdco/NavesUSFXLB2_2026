#pragma once

#include "CoreMinimal.h"
#include "EnemigoBase.h"
#include "EnemigoTerrestre.generated.h"

UCLASS()
class LAB01_API AEnemigoTerrestre : public AEnemigoBase
{
	GENERATED_BODY()

public:
	AEnemigoTerrestre();

	// POLIMORFISMO: Nuestra versión de movimiento terrestre
	virtual void MoverEnemigo(float DeltaTime) override;

private:
	float DireccionX; // Para ir y volver en el eje X
};