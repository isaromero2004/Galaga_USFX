// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/Movimiento.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimiento() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_UMovimiento_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UMovimiento();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void UMovimiento::StaticRegisterNativesUMovimiento()
	{
	}
	UClass* Z_Construct_UClass_UMovimiento_NoRegister()
	{
		return UMovimiento::StaticClass();
	}
	struct Z_Construct_UClass_UMovimiento_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovimientoNaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovimientoNaves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovimiento_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimiento_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Movimiento.h" },
		{ "ModuleRelativePath", "Movimiento.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimiento_Statics::NewProp_MovimientoNaves_MetaData[] = {
		{ "ModuleRelativePath", "Movimiento.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovimiento_Statics::NewProp_MovimientoNaves = { "MovimientoNaves", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovimiento, MovimientoNaves), METADATA_PARAMS(Z_Construct_UClass_UMovimiento_Statics::NewProp_MovimientoNaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimiento_Statics::NewProp_MovimientoNaves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovimiento_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovimiento_Statics::NewProp_MovimientoNaves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovimiento_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovimiento>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovimiento_Statics::ClassParams = {
		&UMovimiento::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovimiento_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovimiento_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovimiento_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimiento_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovimiento()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovimiento_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovimiento, 3628511386);
	template<> GALAGA_USFX_API UClass* StaticClass<UMovimiento>()
	{
		return UMovimiento::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovimiento(Z_Construct_UClass_UMovimiento, &UMovimiento::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("UMovimiento"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimiento);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
