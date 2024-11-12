// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DONKEYKONG_USFX_Escaleras_generated_h
#error "Escaleras.generated.h already included, missing '#pragma once' in Escaleras.h"
#endif
#define DONKEYKONG_USFX_Escaleras_generated_h

#define OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_SPARSE_DATA
#define OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEscaleras(); \
	friend struct Z_Construct_UClass_AEscaleras_Statics; \
public: \
	DECLARE_CLASS(AEscaleras, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong_USFX"), NO_API) \
	DECLARE_SERIALIZER(AEscaleras)


#define OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEscaleras(); \
	friend struct Z_Construct_UClass_AEscaleras_Statics; \
public: \
	DECLARE_CLASS(AEscaleras, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong_USFX"), NO_API) \
	DECLARE_SERIALIZER(AEscaleras)


#define OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEscaleras(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEscaleras) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEscaleras); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEscaleras); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEscaleras(AEscaleras&&); \
	NO_API AEscaleras(const AEscaleras&); \
public:


#define OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEscaleras(AEscaleras&&); \
	NO_API AEscaleras(const AEscaleras&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEscaleras); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEscaleras); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEscaleras)


#define OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EscalerasMesh() { return STRUCT_OFFSET(AEscaleras, EscalerasMesh); } \
	FORCEINLINE static uint32 __PPO__EscalerasCollision() { return STRUCT_OFFSET(AEscaleras, EscalerasCollision); }


#define OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_9_PROLOG
#define OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_PRIVATE_PROPERTY_OFFSET \
	OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_SPARSE_DATA \
	OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_RPC_WRAPPERS \
	OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_INCLASS \
	OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_PRIVATE_PROPERTY_OFFSET \
	OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_SPARSE_DATA \
	OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_INCLASS_NO_PURE_DECLS \
	OBSERVER_Source_DonkeyKong_USFX_Escaleras_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONKEYKONG_USFX_API UClass* StaticClass<class AEscaleras>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OBSERVER_Source_DonkeyKong_USFX_Escaleras_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
