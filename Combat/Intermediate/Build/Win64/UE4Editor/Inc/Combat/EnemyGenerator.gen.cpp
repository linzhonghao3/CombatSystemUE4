// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat/EnemyGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyGenerator() {}
// Cross Module References
	COMBAT_API UClass* Z_Construct_UClass_AEnemyGenerator_NoRegister();
	COMBAT_API UClass* Z_Construct_UClass_AEnemyGenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Combat();
// End Cross Module References
	void AEnemyGenerator::StaticRegisterNativesAEnemyGenerator()
	{
	}
	UClass* Z_Construct_UClass_AEnemyGenerator_NoRegister()
	{
		return AEnemyGenerator::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyGenerator.h" },
		{ "ModuleRelativePath", "EnemyGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyGenerator_Statics::ClassParams = {
		&AEnemyGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyGenerator, 1519946613);
	template<> COMBAT_API UClass* StaticClass<AEnemyGenerator>()
	{
		return AEnemyGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyGenerator(Z_Construct_UClass_AEnemyGenerator, &AEnemyGenerator::StaticClass, TEXT("/Script/Combat"), TEXT("AEnemyGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
