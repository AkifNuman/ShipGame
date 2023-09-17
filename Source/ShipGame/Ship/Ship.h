// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"
#include "Components/TimelineComponent.h"
#include "ShipGame/RouteSpline.h"
#include "Ship.generated.h"

/**
 * 
 */
UCLASS()
class SHIPGAME_API AShip : public AWheeledVehiclePawn
{
	GENERATED_BODY()

public:

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ARouteSpline*> RouteSpline;

	FTimeline CureFTimeLine;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeToComplete = 10000;

	void Move();

public:	

private:

};
