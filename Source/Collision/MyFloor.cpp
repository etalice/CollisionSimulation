// Fill out your copyright notice in the Description page of Project Settings.

#include "MyFloor.h"


// Sets default values
AMyFloor::AMyFloor()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    
    CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    // Set the cube's collision size.
    FVector InitialSize = FVector(200.0f, 200.0f, 10.0f);
    CollisionComponent->InitBoxExtent(InitialSize);
    FVector InitialLocation = FVector(200.0f, 200.0f, -10.0f);
    CollisionComponent->SetRelativeLocation(InitialLocation);
    CollisionComponent->bHiddenInGame = false;
    CollisionComponent->SetMobility(EComponentMobility::Static);
    CollisionComponent->SetCollisionProfileName(TEXT("NOStart"));
    CollisionComponent->SetSimulatePhysics(true);
    CollisionComponent->SetNotifyRigidBodyCollision(true);
    RootComponent = CollisionComponent;

    
    
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
    MeshComponent->SetupAttachment(RootComponent, FName("Floor"));
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshComponentAsset(TEXT("/Game/StarterContent/Architecture/Floor_400x400.Floor_400x400"));
    
//    static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("/Game/StarterContent/Materials/M_Ceramic_Tile_Checker.M_Ceramic_Tile_Checker"));
//    if (Material.Object != NULL)
//    {
//        FloorMaterial = (UMaterial*)Material.Object;
//    }
//
    
    if (MeshComponentAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(MeshComponentAsset.Object);
        MeshComponent->SetRelativeLocation(-InitialLocation);
        
    }
    
    
    if(GetWorld()){
        PhysicsProperty = CreateDefaultSubobject<UPhysicalMaterial>(TEXT("Material"));
    }
    
    InitialLifeSpan = 8.0f;
    
}

// Called when the game starts or when spawned
void AMyFloor::BeginPlay()
{
    Super::BeginPlay();
    
}

// Called every frame
void AMyFloor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
}

void AMyFloor::SetFriction(const float f){
    PhysicsProperty->Friction = f;
    PhysicsProperty->Restitution = 0.0f;
    CollisionComponent->SetPhysMaterialOverride(PhysicsProperty);
}

