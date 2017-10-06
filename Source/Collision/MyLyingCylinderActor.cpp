// Fill out your copyright notice in the Description page of Project Settings.

#include "MyLyingCylinderActor.h"



AMyLyingCylinderActor::AMyLyingCylinderActor()
{
    
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
    RootComponent = MeshComponent;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshComponentAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder"));
    
    ObjectSize = 15.0f;
    ObjectRelativeLocation = FVector(0.0f, 0.0f, 0.0f);
    ObjectRelativeRotation = FRotator(0.0f, 0.0f, 0.0f);
    ObjectRelativeScale = FVector(ObjectSize/50.0);
    ObjectColor = FLinearColor( 72.0f/255.0f, 104.0f/255.0f, 36.0f/255.0f );
    
    if (MeshComponentAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(MeshComponentAsset.Object);
        AObjectActor::InitilizeObject();
    }
    
    RelativeForceLocationBottom = FVector(-15.0f, 30.0f, -15.0f);
    RelativeForceLocationCenter = FVector(0.0f, 0.0f, 0.0f);
    RelativeForceLocationTop =  FVector(-15.0f, 30.0f, 15.0f);
    
}


