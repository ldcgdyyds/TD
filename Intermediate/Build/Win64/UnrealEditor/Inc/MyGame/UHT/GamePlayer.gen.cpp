// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/GamePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamePlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_ACard_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_AGamePlayer();
	MYGAME_API UClass* Z_Construct_UClass_AGamePlayer_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_UCardPool_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_UEventCenter_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_UGameUI_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_UMainUI_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	DEFINE_FUNCTION(AGamePlayer::execFinishAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGamePlayer::execUpdatePosition)
	{
		P_GET_OBJECT(ACard,Z_Param_Card);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePosition(Z_Param_Card,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGamePlayer::execLock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Lock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGamePlayer::execRefresh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Refresh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGamePlayer::execLevelUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LevelUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGamePlayer::execStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGamePlayer::execBeTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeTarget();
		P_NATIVE_END;
	}
	struct GamePlayer_eventGoAttack_Parms
	{
		ACard* Card;
	};
	static FName NAME_AGamePlayer_GoAttack = FName(TEXT("GoAttack"));
	void AGamePlayer::GoAttack(ACard* Card)
	{
		GamePlayer_eventGoAttack_Parms Parms;
		Parms.Card=Card;
		ProcessEvent(FindFunctionChecked(NAME_AGamePlayer_GoAttack),&Parms);
	}
	void AGamePlayer::StaticRegisterNativesAGamePlayer()
	{
		UClass* Class = AGamePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeTarget", &AGamePlayer::execBeTarget },
			{ "FinishAttack", &AGamePlayer::execFinishAttack },
			{ "LevelUp", &AGamePlayer::execLevelUp },
			{ "Lock", &AGamePlayer::execLock },
			{ "Refresh", &AGamePlayer::execRefresh },
			{ "StartGame", &AGamePlayer::execStartGame },
			{ "UpdatePosition", &AGamePlayer::execUpdatePosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGamePlayer_BeTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGamePlayer_BeTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGamePlayer_BeTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGamePlayer, nullptr, "BeTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGamePlayer_BeTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGamePlayer_BeTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGamePlayer_BeTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGamePlayer_BeTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGamePlayer_FinishAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGamePlayer_FinishAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGamePlayer_FinishAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGamePlayer, nullptr, "FinishAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGamePlayer_FinishAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGamePlayer_FinishAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGamePlayer_FinishAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGamePlayer_FinishAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGamePlayer_GoAttack_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Card;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGamePlayer_GoAttack_Statics::NewProp_Card = { "Card", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GamePlayer_eventGoAttack_Parms, Card), Z_Construct_UClass_ACard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGamePlayer_GoAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGamePlayer_GoAttack_Statics::NewProp_Card,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGamePlayer_GoAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGamePlayer_GoAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGamePlayer, nullptr, "GoAttack", nullptr, nullptr, sizeof(GamePlayer_eventGoAttack_Parms), Z_Construct_UFunction_AGamePlayer_GoAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGamePlayer_GoAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGamePlayer_GoAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGamePlayer_GoAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGamePlayer_GoAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGamePlayer_GoAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGamePlayer_LevelUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGamePlayer_LevelUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGamePlayer_LevelUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGamePlayer, nullptr, "LevelUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGamePlayer_LevelUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGamePlayer_LevelUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGamePlayer_LevelUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGamePlayer_LevelUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGamePlayer_Lock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGamePlayer_Lock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGamePlayer_Lock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGamePlayer, nullptr, "Lock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGamePlayer_Lock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGamePlayer_Lock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGamePlayer_Lock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGamePlayer_Lock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGamePlayer_Refresh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGamePlayer_Refresh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGamePlayer_Refresh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGamePlayer, nullptr, "Refresh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGamePlayer_Refresh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGamePlayer_Refresh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGamePlayer_Refresh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGamePlayer_Refresh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGamePlayer_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGamePlayer_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGamePlayer_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGamePlayer, nullptr, "StartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGamePlayer_StartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGamePlayer_StartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGamePlayer_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGamePlayer_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGamePlayer_UpdatePosition_Statics
	{
		struct GamePlayer_eventUpdatePosition_Parms
		{
			ACard* Card;
			float Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Card;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGamePlayer_UpdatePosition_Statics::NewProp_Card = { "Card", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GamePlayer_eventUpdatePosition_Parms, Card), Z_Construct_UClass_ACard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGamePlayer_UpdatePosition_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GamePlayer_eventUpdatePosition_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGamePlayer_UpdatePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGamePlayer_UpdatePosition_Statics::NewProp_Card,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGamePlayer_UpdatePosition_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGamePlayer_UpdatePosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGamePlayer_UpdatePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGamePlayer, nullptr, "UpdatePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGamePlayer_UpdatePosition_Statics::GamePlayer_eventUpdatePosition_Parms), Z_Construct_UFunction_AGamePlayer_UpdatePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGamePlayer_UpdatePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGamePlayer_UpdatePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGamePlayer_UpdatePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGamePlayer_UpdatePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGamePlayer_UpdatePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGamePlayer);
	UClass* Z_Construct_UClass_AGamePlayer_NoRegister()
	{
		return AGamePlayer::StaticClass();
	}
	struct Z_Construct_UClass_AGamePlayer_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventCenter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardPool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardPool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardDataTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGamePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGamePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGamePlayer_BeTarget, "BeTarget" }, // 857972921
		{ &Z_Construct_UFunction_AGamePlayer_FinishAttack, "FinishAttack" }, // 1753545870
		{ &Z_Construct_UFunction_AGamePlayer_GoAttack, "GoAttack" }, // 2336743196
		{ &Z_Construct_UFunction_AGamePlayer_LevelUp, "LevelUp" }, // 2917427500
		{ &Z_Construct_UFunction_AGamePlayer_Lock, "Lock" }, // 1735841443
		{ &Z_Construct_UFunction_AGamePlayer_Refresh, "Refresh" }, // 3408845970
		{ &Z_Construct_UFunction_AGamePlayer_StartGame, "StartGame" }, // 2400450793
		{ &Z_Construct_UFunction_AGamePlayer_UpdatePosition, "UpdatePosition" }, // 140395756
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GamePlayer.h" },
		{ "ModuleRelativePath", "Public/GamePlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePlayer_Statics::NewProp_Widget_MetaData[] = {
		{ "Category", "MyWidgetComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamePlayer_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGamePlayer, Widget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGamePlayer_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamePlayer_Statics::NewProp_Widget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePlayer_Statics::NewProp_GameUI_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamePlayer_Statics::NewProp_GameUI = { "GameUI", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGamePlayer, GameUI), Z_Construct_UClass_UGameUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGamePlayer_Statics::NewProp_GameUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamePlayer_Statics::NewProp_GameUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePlayer_Statics::NewProp_MainUI_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamePlayer_Statics::NewProp_MainUI = { "MainUI", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGamePlayer, MainUI), Z_Construct_UClass_UMainUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGamePlayer_Statics::NewProp_MainUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamePlayer_Statics::NewProp_MainUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePlayer_Statics::NewProp_EventCenter_MetaData[] = {
		{ "Category", "EventCenter" },
		{ "ModuleRelativePath", "Public/GamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamePlayer_Statics::NewProp_EventCenter = { "EventCenter", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGamePlayer, EventCenter), Z_Construct_UClass_UEventCenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGamePlayer_Statics::NewProp_EventCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamePlayer_Statics::NewProp_EventCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePlayer_Statics::NewProp_CardPool_MetaData[] = {
		{ "Category", "CardPool" },
		{ "ModuleRelativePath", "Public/GamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamePlayer_Statics::NewProp_CardPool = { "CardPool", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGamePlayer, CardPool), Z_Construct_UClass_UCardPool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGamePlayer_Statics::NewProp_CardPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamePlayer_Statics::NewProp_CardPool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePlayer_Statics::NewProp_CardDataTable_MetaData[] = {
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "Public/GamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamePlayer_Statics::NewProp_CardDataTable = { "CardDataTable", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGamePlayer, CardDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGamePlayer_Statics::NewProp_CardDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamePlayer_Statics::NewProp_CardDataTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGamePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePlayer_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePlayer_Statics::NewProp_GameUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePlayer_Statics::NewProp_MainUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePlayer_Statics::NewProp_EventCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePlayer_Statics::NewProp_CardPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePlayer_Statics::NewProp_CardDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGamePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGamePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGamePlayer_Statics::ClassParams = {
		&AGamePlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGamePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGamePlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGamePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGamePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGamePlayer()
	{
		if (!Z_Registration_Info_UClass_AGamePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGamePlayer.OuterSingleton, Z_Construct_UClass_AGamePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGamePlayer.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<AGamePlayer>()
	{
		return AGamePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGamePlayer);
	AGamePlayer::~AGamePlayer() {}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_GamePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_GamePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGamePlayer, AGamePlayer::StaticClass, TEXT("AGamePlayer"), &Z_Registration_Info_UClass_AGamePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGamePlayer), 421031865U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_GamePlayer_h_3754939298(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_GamePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_GamePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
