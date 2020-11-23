// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CT6RIGPR_Arcade1/CT6RIGPR_Arcade1Ball.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCT6RIGPR_Arcade1Ball() {}
// Cross Module References
	CT6RIGPR_ARCADE1_API UClass* Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_NoRegister();
	CT6RIGPR_ARCADE1_API UClass* Z_Construct_UClass_ACT6RIGPR_Arcade1Ball();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CT6RIGPR_Arcade1();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACT6RIGPR_Arcade1Ball::StaticRegisterNativesACT6RIGPR_Arcade1Ball()
	{
	}
	UClass* Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_NoRegister()
	{
		return ACT6RIGPR_Arcade1Ball::StaticClass();
	}
	struct Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollTorque_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollTorque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ball_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ball;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CT6RIGPR_Arcade1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CT6RIGPR_Arcade1Ball.h" },
		{ "ModuleRelativePath", "CT6RIGPR_Arcade1Ball.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_RollTorque_MetaData[] = {
		{ "Category", "Ball" },
		{ "Comment", "/** Torque to apply when trying to roll ball */" },
		{ "ModuleRelativePath", "CT6RIGPR_Arcade1Ball.h" },
		{ "ToolTip", "Torque to apply when trying to roll ball" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_RollTorque = { "RollTorque", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACT6RIGPR_Arcade1Ball, RollTorque), METADATA_PARAMS(Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_RollTorque_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_RollTorque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_JumpImpulse_MetaData[] = {
		{ "Category", "Ball" },
		{ "Comment", "/** Vertical impulse to apply when pressing jump */" },
		{ "ModuleRelativePath", "CT6RIGPR_Arcade1Ball.h" },
		{ "ToolTip", "Vertical impulse to apply when pressing jump" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_JumpImpulse = { "JumpImpulse", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACT6RIGPR_Arcade1Ball, JumpImpulse), METADATA_PARAMS(Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_JumpImpulse_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_JumpImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** Camera to view the ball */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CT6RIGPR_Arcade1Ball.h" },
		{ "ToolTip", "Camera to view the ball" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACT6RIGPR_Arcade1Ball, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** Spring arm for positioning the camera above the ball */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CT6RIGPR_Arcade1Ball.h" },
		{ "ToolTip", "Spring arm for positioning the camera above the ball" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACT6RIGPR_Arcade1Ball, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_SpringArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_Ball_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** StaticMesh used for the ball */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CT6RIGPR_Arcade1Ball.h" },
		{ "ToolTip", "StaticMesh used for the ball" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_Ball = { "Ball", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACT6RIGPR_Arcade1Ball, Ball), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_Ball_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_Ball_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_RollTorque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_JumpImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::NewProp_Ball,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACT6RIGPR_Arcade1Ball>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::ClassParams = {
		&ACT6RIGPR_Arcade1Ball::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACT6RIGPR_Arcade1Ball()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACT6RIGPR_Arcade1Ball_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACT6RIGPR_Arcade1Ball, 894204273);
	template<> CT6RIGPR_ARCADE1_API UClass* StaticClass<ACT6RIGPR_Arcade1Ball>()
	{
		return ACT6RIGPR_Arcade1Ball::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACT6RIGPR_Arcade1Ball(Z_Construct_UClass_ACT6RIGPR_Arcade1Ball, &ACT6RIGPR_Arcade1Ball::StaticClass, TEXT("/Script/CT6RIGPR_Arcade1"), TEXT("ACT6RIGPR_Arcade1Ball"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACT6RIGPR_Arcade1Ball);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
