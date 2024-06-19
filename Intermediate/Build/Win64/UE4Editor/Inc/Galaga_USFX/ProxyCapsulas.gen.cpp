// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ProxyCapsulas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProxyCapsulas() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AProxyCapsulas_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AProxyCapsulas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UInterfazProxy_NoRegister();
// End Cross Module References
	void AProxyCapsulas::StaticRegisterNativesAProxyCapsulas()
	{
	}
	UClass* Z_Construct_UClass_AProxyCapsulas_NoRegister()
	{
		return AProxyCapsulas::StaticClass();
	}
	struct Z_Construct_UClass_AProxyCapsulas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProxyCapsulas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProxyCapsulas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProxyCapsulas.h" },
		{ "ModuleRelativePath", "ProxyCapsulas.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AProxyCapsulas_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterfazProxy_NoRegister, (int32)VTABLE_OFFSET(AProxyCapsulas, IInterfazProxy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProxyCapsulas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProxyCapsulas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProxyCapsulas_Statics::ClassParams = {
		&AProxyCapsulas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProxyCapsulas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProxyCapsulas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProxyCapsulas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProxyCapsulas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProxyCapsulas, 3063228180);
	template<> GALAGA_USFX_API UClass* StaticClass<AProxyCapsulas>()
	{
		return AProxyCapsulas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProxyCapsulas(Z_Construct_UClass_AProxyCapsulas, &AProxyCapsulas::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AProxyCapsulas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProxyCapsulas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
