// Fill out your copyright notice in the Description page of Project Settings.

#include "MySphereActor.h"




AMySphereActor::AMySphereActor(){
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
    RootComponent = MeshComponent;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshComponentAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
    
    ObjectSize = 15.0f;
    ObjectRelativeLocation = FVector(0.0f, 0.0f, 0.0f);
    ObjectRelativeRotation = FRotator(0.0f, 0.0f, 0.0f);
    ObjectRelativeScale = FVector(ObjectSize/50.0);
    ObjectColor = FLinearColor( 209.0f/255.0f, 53.0f/255.0f, 37.0f/255.0f );
    
    if (MeshComponentAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(MeshComponentAsset.Object);
        InitilizeObject();
    }
    
    RelativeForceLocationBottom = FVector(0.0f, 0.0f, 0.0f);
    RelativeForceLocationCenter = FVector(0.0f, 0.0f, 0.0f);
    RelativeForceLocationTop =  FVector(0.0f, 0.0f, 30.0f);
    
    //Notes:
    //    Sphere has size 30*30*30
    //    The local origin is at the (15,15,0) position of the cube
}

