// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ability.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYGAME_Ability_generated_h
#error "Ability.generated.h already included, missing '#pragma once' in Ability.h"
#endif
#define MYGAME_Ability_generated_h

#define FID_MyGame_Source_MyGame_Public_Ability_h_16_SPARSE_DATA
#define FID_MyGame_Source_MyGame_Public_Ability_h_16_RPC_WRAPPERS
#define FID_MyGame_Source_MyGame_Public_Ability_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyGame_Source_MyGame_Public_Ability_h_16_ACCESSORS
#define FID_MyGame_Source_MyGame_Public_Ability_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbility(); \
	friend struct Z_Construct_UClass_UAbility_Statics; \
public: \
	DECLARE_CLASS(UAbility, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyGame"), NO_API) \
	DECLARE_SERIALIZER(UAbility)


#define FID_MyGame_Source_MyGame_Public_Ability_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAbility(); \
	friend struct Z_Construct_UClass_UAbility_Statics; \
public: \
	DECLARE_CLASS(UAbility, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyGame"), NO_API) \
	DECLARE_SERIALIZER(UAbility)


#define FID_MyGame_Source_MyGame_Public_Ability_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbility(UAbility&&); \
	NO_API UAbility(const UAbility&); \
public: \
	NO_API virtual ~UAbility();


#define FID_MyGame_Source_MyGame_Public_Ability_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbility(UAbility&&); \
	NO_API UAbility(const UAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbility) \
	NO_API virtual ~UAbility();


#define FID_MyGame_Source_MyGame_Public_Ability_h_13_PROLOG
#define FID_MyGame_Source_MyGame_Public_Ability_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyGame_Source_MyGame_Public_Ability_h_16_SPARSE_DATA \
	FID_MyGame_Source_MyGame_Public_Ability_h_16_RPC_WRAPPERS \
	FID_MyGame_Source_MyGame_Public_Ability_h_16_ACCESSORS \
	FID_MyGame_Source_MyGame_Public_Ability_h_16_INCLASS \
	FID_MyGame_Source_MyGame_Public_Ability_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyGame_Source_MyGame_Public_Ability_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyGame_Source_MyGame_Public_Ability_h_16_SPARSE_DATA \
	FID_MyGame_Source_MyGame_Public_Ability_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyGame_Source_MyGame_Public_Ability_h_16_ACCESSORS \
	FID_MyGame_Source_MyGame_Public_Ability_h_16_INCLASS_NO_PURE_DECLS \
	FID_MyGame_Source_MyGame_Public_Ability_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYGAME_API UClass* StaticClass<class UAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyGame_Source_MyGame_Public_Ability_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
