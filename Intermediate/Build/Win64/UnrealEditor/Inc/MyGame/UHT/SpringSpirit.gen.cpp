// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/Ability/SpringSpirit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpringSpirit() {}
// Cross Module References
	MYGAME_API UClass* Z_Construct_UClass_UAbility();
	MYGAME_API UClass* Z_Construct_UClass_USpringSpirit();
	MYGAME_API UClass* Z_Construct_UClass_USpringSpirit_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	void USpringSpirit::StaticRegisterNativesUSpringSpirit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpringSpirit);
	UClass* Z_Construct_UClass_USpringSpirit_NoRegister()
	{
		return USpringSpirit::StaticClass();
	}
	struct Z_Construct_UClass_USpringSpirit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpringSpirit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringSpirit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ability/SpringSpirit.h" },
		{ "ModuleRelativePath", "Public/Ability/SpringSpirit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpringSpirit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpringSpirit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpringSpirit_Statics::ClassParams = {
		&USpringSpirit::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpringSpirit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpringSpirit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpringSpirit()
	{
		if (!Z_Registration_Info_UClass_USpringSpirit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpringSpirit.OuterSingleton, Z_Construct_UClass_USpringSpirit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpringSpirit.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<USpringSpirit>()
	{
		return USpringSpirit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpringSpirit);
	USpringSpirit::~USpringSpirit() {}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_SpringSpirit_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_SpringSpirit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpringSpirit, USpringSpirit::StaticClass, TEXT("USpringSpirit"), &Z_Registration_Info_UClass_USpringSpirit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpringSpirit), 691767801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_SpringSpirit_h_3670706207(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_SpringSpirit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_SpringSpirit_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
