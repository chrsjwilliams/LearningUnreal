// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollector/Public/Pickups/BatteryPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryPickup() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryPickup();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryPickup_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_APickupBase();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
// End Cross Module References
	void ABatteryPickup::StaticRegisterNativesABatteryPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABatteryPickup);
	UClass* Z_Construct_UClass_ABatteryPickup_NoRegister()
	{
		return ABatteryPickup::StaticClass();
	}
	struct Z_Construct_UClass_ABatteryPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatteryPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPickup_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickups/BatteryPickup.h" },
		{ "ModuleRelativePath", "Public/Pickups/BatteryPickup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatteryPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatteryPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABatteryPickup_Statics::ClassParams = {
		&ABatteryPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_ABatteryPickup_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABatteryPickup()
	{
		if (!Z_Registration_Info_UClass_ABatteryPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABatteryPickup.OuterSingleton, Z_Construct_UClass_ABatteryPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABatteryPickup.OuterSingleton;
	}
	template<> BATTERYCOLLECTOR_API UClass* StaticClass<ABatteryPickup>()
	{
		return ABatteryPickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryPickup);
	ABatteryPickup::~ABatteryPickup() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_BatteryPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_BatteryPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABatteryPickup, ABatteryPickup::StaticClass, TEXT("ABatteryPickup"), &Z_Registration_Info_UClass_ABatteryPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABatteryPickup), 2286049966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_BatteryPickup_h_1286058202(TEXT("/Script/BatteryCollector"),
		Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_BatteryPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_BatteryPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
