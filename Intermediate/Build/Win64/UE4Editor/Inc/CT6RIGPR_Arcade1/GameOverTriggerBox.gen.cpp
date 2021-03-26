// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CT6RIGPR_Arcade1/GameOverTriggerBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOverTriggerBox() {}
// Cross Module References
	CT6RIGPR_ARCADE1_API UClass* Z_Construct_UClass_AGameOverTriggerBox_NoRegister();
	CT6RIGPR_ARCADE1_API UClass* Z_Construct_UClass_AGameOverTriggerBox();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_CT6RIGPR_Arcade1();
// End Cross Module References
	void AGameOverTriggerBox::StaticRegisterNativesAGameOverTriggerBox()
	{
	}
	UClass* Z_Construct_UClass_AGameOverTriggerBox_NoRegister()
	{
		return AGameOverTriggerBox::StaticClass();
	}
	struct Z_Construct_UClass_AGameOverTriggerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameOverTriggerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_CT6RIGPR_Arcade1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameOverTriggerBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameOverTriggerBox.h" },
		{ "ModuleRelativePath", "GameOverTriggerBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameOverTriggerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameOverTriggerBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameOverTriggerBox_Statics::ClassParams = {
		&AGameOverTriggerBox::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGameOverTriggerBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGameOverTriggerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameOverTriggerBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameOverTriggerBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameOverTriggerBox, 884434665);
	template<> CT6RIGPR_ARCADE1_API UClass* StaticClass<AGameOverTriggerBox>()
	{
		return AGameOverTriggerBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameOverTriggerBox(Z_Construct_UClass_AGameOverTriggerBox, &AGameOverTriggerBox::StaticClass, TEXT("/Script/CT6RIGPR_Arcade1"), TEXT("AGameOverTriggerBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameOverTriggerBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
