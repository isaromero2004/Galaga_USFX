// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/Protegido.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProtegido() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AProtegido_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AProtegido();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AProtegido::StaticRegisterNativesAProtegido()
	{
	}
	UClass* Z_Construct_UClass_AProtegido_NoRegister()
	{
		return AProtegido::StaticClass();
	}
	struct Z_Construct_UClass_AProtegido_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProtegido_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtegido_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Protegido.h" },
		{ "ModuleRelativePath", "Protegido.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProtegido_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProtegido>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProtegido_Statics::ClassParams = {
		&AProtegido::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProtegido_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProtegido_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProtegido()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProtegido_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProtegido, 3799854784);
	template<> GALAGA_USFX_API UClass* StaticClass<AProtegido>()
	{
		return AProtegido::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProtegido(Z_Construct_UClass_AProtegido, &AProtegido::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AProtegido"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProtegido);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
