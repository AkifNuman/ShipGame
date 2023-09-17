// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RouteSpline.generated.h"

UCLASS()
class SHIPGAME_API ARouteSpline : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARouteSpline();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "MySpline")
	class USplineComponent* MySpline;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
