// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/UI/MainUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainUI() {}
// Cross Module References
	MYGAME_API UClass* Z_Construct_UClass_UMainUI();
	MYGAME_API UClass* Z_Construct_UClass_UMainUI_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	void UMainUI::StaticRegisterNativesUMainUI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainUI);
	UClass* Z_Construct_UClass_UMainUI_NoRegister()
	{
		return UMainUI::StaticClass();
	}
	struct Z_Construct_UClass_UMainUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BtnStart_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BtnStart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MainUI.h" },
		{ "ModuleRelativePath", "Public/UI/MainUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainUI_Statics::NewProp_BtnStart_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainUI_Statics::NewProp_BtnStart = { "BtnStart", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMainUI, BtnStart), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainUI_Statics::NewProp_BtnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainUI_Statics::NewProp_BtnStart_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainUI_Statics::NewProp_BtnStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainUI_Statics::ClassParams = {
		&UMainUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMainUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainUI()
	{
		if (!Z_Registration_Info_UClass_UMainUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainUI.OuterSingleton, Z_Construct_UClass_UMainUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainUI.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<UMainUI>()
	{
		return UMainUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainUI);
	UMainUI::~UMainUI() {}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_MainUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_MainUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainUI, UMainUI::StaticClass, TEXT("UMainUI"), &Z_Registration_Info_UClass_UMainUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainUI), 2680571869U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_MainUI_h_858073063(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_MainUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_MainUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
