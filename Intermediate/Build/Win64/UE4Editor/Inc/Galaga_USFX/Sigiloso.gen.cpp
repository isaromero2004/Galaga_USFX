// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/Sigiloso.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSigiloso() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ASigiloso_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ASigiloso();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ASigiloso::StaticRegisterNativesASigiloso()
	{
	}
	UClass* Z_Construct_UClass_ASigiloso_NoRegister()
	{
		return ASigiloso::StaticClass();
	}
	struct Z_Construct_UClass_ASigiloso_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASigiloso_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASigiloso_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Sigiloso.h" },
		{ "ModuleRelativePath", "Sigiloso.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASigiloso_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASigiloso>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASigiloso_Statics::ClassParams = {
		&ASigiloso::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ASigiloso_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASigiloso_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASigiloso()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASigiloso_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASigiloso, 2013525938);
	template<> GALAGA_USFX_API UClass* StaticClass<ASigiloso>()
	{
		return ASigiloso::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASigiloso(Z_Construct_UClass_ASigiloso, &ASigiloso::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ASigiloso"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASigiloso);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
