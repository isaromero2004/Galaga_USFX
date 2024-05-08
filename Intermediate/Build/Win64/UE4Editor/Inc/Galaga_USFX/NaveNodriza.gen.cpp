// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveNodriza() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveNodriza_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveNodriza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UMovimiento_NoRegister();
// End Cross Module References
	void ANaveNodriza::StaticRegisterNativesANaveNodriza()
	{
	}
	UClass* Z_Construct_UClass_ANaveNodriza_NoRegister()
	{
		return ANaveNodriza::StaticClass();
	}
	struct Z_Construct_UClass_ANaveNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovimientoNodriza_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovimientoNodriza;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveNodriza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveNodriza.h" },
		{ "ModuleRelativePath", "NaveNodriza.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveNodriza_Statics::NewProp_MovimientoNodriza_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveNodriza.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveNodriza_Statics::NewProp_MovimientoNodriza = { "MovimientoNodriza", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveNodriza, MovimientoNodriza), Z_Construct_UClass_UMovimiento_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveNodriza_Statics::NewProp_MovimientoNodriza_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveNodriza_Statics::NewProp_MovimientoNodriza_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveNodriza_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveNodriza_Statics::NewProp_MovimientoNodriza,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveNodriza_Statics::ClassParams = {
		&ANaveNodriza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveNodriza_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveNodriza_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveNodriza, 1707852049);
	template<> GALAGA_USFX_API UClass* StaticClass<ANaveNodriza>()
	{
		return ANaveNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveNodriza(Z_Construct_UClass_ANaveNodriza, &ANaveNodriza::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANaveNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
