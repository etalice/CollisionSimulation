// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLLISION_CollisionGameModeBase_generated_h
#error "CollisionGameModeBase.generated.h already included, missing '#pragma once' in CollisionGameModeBase.h"
#endif
#define COLLISION_CollisionGameModeBase_generated_h

#define Collision_Source_Collision_CollisionGameModeBase_h_15_RPC_WRAPPERS
#define Collision_Source_Collision_CollisionGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Collision_Source_Collision_CollisionGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollisionGameModeBase(); \
	friend COLLISION_API class UClass* Z_Construct_UClass_ACollisionGameModeBase(); \
public: \
	DECLARE_CLASS(ACollisionGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Collision"), NO_API) \
	DECLARE_SERIALIZER(ACollisionGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Collision_Source_Collision_CollisionGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACollisionGameModeBase(); \
	friend COLLISION_API class UClass* Z_Construct_UClass_ACollisionGameModeBase(); \
public: \
	DECLARE_CLASS(ACollisionGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Collision"), NO_API) \
	DECLARE_SERIALIZER(ACollisionGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Collision_Source_Collision_CollisionGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollisionGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollisionGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollisionGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollisionGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollisionGameModeBase(ACollisionGameModeBase&&); \
	NO_API ACollisionGameModeBase(const ACollisionGameModeBase&); \
public:


#define Collision_Source_Collision_CollisionGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollisionGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollisionGameModeBase(ACollisionGameModeBase&&); \
	NO_API ACollisionGameModeBase(const ACollisionGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollisionGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollisionGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollisionGameModeBase)


#define Collision_Source_Collision_CollisionGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Collision_Source_Collision_CollisionGameModeBase_h_12_PROLOG
#define Collision_Source_Collision_CollisionGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Collision_Source_Collision_CollisionGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Collision_Source_Collision_CollisionGameModeBase_h_15_RPC_WRAPPERS \
	Collision_Source_Collision_CollisionGameModeBase_h_15_INCLASS \
	Collision_Source_Collision_CollisionGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Collision_Source_Collision_CollisionGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Collision_Source_Collision_CollisionGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Collision_Source_Collision_CollisionGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Collision_Source_Collision_CollisionGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Collision_Source_Collision_CollisionGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Collision_Source_Collision_CollisionGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
