// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Collision.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Collision() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API class UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();

	COLLISION_API class UClass* Z_Construct_UClass_ACollisionGameModeBase_NoRegister();
	COLLISION_API class UClass* Z_Construct_UClass_ACollisionGameModeBase();
	COLLISION_API class UClass* Z_Construct_UClass_AMyFloor_NoRegister();
	COLLISION_API class UClass* Z_Construct_UClass_AMyFloor();
	COLLISION_API class UFunction* Z_Construct_UFunction_AObjectActor_OnHit();
	COLLISION_API class UClass* Z_Construct_UClass_AObjectActor_NoRegister();
	COLLISION_API class UClass* Z_Construct_UClass_AObjectActor();
	COLLISION_API class UClass* Z_Construct_UClass_AMyCubeActor_NoRegister();
	COLLISION_API class UClass* Z_Construct_UClass_AMyCubeActor();
	COLLISION_API class UClass* Z_Construct_UClass_AMySphereActor_NoRegister();
	COLLISION_API class UClass* Z_Construct_UClass_AMySphereActor();
	COLLISION_API class UClass* Z_Construct_UClass_AMyCylinderActor_NoRegister();
	COLLISION_API class UClass* Z_Construct_UClass_AMyCylinderActor();
	COLLISION_API class UClass* Z_Construct_UClass_AMyLyingCylinderActor_NoRegister();
	COLLISION_API class UClass* Z_Construct_UClass_AMyLyingCylinderActor();
	COLLISION_API class UClass* Z_Construct_UClass_AMyConeActor_NoRegister();
	COLLISION_API class UClass* Z_Construct_UClass_AMyConeActor();
	COLLISION_API class UClass* Z_Construct_UClass_AMyWedgeActor_NoRegister();
	COLLISION_API class UClass* Z_Construct_UClass_AMyWedgeActor();
	COLLISION_API class UFunction* Z_Construct_UFunction_AMyGameModeBaseVelocityTest_SpawnActors();
	COLLISION_API class UClass* Z_Construct_UClass_AMyGameModeBaseVelocityTest_NoRegister();
	COLLISION_API class UClass* Z_Construct_UClass_AMyGameModeBaseVelocityTest();
	COLLISION_API class UFunction* Z_Construct_UFunction_AMyStartActor_OnHit();
	COLLISION_API class UClass* Z_Construct_UClass_AMyStartActor_NoRegister();
	COLLISION_API class UClass* Z_Construct_UClass_AMyStartActor();
	COLLISION_API class UFunction* Z_Construct_UFunction_AStaticCube_OnHit();
	COLLISION_API class UClass* Z_Construct_UClass_AStaticCube_NoRegister();
	COLLISION_API class UClass* Z_Construct_UClass_AStaticCube();
	COLLISION_API class UPackage* Z_Construct_UPackage__Script_Collision();
	void ACollisionGameModeBase::StaticRegisterNativesACollisionGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACollisionGameModeBase_NoRegister()
	{
		return ACollisionGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ACollisionGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Collision();
			OuterClass = ACollisionGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ACollisionGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CollisionGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CollisionGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACollisionGameModeBase, 4008424315);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACollisionGameModeBase(Z_Construct_UClass_ACollisionGameModeBase, &ACollisionGameModeBase::StaticClass, TEXT("/Script/Collision"), TEXT("ACollisionGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollisionGameModeBase);
	void AMyFloor::StaticRegisterNativesAMyFloor()
	{
	}
	UClass* Z_Construct_UClass_AMyFloor_NoRegister()
	{
		return AMyFloor::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyFloor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Collision();
			OuterClass = AMyFloor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_PhysicsProperty = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PhysicsProperty"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PhysicsProperty, AMyFloor), 0x0010000000000005, Z_Construct_UClass_UPhysicalMaterial_NoRegister());
				UProperty* NewProp_FloorMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FloorMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FloorMaterial, AMyFloor), 0x0010000000000005, Z_Construct_UClass_UMaterial_NoRegister());
				UProperty* NewProp_MeshComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MeshComponent, AMyFloor), 0x00100000000b0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_CollisionComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollisionComponent, AMyFloor), 0x00100000000b0009, Z_Construct_UClass_UBoxComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyFloor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyFloor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyFloor.h"));
				MetaData->SetValue(NewProp_PhysicsProperty, TEXT("Category"), TEXT("Materials"));
				MetaData->SetValue(NewProp_PhysicsProperty, TEXT("ModuleRelativePath"), TEXT("MyFloor.h"));
				MetaData->SetValue(NewProp_FloorMaterial, TEXT("Category"), TEXT("Materials"));
				MetaData->SetValue(NewProp_FloorMaterial, TEXT("ModuleRelativePath"), TEXT("MyFloor.h"));
				MetaData->SetValue(NewProp_MeshComponent, TEXT("Category"), TEXT("Static"));
				MetaData->SetValue(NewProp_MeshComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MeshComponent, TEXT("ModuleRelativePath"), TEXT("MyFloor.h"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("Category"), TEXT("Static"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("ModuleRelativePath"), TEXT("MyFloor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyFloor, 3411998188);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyFloor(Z_Construct_UClass_AMyFloor, &AMyFloor::StaticClass, TEXT("/Script/Collision"), TEXT("AMyFloor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyFloor);
	void AObjectActor::StaticRegisterNativesAObjectActor()
	{
		UClass* Class = AObjectActor::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHit", (Native)&AObjectActor::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_AObjectActor_OnHit()
	{
		struct ObjectActor_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_AObjectActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(ObjectActor_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, ObjectActor_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, ObjectActor_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComponent, ObjectActor_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, ObjectActor_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComponent, ObjectActor_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ObjectActor.h"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AObjectActor_NoRegister()
	{
		return AObjectActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AObjectActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Collision();
			OuterClass = AObjectActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AObjectActor_OnHit());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MeshComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MeshComponent, AObjectActor), 0x00100000000b0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AObjectActor_OnHit(), "OnHit"); // 3201912958
				static TCppClassTypeInfo<TCppClassTypeTraits<AObjectActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ObjectActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ObjectActor.h"));
				MetaData->SetValue(NewProp_MeshComponent, TEXT("Category"), TEXT("Static"));
				MetaData->SetValue(NewProp_MeshComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MeshComponent, TEXT("ModuleRelativePath"), TEXT("ObjectActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjectActor, 1422647892);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjectActor(Z_Construct_UClass_AObjectActor, &AObjectActor::StaticClass, TEXT("/Script/Collision"), TEXT("AObjectActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjectActor);
	void AMyCubeActor::StaticRegisterNativesAMyCubeActor()
	{
	}
	UClass* Z_Construct_UClass_AMyCubeActor_NoRegister()
	{
		return AMyCubeActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyCubeActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AObjectActor();
			Z_Construct_UPackage__Script_Collision();
			OuterClass = AMyCubeActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AMyCubeActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyCubeActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyCubeActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCubeActor, 3495034777);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCubeActor(Z_Construct_UClass_AMyCubeActor, &AMyCubeActor::StaticClass, TEXT("/Script/Collision"), TEXT("AMyCubeActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCubeActor);
	void AMySphereActor::StaticRegisterNativesAMySphereActor()
	{
	}
	UClass* Z_Construct_UClass_AMySphereActor_NoRegister()
	{
		return AMySphereActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AMySphereActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AObjectActor();
			Z_Construct_UPackage__Script_Collision();
			OuterClass = AMySphereActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AMySphereActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MySphereActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MySphereActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMySphereActor, 2972721596);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMySphereActor(Z_Construct_UClass_AMySphereActor, &AMySphereActor::StaticClass, TEXT("/Script/Collision"), TEXT("AMySphereActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMySphereActor);
	void AMyCylinderActor::StaticRegisterNativesAMyCylinderActor()
	{
	}
	UClass* Z_Construct_UClass_AMyCylinderActor_NoRegister()
	{
		return AMyCylinderActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyCylinderActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AObjectActor();
			Z_Construct_UPackage__Script_Collision();
			OuterClass = AMyCylinderActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AMyCylinderActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyCylinderActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyCylinderActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCylinderActor, 1186944078);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCylinderActor(Z_Construct_UClass_AMyCylinderActor, &AMyCylinderActor::StaticClass, TEXT("/Script/Collision"), TEXT("AMyCylinderActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCylinderActor);
	void AMyLyingCylinderActor::StaticRegisterNativesAMyLyingCylinderActor()
	{
	}
	UClass* Z_Construct_UClass_AMyLyingCylinderActor_NoRegister()
	{
		return AMyLyingCylinderActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyLyingCylinderActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AObjectActor();
			Z_Construct_UPackage__Script_Collision();
			OuterClass = AMyLyingCylinderActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AMyLyingCylinderActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyLyingCylinderActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyLyingCylinderActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyLyingCylinderActor, 3235010852);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyLyingCylinderActor(Z_Construct_UClass_AMyLyingCylinderActor, &AMyLyingCylinderActor::StaticClass, TEXT("/Script/Collision"), TEXT("AMyLyingCylinderActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyLyingCylinderActor);
	void AMyConeActor::StaticRegisterNativesAMyConeActor()
	{
	}
	UClass* Z_Construct_UClass_AMyConeActor_NoRegister()
	{
		return AMyConeActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyConeActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AObjectActor();
			Z_Construct_UPackage__Script_Collision();
			OuterClass = AMyConeActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AMyConeActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyConeActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyConeActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyConeActor, 2309615688);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyConeActor(Z_Construct_UClass_AMyConeActor, &AMyConeActor::StaticClass, TEXT("/Script/Collision"), TEXT("AMyConeActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyConeActor);
	void AMyWedgeActor::StaticRegisterNativesAMyWedgeActor()
	{
	}
	UClass* Z_Construct_UClass_AMyWedgeActor_NoRegister()
	{
		return AMyWedgeActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyWedgeActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AObjectActor();
			Z_Construct_UPackage__Script_Collision();
			OuterClass = AMyWedgeActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AMyWedgeActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyWedgeActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyWedgeActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyWedgeActor, 4009177124);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyWedgeActor(Z_Construct_UClass_AMyWedgeActor, &AMyWedgeActor::StaticClass, TEXT("/Script/Collision"), TEXT("AMyWedgeActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyWedgeActor);
	void AMyGameModeBaseVelocityTest::StaticRegisterNativesAMyGameModeBaseVelocityTest()
	{
		UClass* Class = AMyGameModeBaseVelocityTest::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "SpawnActors", (Native)&AMyGameModeBaseVelocityTest::execSpawnActors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_AMyGameModeBaseVelocityTest_SpawnActors()
	{
		UObject* Outer=Z_Construct_UClass_AMyGameModeBaseVelocityTest();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SpawnActors"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyGameModeBaseVelocityTest.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyGameModeBaseVelocityTest_NoRegister()
	{
		return AMyGameModeBaseVelocityTest::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyGameModeBaseVelocityTest()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Collision();
			OuterClass = AMyGameModeBaseVelocityTest::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;

				OuterClass->LinkChild(Z_Construct_UFunction_AMyGameModeBaseVelocityTest_SpawnActors());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_SpawnTimerHandle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpawnTimerHandle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SpawnTimerHandle, AMyGameModeBaseVelocityTest), 0x0010000000000000, Z_Construct_UScriptStruct_FTimerHandle());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyGameModeBaseVelocityTest_SpawnActors(), "SpawnActors"); // 19214750
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyGameModeBaseVelocityTest> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyGameModeBaseVelocityTest.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyGameModeBaseVelocityTest.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_SpawnTimerHandle, TEXT("ModuleRelativePath"), TEXT("MyGameModeBaseVelocityTest.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGameModeBaseVelocityTest, 3821764271);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGameModeBaseVelocityTest(Z_Construct_UClass_AMyGameModeBaseVelocityTest, &AMyGameModeBaseVelocityTest::StaticClass, TEXT("/Script/Collision"), TEXT("AMyGameModeBaseVelocityTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameModeBaseVelocityTest);
	void AMyStartActor::StaticRegisterNativesAMyStartActor()
	{
		UClass* Class = AMyStartActor::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHit", (Native)&AMyStartActor::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_AMyStartActor_OnHit()
	{
		struct MyStartActor_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_AMyStartActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(MyStartActor_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, MyStartActor_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, MyStartActor_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComponent, MyStartActor_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, MyStartActor_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComponent, MyStartActor_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyStartActor.h"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyStartActor_NoRegister()
	{
		return AMyStartActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyStartActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Collision();
			OuterClass = AMyStartActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AMyStartActor_OnHit());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MeshComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MeshComponent, AMyStartActor), 0x00100000000b0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyStartActor_OnHit(), "OnHit"); // 425707590
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyStartActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyStartActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyStartActor.h"));
				MetaData->SetValue(NewProp_MeshComponent, TEXT("Category"), TEXT("Static"));
				MetaData->SetValue(NewProp_MeshComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MeshComponent, TEXT("ModuleRelativePath"), TEXT("MyStartActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyStartActor, 1711948528);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyStartActor(Z_Construct_UClass_AMyStartActor, &AMyStartActor::StaticClass, TEXT("/Script/Collision"), TEXT("AMyStartActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyStartActor);
	void AStaticCube::StaticRegisterNativesAStaticCube()
	{
		UClass* Class = AStaticCube::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHit", (Native)&AStaticCube::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_AStaticCube_OnHit()
	{
		struct StaticCube_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_AStaticCube();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(StaticCube_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, StaticCube_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, StaticCube_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComponent, StaticCube_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, StaticCube_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComponent, StaticCube_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("StaticCube.h"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStaticCube_NoRegister()
	{
		return AStaticCube::StaticClass();
	}
	UClass* Z_Construct_UClass_AStaticCube()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Collision();
			OuterClass = AStaticCube::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AStaticCube_OnHit());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ProjectileMovementComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileMovementComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ProjectileMovementComponent, AStaticCube), 0x00100000000a0009, Z_Construct_UClass_UProjectileMovementComponent_NoRegister());
				UProperty* NewProp_MeshComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MeshComponent, AStaticCube), 0x00100000000b0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_CollisionComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollisionComponent, AStaticCube), 0x00100000000b0009, Z_Construct_UClass_UBoxComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AStaticCube_OnHit(), "OnHit"); // 3892750216
				static TCppClassTypeInfo<TCppClassTypeTraits<AStaticCube> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("StaticCube.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("StaticCube.h"));
				MetaData->SetValue(NewProp_ProjectileMovementComponent, TEXT("Category"), TEXT("Movement"));
				MetaData->SetValue(NewProp_ProjectileMovementComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovementComponent, TEXT("ModuleRelativePath"), TEXT("StaticCube.h"));
				MetaData->SetValue(NewProp_MeshComponent, TEXT("Category"), TEXT("Static"));
				MetaData->SetValue(NewProp_MeshComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MeshComponent, TEXT("ModuleRelativePath"), TEXT("StaticCube.h"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("Category"), TEXT("Static"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("ModuleRelativePath"), TEXT("StaticCube.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStaticCube, 58418565);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStaticCube(Z_Construct_UClass_AStaticCube, &AStaticCube::StaticClass, TEXT("/Script/Collision"), TEXT("AStaticCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStaticCube);
	UPackage* Z_Construct_UPackage__Script_Collision()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Collision")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x646326C6;
			Guid.B = 0x7DD363D0;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
