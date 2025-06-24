// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Public/UI/CardUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardUI() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_UCardUI();
	MYGAME_API UClass* Z_Construct_UClass_UCardUI_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	struct CardUI_eventInitializeCard_Parms
	{
		int32 Star;
		UTexture2D* Icon;
		int32 Attack;
		int32 Health;
		bool Gold;
	};
	struct CardUI_eventUpdateAttack_Parms
	{
		int32 Attack;
	};
	struct CardUI_eventUpdateCard_Parms
	{
		bool Battle;
	};
	struct CardUI_eventUpdateHealth_Parms
	{
		int32 Health;
	};
	struct CardUI_eventUpdateInjury_Parms
	{
		int32 Health;
	};
	struct CardUI_eventUpdateLock_Parms
	{
		bool Lock;
	};
	static FName NAME_UCardUI_InitializeCard = FName(TEXT("InitializeCard"));
	void UCardUI::InitializeCard(int32 Star, UTexture2D* Icon, int32 Attack, int32 Health, bool Gold)
	{
		CardUI_eventInitializeCard_Parms Parms;
		Parms.Star=Star;
		Parms.Icon=Icon;
		Parms.Attack=Attack;
		Parms.Health=Health;
		Parms.Gold=Gold ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCardUI_InitializeCard),&Parms);
	}
	static FName NAME_UCardUI_UpdateAttack = FName(TEXT("UpdateAttack"));
	void UCardUI::UpdateAttack(int32 Attack)
	{
		CardUI_eventUpdateAttack_Parms Parms;
		Parms.Attack=Attack;
		ProcessEvent(FindFunctionChecked(NAME_UCardUI_UpdateAttack),&Parms);
	}
	static FName NAME_UCardUI_UpdateCard = FName(TEXT("UpdateCard"));
	void UCardUI::UpdateCard(bool Battle)
	{
		CardUI_eventUpdateCard_Parms Parms;
		Parms.Battle=Battle ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCardUI_UpdateCard),&Parms);
	}
	static FName NAME_UCardUI_UpdateHealth = FName(TEXT("UpdateHealth"));
	void UCardUI::UpdateHealth(int32 Health)
	{
		CardUI_eventUpdateHealth_Parms Parms;
		Parms.Health=Health;
		ProcessEvent(FindFunctionChecked(NAME_UCardUI_UpdateHealth),&Parms);
	}
	static FName NAME_UCardUI_UpdateInjury = FName(TEXT("UpdateInjury"));
	void UCardUI::UpdateInjury(int32 Health)
	{
		CardUI_eventUpdateInjury_Parms Parms;
		Parms.Health=Health;
		ProcessEvent(FindFunctionChecked(NAME_UCardUI_UpdateInjury),&Parms);
	}
	static FName NAME_UCardUI_UpdateLock = FName(TEXT("UpdateLock"));
	void UCardUI::UpdateLock(bool Lock)
	{
		CardUI_eventUpdateLock_Parms Parms;
		Parms.Lock=Lock ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCardUI_UpdateLock),&Parms);
	}
	void UCardUI::StaticRegisterNativesUCardUI()
	{
	}
	struct Z_Construct_UFunction_UCardUI_InitializeCard_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Star;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Attack;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
		static void NewProp_Gold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Gold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCardUI_InitializeCard_Statics::NewProp_Star = { "Star", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CardUI_eventInitializeCard_Parms, Star), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCardUI_InitializeCard_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CardUI_eventInitializeCard_Parms, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCardUI_InitializeCard_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CardUI_eventInitializeCard_Parms, Attack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCardUI_InitializeCard_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CardUI_eventInitializeCard_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCardUI_InitializeCard_Statics::NewProp_Gold_SetBit(void* Obj)
	{
		((CardUI_eventInitializeCard_Parms*)Obj)->Gold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCardUI_InitializeCard_Statics::NewProp_Gold = { "Gold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CardUI_eventInitializeCard_Parms), &Z_Construct_UFunction_UCardUI_InitializeCard_Statics::NewProp_Gold_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCardUI_InitializeCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCardUI_InitializeCard_Statics::NewProp_Star,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCardUI_InitializeCard_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCardUI_InitializeCard_Statics::NewProp_Attack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCardUI_InitializeCard_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCardUI_InitializeCard_Statics::NewProp_Gold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCardUI_InitializeCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CardUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCardUI_InitializeCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCardUI, nullptr, "InitializeCard", nullptr, nullptr, sizeof(CardUI_eventInitializeCard_Parms), Z_Construct_UFunction_UCardUI_InitializeCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCardUI_InitializeCard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCardUI_InitializeCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCardUI_InitializeCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCardUI_InitializeCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCardUI_InitializeCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCardUI_UpdateAttack_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Attack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCardUI_UpdateAttack_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CardUI_eventUpdateAttack_Parms, Attack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCardUI_UpdateAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCardUI_UpdateAttack_Statics::NewProp_Attack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCardUI_UpdateAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CardUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCardUI_UpdateAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCardUI, nullptr, "UpdateAttack", nullptr, nullptr, sizeof(CardUI_eventUpdateAttack_Parms), Z_Construct_UFunction_UCardUI_UpdateAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCardUI_UpdateAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCardUI_UpdateAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCardUI_UpdateAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCardUI_UpdateAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCardUI_UpdateAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCardUI_UpdateCard_Statics
	{
		static void NewProp_Battle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Battle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCardUI_UpdateCard_Statics::NewProp_Battle_SetBit(void* Obj)
	{
		((CardUI_eventUpdateCard_Parms*)Obj)->Battle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCardUI_UpdateCard_Statics::NewProp_Battle = { "Battle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CardUI_eventUpdateCard_Parms), &Z_Construct_UFunction_UCardUI_UpdateCard_Statics::NewProp_Battle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCardUI_UpdateCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCardUI_UpdateCard_Statics::NewProp_Battle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCardUI_UpdateCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CardUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCardUI_UpdateCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCardUI, nullptr, "UpdateCard", nullptr, nullptr, sizeof(CardUI_eventUpdateCard_Parms), Z_Construct_UFunction_UCardUI_UpdateCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCardUI_UpdateCard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCardUI_UpdateCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCardUI_UpdateCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCardUI_UpdateCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCardUI_UpdateCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCardUI_UpdateHealth_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCardUI_UpdateHealth_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CardUI_eventUpdateHealth_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCardUI_UpdateHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCardUI_UpdateHealth_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCardUI_UpdateHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CardUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCardUI_UpdateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCardUI, nullptr, "UpdateHealth", nullptr, nullptr, sizeof(CardUI_eventUpdateHealth_Parms), Z_Construct_UFunction_UCardUI_UpdateHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCardUI_UpdateHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCardUI_UpdateHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCardUI_UpdateHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCardUI_UpdateHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCardUI_UpdateHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCardUI_UpdateInjury_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCardUI_UpdateInjury_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CardUI_eventUpdateInjury_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCardUI_UpdateInjury_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCardUI_UpdateInjury_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCardUI_UpdateInjury_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CardUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCardUI_UpdateInjury_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCardUI, nullptr, "UpdateInjury", nullptr, nullptr, sizeof(CardUI_eventUpdateInjury_Parms), Z_Construct_UFunction_UCardUI_UpdateInjury_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCardUI_UpdateInjury_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCardUI_UpdateInjury_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCardUI_UpdateInjury_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCardUI_UpdateInjury()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCardUI_UpdateInjury_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCardUI_UpdateLock_Statics
	{
		static void NewProp_Lock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Lock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCardUI_UpdateLock_Statics::NewProp_Lock_SetBit(void* Obj)
	{
		((CardUI_eventUpdateLock_Parms*)Obj)->Lock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCardUI_UpdateLock_Statics::NewProp_Lock = { "Lock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CardUI_eventUpdateLock_Parms), &Z_Construct_UFunction_UCardUI_UpdateLock_Statics::NewProp_Lock_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCardUI_UpdateLock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCardUI_UpdateLock_Statics::NewProp_Lock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCardUI_UpdateLock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CardUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCardUI_UpdateLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCardUI, nullptr, "UpdateLock", nullptr, nullptr, sizeof(CardUI_eventUpdateLock_Parms), Z_Construct_UFunction_UCardUI_UpdateLock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCardUI_UpdateLock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCardUI_UpdateLock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCardUI_UpdateLock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCardUI_UpdateLock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCardUI_UpdateLock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCardUI);
	UClass* Z_Construct_UClass_UCardUI_NoRegister()
	{
		return UCardUI::StaticClass();
	}
	struct Z_Construct_UClass_UCardUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardBtn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardBtn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCardUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCardUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCardUI_InitializeCard, "InitializeCard" }, // 1246204645
		{ &Z_Construct_UFunction_UCardUI_UpdateAttack, "UpdateAttack" }, // 2001095868
		{ &Z_Construct_UFunction_UCardUI_UpdateCard, "UpdateCard" }, // 1044993975
		{ &Z_Construct_UFunction_UCardUI_UpdateHealth, "UpdateHealth" }, // 964098188
		{ &Z_Construct_UFunction_UCardUI_UpdateInjury, "UpdateInjury" }, // 158401801
		{ &Z_Construct_UFunction_UCardUI_UpdateLock, "UpdateLock" }, // 3092038943
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/CardUI.h" },
		{ "ModuleRelativePath", "Public/UI/CardUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardUI_Statics::NewProp_CardBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CardUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardUI_Statics::NewProp_CardBtn = { "CardBtn", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCardUI, CardBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCardUI_Statics::NewProp_CardBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCardUI_Statics::NewProp_CardBtn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCardUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardUI_Statics::NewProp_CardBtn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCardUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCardUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCardUI_Statics::ClassParams = {
		&UCardUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCardUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCardUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCardUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCardUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCardUI()
	{
		if (!Z_Registration_Info_UClass_UCardUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCardUI.OuterSingleton, Z_Construct_UClass_UCardUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCardUI.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<UCardUI>()
	{
		return UCardUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCardUI);
	UCardUI::~UCardUI() {}
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_CardUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_CardUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCardUI, UCardUI::StaticClass, TEXT("UCardUI"), &Z_Registration_Info_UClass_UCardUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCardUI), 283845707U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_CardUI_h_746989198(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_CardUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Public_UI_CardUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
