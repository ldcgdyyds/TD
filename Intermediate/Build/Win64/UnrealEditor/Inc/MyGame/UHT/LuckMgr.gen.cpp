// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/LuckMgr.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuckMgr() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_ALuckMgr();
	MYGAME_API UClass* Z_Construct_UClass_ALuckMgr_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_ULuckUI_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	DEFINE_FUNCTION(ALuckMgr::execConfirmInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConfirmInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALuckMgr::execBackToMain)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BackToMain();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALuckMgr::execStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALuckMgr::execSelectLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectLevel();
		P_NATIVE_END;
	}
	void ALuckMgr::StaticRegisterNativesALuckMgr()
	{
		UClass* Class = ALuckMgr::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BackToMain", &ALuckMgr::execBackToMain },
			{ "ConfirmInfo", &ALuckMgr::execConfirmInfo },
			{ "SelectLevel", &ALuckMgr::execSelectLevel },
			{ "StartGame", &ALuckMgr::execStartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALuckMgr_BackToMain_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuckMgr_BackToMain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuckMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALuckMgr_BackToMain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALuckMgr, nullptr, "BackToMain", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALuckMgr_BackToMain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuckMgr_BackToMain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALuckMgr_BackToMain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALuckMgr_BackToMain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALuckMgr_ConfirmInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuckMgr_ConfirmInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuckMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALuckMgr_ConfirmInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALuckMgr, nullptr, "ConfirmInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALuckMgr_ConfirmInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuckMgr_ConfirmInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALuckMgr_ConfirmInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALuckMgr_ConfirmInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALuckMgr_SelectLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuckMgr_SelectLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuckMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALuckMgr_SelectLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALuckMgr, nullptr, "SelectLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALuckMgr_SelectLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuckMgr_SelectLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALuckMgr_SelectLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALuckMgr_SelectLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALuckMgr_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuckMgr_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuckMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALuckMgr_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALuckMgr, nullptr, "StartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALuckMgr_StartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuckMgr_StartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALuckMgr_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALuckMgr_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALuckMgr);
	UClass* Z_Construct_UClass_ALuckMgr_NoRegister()
	{
		return ALuckMgr::StaticClass();
	}
	struct Z_Construct_UClass_ALuckMgr_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LuckCardDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LuckCardDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LuckUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LuckUI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALuckMgr_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALuckMgr_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALuckMgr_BackToMain, "BackToMain" }, // 4015010610
		{ &Z_Construct_UFunction_ALuckMgr_ConfirmInfo, "ConfirmInfo" }, // 379460862
		{ &Z_Construct_UFunction_ALuckMgr_SelectLevel, "SelectLevel" }, // 1137655793
		{ &Z_Construct_UFunction_ALuckMgr_StartGame, "StartGame" }, // 3502270550
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuckMgr_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LuckMgr.h" },
		{ "ModuleRelativePath", "Public/LuckMgr.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuckMgr_Statics::NewProp_LuckCardDataTable_MetaData[] = {
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "Public/LuckMgr.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALuckMgr_Statics::NewProp_LuckCardDataTable = { "LuckCardDataTable", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALuckMgr, LuckCardDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALuckMgr_Statics::NewProp_LuckCardDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuckMgr_Statics::NewProp_LuckCardDataTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuckMgr_Statics::NewProp_LuckUI_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LuckMgr.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALuckMgr_Statics::NewProp_LuckUI = { "LuckUI", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALuckMgr, LuckUI), Z_Construct_UClass_ULuckUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALuckMgr_Statics::NewProp_LuckUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuckMgr_Statics::NewProp_LuckUI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALuckMgr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuckMgr_Statics::NewProp_LuckCardDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuckMgr_Statics::NewProp_LuckUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALuckMgr_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALuckMgr>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALuckMgr_Statics::ClassParams = {
		&ALuckMgr::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALuckMgr_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALuckMgr_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALuckMgr_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALuckMgr_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALuckMgr()
	{
		if (!Z_Registration_Info_UClass_ALuckMgr.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALuckMgr.OuterSingleton, Z_Construct_UClass_ALuckMgr_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALuckMgr.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<ALuckMgr>()
	{
		return ALuckMgr::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuckMgr);
	ALuckMgr::~ALuckMgr() {}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_LuckMgr_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_LuckMgr_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALuckMgr, ALuckMgr::StaticClass, TEXT("ALuckMgr"), &Z_Registration_Info_UClass_ALuckMgr, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALuckMgr), 513321271U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_LuckMgr_h_1134391214(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_LuckMgr_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_LuckMgr_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
