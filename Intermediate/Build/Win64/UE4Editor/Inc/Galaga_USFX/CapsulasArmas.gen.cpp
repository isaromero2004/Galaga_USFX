// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/CapsulasArmas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulasArmas() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACapsulasArmas_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACapsulasArmas();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACapsulas();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ACapsulasArmas::StaticRegisterNativesACapsulasArmas()
	{
	}
	UClass* Z_Construct_UClass_ACapsulasArmas_NoRegister()
	{
		return ACapsulasArmas::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulasArmas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulasArmas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsulas,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulasArmas_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CapsulasArmas.h" },
		{ "ModuleRelativePath", "CapsulasArmas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulasArmas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulasArmas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulasArmas_Statics::ClassParams = {
		&ACapsulasArmas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsulasArmas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulasArmas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulasArmas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulasArmas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulasArmas, 1958453818);
	template<> GALAGA_USFX_API UClass* StaticClass<ACapsulasArmas>()
	{
		return ACapsulasArmas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulasArmas(Z_Construct_UClass_ACapsulasArmas, &ACapsulasArmas::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ACapsulasArmas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulasArmas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
