// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "StaticCube.generated.h"

UCLASS()
class COLLISION_API AStaticCube : public AActor
{
    GENERATED_BODY()
    
public:
    // Sets default values for this actor's properties
    AStaticCube();
    
protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    
public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;
    
    UPROPERTY(VisibleDefaultsOnly, Category = Static)
    UBoxComponent* CollisionComponent;
    
    UPROPERTY(VisibleDefaultsOnly, Category = Static)
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(VisibleAnywhere, Category = Movement)
    UProjectileMovementComponent* ProjectileMovementComponent;
    
    UPhysicalMaterial* PhysicsProperty;
    
    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
    int32 num_frame;
    int32 pre_velocity;
    
    float ObjectSize;

    
    FVector ConstantForce;
    
    void SetObjectSize(const float Size);
    void SetObjectMass(const float Mass);
    void AddConstantForce(const FVector& Acceleration);
    void SetPhyiscalMaterial(const float f, const float r);
    
    void AddInitialVelocity(const FVector& myVelocity);
    
    
    
};
