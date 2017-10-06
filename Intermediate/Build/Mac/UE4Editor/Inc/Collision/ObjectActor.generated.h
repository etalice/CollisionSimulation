// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef COLLISION_ObjectActor_generated_h
#error "ObjectActor.generated.h already included, missing '#pragma once' in ObjectActor.h"
#endif
#define COLLISION_ObjectActor_generated_h

#define Collision_Source_Collision_ObjectActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Collision_Source_Collision_ObjectActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Collision_Source_Collision_ObjectActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObjectActor(); \
	friend COLLISION_API class UClass* Z_Construct_UClass_AObjectActor(); \
public: \
	DECLARE_CLASS(AObjectActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Collision"), NO_API) \
	DECLARE_SERIALIZER(AObjectActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Collision_Source_Collision_ObjectActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAObjectActor(); \
	friend COLLISION_API class UClass* Z_Construct_UClass_AObjectActor(); \
public: \
	DECLARE_CLASS(AObjectActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Collision"), NO_API) \
	DECLARE_SERIALIZER(AObjectActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Collision_Source_Collision_ObjectActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObjectActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObjectActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObjectActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObjectActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObjectActor(AObjectActor&&); \
	NO_API AObjectActor(const AObjectActor&); \
public:


#define Collision_Source_Collision_ObjectActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObjectActor(AObjectActor&&); \
	NO_API AObjectActor(const AObjectActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObjectActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObjectActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObjectActor)


#define Collision_Source_Collision_ObjectActor_h_15_PRIVATE_PROPERTY_OFFSET
#define Collision_Source_Collision_ObjectActor_h_12_PROLOG
#define Collision_Source_Collision_ObjectActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Collision_Source_Collision_ObjectActor_h_15_PRIVATE_PROPERTY_OFFSET \
	Collision_Source_Collision_ObjectActor_h_15_RPC_WRAPPERS \
	Collision_Source_Collision_ObjectActor_h_15_INCLASS \
	Collision_Source_Collision_ObjectActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Collision_Source_Collision_ObjectActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Collision_Source_Collision_ObjectActor_h_15_PRIVATE_PROPERTY_OFFSET \
	Collision_Source_Collision_ObjectActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Collision_Source_Collision_ObjectActor_h_15_INCLASS_NO_PURE_DECLS \
	Collision_Source_Collision_ObjectActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Collision_Source_Collision_ObjectActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
