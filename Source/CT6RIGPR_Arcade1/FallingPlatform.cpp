// Fill out your copyright notice in the Description page of Project Settings.


#include "FallingPlatform.h"

// Sets default values
AFallingPlatform::AFallingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFallingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
	FallingActor = GetWorld()->GetFirstPlayerController()->GetPawn();

}

// Called every frame
void AFallingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (PressurePlate->IsOverlappingActor(FallingActor))
	{
		FallingActor->SetActorLocation(FVector(0.f, 0.f, 100.f));
	}

}

