// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ArmamentoNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmamentoNodriza() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AArmamentoNodriza_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AArmamentoNodriza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AArmamentoNodriza::StaticRegisterNativesAArmamentoNodriza()
	{
	}
	UClass* Z_Construct_UClass_AArmamentoNodriza_NoRegister()
	{
		return AArmamentoNodriza::StaticClass();
	}
	struct Z_Construct_UClass_AArmamentoNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmamentoNodrizaMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArmamentoNodrizaMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmamentoNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmamentoNodriza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArmamentoNodriza.h" },
		{ "ModuleRelativePath", "ArmamentoNodriza.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmamentoNodriza_Statics::NewProp_ArmamentoNodrizaMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ArmamentoNodriza.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArmamentoNodriza_Statics::NewProp_ArmamentoNodrizaMesh = { "ArmamentoNodrizaMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmamentoNodriza, ArmamentoNodrizaMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArmamentoNodriza_Statics::NewProp_ArmamentoNodrizaMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArmamentoNodriza_Statics::NewProp_ArmamentoNodrizaMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArmamentoNodriza_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmamentoNodriza_Statics::NewProp_ArmamentoNodrizaMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmamentoNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmamentoNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmamentoNodriza_Statics::ClassParams = {
		&AArmamentoNodriza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArmamentoNodriza_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArmamentoNodriza_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArmamentoNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmamentoNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmamentoNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmamentoNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmamentoNodriza, 2955070258);
	template<> GALAGA_USFX_API UClass* StaticClass<AArmamentoNodriza>()
	{
		return AArmamentoNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmamentoNodriza(Z_Construct_UClass_AArmamentoNodriza, &AArmamentoNodriza::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AArmamentoNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmamentoNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
