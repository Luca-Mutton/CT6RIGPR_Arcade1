// Fill out your copyright notice in the Description page of Project Settings.


#include "ScorePoints.h"
#include "DrawDebugHelpers.h"
#include "Components/SphereComponent.h"

// Sets default values
AScorePoints::AScorePoints()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//the size of collision box
	SphereRadius = 100.f;

	//Initalizes Sphere component
	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Componet"));
	CollisionSphere->InitSphereRadius(SphereRadius);
	CollisionSphere->SetCollisionProfileName("Trigger");
	RootComponent = CollisionSphere;


	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Mesh"));
	MyMesh->SetupAttachment(RootComponent);

	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AScorePoints::OnOverlapBegin);




}

// Called when the game starts or when spawned
void AScorePoints::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AScorePoints::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//DrawDebugSphere(GetWorld(), GetActorLocation(), SphereRadius, 20, FColor::Purple, false, -1, 0, 1);

	RotateActor(DeltaTime);
}

//begin overlap event
void AScorePoints::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		Destroy();
	}
}

void AScorePoints::RotateActor(float DeltaTime)
{
	FRotator Rotator;
	Rotator = GetActorRotation();

	Rotator.Yaw = Rotator.Yaw + DeltaTime * RotationSpeed;

	SetActorRotation(Rotator);

}

