// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Engine.h"
#include "MyFloor.h"
#include "ObjectActor.h"
#include "MyCubeActor.h"
#include "MySphereActor.h"
#include "MyCylinderActor.h"
#include "MyLyingCylinderActor.h"
#include "MyConeActor.h"
#include "MyWedgeActor.h"
#include "MyGameModeBaseVelocityTest.generated.h"

/**
 *
 */
UCLASS()
class COLLISION_API AMyGameModeBaseVelocityTest : public AGameModeBase
{
    GENERATED_BODY()
    
public:
    AMyGameModeBaseVelocityTest();
    
    
    
    virtual void StartPlay() override;
    
    UFUNCTION()
    void SpawnActors();
    
    void SetObjectProperty(AObjectActor* Object, bool isMoving, const float mass, const float restitution,const float serialnumber, FTransform transform);
    
    int32 SerialCounter;
    float Lifespan;
    
    TArray<FString> ParameterArray;
    FString Loadtext;
    
    UPROPERTY()
    FTimerHandle SpawnTimerHandle;

    
};
