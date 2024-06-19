// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACapsulas;
#ifdef GALAGA_USFX_Inventario_generated_h
#error "Inventario.generated.h already included, missing '#pragma once' in Inventario.h"
#endif
#define GALAGA_USFX_Inventario_generated_h

#define Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_SPARSE_DATA
#define Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInventarioLleno); \
	DECLARE_FUNCTION(execRemoveFromInventory); \
	DECLARE_FUNCTION(execAddToInventory);


#define Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInventarioLleno); \
	DECLARE_FUNCTION(execRemoveFromInventory); \
	DECLARE_FUNCTION(execAddToInventory);


#define Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventario(); \
	friend struct Z_Construct_UClass_UInventario_Statics; \
public: \
	DECLARE_CLASS(UInventario, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX"), NO_API) \
	DECLARE_SERIALIZER(UInventario)


#define Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInventario(); \
	friend struct Z_Construct_UClass_UInventario_Statics; \
public: \
	DECLARE_CLASS(UInventario, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX"), NO_API) \
	DECLARE_SERIALIZER(UInventario)


#define Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventario(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventario) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventario); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventario); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventario(UInventario&&); \
	NO_API UInventario(const UInventario&); \
public:


#define Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventario(UInventario&&); \
	NO_API UInventario(const UInventario&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventario); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventario); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventario)


#define Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_PRIVATE_PROPERTY_OFFSET
#define Galaga_USFX_Source_Galaga_USFX_Inventario_h_12_PROLOG
#define Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_RPC_WRAPPERS \
	Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_INCLASS \
	Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_INCLASS_NO_PURE_DECLS \
	Galaga_USFX_Source_Galaga_USFX_Inventario_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_API UClass* StaticClass<class UInventario>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_USFX_Source_Galaga_USFX_Inventario_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
