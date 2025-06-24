// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CardData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYGAME_CardData_generated_h
#error "CardData.generated.h already included, missing '#pragma once' in CardData.h"
#endif
#define MYGAME_CardData_generated_h

#define FID_MyGame_Source_MyGame_Public_CardData_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCardInfo_Statics; \
	MYGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MYGAME_API UScriptStruct* StaticStruct<struct FCardInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyGame_Source_MyGame_Public_CardData_h


#define FOREACH_ENUM_ECARDSTATE(op) \
	op(ECardState::Shop) \
	op(ECardState::Hand) \
	op(ECardState::Field) \
	op(ECardState::Battle) \
	op(ECardState::Pool) 

enum class ECardState : uint8;
template<> struct TIsUEnumClass<ECardState> { enum { Value = true }; };
template<> MYGAME_API UEnum* StaticEnum<ECardState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
