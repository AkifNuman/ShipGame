// Fill out your copyright notice in the Description page of Project Settings.


#include "RouteSpline.h"
#include "Components/SplineComponent.h"

// Sets default valuesdsfasdf
ARouteSpline::ARouteSpline()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance ifdyou don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MySpline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	RootComponent = MySpline;

}

// Called when the game starts or when spawned
void ARouteSpline::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ARouteSpline::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

