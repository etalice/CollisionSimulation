// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "MyFloor.h"
//#include "MyStartActor.h"
#include "ObjectActor.generated.h"

UCLASS()
class COLLISION_API AObjectActor : public AActor
{
    GENERATED_BODY()
    
public:
    // Sets default values for this actor's properties
    AObjectActor();
    
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
    
    
    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
//  object state vectors, initialized in construtor
    float ObjectSize;
    FVector ObjectRelativeLocation;
    FRotator ObjectRelativeRotation;
    FVector ObjectRelativeScale;
    FVector ConstantForce;
    
    FVector RelativeForceLocationBottom;
    FVector RelativeForceLocationCenter;
    FVector RelativeForceLocationTop;
    FLinearColor ObjectColor;
    
    
//  property initialization function
    void InitilizeObject();
    void SetObjectMass(const float Mass);
    void AddConstantForce(const FVector& Acceleration);
    void SetPhyiscalMaterial(const float f, const float r);
    void SetDirectory(const int32 scene, bool isMovingObject);
    void AddInitialVelocity(const FVector& myVelocity, const float forceLocation);

    
//  object simulation variables
    int32 num_frame;
    int32 pre_velocity;
    bool first_collision;
    FString CollisionRecord;
    FString LocationRecord;
    FString VelocityRecord;
    
    FVector GetCenterOfMass();

    
    
};
