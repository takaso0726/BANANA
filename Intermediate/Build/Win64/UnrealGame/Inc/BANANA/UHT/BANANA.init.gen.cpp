// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBANANA_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BANANA;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BANANA()
	{
		if (!Z_Registration_Info_UPackage__Script_BANANA.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/BANANA",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0x8DD5BB09,
			0xC3892138,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BANANA.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_BANANA.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BANANA(Z_Construct_UPackage__Script_BANANA, TEXT("/Script/BANANA"), Z_Registration_Info_UPackage__Script_BANANA, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8DD5BB09, 0xC3892138));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
