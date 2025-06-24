// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LuckMgr.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYGAME_LuckMgr_generated_h
#error "LuckMgr.generated.h already included, missing '#pragma once' in LuckMgr.h"
#endif
#define MYGAME_LuckMgr_generated_h

#define FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_SPARSE_DATA
#define FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConfirmInfo); \
	DECLARE_FUNCTION(execBackToMain); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execSelectLevel);


#define FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConfirmInfo); \
	DECLARE_FUNCTION(execBackToMain); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execSelectLevel);


#define FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_ACCESSORS
#define FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALuckMgr(); \
	friend struct Z_Construct_UClass_ALuckMgr_Statics; \
public: \
	DECLARE_CLASS(ALuckMgr, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyGame"), NO_API) \
	DECLARE_SERIALIZER(ALuckMgr)


#define FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALuckMgr(); \
	friend struct Z_Construct_UClass_ALuckMgr_Statics; \
public: \
	DECLARE_CLASS(ALuckMgr, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyGame"), NO_API) \
	DECLARE_SERIALIZER(ALuckMgr)


#define FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALuckMgr(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALuckMgr) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALuckMgr); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALuckMgr); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALuckMgr(ALuckMgr&&); \
	NO_API ALuckMgr(const ALuckMgr&); \
public: \
	NO_API virtual ~ALuckMgr();


#define FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALuckMgr(ALuckMgr&&); \
	NO_API ALuckMgr(const ALuckMgr&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALuckMgr); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALuckMgr); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALuckMgr) \
	NO_API virtual ~ALuckMgr();


#define FID_MyGame_Source_MyGame_Public_LuckMgr_h_12_PROLOG
#define FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_SPARSE_DATA \
	FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_RPC_WRAPPERS \
	FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_ACCESSORS \
	FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_INCLASS \
	FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_SPARSE_DATA \
	FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_ACCESSORS \
	FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyGame_Source_MyGame_Public_LuckMgr_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYGAME_API UClass* StaticClass<class ALuckMgr>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyGame_Source_MyGame_Public_LuckMgr_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
