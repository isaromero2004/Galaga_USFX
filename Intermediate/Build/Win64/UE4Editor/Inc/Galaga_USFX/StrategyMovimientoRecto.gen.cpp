// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/StrategyMovimientoRecto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyMovimientoRecto() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AStrategyMovimientoRecto_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AStrategyMovimientoRecto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UStrategy_NoRegister();
// End Cross Module References
	void AStrategyMovimientoRecto::StaticRegisterNativesAStrategyMovimientoRecto()
	{
	}
	UClass* Z_Construct_UClass_AStrategyMovimientoRecto_NoRegister()
	{
		return AStrategyMovimientoRecto::StaticClass();
	}
	struct Z_Construct_UClass_AStrategyMovimientoRecto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrategyMovimientoRecto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategyMovimientoRecto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StrategyMovimientoRecto.h" },
		{ "ModuleRelativePath", "StrategyMovimientoRecto.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStrategyMovimientoRecto_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStrategy_NoRegister, (int32)VTABLE_OFFSET(AStrategyMovimientoRecto, IStrategy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrategyMovimientoRecto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrategyMovimientoRecto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrategyMovimientoRecto_Statics::ClassParams = {
		&AStrategyMovimientoRecto::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStrategyMovimientoRecto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategyMovimientoRecto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrategyMovimientoRecto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrategyMovimientoRecto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrategyMovimientoRecto, 2761821013);
	template<> GALAGA_USFX_API UClass* StaticClass<AStrategyMovimientoRecto>()
	{
		return AStrategyMovimientoRecto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrategyMovimientoRecto(Z_Construct_UClass_AStrategyMovimientoRecto, &AStrategyMovimientoRecto::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AStrategyMovimientoRecto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategyMovimientoRecto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
