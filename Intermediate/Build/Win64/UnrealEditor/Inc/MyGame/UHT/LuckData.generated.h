// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LuckData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYGAME_LuckData_generated_h
#error "LuckData.generated.h already included, missing '#pragma once' in LuckData.h"
#endif
#define MYGAME_LuckData_generated_h

#define FID_MyGame_Source_MyGame_Public_LuckData_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLuckCardInfo_Statics; \
	MYGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MYGAME_API UScriptStruct* StaticStruct<struct FLuckCardInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyGame_Source_MyGame_Public_LuckData_h


#define FOREACH_ENUM_ELUCKRARITY(op) \
	op(ELuckRarity::Common) \
	op(ELuckRarity::Rare) \
	op(ELuckRarity::SuperRare) \
	op(ELuckRarity::Legend) 

enum class ELuckRarity : uint8;
template<> struct TIsUEnumClass<ELuckRarity> { enum { Value = true }; };
template<> MYGAME_API UEnum* StaticEnum<ELuckRarity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
