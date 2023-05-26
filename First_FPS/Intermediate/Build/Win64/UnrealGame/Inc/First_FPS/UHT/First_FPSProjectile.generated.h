// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "First_FPSProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FIRST_FPS_First_FPSProjectile_generated_h
#error "First_FPSProjectile.generated.h already included, missing '#pragma once' in First_FPSProjectile.h"
#endif
#define FIRST_FPS_First_FPSProjectile_generated_h

#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_SPARSE_DATA
#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_ACCESSORS
#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirst_FPSProjectile(); \
	friend struct Z_Construct_UClass_AFirst_FPSProjectile_Statics; \
public: \
	DECLARE_CLASS(AFirst_FPSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/First_FPS"), NO_API) \
	DECLARE_SERIALIZER(AFirst_FPSProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFirst_FPSProjectile(); \
	friend struct Z_Construct_UClass_AFirst_FPSProjectile_Statics; \
public: \
	DECLARE_CLASS(AFirst_FPSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/First_FPS"), NO_API) \
	DECLARE_SERIALIZER(AFirst_FPSProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirst_FPSProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirst_FPSProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirst_FPSProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirst_FPSProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirst_FPSProjectile(AFirst_FPSProjectile&&); \
	NO_API AFirst_FPSProjectile(const AFirst_FPSProjectile&); \
public: \
	NO_API virtual ~AFirst_FPSProjectile();


#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirst_FPSProjectile(AFirst_FPSProjectile&&); \
	NO_API AFirst_FPSProjectile(const AFirst_FPSProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirst_FPSProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirst_FPSProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirst_FPSProjectile) \
	NO_API virtual ~AFirst_FPSProjectile();


#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_12_PROLOG
#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_SPARSE_DATA \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_RPC_WRAPPERS \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_ACCESSORS \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_INCLASS \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_SPARSE_DATA \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_ACCESSORS \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRST_FPS_API UClass* StaticClass<class AFirst_FPSProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
