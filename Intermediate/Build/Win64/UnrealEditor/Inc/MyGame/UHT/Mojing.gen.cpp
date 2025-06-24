// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/Ability/Mojing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMojing() {}
// Cross Module References
	MYGAME_API UClass* Z_Construct_UClass_UAbility();
	MYGAME_API UClass* Z_Construct_UClass_UMojing();
	MYGAME_API UClass* Z_Construct_UClass_UMojing_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	void UMojing::StaticRegisterNativesUMojing()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMojing);
	UClass* Z_Construct_UClass_UMojing_NoRegister()
	{
		return UMojing::StaticClass();
	}
	struct Z_Construct_UClass_UMojing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMojing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMojing_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ability/Mojing.h" },
		{ "ModuleRelativePath", "Public/Ability/Mojing.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMojing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMojing>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMojing_Statics::ClassParams = {
		&UMojing::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMojing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMojing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMojing()
	{
		if (!Z_Registration_Info_UClass_UMojing.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMojing.OuterSingleton, Z_Construct_UClass_UMojing_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMojing.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<UMojing>()
	{
		return UMojing::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMojing);
	UMojing::~UMojing() {}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_Mojing_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_Mojing_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMojing, UMojing::StaticClass, TEXT("UMojing"), &Z_Registration_Info_UClass_UMojing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMojing), 1509571204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_Mojing_h_447718052(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_Mojing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_Mojing_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
