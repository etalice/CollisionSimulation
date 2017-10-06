// Fill out your copyright notice in the Description page of Project Settings.

#include "StaticCube.h"


// Sets default values
AStaticCube::AStaticCube()
{
    
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    
    ObjectSize = 15.0f;
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
    RootComponent = MeshComponent;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshComponentAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
    
    if (MeshComponentAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(MeshComponentAsset.Object);
        MeshComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
        MeshComponent->SetWorldScale3D(FVector(ObjectSize/50.0));
//        MeshComponent->SetRelativeRotation(FRotator(0.0f, 0.0f, 90.0f));//cylinders
//        MeshComponent->SetWorldScale3D(FVector(ObjectSize/50.0,ObjectSize/50, ObjectSize/10));//cylinder
        MeshComponent->SetSimulatePhysics(true);
        MeshComponent->SetCollisionProfileName(TEXT("BlockAll"));
//        MeshComponent->SetNotifyRigidBodyCollision(true);
//        MeshComponent->OnComponentHit.AddDynamic(this, &AStaticCube::OnHit);
    }
    
    if(GetWorld()){
        PhysicsProperty = CreateDefaultSubobject<UPhysicalMaterial>(TEXT("Material"));
    }
    
    ConstantForce = FVector(0.0f, 0.0f, 0.0f);
    InitialLifeSpan = 8.0f;
    num_frame = 0;
}

// Called when the game starts or when spawned
void AStaticCube::BeginPlay()
{
    Super::BeginPlay();
    
}

// Called every frame
void AStaticCube::Tick( float DeltaTime )
{
    Super::Tick( DeltaTime );
    num_frame = num_frame+1;
    
}


void AStaticCube::SetObjectSize(const float Size){
    
}

void AStaticCube::SetObjectMass(const float Mass){
    FBodyInstance* BodyInst = MeshComponent->GetBodyInstance();
    BodyInst->MassScale = Mass/(MeshComponent->GetMass());
    BodyInst->UpdateMassProperties();
    
//    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::SanitizeFloat(MeshComponent->GetMass()));
}

void AStaticCube::AddConstantForce(const FVector& Acceleration){
    ConstantForce = Acceleration;
}

void AStaticCube::AddInitialVelocity(const FVector& myVelocity){
    MeshComponent->AddImpulse(myVelocity,NAME_None,true);
}

void AStaticCube::SetPhyiscalMaterial(const float f, const float r){
    PhysicsProperty->Friction = f;
    PhysicsProperty->Restitution = r;
    MeshComponent->SetPhysMaterialOverride(PhysicsProperty);
}

void AStaticCube::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit){
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::SanitizeFloat(num_frame));
}

