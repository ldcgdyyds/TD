// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCard() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_ACard();
	MYGAME_API UClass* Z_Construct_UClass_ACard_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_AGamePlayer_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_UAbility_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_UCardPool_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_UCardUI_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_UEventCenter_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	DEFINE_FUNCTION(ACard::execEndDrag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndDrag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACard::execStartDrag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartDrag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACard::execBeTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeTarget();
		P_NATIVE_END;
	}
	void ACard::StaticRegisterNativesACard()
	{
		UClass* Class = ACard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeTarget", &ACard::execBeTarget },
			{ "EndDrag", &ACard::execEndDrag },
			{ "StartDrag", &ACard::execStartDrag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACard_BeTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACard_BeTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Card.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACard_BeTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACard, nullptr, "BeTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACard_BeTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACard_BeTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACard_BeTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACard_BeTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACard_EndDrag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACard_EndDrag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Card.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACard_EndDrag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACard, nullptr, "EndDrag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACard_EndDrag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACard_EndDrag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACard_EndDrag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACard_EndDrag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACard_StartDrag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACard_StartDrag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Card.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACard_StartDrag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACard, nullptr, "StartDrag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACard_StartDrag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACard_StartDrag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACard_StartDrag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACard_StartDrag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACard);
	UClass* Z_Construct_UClass_ACard_NoRegister()
	{
		return ACard::StaticClass();
	}
	struct Z_Construct_UClass_ACard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardUI;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACard_BeTarget, "BeTarget" }, // 2024124226
		{ &Z_Construct_UFunction_ACard_EndDrag, "EndDrag" }, // 1411243078
		{ &Z_Construct_UFunction_ACard_StartDrag, "StartDrag" }, // 4169107508
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Card.h" },
		{ "ModuleRelativePath", "Public/Card.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACard_Statics::NewProp_Widget_MetaData[] = {
		{ "Category", "MyWidgetComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACard_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACard, Widget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACard_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACard_Statics::NewProp_Widget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACard_Statics::NewProp_CardUI_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACard_Statics::NewProp_CardUI = { "CardUI", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACard, CardUI), Z_Construct_UClass_UCardUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACard_Statics::NewProp_CardUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACard_Statics::NewProp_CardUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACard_Statics::NewProp_EventCenter_MetaData[] = {
		{ "Category", "EventCenter" },
		{ "ModuleRelativePath", "Public/Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACard_Statics::NewProp_EventCenter = { "EventCenter", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACard, EventCenter), Z_Construct_UClass_UEventCenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACard_Statics::NewProp_EventCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACard_Statics::NewProp_EventCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACard_Statics::NewProp_CardPool_MetaData[] = {
		{ "Category", "CardPool" },
		{ "ModuleRelativePath", "Public/Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACard_Statics::NewProp_CardPool = { "CardPool", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACard, CardPool), Z_Construct_UClass_UCardPool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACard_Statics::NewProp_CardPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACard_Statics::NewProp_CardPool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACard_Statics::NewProp_PlayerRef_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACard_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACard, PlayerRef), Z_Construct_UClass_AGamePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACard_Statics::NewProp_PlayerRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACard_Statics::NewProp_PlayerRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACard_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Icon" },
		{ "ModuleRelativePath", "Public/Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACard_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACard, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACard_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACard_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACard_Statics::NewProp_Ability_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACard_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACard, Ability), Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACard_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACard_Statics::NewProp_Ability_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACard_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACard_Statics::NewProp_CardUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACard_Statics::NewProp_EventCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACard_Statics::NewProp_CardPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACard_Statics::NewProp_PlayerRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACard_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACard_Statics::NewProp_Ability,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACard_Statics::ClassParams = {
		&ACard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACard()
	{
		if (!Z_Registration_Info_UClass_ACard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACard.OuterSingleton, Z_Construct_UClass_ACard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACard.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<ACard>()
	{
		return ACard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACard);
	ACard::~ACard() {}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Card_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Card_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACard, ACard::StaticClass, TEXT("ACard"), &Z_Registration_Info_UClass_ACard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACard), 21678150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Card_h_538343805(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Card_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_Card_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
