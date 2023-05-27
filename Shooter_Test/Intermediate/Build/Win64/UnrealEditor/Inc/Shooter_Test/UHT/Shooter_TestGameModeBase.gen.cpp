// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter_Test/Shooter_TestGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooter_TestGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SHOOTER_TEST_API UClass* Z_Construct_UClass_AShooter_TestGameModeBase();
	SHOOTER_TEST_API UClass* Z_Construct_UClass_AShooter_TestGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Shooter_Test();
// End Cross Module References
	void AShooter_TestGameModeBase::StaticRegisterNativesAShooter_TestGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooter_TestGameModeBase);
	UClass* Z_Construct_UClass_AShooter_TestGameModeBase_NoRegister()
	{
		return AShooter_TestGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AShooter_TestGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooter_TestGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter_Test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooter_TestGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Shooter_TestGameModeBase.h" },
		{ "ModuleRelativePath", "Shooter_TestGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooter_TestGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooter_TestGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooter_TestGameModeBase_Statics::ClassParams = {
		&AShooter_TestGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShooter_TestGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_TestGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooter_TestGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AShooter_TestGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooter_TestGameModeBase.OuterSingleton, Z_Construct_UClass_AShooter_TestGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooter_TestGameModeBase.OuterSingleton;
	}
	template<> SHOOTER_TEST_API UClass* StaticClass<AShooter_TestGameModeBase>()
	{
		return AShooter_TestGameModeBase::StaticClass();
	}
	AShooter_TestGameModeBase::AShooter_TestGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooter_TestGameModeBase);
	AShooter_TestGameModeBase::~AShooter_TestGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Unreal_First_FPS_Shooter_Test_Source_Shooter_Test_Shooter_TestGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_First_FPS_Shooter_Test_Source_Shooter_Test_Shooter_TestGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooter_TestGameModeBase, AShooter_TestGameModeBase::StaticClass, TEXT("AShooter_TestGameModeBase"), &Z_Registration_Info_UClass_AShooter_TestGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooter_TestGameModeBase), 3739901851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_First_FPS_Shooter_Test_Source_Shooter_Test_Shooter_TestGameModeBase_h_1128363117(TEXT("/Script/Shooter_Test"),
		Z_CompiledInDeferFile_FID_Unreal_First_FPS_Shooter_Test_Source_Shooter_Test_Shooter_TestGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_First_FPS_Shooter_Test_Source_Shooter_Test_Shooter_TestGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
