#pragma once

#include "CoreMinimal.h"
#include "EnemigoBase.h" // Importante: incluir la base
#include "EnemigoAereo.generated.h"

UCLASS()
class LAB01_API AEnemigoAereo : public AEnemigoBase
{
	GENERATED_BODY()

public:
	// Constructor
	AEnemigoAereo();

	// POLIMORFISMO: Esta es nuestra propia versión del movimiento
	virtual void MoverEnemigo(float DeltaTime) override;

private:
	// Variable para controlar si la dona sube o baja
	float DireccionVertical;
};