// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/CascosNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCascosNodriza() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACascosNodriza_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACascosNodriza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACascosNodriza::StaticRegisterNativesACascosNodriza()
	{
	}
	UClass* Z_Construct_UClass_ACascosNodriza_NoRegister()
	{
		return ACascosNodriza::StaticClass();
	}
	struct Z_Construct_UClass_ACascosNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CascosNodrizaMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CascosNodrizaMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACascosNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACascosNodriza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CascosNodriza.h" },
		{ "ModuleRelativePath", "CascosNodriza.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACascosNodriza_Statics::NewProp_CascosNodrizaMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CascosNodriza.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACascosNodriza_Statics::NewProp_CascosNodrizaMesh = { "CascosNodrizaMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACascosNodriza, CascosNodrizaMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACascosNodriza_Statics::NewProp_CascosNodrizaMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACascosNodriza_Statics::NewProp_CascosNodrizaMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACascosNodriza_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACascosNodriza_Statics::NewProp_CascosNodrizaMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACascosNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACascosNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACascosNodriza_Statics::ClassParams = {
		&ACascosNodriza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACascosNodriza_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACascosNodriza_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACascosNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACascosNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACascosNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACascosNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACascosNodriza, 1017864736);
	template<> GALAGA_USFX_API UClass* StaticClass<ACascosNodriza>()
	{
		return ACascosNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACascosNodriza(Z_Construct_UClass_ACascosNodriza, &ACascosNodriza::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ACascosNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACascosNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
