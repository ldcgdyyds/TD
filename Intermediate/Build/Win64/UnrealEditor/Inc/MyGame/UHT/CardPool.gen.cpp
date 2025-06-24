// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/CardPool.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardPool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	MYGAME_API UClass* Z_Construct_UClass_UCardPool();
	MYGAME_API UClass* Z_Construct_UClass_UCardPool_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	void UCardPool::StaticRegisterNativesUCardPool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCardPool);
	UClass* Z_Construct_UClass_UCardPool_NoRegister()
	{
		return UCardPool::StaticClass();
	}
	struct Z_Construct_UClass_UCardPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCardPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardPool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CardPool.h" },
		{ "ModuleRelativePath", "Public/CardPool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCardPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCardPool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCardPool_Statics::ClassParams = {
		&UCardPool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCardPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCardPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCardPool()
	{
		if (!Z_Registration_Info_UClass_UCardPool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCardPool.OuterSingleton, Z_Construct_UClass_UCardPool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCardPool.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<UCardPool>()
	{
		return UCardPool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCardPool);
	UCardPool::~UCardPool() {}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_CardPool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_CardPool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCardPool, UCardPool::StaticClass, TEXT("UCardPool"), &Z_Registration_Info_UClass_UCardPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCardPool), 1452260767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_CardPool_h_3899119524(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_CardPool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_CardPool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
