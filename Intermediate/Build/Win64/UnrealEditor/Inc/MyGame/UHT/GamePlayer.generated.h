// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GamePlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACard;
#ifdef MYGAME_GamePlayer_generated_h
#error "GamePlayer.generated.h already included, missing '#pragma once' in GamePlayer.h"
#endif
#define MYGAME_GamePlayer_generated_h

#define FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_SPARSE_DATA
#define FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinishAttack); \
	DECLARE_FUNCTION(execUpdatePosition); \
	DECLARE_FUNCTION(execLock); \
	DECLARE_FUNCTION(execRefresh); \
	DECLARE_FUNCTION(execLevelUp); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execBeTarget);


#define FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishAttack); \
	DECLARE_FUNCTION(execUpdatePosition); \
	DECLARE_FUNCTION(execLock); \
	DECLARE_FUNCTION(execRefresh); \
	DECLARE_FUNCTION(execLevelUp); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execBeTarget);


#define FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_ACCESSORS
#define FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_CALLBACK_WRAPPERS
#define FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGamePlayer(); \
	friend struct Z_Construct_UClass_AGamePlayer_Statics; \
public: \
	DECLARE_CLASS(AGamePlayer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyGame"), NO_API) \
	DECLARE_SERIALIZER(AGamePlayer)


#define FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAGamePlayer(); \
	friend struct Z_Construct_UClass_AGamePlayer_Statics; \
public: \
	DECLARE_CLASS(AGamePlayer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyGame"), NO_API) \
	DECLARE_SERIALIZER(AGamePlayer)


#define FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGamePlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGamePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGamePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGamePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGamePlayer(AGamePlayer&&); \
	NO_API AGamePlayer(const AGamePlayer&); \
public: \
	NO_API virtual ~AGamePlayer();


#define FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGamePlayer(AGamePlayer&&); \
	NO_API AGamePlayer(const AGamePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGamePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGamePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGamePlayer) \
	NO_API virtual ~AGamePlayer();


#define FID_MyGame_Source_MyGame_Public_GamePlayer_h_17_PROLOG
#define FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_SPARSE_DATA \
	FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_RPC_WRAPPERS \
	FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_ACCESSORS \
	FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_CALLBACK_WRAPPERS \
	FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_INCLASS \
	FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_SPARSE_DATA \
	FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_ACCESSORS \
	FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_CALLBACK_WRAPPERS \
	FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_INCLASS_NO_PURE_DECLS \
	FID_MyGame_Source_MyGame_Public_GamePlayer_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYGAME_API UClass* StaticClass<class AGamePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyGame_Source_MyGame_Public_GamePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
