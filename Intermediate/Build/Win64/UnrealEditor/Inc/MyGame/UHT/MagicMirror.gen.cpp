// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/Ability/MagicMirror.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicMirror() {}
// Cross Module References
	MYGAME_API UClass* Z_Construct_UClass_UAbility();
	MYGAME_API UClass* Z_Construct_UClass_UMagicMirror();
	MYGAME_API UClass* Z_Construct_UClass_UMagicMirror_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	void UMagicMirror::StaticRegisterNativesUMagicMirror()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMagicMirror);
	UClass* Z_Construct_UClass_UMagicMirror_NoRegister()
	{
		return UMagicMirror::StaticClass();
	}
	struct Z_Construct_UClass_UMagicMirror_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicMirror_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicMirror_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ability/MagicMirror.h" },
		{ "ModuleRelativePath", "Public/Ability/MagicMirror.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicMirror_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicMirror>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMagicMirror_Statics::ClassParams = {
		&UMagicMirror::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMagicMirror_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicMirror_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicMirror()
	{
		if (!Z_Registration_Info_UClass_UMagicMirror.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMagicMirror.OuterSingleton, Z_Construct_UClass_UMagicMirror_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMagicMirror.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<UMagicMirror>()
	{
		return UMagicMirror::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicMirror);
	UMagicMirror::~UMagicMirror() {}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_MagicMirror_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_MagicMirror_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMagicMirror, UMagicMirror::StaticClass, TEXT("UMagicMirror"), &Z_Registration_Info_UClass_UMagicMirror, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMagicMirror), 1433742360U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_MagicMirror_h_3572600916(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_MagicMirror_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_MagicMirror_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
