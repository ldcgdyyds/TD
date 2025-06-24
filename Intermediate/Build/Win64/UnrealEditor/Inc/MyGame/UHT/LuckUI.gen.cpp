// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/UI/LuckUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuckUI() {}
// Cross Module References
	MYGAME_API UClass* Z_Construct_UClass_UGameUI_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_ULevelUI_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_ULuckUI();
	MYGAME_API UClass* Z_Construct_UClass_ULuckUI_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_UMainUI_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	static FName NAME_ULuckUI_BackToMain = FName(TEXT("BackToMain"));
	void ULuckUI::BackToMain()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULuckUI_BackToMain),NULL);
	}
	static FName NAME_ULuckUI_SelectLevel = FName(TEXT("SelectLevel"));
	void ULuckUI::SelectLevel()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULuckUI_SelectLevel),NULL);
	}
	static FName NAME_ULuckUI_StartGame = FName(TEXT("StartGame"));
	void ULuckUI::StartGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULuckUI_StartGame),NULL);
	}
	void ULuckUI::StaticRegisterNativesULuckUI()
	{
	}
	struct Z_Construct_UFunction_ULuckUI_BackToMain_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuckUI_BackToMain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LuckUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuckUI_BackToMain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuckUI, nullptr, "BackToMain", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuckUI_BackToMain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuckUI_BackToMain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuckUI_BackToMain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuckUI_BackToMain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuckUI_SelectLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuckUI_SelectLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LuckUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuckUI_SelectLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuckUI, nullptr, "SelectLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuckUI_SelectLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuckUI_SelectLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuckUI_SelectLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuckUI_SelectLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuckUI_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuckUI_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LuckUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuckUI_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuckUI, nullptr, "StartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuckUI_StartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuckUI_StartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuckUI_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuckUI_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULuckUI);
	UClass* Z_Construct_UClass_ULuckUI_NoRegister()
	{
		return ULuckUI::StaticClass();
	}
	struct Z_Construct_UClass_ULuckUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LuckMainUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LuckMainUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LuckLevelUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LuckLevelUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LuckGameUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LuckGameUI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuckUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuckUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuckUI_BackToMain, "BackToMain" }, // 3059446680
		{ &Z_Construct_UFunction_ULuckUI_SelectLevel, "SelectLevel" }, // 423110687
		{ &Z_Construct_UFunction_ULuckUI_StartGame, "StartGame" }, // 438852749
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuckUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/LuckUI.h" },
		{ "ModuleRelativePath", "Public/UI/LuckUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuckUI_Statics::NewProp_LuckMainUI_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LuckUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/LuckUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULuckUI_Statics::NewProp_LuckMainUI = { "LuckMainUI", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULuckUI, LuckMainUI), Z_Construct_UClass_UMainUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULuckUI_Statics::NewProp_LuckMainUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuckUI_Statics::NewProp_LuckMainUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuckUI_Statics::NewProp_LuckLevelUI_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LuckUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/LuckUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULuckUI_Statics::NewProp_LuckLevelUI = { "LuckLevelUI", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULuckUI, LuckLevelUI), Z_Construct_UClass_ULevelUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULuckUI_Statics::NewProp_LuckLevelUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuckUI_Statics::NewProp_LuckLevelUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuckUI_Statics::NewProp_LuckGameUI_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LuckUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/LuckUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULuckUI_Statics::NewProp_LuckGameUI = { "LuckGameUI", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULuckUI, LuckGameUI), Z_Construct_UClass_UGameUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULuckUI_Statics::NewProp_LuckGameUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuckUI_Statics::NewProp_LuckGameUI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULuckUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuckUI_Statics::NewProp_LuckMainUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuckUI_Statics::NewProp_LuckLevelUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuckUI_Statics::NewProp_LuckGameUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuckUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuckUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULuckUI_Statics::ClassParams = {
		&ULuckUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULuckUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULuckUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULuckUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuckUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuckUI()
	{
		if (!Z_Registration_Info_UClass_ULuckUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULuckUI.OuterSingleton, Z_Construct_UClass_ULuckUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULuckUI.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<ULuckUI>()
	{
		return ULuckUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuckUI);
	ULuckUI::~ULuckUI() {}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_LuckUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_LuckUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULuckUI, ULuckUI::StaticClass, TEXT("ULuckUI"), &Z_Registration_Info_UClass_ULuckUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULuckUI), 2528411152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_LuckUI_h_3712871871(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_LuckUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_LuckUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
