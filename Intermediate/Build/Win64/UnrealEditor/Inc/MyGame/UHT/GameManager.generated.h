// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYGAME_GameManager_generated_h
#error "GameManager.generated.h already included, missing '#pragma once' in GameManager.h"
#endif
#define MYGAME_GameManager_generated_h

#define FID_MyGame_Source_MyGame_Public_GameManager_h_15_SPARSE_DATA
#define FID_MyGame_Source_MyGame_Public_GameManager_h_15_RPC_WRAPPERS
#define FID_MyGame_Source_MyGame_Public_GameManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyGame_Source_MyGame_Public_GameManager_h_15_ACCESSORS
#define FID_MyGame_Source_MyGame_Public_GameManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameManager(); \
	friend struct Z_Construct_UClass_AGameManager_Statics; \
public: \
	DECLARE_CLASS(AGameManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyGame"), NO_API) \
	DECLARE_SERIALIZER(AGameManager)


#define FID_MyGame_Source_MyGame_Public_GameManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGameManager(); \
	friend struct Z_Construct_UClass_AGameManager_Statics; \
public: \
	DECLARE_CLASS(AGameManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyGame"), NO_API) \
	DECLARE_SERIALIZER(AGameManager)


#define FID_MyGame_Source_MyGame_Public_GameManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameManager(AGameManager&&); \
	NO_API AGameManager(const AGameManager&); \
public: \
	NO_API virtual ~AGameManager();


#define FID_MyGame_Source_MyGame_Public_GameManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameManager(AGameManager&&); \
	NO_API AGameManager(const AGameManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameManager) \
	NO_API virtual ~AGameManager();


#define FID_MyGame_Source_MyGame_Public_GameManager_h_12_PROLOG
#define FID_MyGame_Source_MyGame_Public_GameManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyGame_Source_MyGame_Public_GameManager_h_15_SPARSE_DATA \
	FID_MyGame_Source_MyGame_Public_GameManager_h_15_RPC_WRAPPERS \
	FID_MyGame_Source_MyGame_Public_GameManager_h_15_ACCESSORS \
	FID_MyGame_Source_MyGame_Public_GameManager_h_15_INCLASS \
	FID_MyGame_Source_MyGame_Public_GameManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyGame_Source_MyGame_Public_GameManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyGame_Source_MyGame_Public_GameManager_h_15_SPARSE_DATA \
	FID_MyGame_Source_MyGame_Public_GameManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyGame_Source_MyGame_Public_GameManager_h_15_ACCESSORS \
	FID_MyGame_Source_MyGame_Public_GameManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyGame_Source_MyGame_Public_GameManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYGAME_API UClass* StaticClass<class AGameManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyGame_Source_MyGame_Public_GameManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
