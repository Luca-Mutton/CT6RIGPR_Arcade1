// Fill out your copyright notice in the Description page of Project Settings.


#include "FallingFloor.h"

// Sets default values
AFallingFloor::AFallingFloor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFallingFloor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFallingFloor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FallingActor = GetWorld()->GetFirstPlayerController()->GetPawn();

}

