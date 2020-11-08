// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScorePoints.generated.h"

UCLASS()
class CT6RIGPR_ARCADE1_API AScorePoints : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AScorePoints();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//creates a collsion box for the object
	UPROPERTY(VisibleAnywhere)
		class USphereComponent* CollisionSphere;

	//declare mesh component
	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* MyMesh;

	//creates the size of the sphere collision box
	float SphereRadius;

	// declare overlap begin function
	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void RotateActor(float DeltaTime);

	float RotationSpeed = 100.f;

	// declare overlap end function
	/*UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);*/
};
