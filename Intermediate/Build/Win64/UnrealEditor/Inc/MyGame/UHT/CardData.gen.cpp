// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/CardData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	MYGAME_API UEnum* Z_Construct_UEnum_MyGame_ECardState();
	MYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCardInfo();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECardState;
	static UEnum* ECardState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECardState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECardState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyGame_ECardState, Z_Construct_UPackage__Script_MyGame(), TEXT("ECardState"));
		}
		return Z_Registration_Info_UEnum_ECardState.OuterSingleton;
	}
	template<> MYGAME_API UEnum* StaticEnum<ECardState>()
	{
		return ECardState_StaticEnum();
	}
	struct Z_Construct_UEnum_MyGame_ECardState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MyGame_ECardState_Statics::Enumerators[] = {
		{ "ECardState::Shop", (int64)ECardState::Shop },
		{ "ECardState::Hand", (int64)ECardState::Hand },
		{ "ECardState::Field", (int64)ECardState::Field },
		{ "ECardState::Battle", (int64)ECardState::Battle },
		{ "ECardState::Pool", (int64)ECardState::Pool },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MyGame_ECardState_Statics::Enum_MetaDataParams[] = {
		{ "Battle.Name", "ECardState::Battle" },
		{ "BlueprintType", "true" },
		{ "Field.Name", "ECardState::Field" },
		{ "Hand.Name", "ECardState::Hand" },
		{ "ModuleRelativePath", "Public/CardData.h" },
		{ "Pool.Name", "ECardState::Pool" },
		{ "Shop.Name", "ECardState::Shop" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyGame_ECardState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MyGame,
		nullptr,
		"ECardState",
		"ECardState",
		Z_Construct_UEnum_MyGame_ECardState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MyGame_ECardState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MyGame_ECardState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MyGame_ECardState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MyGame_ECardState()
	{
		if (!Z_Registration_Info_UEnum_ECardState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECardState.InnerSingleton, Z_Construct_UEnum_MyGame_ECardState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECardState.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCardInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCardInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CardInfo;
class UScriptStruct* FCardInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CardInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CardInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCardInfo, Z_Construct_UPackage__Script_MyGame(), TEXT("CardInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CardInfo.OuterSingleton;
}
template<> MYGAME_API UScriptStruct* StaticStruct<FCardInfo>()
{
	return FCardInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCardInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Star_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Star;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CardData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCardInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCardInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "CardInfo" },
		{ "ModuleRelativePath", "Public/CardData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCardInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CardInfo" },
		{ "ModuleRelativePath", "Public/CardData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCardInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Ability_MetaData[] = {
		{ "Category", "CardInfo" },
		{ "ModuleRelativePath", "Public/CardData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCardInfo, Ability), METADATA_PARAMS(Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Star_MetaData[] = {
		{ "Category", "CardInfo" },
		{ "ModuleRelativePath", "Public/CardData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Star = { "Star", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCardInfo, Star), METADATA_PARAMS(Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Star_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Star_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "CardInfo" },
		{ "ModuleRelativePath", "Public/CardData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCardInfo, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Attack_MetaData[] = {
		{ "Category", "CardInfo" },
		{ "ModuleRelativePath", "Public/CardData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCardInfo, Attack), METADATA_PARAMS(Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "CardInfo" },
		{ "ModuleRelativePath", "Public/CardData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCardInfo, Health), METADATA_PARAMS(Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Health_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCardInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Star,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Attack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardInfo_Statics::NewProp_Health,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCardInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CardInfo",
		sizeof(FCardInfo),
		alignof(FCardInfo),
		Z_Construct_UScriptStruct_FCardInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCardInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCardInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CardInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CardInfo.InnerSingleton, Z_Construct_UScriptStruct_FCardInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CardInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_CardData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_CardData_h_Statics::EnumInfo[] = {
		{ ECardState_StaticEnum, TEXT("ECardState"), &Z_Registration_Info_UEnum_ECardState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2664081643U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_CardData_h_Statics::ScriptStructInfo[] = {
		{ FCardInfo::StaticStruct, Z_Construct_UScriptStruct_FCardInfo_Statics::NewStructOps, TEXT("CardInfo"), &Z_Registration_Info_UScriptStruct_CardInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCardInfo), 1134887913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_CardData_h_3306908593(TEXT("/Script/MyGame"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_CardData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_CardData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_CardData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_CardData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
