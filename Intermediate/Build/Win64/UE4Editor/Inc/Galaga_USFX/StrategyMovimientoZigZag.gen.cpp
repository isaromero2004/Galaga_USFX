// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/StrategyMovimientoZigZag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyMovimientoZigZag() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AStrategyMovimientoZigZag_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AStrategyMovimientoZigZag();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UStrategy_NoRegister();
// End Cross Module References
	void AStrategyMovimientoZigZag::StaticRegisterNativesAStrategyMovimientoZigZag()
	{
	}
	UClass* Z_Construct_UClass_AStrategyMovimientoZigZag_NoRegister()
	{
		return AStrategyMovimientoZigZag::StaticClass();
	}
	struct Z_Construct_UClass_AStrategyMovimientoZigZag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrategyMovimientoZigZag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategyMovimientoZigZag_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StrategyMovimientoZigZag.h" },
		{ "ModuleRelativePath", "StrategyMovimientoZigZag.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStrategyMovimientoZigZag_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStrategy_NoRegister, (int32)VTABLE_OFFSET(AStrategyMovimientoZigZag, IStrategy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrategyMovimientoZigZag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrategyMovimientoZigZag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrategyMovimientoZigZag_Statics::ClassParams = {
		&AStrategyMovimientoZigZag::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStrategyMovimientoZigZag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategyMovimientoZigZag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrategyMovimientoZigZag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrategyMovimientoZigZag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrategyMovimientoZigZag, 3214068667);
	template<> GALAGA_USFX_API UClass* StaticClass<AStrategyMovimientoZigZag>()
	{
		return AStrategyMovimientoZigZag::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrategyMovimientoZigZag(Z_Construct_UClass_AStrategyMovimientoZigZag, &AStrategyMovimientoZigZag::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AStrategyMovimientoZigZag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategyMovimientoZigZag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
