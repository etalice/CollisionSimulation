// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameModeBaseVelocityTest.h"

AMyGameModeBaseVelocityTest::AMyGameModeBaseVelocityTest(){
    SerialCounter = 0;
    Lifespan = 8.0f;
    //begin load file parameter
    FString SaveDirectory = FString("/Users/TianYe/Documents/CollisionSimulation/Parameter/InitialSpeed");
    Loadtext=FString("");
    FFileHelper::LoadFileToString(Loadtext, *SaveDirectory);
    Loadtext.ParseIntoArray(ParameterArray, TEXT(";"), true);
    //end load file parameter

}


void AMyGameModeBaseVelocityTest::StartPlay()
{
    Super::StartPlay();
    UWorld* World = GetWorld();
    if(World){
        World->GetTimerManager().SetTimer(SpawnTimerHandle, this, &AMyGameModeBaseVelocityTest::SpawnActors, 10.0f, true, 0.0f);
    }
}



void AMyGameModeBaseVelocityTest::SpawnActors(){
    
    if (GEngine)
    {
        // Display a debug message for five seconds.
        // The -1 "Key" value (first argument) indicates that we will never need to update or refresh this message.
        
        
        UWorld* World = GetWorld();
        
        if (World)
        {
            
            
            FString Parameter =ParameterArray[SerialCounter];
            
            TArray<FString> p;
            Parameter.ParseIntoArray(p, TEXT(","), true);
            int Scene = FCString::Atoi(*p[0]);
            float InitialVelocity = FCString::Atof(*p[1]);
            float ForceLocation = FCString::Atof(*p[2]);
            float Mass_static = FCString::Atof(*p[3]);
            float Mass_moving = FCString::Atof(*p[4]);
            float Friction = FCString::Atof(*p[5]);
            float FrictionObject = FCString::Atof(*p[6]);
            float Restitution_static = FCString::Atof(*p[7]);
            float Restitution_moving = FCString::Atof(*p[8]);
            

            FActorSpawnParameters SpawnParams;
            SpawnParams.Owner = this;
            SpawnParams.Instigator = Instigator;
            
            
            FVector ZeroVector = FVector(0.0f, 0.0f, 0.0f);
            FRotator ZeroRotator = FRotator(0.0f, 0.0f, 0.0f);
            
            FVector FloorVector = FVector(0.0f, -20.0f, 0.0f);
            FRotator FloorRotator = FRotator(0.0f, 0.0f, 0.0f);
            
            FVector initialDirection = FVector(1.0f,0.0f,0.0f);
            
//            initialize floor
            AMyFloor* floor = World->SpawnActorDeferred<AMyFloor>(AMyFloor::StaticClass(), FTransform(FloorRotator, FloorVector));
            if(floor){
                floor->SetFriction(Friction);
                floor->FinishSpawning(FTransform(FloorRotator, FloorVector));
                
            }
            
//            initialize record folder
            SerialCounter = SerialCounter + 1;
            IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
            FString recordFile =FString("/Users/TianYe/Documents/CollisionSimulation/Result/Record/"+FString::FromInt(SerialCounter));
            if (PlatformFile.DirectoryExists(*recordFile)) {
                
                PlatformFile.DeleteDirectoryRecursively(*recordFile);
            }
            PlatformFile.CreateDirectory(*recordFile);
            
            
            
            
//            Start Generating objects
//            initialize parameteres
            FVector MovingActualLocation;
            FVector TraceStart;
            AObjectActor* Object_static;
            AObjectActor* Object_moving;
            FTransform Transform_static;
            FTransform Transform_moving;
            
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Black, FString::FromInt(Scene));
            
            //Scene 1: cube->sphere
            if(Scene == 1){
                //object1 has 0 initial velocity
                FRotator Rotation_static = FRotator(0.0f, 0.0f, 0.0f);
                FVector Location_static = FVector(200.0f, 15.0f, 0.0f);
                FVector Scale_static = FVector(1.0f, 1.0f, 1.0f);
                Transform_static = FTransform(Rotation_static, Location_static, Scale_static);
                
                Object_static = World->SpawnActorDeferred<AMySphereActor>(AMySphereActor::StaticClass(), Transform_static);
                
                
                //object2 has x initial velocity
                FRotator Rotation_moving = FRotator(0.0f, 0.0f, 0.0f);
                FVector Location_moving = FVector(50.0f, 15.0f, 0.0f);
                FVector Scale_moving = FVector(1.0f, 1.0f, 1.0f);
                Transform_moving = FTransform(Rotation_moving, Location_moving, Scale_moving);
                
                Object_moving = World->SpawnActorDeferred<AMyCubeActor>(AMyCubeActor::StaticClass(), Transform_moving);
                
            }
            
            //Scene 2: cube->wedge_standing
            if(Scene == 2){
                //object1 has 0 initial velocity
                FRotator Rotation_static = FRotator(0.0f, 180.0f, 0.0f);
                FVector Location_static = FVector(200.0f, 15.0f, 0.0f);
                FVector Scale_static = FVector(1.0f, 1.0f, 1.0f);
                Transform_static = FTransform(Rotation_static, Location_static, Scale_static);
                
                Object_static = World->SpawnActorDeferred<AMyWedgeActor>(AMyWedgeActor::StaticClass(), Transform_static);
                
                //object2 has x initial velocity
                FRotator Rotation_moving = FRotator(0.0f, 0.0f, 0.0f);
                FVector Location_moving = FVector(50.0f, 15.0f, 0.0f);
                FVector Scale_moving = FVector(1.0f, 1.0f, 1.0f);
                Transform_moving = FTransform(Rotation_moving, Location_moving, Scale_moving);
                
                Object_moving = World->SpawnActorDeferred<AMyCubeActor>(AMyCubeActor::StaticClass(), Transform_moving);
            }
            
            //Scene 3: sphere->lying_cylinder at middle
            if(Scene == 3){
                //object1 has 0 initial velocity
                FRotator Rotation_static = FRotator(0.0f, 0.0f, 90.0f);
                FVector Location_static = FVector(200.0f, 0.0f, 15.0f);
                FVector Scale_static = FVector(1.0f, 1.0f, 2.0f);
                Transform_static = FTransform(Rotation_static, Location_static, Scale_static);
                
                Object_static = World->SpawnActorDeferred<AMyCylinderActor>(AMyCylinderActor::StaticClass(), Transform_static);
                
                //object2 has x initial velocity
                FRotator Rotation_moving = FRotator(0.0f, 0.0f, 0.0f);
                FVector Location_moving = FVector(50.0f, 30.0f, 0.0f);
                FVector Scale_moving = FVector(1.0f, 1.0f, 1.0f);
                Transform_moving = FTransform(Rotation_moving, Location_moving, Scale_moving);
                
                Object_moving = World->SpawnActorDeferred<AMySphereActor>(AMySphereActor::StaticClass(), Transform_moving);
            }
            //Scene 4: sphere->lying_cylinder at end
            if(Scene == 4){
                //object1 has 0 initial velocity
                FRotator Rotation_static = FRotator(0.0f, 0.0f, 90.0f);
                FVector Location_static = FVector(200.0f, 0.0f, 15.0f);
                FVector Scale_static = FVector(1.0f, 1.0f, 2.0f);
                Transform_static = FTransform(Rotation_static, Location_static, Scale_static);
                
                Object_static = World->SpawnActorDeferred<AMyCylinderActor>(AMyCylinderActor::StaticClass(), Transform_static);
                
                //object2 has x initial velocity
                FRotator Rotation_moving = FRotator(0.0f, 0.0f, 0.0f);
                FVector Location_moving = FVector(50.0f, 15.0f, 0.0f);
                FVector Scale_moving = FVector(1.0f, 1.0f, 1.0f);
                Transform_moving = FTransform(Rotation_moving, Location_moving, Scale_moving);
                
                Object_moving = World->SpawnActorDeferred<AMySphereActor>(AMySphereActor::StaticClass(), Transform_moving);
            }
            
            //Scene 5: sphere->standing_cylinder
            if(Scene == 5){
                //object1 has 0 initial velocity
                FRotator Rotation_static = FRotator(0.0f, 0.0f, 0.0f);
                FVector Location_static = FVector(200.0f, 15.0f, 0.0f); //#here is a problem in location
                FVector Scale_static = FVector(1.0f, 1.0f, 2.0f);
                Transform_static = FTransform(Rotation_static, Location_static, Scale_static);
                
                Object_static = World->SpawnActorDeferred<AMyCylinderActor>(AMyCylinderActor::StaticClass(), Transform_static);
                
                //object2 has x initial velocity
                FRotator Rotation_moving = FRotator(0.0f, 0.0f, 0.0f);
                FVector Location_moving = FVector(50.0f, 15.0f, 0.0f);
                FVector Scale_moving = FVector(1.0f, 1.0f, 1.0f);
                Transform_moving = FTransform(Rotation_moving, Location_moving, Scale_moving);
                
                Object_moving = World->SpawnActorDeferred<AMySphereActor>(AMySphereActor::StaticClass(), Transform_moving);
            }
            
            //Scene 6: lying_cylinder->lying_wedge
            if(Scene == 6){
                //object1 has 0 initial velocity
                FRotator Rotation_static = FRotator(0.0f, 0.0f, 90.0f);
                FVector Location_static = FVector(200.0f, 0.0f, 15.0f);
                FVector Scale_static = FVector(1.0f, 1.0f, 2.0f);
                Transform_static = FTransform(Rotation_static, Location_static, Scale_static);
                
                Object_static = World->SpawnActorDeferred<AMyWedgeActor>(AMyWedgeActor::StaticClass(), Transform_static);
                
                //object2 has x initial velocity
                FRotator Rotation_moving = FRotator(0.0f, 0.0f, 90.0f);
                FVector Location_moving = FVector(50.0f, 0.0f, 15.0f);
                FVector Scale_moving = FVector(1.0f, 1.0f, 2.0f);
                Transform_moving = FTransform(Rotation_moving, Location_moving, Scale_moving);
                
                Object_moving = World->SpawnActorDeferred<AMyLyingCylinderActor>(AMyLyingCylinderActor::StaticClass(), Transform_moving);
                
            }
            //Scene 7: lying_cylinder->lying_wedge
            if(Scene == 7){
                //object1 has 0 initial velocity
                FRotator Rotation_static = FRotator(0.0f, 0.0f, 0.0f);
                FVector Location_static = FVector(200.0f, 15.0f, 0.0f);
                FVector Scale_static = FVector(1.0f, 1.0f, 2.0f);
                Transform_static = FTransform(Rotation_static, Location_static, Scale_static);
                
                Object_static = World->SpawnActorDeferred<AMyCubeActor>(AMyCubeActor::StaticClass(), Transform_static);
                
                //object2 has x initial velocity
                FRotator Rotation_moving = FRotator(0.0f, 0.0f, 0.0f);
                FVector Location_moving = FVector(50.0f, 15.0f, 0.0f);
                FVector Scale_moving = FVector(1.0f, 1.0f, 2.0f);
                Transform_moving = FTransform(Rotation_moving, Location_moving, Scale_moving);
                
                Object_moving = World->SpawnActorDeferred<AMyCylinderActor>(AMyCylinderActor::StaticClass(), Transform_moving);
            }
            
            //Scene 8: cone->cube
            if(Scene == 8){
                //object1 has 0 initial velocity
                FRotator Rotation_static = FRotator(0.0f, 0.0f, 0.0f);
                FVector Location_static = FVector(200.0f, 15.0f, 0.0f);
                FVector Scale_static = FVector(1.0f, 1.0f, 1.0f);
                Transform_static = FTransform(Rotation_static, Location_static, Scale_static);
                
                Object_static = World->SpawnActorDeferred<AMyCubeActor>(AMyCubeActor::StaticClass(), Transform_static);
                
                //object2 has x initial velocity
                FRotator Rotation_moving = FRotator(0.0f, 135.0f, 0.0f);
                FVector Location_moving = FVector(50.0f, 15.0f, 0.0f);
                FVector Scale_moving = FVector(1.0f, 1.0f, 1.0f);
                Transform_moving = FTransform(Rotation_moving, Location_moving, Scale_moving);
                
                Object_moving = World->SpawnActorDeferred<AMyConeActor>(AMyConeActor::StaticClass(), Transform_moving);
            }
            
            //Scene 9: cone->cylinder_lying
            if(Scene == 9){
                //object1 has 0 initial velocity
                FRotator Rotation_static = FRotator(0.0f, 0.0f, 90.0f);
                FVector Location_static = FVector(200.0f, 0.0f, 15.0f);
                FVector Scale_static = FVector(1.0f, 1.0f, 2.0f);
                Transform_static = FTransform(Rotation_static, Location_static, Scale_static);
                
                Object_static = World->SpawnActorDeferred<AMyCylinderActor>(AMyCylinderActor::StaticClass(), Transform_static);
                
                //object2 has x initial velocity
                FRotator Rotation_moving = FRotator(0.0f, 45.0f, 0.0f);
                FVector Location_moving = FVector(50.0f, 15.0f, 0.0f);
                FVector Scale_moving = FVector(1.0f, 1.0f, 1.0f);
                Transform_moving = FTransform(Rotation_moving, Location_moving, Scale_moving);
                
                Object_moving = World->SpawnActorDeferred<AMyConeActor>(AMyConeActor::StaticClass(), Transform_moving);
                
            }
            
            //Scene 10: lying_wedge->standing_cone
            if(Scene == 10){
                //object1 has 0 initial velocity
                FRotator Rotation_static = FRotator(0.0f, 0.0f, 0.0f);
                FVector Location_static = FVector(200.0f, 15.0f, 0.0f);
                FVector Scale_static = FVector(1.0f, 1.0f, 1.0f);
                Transform_static = FTransform(Rotation_static, Location_static, Scale_static);
                
                Object_static = World->SpawnActorDeferred<AMyConeActor>(AMyConeActor::StaticClass(), Transform_static);
                
                
                //object2 has x initial velocity
                FRotator Rotation_moving = FRotator(0.0f, 0.0f, 90.0f);
                FVector Location_moving = FVector(50.0f, 0.0f, 15.0f);
                FVector Scale_moving = FVector(1.0f, 1.0f, 1.0f);
                Transform_moving = FTransform(Rotation_moving, Location_moving, Scale_moving);
                
                Object_moving = World->SpawnActorDeferred<AMyWedgeActor>(AMyWedgeActor::StaticClass(), Transform_moving);
                
            }
            
            //Scene 11: lying_wedge->shpere
            if(Scene == 11){
                //object1 has 0 initial velocity
                FRotator Rotation_static = FRotator(0.0f, 0.0f, 0.0f);
                FVector Location_static = FVector(200.0f, 15.0f, 0.0f);
                FVector Scale_static = FVector(1.0f, 1.0f, 1.0f);
                Transform_static = FTransform(Rotation_static, Location_static, Scale_static);
                
                Object_static = World->SpawnActorDeferred<AMySphereActor>(AMySphereActor::StaticClass(), Transform_static);
                
                
                //object2 has x initial velocity
                FRotator Rotation_moving = FRotator(0.0f, 0.0f, 90.0f);
                FVector Location_moving = FVector(50.0f, 0.0f, 15.0f);
                FVector Scale_moving = FVector(1.0f, 1.0f, 1.0f);
                Transform_moving = FTransform(Rotation_moving, Location_moving, Scale_moving);
                
                Object_moving = World->SpawnActorDeferred<AMyWedgeActor>(AMyWedgeActor::StaticClass(), Transform_moving);
                
            }
            
            
            
            
            
            
            //Scene 0 is a testing case
            if(Scene == 0){
                //object1 has 0 initial velocity
                FRotator Rotation_static = FRotator(0.0f, 0.0f, 0.0f);
                FVector Location_static = FVector(200.0f, 15.0f, 0.0f);
                FVector Scale_static = FVector(1.0f, 1.0f, 1.0f);
                Transform_static = FTransform(Rotation_static, Location_static, Scale_static);
                
                Object_static = World->SpawnActorDeferred<AMySphereActor>(AMySphereActor::StaticClass(), Transform_static);
                
                //object2 has x initial velocity
//                these are parameters for a cone
                FRotator Rotation_moving = FRotator(0.0f,0.0f, 0.0f);
                FVector Location_moving = FVector(50.0f, 15.0f, 0.0f);
                FVector Scale_moving = FVector(1.0f, 1.0f, 1.0f);
                Transform_moving = FTransform(Rotation_moving, Location_moving, Scale_moving);

                Object_moving = World->SpawnActorDeferred<AMySphereActor>(AMySphereActor::StaticClass(), Transform_moving);

                
            }
            
            if(Object_static){
                SetObjectProperty(Object_static, false, Mass_static, Restitution_static, SerialCounter, Transform_static);
            }
            if(Object_moving){
                SetObjectProperty(Object_moving, true, Mass_moving, Restitution_moving, SerialCounter, Transform_moving);
            }
            
            MovingActualLocation = Object_moving->GetCenterOfMass();
            TraceStart = FVector(0.0f, 15.0f, 15.0f);
            
            
            switch ((int32)ForceLocation) {
                case 1:
                    TraceStart = FVector(0.0f, MovingActualLocation.Y, 1.0f);
                    break;
                case 2:
                    TraceStart = FVector(0.0f, MovingActualLocation.Y, MovingActualLocation.Z);
                    break;
                case 3:
                    switch ((int32)Scene) {
                        case 7:
                            TraceStart = FVector(0.0f, MovingActualLocation.Y, 59.0f);
                            break;
                        default:
                            TraceStart = FVector(0.0f, MovingActualLocation.Y, 29.0f);
                            break;
                    }
                    break;
                default:
                    break;
            }
            
            FVector ImpulseDir = FVector(1.0f, 0.0f, 0.0f);
            FVector TraceEnd = TraceStart + 100.0f*ImpulseDir;
            
            FCollisionQueryParams TraceParams(FName("BLOCKALL"), true, Instigator);
            TraceParams.bTraceAsyncScene = true;
            TraceParams.bReturnPhysicalMaterial = true;
            
            FHitResult Hit(ForceInit);
            GetWorld()->LineTraceSingleByChannel(Hit, TraceStart, TraceEnd, ECC_WorldDynamic, TraceParams);
            
            AActor* HittedActor = Hit.GetActor();
            UPrimitiveComponent* HittedComponent = Hit.GetComponent();
            
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Black, Hit.Location.ToString());
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, MovingActualLocation.ToString());
            
            
            // If we hit an actor, with a component that is simulating physics, apply an impulse
            if ((HittedActor != NULL) && (HittedComponent != NULL) && HittedComponent->IsSimulatingPhysics())
            {
                HittedComponent->AddImpulseAtLocation(ImpulseDir*InitialVelocity, Hit.Location);
            }
            
            
            
            
              //write to file
//                FString SaveDirectory = FString("/Users/TianYe/Documents/CollisionSimulation/Result/test.txt");
//                FString SaveText = FString::FromInt(SerialCounter)+" ";
//                FFileHelper::SaveStringToFile(SaveText, *SaveDirectory, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
//            //end write to file
        }
        
        
        if(SerialCounter >= ParameterArray.Num()){
            World->GetTimerManager().ClearTimer(SpawnTimerHandle);
        }
    }
}

void AMyGameModeBaseVelocityTest::SetObjectProperty(AObjectActor* Object, bool isMoving, const float mass, const float restitution, const float serialnumber, FTransform transform){
    Object->SetObjectMass(mass);
    Object->SetPhyiscalMaterial(0.0f, restitution);
    Object->SetDirectory(serialnumber, isMoving);
    Object->FinishSpawning(transform);
}
