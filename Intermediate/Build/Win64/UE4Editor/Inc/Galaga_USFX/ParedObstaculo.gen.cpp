// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ParedObstaculo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParedObstaculo() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AParedObstaculo_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AParedObstaculo();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AObstaculo();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AParedObstaculo::StaticRegisterNativesAParedObstaculo()
	{
	}
	UClass* Z_Construct_UClass_AParedObstaculo_NoRegister()
	{
		return AParedObstaculo::StaticClass();
	}
	struct Z_Construct_UClass_AParedObstaculo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParedObstaculo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculo,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParedObstaculo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ParedObstaculo.h" },
		{ "ModuleRelativePath", "ParedObstaculo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParedObstaculo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParedObstaculo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParedObstaculo_Statics::ClassParams = {
		&AParedObstaculo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AParedObstaculo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AParedObstaculo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParedObstaculo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParedObstaculo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParedObstaculo, 3499790455);
	template<> GALAGA_USFX_API UClass* StaticClass<AParedObstaculo>()
	{
		return AParedObstaculo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParedObstaculo(Z_Construct_UClass_AParedObstaculo, &AParedObstaculo::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AParedObstaculo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParedObstaculo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
