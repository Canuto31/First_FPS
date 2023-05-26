// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirst_FPS_init() {}
	FIRST_FPS_API UFunction* Z_Construct_UDelegateFunction_First_FPS_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_First_FPS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_First_FPS()
	{
		if (!Z_Registration_Info_UPackage__Script_First_FPS.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_First_FPS_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/First_FPS",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5C35AB79,
				0xD4864B98,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_First_FPS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_First_FPS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_First_FPS(Z_Construct_UPackage__Script_First_FPS, TEXT("/Script/First_FPS"), Z_Registration_Info_UPackage__Script_First_FPS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5C35AB79, 0xD4864B98));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
