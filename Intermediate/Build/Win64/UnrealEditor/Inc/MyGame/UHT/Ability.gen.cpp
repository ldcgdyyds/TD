// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/Ability.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbility() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MYGAME_API UClass* Z_Construct_UClass_ACard_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_AGamePlayer_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_UAbility();
	MYGAME_API UClass* Z_Construct_UClass_UAbility_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_UCardPool_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_UEventCenter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	void UAbility::StaticRegisterNativesUAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbility);
	UClass* Z_Construct_UClass_UAbility_NoRegister()
	{
		return UAbility::StaticClass();
	}
	struct Z_Construct_UClass_UAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventCenter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardPool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardPool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ability.h" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_EventCenter_MetaData[] = {
		{ "Category", "EventCenter" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_EventCenter = { "EventCenter", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbility, EventCenter), Z_Construct_UClass_UEventCenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_EventCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_EventCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_CardPool_MetaData[] = {
		{ "Category", "CardPool" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_CardPool = { "CardPool", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbility, CardPool), Z_Construct_UClass_UCardPool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_CardPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_CardPool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_PlayerRef_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbility, PlayerRef), Z_Construct_UClass_AGamePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_PlayerRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_PlayerRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_CardRef_MetaData[] = {
		{ "Category", "Card" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_CardRef = { "CardRef", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbility, CardRef), Z_Construct_UClass_ACard_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_CardRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_CardRef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_EventCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_CardPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_PlayerRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_CardRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbility_Statics::ClassParams = {
		&UAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbility()
	{
		if (!Z_Registration_Info_UClass_UAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbility.OuterSingleton, Z_Construct_UClass_UAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbility.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<UAbility>()
	{
		return UAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbility);
	UAbility::~UAbility() {}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbility, UAbility::StaticClass, TEXT("UAbility"), &Z_Registration_Info_UClass_UAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbility), 732861003U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_h_2258579921(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Ability_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
