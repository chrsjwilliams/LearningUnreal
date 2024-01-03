// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickups/PickupBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTERYCOLLECTOR_PickupBase_generated_h
#error "PickupBase.generated.h already included, missing '#pragma once' in PickupBase.h"
#endif
#define BATTERYCOLLECTOR_PickupBase_generated_h

#define FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_12_SPARSE_DATA
#define FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPickUpCollected_Implementation(); \
 \
	DECLARE_FUNCTION(execOnPickUpCollected); \
	DECLARE_FUNCTION(execSetPickUpIsActive); \
	DECLARE_FUNCTION(execIsPickUpActive);


#define FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_12_ACCESSORS
#define FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_12_CALLBACK_WRAPPERS
#define FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupBase(); \
	friend struct Z_Construct_UClass_APickupBase_Statics; \
public: \
	DECLARE_CLASS(APickupBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(APickupBase)


#define FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupBase(APickupBase&&); \
	NO_API APickupBase(const APickupBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupBase) \
	NO_API virtual ~APickupBase();


#define FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_9_PROLOG
#define FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_12_SPARSE_DATA \
	FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_12_ACCESSORS \
	FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_12_CALLBACK_WRAPPERS \
	FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERYCOLLECTOR_API UClass* StaticClass<class APickupBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_LearningUnreal_BatteryCollector_Source_BatteryCollector_Public_Pickups_PickupBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
