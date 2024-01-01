// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollector/Public/Spawners/BatterySpawnerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatterySpawnerBase() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatterySpawnerBase();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatterySpawnerBase_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_APickupBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
// End Cross Module References
	DEFINE_FUNCTION(ABatterySpawnerBase::execGetRandomSpawnPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRandomSpawnPoint();
		P_NATIVE_END;
	}
	void ABatterySpawnerBase::StaticRegisterNativesABatterySpawnerBase()
	{
		UClass* Class = ABatterySpawnerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomSpawnPoint", &ABatterySpawnerBase::execGetRandomSpawnPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABatterySpawnerBase_GetRandomSpawnPoint_Statics
	{
		struct BatterySpawnerBase_eventGetRandomSpawnPoint_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABatterySpawnerBase_GetRandomSpawnPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BatterySpawnerBase_eventGetRandomSpawnPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatterySpawnerBase_GetRandomSpawnPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatterySpawnerBase_GetRandomSpawnPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatterySpawnerBase_GetRandomSpawnPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/Spawners/BatterySpawnerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatterySpawnerBase_GetRandomSpawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatterySpawnerBase, nullptr, "GetRandomSpawnPoint", nullptr, nullptr, Z_Construct_UFunction_ABatterySpawnerBase_GetRandomSpawnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatterySpawnerBase_GetRandomSpawnPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABatterySpawnerBase_GetRandomSpawnPoint_Statics::BatterySpawnerBase_eventGetRandomSpawnPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABatterySpawnerBase_GetRandomSpawnPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABatterySpawnerBase_GetRandomSpawnPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABatterySpawnerBase_GetRandomSpawnPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABatterySpawnerBase_GetRandomSpawnPoint_Statics::BatterySpawnerBase_eventGetRandomSpawnPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABatterySpawnerBase_GetRandomSpawnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABatterySpawnerBase_GetRandomSpawnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABatterySpawnerBase);
	UClass* Z_Construct_UClass_ABatterySpawnerBase_NoRegister()
	{
		return ABatterySpawnerBase::StaticClass();
	}
	struct Z_Construct_UClass_ABatterySpawnerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatterySpawnerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABatterySpawnerBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABatterySpawnerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABatterySpawnerBase_GetRandomSpawnPoint, "GetRandomSpawnPoint" }, // 928977578
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABatterySpawnerBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatterySpawnerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Spawners/BatterySpawnerBase.h" },
		{ "ModuleRelativePath", "Public/Spawners/BatterySpawnerBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatterySpawnerBase_Statics::NewProp_SpawnVolume_MetaData[] = {
		{ "Category", "Spawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Spawners/BatterySpawnerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatterySpawnerBase_Statics::NewProp_SpawnVolume = { "SpawnVolume", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatterySpawnerBase, SpawnVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABatterySpawnerBase_Statics::NewProp_SpawnVolume_MetaData), Z_Construct_UClass_ABatterySpawnerBase_Statics::NewProp_SpawnVolume_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatterySpawnerBase_Statics::NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/Spawners/BatterySpawnerBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABatterySpawnerBase_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatterySpawnerBase, ActorToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_APickupBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABatterySpawnerBase_Statics::NewProp_ActorToSpawn_MetaData), Z_Construct_UClass_ABatterySpawnerBase_Statics::NewProp_ActorToSpawn_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABatterySpawnerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatterySpawnerBase_Statics::NewProp_SpawnVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatterySpawnerBase_Statics::NewProp_ActorToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatterySpawnerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatterySpawnerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABatterySpawnerBase_Statics::ClassParams = {
		&ABatterySpawnerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABatterySpawnerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABatterySpawnerBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABatterySpawnerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABatterySpawnerBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABatterySpawnerBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABatterySpawnerBase()
	{
		if (!Z_Registration_Info_UClass_ABatterySpawnerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABatterySpawnerBase.OuterSingleton, Z_Construct_UClass_ABatterySpawnerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABatterySpawnerBase.OuterSingleton;
	}
	template<> BATTERYCOLLECTOR_API UClass* StaticClass<ABatterySpawnerBase>()
	{
		return ABatterySpawnerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatterySpawnerBase);
	ABatterySpawnerBase::~ABatterySpawnerBase() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Spawners_BatterySpawnerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Spawners_BatterySpawnerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABatterySpawnerBase, ABatterySpawnerBase::StaticClass, TEXT("ABatterySpawnerBase"), &Z_Registration_Info_UClass_ABatterySpawnerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABatterySpawnerBase), 2424291556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Spawners_BatterySpawnerBase_h_2930690631(TEXT("/Script/BatteryCollector"),
		Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Spawners_BatterySpawnerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Spawners_BatterySpawnerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
