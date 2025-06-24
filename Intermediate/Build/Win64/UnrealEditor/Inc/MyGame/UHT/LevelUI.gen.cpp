// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/UI/LevelUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelUI() {}
// Cross Module References
	MYGAME_API UClass* Z_Construct_UClass_ULevelUI();
	MYGAME_API UClass* Z_Construct_UClass_ULevelUI_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	static FName NAME_ULevelUI_InitLevel = FName(TEXT("InitLevel"));
	void ULevelUI::InitLevel()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULevelUI_InitLevel),NULL);
	}
	void ULevelUI::StaticRegisterNativesULevelUI()
	{
	}
	struct Z_Construct_UFunction_ULevelUI_InitLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelUI_InitLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LevelUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelUI_InitLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelUI, nullptr, "InitLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelUI_InitLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelUI_InitLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelUI_InitLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelUI_InitLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelUI);
	UClass* Z_Construct_UClass_ULevelUI_NoRegister()
	{
		return ULevelUI::StaticClass();
	}
	struct Z_Construct_UClass_ULevelUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BtnBack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BtnBack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BtnStart_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BtnStart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelUI_InitLevel, "InitLevel" }, // 721161129
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/LevelUI.h" },
		{ "ModuleRelativePath", "Public/UI/LevelUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelUI_Statics::NewProp_BtnBack_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/LevelUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelUI_Statics::NewProp_BtnBack = { "BtnBack", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelUI, BtnBack), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelUI_Statics::NewProp_BtnBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelUI_Statics::NewProp_BtnBack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelUI_Statics::NewProp_BtnStart_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/LevelUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelUI_Statics::NewProp_BtnStart = { "BtnStart", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelUI, BtnStart), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelUI_Statics::NewProp_BtnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelUI_Statics::NewProp_BtnStart_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelUI_Statics::NewProp_BtnBack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelUI_Statics::NewProp_BtnStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelUI_Statics::ClassParams = {
		&ULevelUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelUI()
	{
		if (!Z_Registration_Info_UClass_ULevelUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelUI.OuterSingleton, Z_Construct_UClass_ULevelUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelUI.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<ULevelUI>()
	{
		return ULevelUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelUI);
	ULevelUI::~ULevelUI() {}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_LevelUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_LevelUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelUI, ULevelUI::StaticClass, TEXT("ULevelUI"), &Z_Registration_Info_UClass_ULevelUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelUI), 1584116268U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_LevelUI_h_2824160040(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_LevelUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_LevelUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
