// Fill out your copyright notice in the Description page of Project Settings.

#include "ObjectActor.h"


// Sets default values
AObjectActor::AObjectActor()
{
    
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//    PrimaryActorTick.bCanEverTick = true;
//
//    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
//    RootComponent = MeshComponent;
//    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshComponentAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
//
//    ObjectSize = 15.0f;
//    ObjectRelativeLocation = FVector(0.0f, 0.0f, 0.0f);
//    ObjectRelativeRotation = FRotator(0.0f, 0.0f, 0.0f);
//    ObjectRelativeScale = FVector(ObjectSize/50.0);
//    ObjectColor = FLinearColor( 100.0f, 0.0f, 0.0f );
//
//    if (MeshComponentAsset.Succeeded())
//    {
//        MeshComponent->SetStaticMesh(MeshComponentAsset.Object);
//        InitilizeObject();
//    }
//
//    RelativeForceLocationBottom = FVector(-14.9f, 0.0f, 0.1f);
//    RelativeForceLocationCenter = FVector(-15.0f, 0.0f, 0.0f);
//    RelativeForceLocationTop =  FVector(-15.0f, 0.0f, 29.9f);
    
}

void AObjectActor::InitilizeObject(){
    
    MeshComponent->SetRelativeLocation(ObjectRelativeLocation);
    MeshComponent->SetRelativeRotation(ObjectRelativeRotation);
    MeshComponent->SetWorldScale3D(ObjectRelativeScale);
    MeshComponent->SetSimulatePhysics(true);
    MeshComponent->SetCollisionProfileName(TEXT("BlockAll"));
    
    MeshComponent->SetNotifyRigidBodyCollision(true);
    MeshComponent->OnComponentHit.AddDynamic(this, &AObjectActor::OnHit);
    
    if(GetWorld()){
        PhysicsProperty = CreateDefaultSubobject<UPhysicalMaterial>(TEXT("PhysicsMaterial"));
        
        DynamicMaterial = MeshComponent->CreateAndSetMaterialInstanceDynamic(0);
        DynamicMaterial->SetVectorParameterValue(FName("Color"),ObjectColor);
        MeshComponent->SetMaterial(0, DynamicMaterial);
    }
    
    ConstantForce = FVector(0.0f, 0.0f, 0.0f);
    InitialLifeSpan = 8.0f;
    num_frame = 0;
    first_collision = true;
}

// Called when the game starts or when spawned
void AObjectActor::BeginPlay()
{
    Super::BeginPlay();
}


// Called every frame
void AObjectActor::Tick( float DeltaTime )
{
    Super::Tick( DeltaTime );
    num_frame = num_frame + 1;
    FString CurrentLocation = MeshComponent->GetCenterOfMass().ToString()+"\n";
    FFileHelper::SaveStringToFile(CurrentLocation, *LocationRecord, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
    
    FString CurrentVelocity = MeshComponent->GetPhysicsLinearVelocity().ToString()+"\n";
    FFileHelper::SaveStringToFile(CurrentVelocity, *VelocityRecord, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
    
}


void AObjectActor::SetObjectMass(const float Mass){
    MeshComponent->SetMassOverrideInKg(NAME_None,Mass,true);
}

void AObjectActor::AddConstantForce(const FVector& Acceleration){
    ConstantForce = Acceleration;
}

void AObjectActor::AddInitialVelocity(const FVector& myVelocity, const float forceLocation){
    FVector location = FVector(0.0f,0.0f,0.0f);
    switch ((int32)forceLocation) {
        case 1:
            location = RelativeForceLocationBottom+this->GetActorLocation();
            break;
        case 2:
            location = RelativeForceLocationCenter+MeshComponent->GetCenterOfMass();
            break;
        case 3:
            location = RelativeForceLocationTop+this->GetActorLocation();
            break;
        default:
            break;
    }
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, location.ToString());
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, this->GetActorLocation().ToString());
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Black, MeshComponent->GetCenterOfMass().ToString());
    MeshComponent->AddImpulseAtLocation(myVelocity,location);
}

void AObjectActor::SetPhyiscalMaterial(const float f, const float r){
    PhysicsProperty->Friction = f;
    PhysicsProperty->Restitution = r;
    MeshComponent->SetPhysMaterialOverride(PhysicsProperty);
}

void AObjectActor::SetDirectory(const int32 scene, bool isMovingObject){
    
    if(isMovingObject)
    {
        LocationRecord =FString("/Users/TianYe/Documents/CollisionSimulation/Result/Record/"+FString::FromInt(scene)+"/movingLocation.txt");
        VelocityRecord = FString("/Users/TianYe/Documents/CollisionSimulation/Result/Record/"+FString::FromInt(scene)+"/movingVelocity.txt");
        CollisionRecord = FString("/Users/TianYe/Documents/CollisionSimulation/Result/Record/"+FString::FromInt(scene)+"/movingCollisionTimeStamp.txt");
    }
    else{
        LocationRecord =FString("/Users/TianYe/Documents/CollisionSimulation/Result/Record/"+FString::FromInt(scene)+"/staticLocation.txt");
        VelocityRecord = FString("/Users/TianYe/Documents/CollisionSimulation/Result/Record/"+FString::FromInt(scene)+"/staticVelocity.txt");
        CollisionRecord = FString("/Users/TianYe/Documents/CollisionSimulation/Result/Record/"+FString::FromInt(scene)+"/staticCollisionTimeStamp.txt");
    }
    
}


void AObjectActor::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit){
    if(OtherActor->IsA(AObjectActor::StaticClass())){
        if(first_collision){
            FString SaveText = FString::FromInt(num_frame)+"\n";
            FFileHelper::SaveStringToFile(SaveText, *CollisionRecord, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
            first_collision = false;
        }
    }
}

FVector AObjectActor::GetCenterOfMass(){
    return MeshComponent->GetCenterOfMass();
}

