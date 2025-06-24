// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/Ability/SilentDoctor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSilentDoctor() {}
// Cross Module References
	MYGAME_API UClass* Z_Construct_UClass_UAbility();
	MYGAME_API UClass* Z_Construct_UClass_USilentDoctor();
	MYGAME_API UClass* Z_Construct_UClass_USilentDoctor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	void USilentDoctor::StaticRegisterNativesUSilentDoctor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USilentDoctor);
	UClass* Z_Construct_UClass_USilentDoctor_NoRegister()
	{
		return USilentDoctor::StaticClass();
	}
	struct Z_Construct_UClass_USilentDoctor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USilentDoctor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USilentDoctor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ability/SilentDoctor.h" },
		{ "ModuleRelativePath", "Public/Ability/SilentDoctor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USilentDoctor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USilentDoctor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USilentDoctor_Statics::ClassParams = {
		&USilentDoctor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USilentDoctor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USilentDoctor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USilentDoctor()
	{
		if (!Z_Registration_Info_UClass_USilentDoctor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USilentDoctor.OuterSingleton, Z_Construct_UClass_USilentDoctor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USilentDoctor.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<USilentDoctor>()
	{
		return USilentDoctor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USilentDoctor);
	USilentDoctor::~USilentDoctor() {}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_SilentDoctor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_SilentDoctor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USilentDoctor, USilentDoctor::StaticClass, TEXT("USilentDoctor"), &Z_Registration_Info_UClass_USilentDoctor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USilentDoctor), 1475586272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_SilentDoctor_h_1681278959(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_SilentDoctor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_SilentDoctor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
