// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBAT_EnemyGenerator_generated_h
#error "EnemyGenerator.generated.h already included, missing '#pragma once' in EnemyGenerator.h"
#endif
#define COMBAT_EnemyGenerator_generated_h

#define Combat_Source_Combat_EnemyGenerator_h_12_SPARSE_DATA
#define Combat_Source_Combat_EnemyGenerator_h_12_RPC_WRAPPERS
#define Combat_Source_Combat_EnemyGenerator_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Combat_Source_Combat_EnemyGenerator_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyGenerator(); \
	friend struct Z_Construct_UClass_AEnemyGenerator_Statics; \
public: \
	DECLARE_CLASS(AEnemyGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Combat"), NO_API) \
	DECLARE_SERIALIZER(AEnemyGenerator)


#define Combat_Source_Combat_EnemyGenerator_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyGenerator(); \
	friend struct Z_Construct_UClass_AEnemyGenerator_Statics; \
public: \
	DECLARE_CLASS(AEnemyGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Combat"), NO_API) \
	DECLARE_SERIALIZER(AEnemyGenerator)


#define Combat_Source_Combat_EnemyGenerator_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyGenerator(AEnemyGenerator&&); \
	NO_API AEnemyGenerator(const AEnemyGenerator&); \
public:


#define Combat_Source_Combat_EnemyGenerator_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyGenerator(AEnemyGenerator&&); \
	NO_API AEnemyGenerator(const AEnemyGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyGenerator)


#define Combat_Source_Combat_EnemyGenerator_h_12_PRIVATE_PROPERTY_OFFSET
#define Combat_Source_Combat_EnemyGenerator_h_9_PROLOG
#define Combat_Source_Combat_EnemyGenerator_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Combat_Source_Combat_EnemyGenerator_h_12_PRIVATE_PROPERTY_OFFSET \
	Combat_Source_Combat_EnemyGenerator_h_12_SPARSE_DATA \
	Combat_Source_Combat_EnemyGenerator_h_12_RPC_WRAPPERS \
	Combat_Source_Combat_EnemyGenerator_h_12_INCLASS \
	Combat_Source_Combat_EnemyGenerator_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Combat_Source_Combat_EnemyGenerator_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Combat_Source_Combat_EnemyGenerator_h_12_PRIVATE_PROPERTY_OFFSET \
	Combat_Source_Combat_EnemyGenerator_h_12_SPARSE_DATA \
	Combat_Source_Combat_EnemyGenerator_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Combat_Source_Combat_EnemyGenerator_h_12_INCLASS_NO_PURE_DECLS \
	Combat_Source_Combat_EnemyGenerator_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBAT_API UClass* StaticClass<class AEnemyGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Combat_Source_Combat_EnemyGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
