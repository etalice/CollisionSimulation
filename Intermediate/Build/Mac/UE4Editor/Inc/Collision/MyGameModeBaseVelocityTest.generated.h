// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLLISION_MyGameModeBaseVelocityTest_generated_h
#error "MyGameModeBaseVelocityTest.generated.h already included, missing '#pragma once' in MyGameModeBaseVelocityTest.h"
#endif
#define COLLISION_MyGameModeBaseVelocityTest_generated_h

#define Collision_Source_Collision_MyGameModeBaseVelocityTest_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SpawnActors(); \
		P_NATIVE_END; \
	}


#define Collision_Source_Collision_MyGameModeBaseVelocityTest_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SpawnActors(); \
		P_NATIVE_END; \
	}


#define Collision_Source_Collision_MyGameModeBaseVelocityTest_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameModeBaseVelocityTest(); \
	friend COLLISION_API class UClass* Z_Construct_UClass_AMyGameModeBaseVelocityTest(); \
public: \
	DECLARE_CLASS(AMyGameModeBaseVelocityTest, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Collision"), NO_API) \
	DECLARE_SERIALIZER(AMyGameModeBaseVelocityTest) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Collision_Source_Collision_MyGameModeBaseVelocityTest_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameModeBaseVelocityTest(); \
	friend COLLISION_API class UClass* Z_Construct_UClass_AMyGameModeBaseVelocityTest(); \
public: \
	DECLARE_CLASS(AMyGameModeBaseVelocityTest, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Collision"), NO_API) \
	DECLARE_SERIALIZER(AMyGameModeBaseVelocityTest) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Collision_Source_Collision_MyGameModeBaseVelocityTest_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameModeBaseVelocityTest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameModeBaseVelocityTest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameModeBaseVelocityTest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameModeBaseVelocityTest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameModeBaseVelocityTest(AMyGameModeBaseVelocityTest&&); \
	NO_API AMyGameModeBaseVelocityTest(const AMyGameModeBaseVelocityTest&); \
public:


#define Collision_Source_Collision_MyGameModeBaseVelocityTest_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameModeBaseVelocityTest(AMyGameModeBaseVelocityTest&&); \
	NO_API AMyGameModeBaseVelocityTest(const AMyGameModeBaseVelocityTest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameModeBaseVelocityTest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameModeBaseVelocityTest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGameModeBaseVelocityTest)


#define Collision_Source_Collision_MyGameModeBaseVelocityTest_h_24_PRIVATE_PROPERTY_OFFSET
#define Collision_Source_Collision_MyGameModeBaseVelocityTest_h_21_PROLOG
#define Collision_Source_Collision_MyGameModeBaseVelocityTest_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Collision_Source_Collision_MyGameModeBaseVelocityTest_h_24_PRIVATE_PROPERTY_OFFSET \
	Collision_Source_Collision_MyGameModeBaseVelocityTest_h_24_RPC_WRAPPERS \
	Collision_Source_Collision_MyGameModeBaseVelocityTest_h_24_INCLASS \
	Collision_Source_Collision_MyGameModeBaseVelocityTest_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Collision_Source_Collision_MyGameModeBaseVelocityTest_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Collision_Source_Collision_MyGameModeBaseVelocityTest_h_24_PRIVATE_PROPERTY_OFFSET \
	Collision_Source_Collision_MyGameModeBaseVelocityTest_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Collision_Source_Collision_MyGameModeBaseVelocityTest_h_24_INCLASS_NO_PURE_DECLS \
	Collision_Source_Collision_MyGameModeBaseVelocityTest_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Collision_Source_Collision_MyGameModeBaseVelocityTest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
