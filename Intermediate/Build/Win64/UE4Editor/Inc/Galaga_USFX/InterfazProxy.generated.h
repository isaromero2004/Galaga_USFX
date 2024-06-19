// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGA_USFX_InterfazProxy_generated_h
#error "InterfazProxy.generated.h already included, missing '#pragma once' in InterfazProxy.h"
#endif
#define GALAGA_USFX_InterfazProxy_generated_h

#define Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_SPARSE_DATA
#define Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_RPC_WRAPPERS
#define Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_USFX_API UInterfazProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterfazProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_USFX_API, UInterfazProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterfazProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_USFX_API UInterfazProxy(UInterfazProxy&&); \
	GALAGA_USFX_API UInterfazProxy(const UInterfazProxy&); \
public:


#define Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_USFX_API UInterfazProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_USFX_API UInterfazProxy(UInterfazProxy&&); \
	GALAGA_USFX_API UInterfazProxy(const UInterfazProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_USFX_API, UInterfazProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterfazProxy); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterfazProxy)


#define Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterfazProxy(); \
	friend struct Z_Construct_UClass_UInterfazProxy_Statics; \
public: \
	DECLARE_CLASS(UInterfazProxy, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Galaga_USFX"), GALAGA_USFX_API) \
	DECLARE_SERIALIZER(UInterfazProxy)


#define Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_GENERATED_UINTERFACE_BODY() \
	Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_GENERATED_UINTERFACE_BODY() \
	Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterfazProxy() {} \
public: \
	typedef UInterfazProxy UClassType; \
	typedef IInterfazProxy ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterfazProxy() {} \
public: \
	typedef UInterfazProxy UClassType; \
	typedef IInterfazProxy ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_12_PROLOG
#define Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_RPC_WRAPPERS \
	Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_API UClass* StaticClass<class UInterfazProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_USFX_Source_Galaga_USFX_InterfazProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
