// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/EventCenter.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventCenter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	MYGAME_API UClass* Z_Construct_UClass_UEventCenter();
	MYGAME_API UClass* Z_Construct_UClass_UEventCenter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	void UEventCenter::StaticRegisterNativesUEventCenter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEventCenter);
	UClass* Z_Construct_UClass_UEventCenter_NoRegister()
	{
		return UEventCenter::StaticClass();
	}
	struct Z_Construct_UClass_UEventCenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventCenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventCenter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EventCenter.h" },
		{ "ModuleRelativePath", "Public/EventCenter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventCenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventCenter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEventCenter_Statics::ClassParams = {
		&UEventCenter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEventCenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventCenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventCenter()
	{
		if (!Z_Registration_Info_UClass_UEventCenter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEventCenter.OuterSingleton, Z_Construct_UClass_UEventCenter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEventCenter.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<UEventCenter>()
	{
		return UEventCenter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventCenter);
	UEventCenter::~UEventCenter() {}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_EventCenter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_EventCenter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEventCenter, UEventCenter::StaticClass, TEXT("UEventCenter"), &Z_Registration_Info_UClass_UEventCenter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEventCenter), 3575616019U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_EventCenter_h_1641004211(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_EventCenter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_EventCenter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
