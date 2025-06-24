// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/UI/LevelItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelItem() {}
// Cross Module References
	MYGAME_API UClass* Z_Construct_UClass_ULevelItem();
	MYGAME_API UClass* Z_Construct_UClass_ULevelItem_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	struct LevelItem_eventUpdateColor_Parms
	{
		bool Selected;
	};
	struct LevelItem_eventUpdateValue_Parms
	{
		int32 Value;
	};
	static FName NAME_ULevelItem_UpdateColor = FName(TEXT("UpdateColor"));
	void ULevelItem::UpdateColor(bool Selected)
	{
		LevelItem_eventUpdateColor_Parms Parms;
		Parms.Selected=Selected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ULevelItem_UpdateColor),&Parms);
	}
	static FName NAME_ULevelItem_UpdateValue = FName(TEXT("UpdateValue"));
	void ULevelItem::UpdateValue(int32 Value)
	{
		LevelItem_eventUpdateValue_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_ULevelItem_UpdateValue),&Parms);
	}
	void ULevelItem::StaticRegisterNativesULevelItem()
	{
	}
	struct Z_Construct_UFunction_ULevelItem_UpdateColor_Statics
	{
		static void NewProp_Selected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Selected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULevelItem_UpdateColor_Statics::NewProp_Selected_SetBit(void* Obj)
	{
		((LevelItem_eventUpdateColor_Parms*)Obj)->Selected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelItem_UpdateColor_Statics::NewProp_Selected = { "Selected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelItem_eventUpdateColor_Parms), &Z_Construct_UFunction_ULevelItem_UpdateColor_Statics::NewProp_Selected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelItem_UpdateColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelItem_UpdateColor_Statics::NewProp_Selected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelItem_UpdateColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LevelItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelItem_UpdateColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelItem, nullptr, "UpdateColor", nullptr, nullptr, sizeof(LevelItem_eventUpdateColor_Parms), Z_Construct_UFunction_ULevelItem_UpdateColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelItem_UpdateColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelItem_UpdateColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelItem_UpdateColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelItem_UpdateColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelItem_UpdateColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelItem_UpdateValue_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelItem_UpdateValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelItem_eventUpdateValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelItem_UpdateValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelItem_UpdateValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelItem_UpdateValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LevelItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelItem_UpdateValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelItem, nullptr, "UpdateValue", nullptr, nullptr, sizeof(LevelItem_eventUpdateValue_Parms), Z_Construct_UFunction_ULevelItem_UpdateValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelItem_UpdateValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelItem_UpdateValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelItem_UpdateValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelItem_UpdateValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelItem_UpdateValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelItem);
	UClass* Z_Construct_UClass_ULevelItem_NoRegister()
	{
		return ULevelItem::StaticClass();
	}
	struct Z_Construct_UClass_ULevelItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsSelected_MetaData[];
#endif
		static void NewProp_IsSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelItem_UpdateColor, "UpdateColor" }, // 566936509
		{ &Z_Construct_UFunction_ULevelItem_UpdateValue, "UpdateValue" }, // 1734250975
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/LevelItem.h" },
		{ "ModuleRelativePath", "Public/UI/LevelItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelItem_Statics::NewProp_IsSelected_MetaData[] = {
		{ "Category", "LevelItem" },
		{ "ModuleRelativePath", "Public/UI/LevelItem.h" },
	};
#endif
	void Z_Construct_UClass_ULevelItem_Statics::NewProp_IsSelected_SetBit(void* Obj)
	{
		((ULevelItem*)Obj)->IsSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelItem_Statics::NewProp_IsSelected = { "IsSelected", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelItem), &Z_Construct_UClass_ULevelItem_Statics::NewProp_IsSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelItem_Statics::NewProp_IsSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelItem_Statics::NewProp_IsSelected_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelItem_Statics::NewProp_IsSelected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelItem_Statics::ClassParams = {
		&ULevelItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelItem_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelItem()
	{
		if (!Z_Registration_Info_UClass_ULevelItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelItem.OuterSingleton, Z_Construct_UClass_ULevelItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelItem.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<ULevelItem>()
	{
		return ULevelItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelItem);
	ULevelItem::~ULevelItem() {}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_LevelItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_LevelItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelItem, ULevelItem::StaticClass, TEXT("ULevelItem"), &Z_Registration_Info_UClass_ULevelItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelItem), 1774449480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_LevelItem_h_265106305(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_LevelItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_LevelItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
