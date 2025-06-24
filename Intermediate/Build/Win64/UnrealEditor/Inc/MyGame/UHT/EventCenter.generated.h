// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EventCenter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYGAME_EventCenter_generated_h
#error "EventCenter.generated.h already included, missing '#pragma once' in EventCenter.h"
#endif
#define MYGAME_EventCenter_generated_h

#define FID_MyGame_Source_MyGame_Public_EventCenter_h_17_SPARSE_DATA
#define FID_MyGame_Source_MyGame_Public_EventCenter_h_17_RPC_WRAPPERS
#define FID_MyGame_Source_MyGame_Public_EventCenter_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyGame_Source_MyGame_Public_EventCenter_h_17_ACCESSORS
#define FID_MyGame_Source_MyGame_Public_EventCenter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEventCenter(); \
	friend struct Z_Construct_UClass_UEventCenter_Statics; \
public: \
	DECLARE_CLASS(UEventCenter, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyGame"), NO_API) \
	DECLARE_SERIALIZER(UEventCenter)


#define FID_MyGame_Source_MyGame_Public_EventCenter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUEventCenter(); \
	friend struct Z_Construct_UClass_UEventCenter_Statics; \
public: \
	DECLARE_CLASS(UEventCenter, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyGame"), NO_API) \
	DECLARE_SERIALIZER(UEventCenter)


#define FID_MyGame_Source_MyGame_Public_EventCenter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventCenter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventCenter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventCenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventCenter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventCenter(UEventCenter&&); \
	NO_API UEventCenter(const UEventCenter&); \
public: \
	NO_API virtual ~UEventCenter();


#define FID_MyGame_Source_MyGame_Public_EventCenter_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventCenter() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventCenter(UEventCenter&&); \
	NO_API UEventCenter(const UEventCenter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventCenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventCenter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEventCenter) \
	NO_API virtual ~UEventCenter();


#define FID_MyGame_Source_MyGame_Public_EventCenter_h_14_PROLOG
#define FID_MyGame_Source_MyGame_Public_EventCenter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyGame_Source_MyGame_Public_EventCenter_h_17_SPARSE_DATA \
	FID_MyGame_Source_MyGame_Public_EventCenter_h_17_RPC_WRAPPERS \
	FID_MyGame_Source_MyGame_Public_EventCenter_h_17_ACCESSORS \
	FID_MyGame_Source_MyGame_Public_EventCenter_h_17_INCLASS \
	FID_MyGame_Source_MyGame_Public_EventCenter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyGame_Source_MyGame_Public_EventCenter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyGame_Source_MyGame_Public_EventCenter_h_17_SPARSE_DATA \
	FID_MyGame_Source_MyGame_Public_EventCenter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyGame_Source_MyGame_Public_EventCenter_h_17_ACCESSORS \
	FID_MyGame_Source_MyGame_Public_EventCenter_h_17_INCLASS_NO_PURE_DECLS \
	FID_MyGame_Source_MyGame_Public_EventCenter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYGAME_API UClass* StaticClass<class UEventCenter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyGame_Source_MyGame_Public_EventCenter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
