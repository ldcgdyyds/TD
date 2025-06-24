// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/LuckData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuckData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	MYGAME_API UEnum* Z_Construct_UEnum_MyGame_ELuckRarity();
	MYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuckCardInfo();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELuckRarity;
	static UEnum* ELuckRarity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELuckRarity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELuckRarity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyGame_ELuckRarity, Z_Construct_UPackage__Script_MyGame(), TEXT("ELuckRarity"));
		}
		return Z_Registration_Info_UEnum_ELuckRarity.OuterSingleton;
	}
	template<> MYGAME_API UEnum* StaticEnum<ELuckRarity>()
	{
		return ELuckRarity_StaticEnum();
	}
	struct Z_Construct_UEnum_MyGame_ELuckRarity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MyGame_ELuckRarity_Statics::Enumerators[] = {
		{ "ELuckRarity::Common", (int64)ELuckRarity::Common },
		{ "ELuckRarity::Rare", (int64)ELuckRarity::Rare },
		{ "ELuckRarity::SuperRare", (int64)ELuckRarity::SuperRare },
		{ "ELuckRarity::Legend", (int64)ELuckRarity::Legend },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MyGame_ELuckRarity_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Common.Name", "ELuckRarity::Common" },
		{ "Legend.Name", "ELuckRarity::Legend" },
		{ "ModuleRelativePath", "Public/LuckData.h" },
		{ "Rare.Name", "ELuckRarity::Rare" },
		{ "SuperRare.Name", "ELuckRarity::SuperRare" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyGame_ELuckRarity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MyGame,
		nullptr,
		"ELuckRarity",
		"ELuckRarity",
		Z_Construct_UEnum_MyGame_ELuckRarity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MyGame_ELuckRarity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MyGame_ELuckRarity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MyGame_ELuckRarity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MyGame_ELuckRarity()
	{
		if (!Z_Registration_Info_UEnum_ELuckRarity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELuckRarity.InnerSingleton, Z_Construct_UEnum_MyGame_ELuckRarity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELuckRarity.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLuckCardInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FLuckCardInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LuckCardInfo;
class UScriptStruct* FLuckCardInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LuckCardInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LuckCardInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLuckCardInfo, Z_Construct_UPackage__Script_MyGame(), TEXT("LuckCardInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LuckCardInfo.OuterSingleton;
}
template<> MYGAME_API UScriptStruct* StaticStruct<FLuckCardInfo>()
{
	return FLuckCardInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLuckCardInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Rarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Benefit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Benefit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuckCardInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LuckData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLuckCardInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LuckCardInfo" },
		{ "ModuleRelativePath", "Public/LuckData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLuckCardInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "LuckCardInfo" },
		{ "ModuleRelativePath", "Public/LuckData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLuckCardInfo, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Icon_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "LuckCardInfo" },
		{ "ModuleRelativePath", "Public/LuckData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLuckCardInfo, Rarity), Z_Construct_UEnum_MyGame_ELuckRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Rarity_MetaData)) }; // 749128137
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Benefit_MetaData[] = {
		{ "Category", "LuckCardInfo" },
		{ "ModuleRelativePath", "Public/LuckData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Benefit = { "Benefit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLuckCardInfo, Benefit), METADATA_PARAMS(Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Benefit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Benefit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Ability_MetaData[] = {
		{ "Category", "LuckCardInfo" },
		{ "ModuleRelativePath", "Public/LuckData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLuckCardInfo, Ability), METADATA_PARAMS(Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Ability_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLuckCardInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Rarity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Rarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Benefit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewProp_Ability,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLuckCardInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"LuckCardInfo",
		sizeof(FLuckCardInfo),
		alignof(FLuckCardInfo),
		Z_Construct_UScriptStruct_FLuckCardInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuckCardInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLuckCardInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuckCardInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLuckCardInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LuckCardInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LuckCardInfo.InnerSingleton, Z_Construct_UScriptStruct_FLuckCardInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LuckCardInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_LuckData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_LuckData_h_Statics::EnumInfo[] = {
		{ ELuckRarity_StaticEnum, TEXT("ELuckRarity"), &Z_Registration_Info_UEnum_ELuckRarity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 749128137U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_LuckData_h_Statics::ScriptStructInfo[] = {
		{ FLuckCardInfo::StaticStruct, Z_Construct_UScriptStruct_FLuckCardInfo_Statics::NewStructOps, TEXT("LuckCardInfo"), &Z_Registration_Info_UScriptStruct_LuckCardInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLuckCardInfo), 2519931727U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_LuckData_h_2616337061(TEXT("/Script/MyGame"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_LuckData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_LuckData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_LuckData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_LuckData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
