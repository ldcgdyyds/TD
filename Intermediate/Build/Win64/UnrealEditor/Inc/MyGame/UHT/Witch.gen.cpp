// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/Ability/Witch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitch() {}
// Cross Module References
	MYGAME_API UClass* Z_Construct_UClass_UAbility();
	MYGAME_API UClass* Z_Construct_UClass_UWitch();
	MYGAME_API UClass* Z_Construct_UClass_UWitch_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	void UWitch::StaticRegisterNativesUWitch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWitch);
	UClass* Z_Construct_UClass_UWitch_NoRegister()
	{
		return UWitch::StaticClass();
	}
	struct Z_Construct_UClass_UWitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ability/Witch.h" },
		{ "ModuleRelativePath", "Public/Ability/Witch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWitch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWitch_Statics::ClassParams = {
		&UWitch::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWitch()
	{
		if (!Z_Registration_Info_UClass_UWitch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWitch.OuterSingleton, Z_Construct_UClass_UWitch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWitch.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<UWitch>()
	{
		return UWitch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWitch);
	UWitch::~UWitch() {}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_Witch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_Witch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWitch, UWitch::StaticClass, TEXT("UWitch"), &Z_Registration_Info_UClass_UWitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWitch), 2986008232U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_Witch_h_1427437612(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_Witch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_Witch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
