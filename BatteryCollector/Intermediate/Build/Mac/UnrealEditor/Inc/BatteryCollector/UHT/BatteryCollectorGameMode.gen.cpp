// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollector/BatteryCollectorGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryCollectorGameMode() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorGameMode();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorGameMode_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
// End Cross Module References
	DEFINE_FUNCTION(ABatteryCollectorGameMode::execGetPowerAmountToWin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPowerAmountToWin();
		P_NATIVE_END;
	}
	void ABatteryCollectorGameMode::StaticRegisterNativesABatteryCollectorGameMode()
	{
		UClass* Class = ABatteryCollectorGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPowerAmountToWin", &ABatteryCollectorGameMode::execGetPowerAmountToWin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerAmountToWin_Statics
	{
		struct BatteryCollectorGameMode_eventGetPowerAmountToWin_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerAmountToWin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BatteryCollectorGameMode_eventGetPowerAmountToWin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerAmountToWin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerAmountToWin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerAmountToWin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerAmountToWin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorGameMode, nullptr, "GetPowerAmountToWin", nullptr, nullptr, Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerAmountToWin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerAmountToWin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerAmountToWin_Statics::BatteryCollectorGameMode_eventGetPowerAmountToWin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerAmountToWin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerAmountToWin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerAmountToWin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerAmountToWin_Statics::BatteryCollectorGameMode_eventGetPowerAmountToWin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerAmountToWin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerAmountToWin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABatteryCollectorGameMode);
	UClass* Z_Construct_UClass_ABatteryCollectorGameMode_NoRegister()
	{
		return ABatteryCollectorGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABatteryCollectorGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecayAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PowerAmountToWin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PowerAmountToWin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PowerToWinMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PowerToWinMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainHUDClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MainHUDClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatteryCollectorGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABatteryCollectorGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerAmountToWin, "GetPowerAmountToWin" }, // 3061648195
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BatteryCollectorGameMode.h" },
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_DelayTime_MetaData[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorGameMode, DelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_DelayTime_MetaData), Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_DelayTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_DecayAmount_MetaData[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_DecayAmount = { "DecayAmount", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorGameMode, DecayAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_DecayAmount_MetaData), Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_DecayAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_PowerAmountToWin_MetaData[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_PowerAmountToWin = { "PowerAmountToWin", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorGameMode, PowerAmountToWin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_PowerAmountToWin_MetaData), Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_PowerAmountToWin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_PowerToWinMultiplier_MetaData[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_PowerToWinMultiplier = { "PowerToWinMultiplier", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorGameMode, PowerToWinMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_PowerToWinMultiplier_MetaData), Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_PowerToWinMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_MainHUDClass_MetaData[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_MainHUDClass = { "MainHUDClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorGameMode, MainHUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_MainHUDClass_MetaData), Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_MainHUDClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_ActiveWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_ActiveWidget = { "ActiveWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorGameMode, ActiveWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_ActiveWidget_MetaData), Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_ActiveWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABatteryCollectorGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_DelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_DecayAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_PowerAmountToWin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_PowerToWinMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_MainHUDClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_ActiveWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatteryCollectorGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatteryCollectorGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABatteryCollectorGameMode_Statics::ClassParams = {
		&ABatteryCollectorGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABatteryCollectorGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABatteryCollectorGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABatteryCollectorGameMode()
	{
		if (!Z_Registration_Info_UClass_ABatteryCollectorGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABatteryCollectorGameMode.OuterSingleton, Z_Construct_UClass_ABatteryCollectorGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABatteryCollectorGameMode.OuterSingleton;
	}
	template<> BATTERYCOLLECTOR_API UClass* StaticClass<ABatteryCollectorGameMode>()
	{
		return ABatteryCollectorGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryCollectorGameMode);
	ABatteryCollectorGameMode::~ABatteryCollectorGameMode() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABatteryCollectorGameMode, ABatteryCollectorGameMode::StaticClass, TEXT("ABatteryCollectorGameMode"), &Z_Registration_Info_UClass_ABatteryCollectorGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABatteryCollectorGameMode), 2512386982U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_486333369(TEXT("/Script/BatteryCollector"),
		Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
