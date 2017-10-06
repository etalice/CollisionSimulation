// Fill out your copyright notice in the Description page of Project Settings.

#include "MyStartActor.h"


// Sets default values
AMyStartActor::AMyStartActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
    RootComponent = MeshComponent;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshComponentAsset(TEXT("/Game/StarterContent/Shapes/Shape_Start.Shape_Start"));
    MeshComponent->SetStaticMesh(MeshComponentAsset.Object);
    
    ObjectSize = 3.0f;
    MeshComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
    MeshComponent->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
    MeshComponent->SetWorldScale3D(FVector(ObjectSize/50.0f));
    MeshComponent->SetSimulatePhysics(true);
    MeshComponent->SetEnableGravity(false);
    MeshComponent->SetCollisionProfileName(TEXT("NOFloor"));
    MeshComponent->SetMassOverrideInKg(NAME_None,100,true);
    
    MeshComponent->SetNotifyRigidBodyCollision(true);
    MeshComponent->OnComponentHit.AddDynamic(this, &AMyStartActor::OnHit);
    
    if(GetWorld()){
        PhysicsProperty = CreateDefaultSubobject<UPhysicalMaterial>(TEXT("PhysicsMaterial"));
        PhysicsProperty->Friction = 0.0f;
        PhysicsProperty->Restitution = 0.0f;
        MeshComponent->SetPhysMaterialOverride(PhysicsProperty);
        
//        DynamicMaterial = MeshComponent->CreateAndSetMaterialInstanceDynamic(0);
//        DynamicMaterial->SetVectorParameterValue(FName("Opacity"),FColor::Transparent);
//        
//        MeshComponent->SetMaterial(0, DynamicMaterial);
    }
    
    FramesAfterCollision = 0.0f;

}

// Called when the game starts or when spawned
void AMyStartActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyStartActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyStartActor::SetObjectMass(const float Mass){
    MeshComponent->SetMassOverrideInKg(NAME_None,Mass,true);
}


void AMyStartActor::AddInitialVelocity(const FVector& myVelocity){
    MeshComponent->AddImpulse(myVelocity*MeshComponent->GetMass());
}

void AMyStartActor::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit){
    if(OtherActor->IsA(AObjectActor::StaticClass())){
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Black, FString::SanitizeFloat(MeshComponent->GetMass()));
        UWorld* World = GetWorld();
        if(World){
            World->DestroyActor(this);
        }
    }
}


