// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/DirectorBuilderNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectorBuilderNodriza() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ADirectorBuilderNodriza_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ADirectorBuilderNodriza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ADirectorBuilderNodriza::StaticRegisterNativesADirectorBuilderNodriza()
	{
	}
	UClass* Z_Construct_UClass_ADirectorBuilderNodriza_NoRegister()
	{
		return ADirectorBuilderNodriza::StaticClass();
	}
	struct Z_Construct_UClass_ADirectorBuilderNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADirectorBuilderNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectorBuilderNodriza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DirectorBuilderNodriza.h" },
		{ "ModuleRelativePath", "DirectorBuilderNodriza.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADirectorBuilderNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirectorBuilderNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADirectorBuilderNodriza_Statics::ClassParams = {
		&ADirectorBuilderNodriza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADirectorBuilderNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorBuilderNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADirectorBuilderNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADirectorBuilderNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADirectorBuilderNodriza, 3617614896);
	template<> GALAGA_USFX_API UClass* StaticClass<ADirectorBuilderNodriza>()
	{
		return ADirectorBuilderNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADirectorBuilderNodriza(Z_Construct_UClass_ADirectorBuilderNodriza, &ADirectorBuilderNodriza::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ADirectorBuilderNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADirectorBuilderNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
