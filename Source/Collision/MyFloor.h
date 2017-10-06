// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "MyFloor.generated.h"

UCLASS()
class COLLISION_API AMyFloor : public AActor
{
    GENERATED_BODY()
    
public:
    // Sets default values for this actor's properties
    AMyFloor();
    
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
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Materials)
    UMaterial* FloorMaterial;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Materials)
    UPhysicalMaterial* PhysicsProperty;
    
    void SetFriction(const float f);
    
};
