// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/Meteorito.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeteorito() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AMeteorito_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AMeteorito();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AObstaculo();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AMeteorito::StaticRegisterNativesAMeteorito()
	{
	}
	UClass* Z_Construct_UClass_AMeteorito_NoRegister()
	{
		return AMeteorito::StaticClass();
	}
	struct Z_Construct_UClass_AMeteorito_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeteorito_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculo,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeteorito_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Meteorito.h" },
		{ "ModuleRelativePath", "Meteorito.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeteorito_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeteorito>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeteorito_Statics::ClassParams = {
		&AMeteorito::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMeteorito_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMeteorito_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeteorito()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeteorito_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeteorito, 1388253914);
	template<> GALAGA_USFX_API UClass* StaticClass<AMeteorito>()
	{
		return AMeteorito::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeteorito(Z_Construct_UClass_AMeteorito, &AMeteorito::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AMeteorito"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeteorito);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
