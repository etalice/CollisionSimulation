// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "ObjectActor.h"
#include "MyStartActor.generated.h"

UCLASS()
class COLLISION_API AMyStartActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyStartActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UPROPERTY(VisibleDefaultsOnly, Category = Static)
    UStaticMeshComponent* MeshComponent;
    
    UPhysicalMaterial* PhysicsProperty;
    UMaterialInstanceDynamic* DynamicMaterial;
    
    void AddInitialVelocity(const FVector& myVelocity);
    
    
    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
    void SetObjectMass(const float Mass);
    
    float ObjectSize;
    float FramesAfterCollision;
};
