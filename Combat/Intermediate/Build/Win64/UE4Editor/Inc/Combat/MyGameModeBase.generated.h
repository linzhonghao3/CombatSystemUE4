// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBAT_MyGameModeBase_generated_h
#error "MyGameModeBase.generated.h already included, missing '#pragma once' in MyGameModeBase.h"
#endif
#define COMBAT_MyGameModeBase_generated_h

#define Combat_Source_Combat_MyGameModeBase_h_15_SPARSE_DATA
#define Combat_Source_Combat_MyGameModeBase_h_15_RPC_WRAPPERS
#define Combat_Source_Combat_MyGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Combat_Source_Combat_MyGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameModeBase(); \
	friend struct Z_Construct_UClass_AMyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Combat"), NO_API) \
	DECLARE_SERIALIZER(AMyGameModeBase)


#define Combat_Source_Combat_MyGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameModeBase(); \
	friend struct Z_Construct_UClass_AMyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Combat"), NO_API) \
	DECLARE_SERIALIZER(AMyGameModeBase)


#define Combat_Source_Combat_MyGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameModeBase(AMyGameModeBase&&); \
	NO_API AMyGameModeBase(const AMyGameModeBase&); \
public:


#define Combat_Source_Combat_MyGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameModeBase(AMyGameModeBase&&); \
	NO_API AMyGameModeBase(const AMyGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGameModeBase)


#define Combat_Source_Combat_MyGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Combat_Source_Combat_MyGameModeBase_h_12_PROLOG
#define Combat_Source_Combat_MyGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Combat_Source_Combat_MyGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Combat_Source_Combat_MyGameModeBase_h_15_SPARSE_DATA \
	Combat_Source_Combat_MyGameModeBase_h_15_RPC_WRAPPERS \
	Combat_Source_Combat_MyGameModeBase_h_15_INCLASS \
	Combat_Source_Combat_MyGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Combat_Source_Combat_MyGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Combat_Source_Combat_MyGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Combat_Source_Combat_MyGameModeBase_h_15_SPARSE_DATA \
	Combat_Source_Combat_MyGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Combat_Source_Combat_MyGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Combat_Source_Combat_MyGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBAT_API UClass* StaticClass<class AMyGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Combat_Source_Combat_MyGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
