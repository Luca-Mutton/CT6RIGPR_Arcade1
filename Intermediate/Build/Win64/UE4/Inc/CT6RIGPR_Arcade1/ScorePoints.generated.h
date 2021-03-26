// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CT6RIGPR_ARCADE1_ScorePoints_generated_h
#error "ScorePoints.generated.h already included, missing '#pragma once' in ScorePoints.h"
#endif
#define CT6RIGPR_ARCADE1_ScorePoints_generated_h

#define CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScorePoints(); \
	friend struct Z_Construct_UClass_AScorePoints_Statics; \
public: \
	DECLARE_CLASS(AScorePoints, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CT6RIGPR_Arcade1"), NO_API) \
	DECLARE_SERIALIZER(AScorePoints)


#define CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAScorePoints(); \
	friend struct Z_Construct_UClass_AScorePoints_Statics; \
public: \
	DECLARE_CLASS(AScorePoints, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CT6RIGPR_Arcade1"), NO_API) \
	DECLARE_SERIALIZER(AScorePoints)


#define CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AScorePoints(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScorePoints) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScorePoints); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScorePoints); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScorePoints(AScorePoints&&); \
	NO_API AScorePoints(const AScorePoints&); \
public:


#define CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScorePoints(AScorePoints&&); \
	NO_API AScorePoints(const AScorePoints&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScorePoints); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScorePoints); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScorePoints)


#define CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h_12_PRIVATE_PROPERTY_OFFSET
#define CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h_9_PROLOG
#define CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h_12_PRIVATE_PROPERTY_OFFSET \
	CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h_12_RPC_WRAPPERS \
	CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h_12_INCLASS \
	CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h_12_PRIVATE_PROPERTY_OFFSET \
	CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h_12_INCLASS_NO_PURE_DECLS \
	CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CT6RIGPR_ARCADE1_API UClass* StaticClass<class AScorePoints>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CT6RIGPR_Arcade1_Source_CT6RIGPR_Arcade1_ScorePoints_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
