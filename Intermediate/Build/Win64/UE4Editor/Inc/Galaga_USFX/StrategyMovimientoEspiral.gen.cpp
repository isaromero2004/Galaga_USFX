// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/StrategyMovimientoEspiral.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyMovimientoEspiral() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AStrategyMovimientoEspiral_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AStrategyMovimientoEspiral();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UStrategy_NoRegister();
// End Cross Module References
	void AStrategyMovimientoEspiral::StaticRegisterNativesAStrategyMovimientoEspiral()
	{
	}
	UClass* Z_Construct_UClass_AStrategyMovimientoEspiral_NoRegister()
	{
		return AStrategyMovimientoEspiral::StaticClass();
	}
	struct Z_Construct_UClass_AStrategyMovimientoEspiral_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrategyMovimientoEspiral_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategyMovimientoEspiral_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StrategyMovimientoEspiral.h" },
		{ "ModuleRelativePath", "StrategyMovimientoEspiral.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStrategyMovimientoEspiral_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStrategy_NoRegister, (int32)VTABLE_OFFSET(AStrategyMovimientoEspiral, IStrategy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrategyMovimientoEspiral_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrategyMovimientoEspiral>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrategyMovimientoEspiral_Statics::ClassParams = {
		&AStrategyMovimientoEspiral::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AStrategyMovimientoEspiral_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategyMovimientoEspiral_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrategyMovimientoEspiral()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrategyMovimientoEspiral_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrategyMovimientoEspiral, 3396845889);
	template<> GALAGA_USFX_API UClass* StaticClass<AStrategyMovimientoEspiral>()
	{
		return AStrategyMovimientoEspiral::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrategyMovimientoEspiral(Z_Construct_UClass_AStrategyMovimientoEspiral, &AStrategyMovimientoEspiral::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AStrategyMovimientoEspiral"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategyMovimientoEspiral);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
