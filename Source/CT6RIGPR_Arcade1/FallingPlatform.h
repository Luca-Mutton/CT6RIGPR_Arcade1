// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TriggerVolume.h"
#include "FallingPlatform.generated.h"


UCLASS()
class CT6RIGPR_ARCADE1_API AFallingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFallingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	AActor* FallingActor;

	UPROPERTY(EditAnywhere)
		ATriggerVolume* PressurePlate;
};
