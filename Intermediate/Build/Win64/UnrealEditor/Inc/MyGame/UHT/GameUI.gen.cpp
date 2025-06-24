// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/UI/GameUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameUI() {}
// Cross Module References
	MYGAME_API UClass* Z_Construct_UClass_UGameUI();
	MYGAME_API UClass* Z_Construct_UClass_UGameUI_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	static FName NAME_UGameUI_ConfirmInfo = FName(TEXT("ConfirmInfo"));
	void UGameUI::ConfirmInfo()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameUI_ConfirmInfo),NULL);
	}
	void UGameUI::StaticRegisterNativesUGameUI()
	{
	}
	struct Z_Construct_UFunction_UGameUI_ConfirmInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUI_ConfirmInfo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*UFUNCTION(BlueprintImplementableEvent)\n\x09\x09void InitializeGame(int32 TurnTimes, int32 CurCoins, int32 Level, \n\x09\x09int32 LevelUpCost, int32 RefreshCost, int32 LockCost, int32 Health);\n\x09UFUNCTION(BlueprintImplementableEvent)\n\x09\x09void UpdateTimer(int32 TurnTimes);\n\x09UFUNCTION(BlueprintImplementableEvent)\n\x09\x09void UpdateCoins(int32 CurCoins);\n\x09UFUNCTION(BlueprintImplementableEvent)\n\x09\x09void UpdateLevel(int32 Level);\n\x09UFUNCTION(BlueprintImplementableEvent)\n\x09\x09void UpdateLevelupcost(int32 LevelUpCost);\n\x09UFUNCTION(BlueprintImplementableEvent)\n\x09\x09void UpdatePanel(bool Battle);\n\x09UFUNCTION(BlueprintImplementableEvent)\n\x09\x09void UpdateInjury(int32 Health);\n\x09UPROPERTY(BlueprintReadOnly, meta=(BindWidget))\n\x09\x09UButton* LevelUpBtn;\n\x09UPROPERTY(BlueprintReadOnly, meta=(BindWidget))\n\x09\x09UButton* RefreshBtn;\n\x09UPROPERTY(BlueprintReadOnly, meta=(BindWidget))\n\x09\x09UButton* LockBtn;\n\x09UPROPERTY(BlueprintReadOnly, meta=(BindWidget))\n\x09\x09UButton* PanelBtn;*/" },
		{ "ModuleRelativePath", "Public/UI/GameUI.h" },
		{ "ToolTip", "UFUNCTION(BlueprintImplementableEvent)\n               void InitializeGame(int32 TurnTimes, int32 CurCoins, int32 Level,\n               int32 LevelUpCost, int32 RefreshCost, int32 LockCost, int32 Health);\n       UFUNCTION(BlueprintImplementableEvent)\n               void UpdateTimer(int32 TurnTimes);\n       UFUNCTION(BlueprintImplementableEvent)\n               void UpdateCoins(int32 CurCoins);\n       UFUNCTION(BlueprintImplementableEvent)\n               void UpdateLevel(int32 Level);\n       UFUNCTION(BlueprintImplementableEvent)\n               void UpdateLevelupcost(int32 LevelUpCost);\n       UFUNCTION(BlueprintImplementableEvent)\n               void UpdatePanel(bool Battle);\n       UFUNCTION(BlueprintImplementableEvent)\n               void UpdateInjury(int32 Health);\n       UPROPERTY(BlueprintReadOnly, meta=(BindWidget))\n               UButton* LevelUpBtn;\n       UPROPERTY(BlueprintReadOnly, meta=(BindWidget))\n               UButton* RefreshBtn;\n       UPROPERTY(BlueprintReadOnly, meta=(BindWidget))\n               UButton* LockBtn;\n       UPROPERTY(BlueprintReadOnly, meta=(BindWidget))\n               UButton* PanelBtn;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUI_ConfirmInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUI, nullptr, "ConfirmInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUI_ConfirmInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUI_ConfirmInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUI_ConfirmInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUI_ConfirmInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameUI);
	UClass* Z_Construct_UClass_UGameUI_NoRegister()
	{
		return UGameUI::StaticClass();
	}
	struct Z_Construct_UClass_UGameUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BtnConfirm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BtnConfirm;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameUI_ConfirmInfo, "ConfirmInfo" }, // 489232298
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/GameUI.h" },
		{ "ModuleRelativePath", "Public/UI/GameUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUI_Statics::NewProp_BtnConfirm_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GameUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameUI_Statics::NewProp_BtnConfirm = { "BtnConfirm", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUI, BtnConfirm), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameUI_Statics::NewProp_BtnConfirm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUI_Statics::NewProp_BtnConfirm_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUI_Statics::NewProp_BtnConfirm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameUI_Statics::ClassParams = {
		&UGameUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameUI()
	{
		if (!Z_Registration_Info_UClass_UGameUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameUI.OuterSingleton, Z_Construct_UClass_UGameUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameUI.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<UGameUI>()
	{
		return UGameUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameUI);
	UGameUI::~UGameUI() {}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_GameUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_GameUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameUI, UGameUI::StaticClass, TEXT("UGameUI"), &Z_Registration_Info_UClass_UGameUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameUI), 2971618081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_GameUI_h_2033792875(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_GameUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_GameUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
