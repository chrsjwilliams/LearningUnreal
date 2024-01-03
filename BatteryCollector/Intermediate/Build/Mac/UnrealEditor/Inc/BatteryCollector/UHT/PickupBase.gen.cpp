// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollector/Public/Pickups/PickupBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupBase() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_APickupBase();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_APickupBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
// End Cross Module References
	DEFINE_FUNCTION(APickupBase::execOnPickUpCollected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPickUpCollected_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupBase::execSetPickUpIsActive)
	{
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPickUpIsActive(Z_Param_isActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupBase::execIsPickUpActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPickUpActive();
		P_NATIVE_END;
	}
	static FName NAME_APickupBase_OnPickUpCollected = FName(TEXT("OnPickUpCollected"));
	void APickupBase::OnPickUpCollected()
	{
		ProcessEvent(FindFunctionChecked(NAME_APickupBase_OnPickUpCollected),NULL);
	}
	void APickupBase::StaticRegisterNativesAPickupBase()
	{
		UClass* Class = APickupBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPickUpActive", &APickupBase::execIsPickUpActive },
			{ "OnPickUpCollected", &APickupBase::execOnPickUpCollected },
			{ "SetPickUpIsActive", &APickupBase::execSetPickUpIsActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickupBase_IsPickUpActive_Statics
	{
		struct PickupBase_eventIsPickUpActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APickupBase_IsPickUpActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PickupBase_eventIsPickUpActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickupBase_IsPickUpActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PickupBase_eventIsPickUpActive_Parms), &Z_Construct_UFunction_APickupBase_IsPickUpActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupBase_IsPickUpActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupBase_IsPickUpActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupBase_IsPickUpActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns if pick up is active\n" },
#endif
		{ "ModuleRelativePath", "Public/Pickups/PickupBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if pick up is active" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupBase_IsPickUpActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupBase, nullptr, "IsPickUpActive", nullptr, nullptr, Z_Construct_UFunction_APickupBase_IsPickUpActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupBase_IsPickUpActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupBase_IsPickUpActive_Statics::PickupBase_eventIsPickUpActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupBase_IsPickUpActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupBase_IsPickUpActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupBase_IsPickUpActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupBase_IsPickUpActive_Statics::PickupBase_eventIsPickUpActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupBase_IsPickUpActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupBase_IsPickUpActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupBase_OnPickUpCollected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupBase_OnPickUpCollected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pickups/PickupBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupBase_OnPickUpCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupBase, nullptr, "OnPickUpCollected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupBase_OnPickUpCollected_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupBase_OnPickUpCollected_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APickupBase_OnPickUpCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupBase_OnPickUpCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupBase_SetPickUpIsActive_Statics
	{
		struct PickupBase_eventSetPickUpIsActive_Parms
		{
			bool isActive;
		};
		static void NewProp_isActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APickupBase_SetPickUpIsActive_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((PickupBase_eventSetPickUpIsActive_Parms*)Obj)->isActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickupBase_SetPickUpIsActive_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PickupBase_eventSetPickUpIsActive_Parms), &Z_Construct_UFunction_APickupBase_SetPickUpIsActive_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupBase_SetPickUpIsActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupBase_SetPickUpIsActive_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupBase_SetPickUpIsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/Pickups/PickupBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupBase_SetPickUpIsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupBase, nullptr, "SetPickUpIsActive", nullptr, nullptr, Z_Construct_UFunction_APickupBase_SetPickUpIsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupBase_SetPickUpIsActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupBase_SetPickUpIsActive_Statics::PickupBase_eventSetPickUpIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupBase_SetPickUpIsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupBase_SetPickUpIsActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupBase_SetPickUpIsActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupBase_SetPickUpIsActive_Statics::PickupBase_eventSetPickUpIsActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupBase_SetPickUpIsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupBase_SetPickUpIsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickupBase);
	UClass* Z_Construct_UClass_APickupBase_NoRegister()
	{
		return APickupBase::StaticClass();
	}
	struct Z_Construct_UClass_APickupBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APickupBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupBase_IsPickUpActive, "IsPickUpActive" }, // 1756138336
		{ &Z_Construct_UFunction_APickupBase_OnPickUpCollected, "OnPickUpCollected" }, // 2039700515
		{ &Z_Construct_UFunction_APickupBase_SetPickUpIsActive, "SetPickUpIsActive" }, // 1765134768
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickups/PickupBase.h" },
		{ "ModuleRelativePath", "Public/Pickups/PickupBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupBase_Statics::NewProp_PickupMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickups/PickupBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupBase_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupBase, PickupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::NewProp_PickupMesh_MetaData), Z_Construct_UClass_APickupBase_Statics::NewProp_PickupMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupBase_Statics::NewProp_PickupMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupBase_Statics::ClassParams = {
		&APickupBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickupBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APickupBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APickupBase()
	{
		if (!Z_Registration_Info_UClass_APickupBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupBase.OuterSingleton, Z_Construct_UClass_APickupBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickupBase.OuterSingleton;
	}
	template<> BATTERYCOLLECTOR_API UClass* StaticClass<APickupBase>()
	{
		return APickupBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupBase);
	APickupBase::~APickupBase() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickupBase, APickupBase::StaticClass, TEXT("APickupBase"), &Z_Registration_Info_UClass_APickupBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupBase), 168095472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_1403979307(TEXT("/Script/BatteryCollector"),
		Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
