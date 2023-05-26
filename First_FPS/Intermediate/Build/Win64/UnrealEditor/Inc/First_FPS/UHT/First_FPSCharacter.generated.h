// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "First_FPSCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRST_FPS_First_FPSCharacter_generated_h
#error "First_FPSCharacter.generated.h already included, missing '#pragma once' in First_FPSCharacter.h"
#endif
#define FIRST_FPS_First_FPSCharacter_generated_h

#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_SPARSE_DATA
#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle);


#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle);


#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_ACCESSORS
#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirst_FPSCharacter(); \
	friend struct Z_Construct_UClass_AFirst_FPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirst_FPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/First_FPS"), NO_API) \
	DECLARE_SERIALIZER(AFirst_FPSCharacter)


#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFirst_FPSCharacter(); \
	friend struct Z_Construct_UClass_AFirst_FPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirst_FPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/First_FPS"), NO_API) \
	DECLARE_SERIALIZER(AFirst_FPSCharacter)


#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirst_FPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirst_FPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirst_FPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirst_FPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirst_FPSCharacter(AFirst_FPSCharacter&&); \
	NO_API AFirst_FPSCharacter(const AFirst_FPSCharacter&); \
public: \
	NO_API virtual ~AFirst_FPSCharacter();


#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirst_FPSCharacter(AFirst_FPSCharacter&&); \
	NO_API AFirst_FPSCharacter(const AFirst_FPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirst_FPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirst_FPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirst_FPSCharacter) \
	NO_API virtual ~AFirst_FPSCharacter();


#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_17_PROLOG
#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_SPARSE_DATA \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_RPC_WRAPPERS \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_ACCESSORS \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_INCLASS \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_SPARSE_DATA \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_ACCESSORS \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRST_FPS_API UClass* StaticClass<class AFirst_FPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
