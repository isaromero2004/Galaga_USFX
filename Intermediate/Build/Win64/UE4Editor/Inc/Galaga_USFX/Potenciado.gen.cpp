// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/Potenciado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePotenciado() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_APotenciado_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_APotenciado();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AGalaga_USFXPawn_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UState_NoRegister();
// End Cross Module References
	void APotenciado::StaticRegisterNativesAPotenciado()
	{
	}
	UClass* Z_Construct_UClass_APotenciado_NoRegister()
	{
		return APotenciado::StaticClass();
	}
	struct Z_Construct_UClass_APotenciado_Statics
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
	UObject* (*const Z_Construct_UClass_APotenciado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotenciado_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Potenciado.h" },
		{ "ModuleRelativePath", "Potenciado.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotenciado_Statics::NewProp_naveJugador_MetaData[] = {
		{ "ModuleRelativePath", "Potenciado.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APotenciado_Statics::NewProp_naveJugador = { "naveJugador", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotenciado, naveJugador), Z_Construct_UClass_AGalaga_USFXPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APotenciado_Statics::NewProp_naveJugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotenciado_Statics::NewProp_naveJugador_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APotenciado_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotenciado_Statics::NewProp_naveJugador,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APotenciado_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UState_NoRegister, (int32)VTABLE_OFFSET(APotenciado, IState), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APotenciado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APotenciado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APotenciado_Statics::ClassParams = {
		&APotenciado::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APotenciado_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APotenciado_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APotenciado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APotenciado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APotenciado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APotenciado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APotenciado, 2847602681);
	template<> GALAGA_USFX_API UClass* StaticClass<APotenciado>()
	{
		return APotenciado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APotenciado(Z_Construct_UClass_APotenciado, &APotenciado::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("APotenciado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APotenciado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
