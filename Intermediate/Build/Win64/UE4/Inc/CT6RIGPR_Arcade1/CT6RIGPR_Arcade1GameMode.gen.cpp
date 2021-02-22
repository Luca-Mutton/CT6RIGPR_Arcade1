// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CT6RIGPR_Arcade1/CT6RIGPR_Arcade1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCT6RIGPR_Arcade1GameMode() {}
// Cross Module References
	CT6RIGPR_ARCADE1_API UClass* Z_Construct_UClass_ACT6RIGPR_Arcade1GameMode_NoRegister();
	CT6RIGPR_ARCADE1_API UClass* Z_Construct_UClass_ACT6RIGPR_Arcade1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CT6RIGPR_Arcade1();
// End Cross Module References
	void ACT6RIGPR_Arcade1GameMode::StaticRegisterNativesACT6RIGPR_Arcade1GameMode()
	{
	}
	UClass* Z_Construct_UClass_ACT6RIGPR_Arcade1GameMode_NoRegister()
	{
		return ACT6RIGPR_Arcade1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACT6RIGPR_Arcade1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACT6RIGPR_Arcade1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CT6RIGPR_Arcade1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACT6RIGPR_Arcade1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CT6RIGPR_Arcade1GameMode.h" },
		{ "ModuleRelativePath", "CT6RIGPR_Arcade1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACT6RIGPR_Arcade1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACT6RIGPR_Arcade1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACT6RIGPR_Arcade1GameMode_Statics::ClassParams = {
		&ACT6RIGPR_Arcade1GameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ACT6RIGPR_Arcade1GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACT6RIGPR_Arcade1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACT6RIGPR_Arcade1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACT6RIGPR_Arcade1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACT6RIGPR_Arcade1GameMode, 1119577665);
	template<> CT6RIGPR_ARCADE1_API UClass* StaticClass<ACT6RIGPR_Arcade1GameMode>()
	{
		return ACT6RIGPR_Arcade1GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACT6RIGPR_Arcade1GameMode(Z_Construct_UClass_ACT6RIGPR_Arcade1GameMode, &ACT6RIGPR_Arcade1GameMode::StaticClass, TEXT("/Script/CT6RIGPR_Arcade1"), TEXT("ACT6RIGPR_Arcade1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACT6RIGPR_Arcade1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
