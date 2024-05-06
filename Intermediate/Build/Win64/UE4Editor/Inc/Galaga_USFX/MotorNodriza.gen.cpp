// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/MotorNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotorNodriza() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AMotorNodriza_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AMotorNodriza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMotorNodriza::StaticRegisterNativesAMotorNodriza()
	{
	}
	UClass* Z_Construct_UClass_AMotorNodriza_NoRegister()
	{
		return AMotorNodriza::StaticClass();
	}
	struct Z_Construct_UClass_AMotorNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotorNodrizaMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotorNodrizaMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMotorNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotorNodriza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MotorNodriza.h" },
		{ "ModuleRelativePath", "MotorNodriza.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotorNodriza_Statics::NewProp_MotorNodrizaMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MotorNodriza.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotorNodriza_Statics::NewProp_MotorNodrizaMesh = { "MotorNodrizaMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotorNodriza, MotorNodrizaMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotorNodriza_Statics::NewProp_MotorNodrizaMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotorNodriza_Statics::NewProp_MotorNodrizaMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMotorNodriza_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotorNodriza_Statics::NewProp_MotorNodrizaMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMotorNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotorNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMotorNodriza_Statics::ClassParams = {
		&AMotorNodriza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMotorNodriza_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMotorNodriza_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMotorNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMotorNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMotorNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMotorNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMotorNodriza, 941942751);
	template<> GALAGA_USFX_API UClass* StaticClass<AMotorNodriza>()
	{
		return AMotorNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMotorNodriza(Z_Construct_UClass_AMotorNodriza, &AMotorNodriza::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AMotorNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMotorNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
