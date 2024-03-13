// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveEnemigaCazaG2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaCazaG2() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaCazaG2_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaCazaG2();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaCaza();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ANaveEnemigaCazaG2::StaticRegisterNativesANaveEnemigaCazaG2()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaCazaG2_NoRegister()
	{
		return ANaveEnemigaCazaG2::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaCazaG2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaCazaG2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaCaza,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaCazaG2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaCazaG2.h" },
		{ "ModuleRelativePath", "NaveEnemigaCazaG2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaCazaG2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaCazaG2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaCazaG2_Statics::ClassParams = {
		&ANaveEnemigaCazaG2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaCazaG2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaCazaG2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaCazaG2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaCazaG2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaCazaG2, 597962830);
	template<> GALAGA_USFX_API UClass* StaticClass<ANaveEnemigaCazaG2>()
	{
		return ANaveEnemigaCazaG2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaCazaG2(Z_Construct_UClass_ANaveEnemigaCazaG2, &ANaveEnemigaCazaG2::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANaveEnemigaCazaG2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaCazaG2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
