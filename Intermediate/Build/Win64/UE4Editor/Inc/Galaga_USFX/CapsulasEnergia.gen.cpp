// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/CapsulasEnergia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulasEnergia() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACapsulasEnergia_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACapsulasEnergia();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACapsulas();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ACapsulasEnergia::StaticRegisterNativesACapsulasEnergia()
	{
	}
	UClass* Z_Construct_UClass_ACapsulasEnergia_NoRegister()
	{
		return ACapsulasEnergia::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulasEnergia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulasEnergia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsulas,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulasEnergia_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CapsulasEnergia.h" },
		{ "ModuleRelativePath", "CapsulasEnergia.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulasEnergia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulasEnergia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulasEnergia_Statics::ClassParams = {
		&ACapsulasEnergia::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsulasEnergia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulasEnergia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulasEnergia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulasEnergia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulasEnergia, 1567983894);
	template<> GALAGA_USFX_API UClass* StaticClass<ACapsulasEnergia>()
	{
		return ACapsulasEnergia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulasEnergia(Z_Construct_UClass_ACapsulasEnergia, &ACapsulasEnergia::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ACapsulasEnergia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulasEnergia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
