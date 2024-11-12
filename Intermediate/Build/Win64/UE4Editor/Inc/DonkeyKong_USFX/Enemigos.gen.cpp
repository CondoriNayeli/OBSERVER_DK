// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/Enemigos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigos() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AEnemigos_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AEnemigos();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_UISuscriptor_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_UITransfromar_NoRegister();
// End Cross Module References
	void AEnemigos::StaticRegisterNativesAEnemigos()
	{
	}
	UClass* Z_Construct_UClass_AEnemigos_NoRegister()
	{
		return AEnemigos::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigos_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemigos.h" },
		{ "ModuleRelativePath", "Enemigos.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemigos_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UISuscriptor_NoRegister, (int32)VTABLE_OFFSET(AEnemigos, IISuscriptor), false },
			{ Z_Construct_UClass_UITransfromar_NoRegister, (int32)VTABLE_OFFSET(AEnemigos, IITransfromar), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigos_Statics::ClassParams = {
		&AEnemigos::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigos, 1578480280);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<AEnemigos>()
	{
		return AEnemigos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigos(Z_Construct_UClass_AEnemigos, &AEnemigos::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("AEnemigos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
