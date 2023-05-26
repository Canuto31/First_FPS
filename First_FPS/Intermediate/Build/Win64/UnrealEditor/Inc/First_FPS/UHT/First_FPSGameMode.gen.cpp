// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "First_FPS/First_FPSGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirst_FPSGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FIRST_FPS_API UClass* Z_Construct_UClass_AFirst_FPSGameMode();
	FIRST_FPS_API UClass* Z_Construct_UClass_AFirst_FPSGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_First_FPS();
// End Cross Module References
	void AFirst_FPSGameMode::StaticRegisterNativesAFirst_FPSGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirst_FPSGameMode);
	UClass* Z_Construct_UClass_AFirst_FPSGameMode_NoRegister()
	{
		return AFirst_FPSGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFirst_FPSGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirst_FPSGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_First_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirst_FPSGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "First_FPSGameMode.h" },
		{ "ModuleRelativePath", "First_FPSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirst_FPSGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirst_FPSGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirst_FPSGameMode_Statics::ClassParams = {
		&AFirst_FPSGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirst_FPSGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirst_FPSGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirst_FPSGameMode()
	{
		if (!Z_Registration_Info_UClass_AFirst_FPSGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirst_FPSGameMode.OuterSingleton, Z_Construct_UClass_AFirst_FPSGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirst_FPSGameMode.OuterSingleton;
	}
	template<> FIRST_FPS_API UClass* StaticClass<AFirst_FPSGameMode>()
	{
		return AFirst_FPSGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirst_FPSGameMode);
	AFirst_FPSGameMode::~AFirst_FPSGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirst_FPSGameMode, AFirst_FPSGameMode::StaticClass, TEXT("AFirst_FPSGameMode"), &Z_Registration_Info_UClass_AFirst_FPSGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirst_FPSGameMode), 795223925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSGameMode_h_3027085733(TEXT("/Script/First_FPS"),
		Z_CompiledInDeferFile_FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_First_FPS_First_FPS_Source_First_FPS_First_FPSGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
