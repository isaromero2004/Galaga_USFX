// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/Strategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategy() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_UStrategy_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UStrategy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void UStrategy::StaticRegisterNativesUStrategy()
	{
	}
	UClass* Z_Construct_UClass_UStrategy_NoRegister()
	{
		return UStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrategy_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Strategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStrategy_Statics::ClassParams = {
		&UStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStrategy, 2614194267);
	template<> GALAGA_USFX_API UClass* StaticClass<UStrategy>()
	{
		return UStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStrategy(Z_Construct_UClass_UStrategy, &UStrategy::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("UStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
