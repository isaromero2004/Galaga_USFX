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
	GALAGA_USFX_API UClass* Z_Construct_UClass_AGalaga_USFXPawn_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UState_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_naveJugador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_naveJugador;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASigiloso_Statics::NewProp_naveJugador_MetaData[] = {
		{ "ModuleRelativePath", "Sigiloso.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASigiloso_Statics::NewProp_naveJugador = { "naveJugador", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASigiloso, naveJugador), Z_Construct_UClass_AGalaga_USFXPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASigiloso_Statics::NewProp_naveJugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASigiloso_Statics::NewProp_naveJugador_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASigiloso_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASigiloso_Statics::NewProp_naveJugador,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASigiloso_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UState_NoRegister, (int32)VTABLE_OFFSET(ASigiloso, IState), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASigiloso_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASigiloso>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASigiloso_Statics::ClassParams = {
		&ASigiloso::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASigiloso_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASigiloso_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
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
	IMPLEMENT_CLASS(ASigiloso, 2100986854);
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
