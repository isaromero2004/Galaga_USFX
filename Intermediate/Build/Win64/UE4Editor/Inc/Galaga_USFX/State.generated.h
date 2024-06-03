// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGA_USFX_State_generated_h
#error "State.generated.h already included, missing '#pragma once' in State.h"
#endif
#define GALAGA_USFX_State_generated_h

#define Galaga_USFX_Source_Galaga_USFX_State_h_14_SPARSE_DATA
#define Galaga_USFX_Source_Galaga_USFX_State_h_14_RPC_WRAPPERS
#define Galaga_USFX_Source_Galaga_USFX_State_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Galaga_USFX_Source_Galaga_USFX_State_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_USFX_API UState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_USFX_API, UState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_USFX_API UState(UState&&); \
	GALAGA_USFX_API UState(const UState&); \
public:


#define Galaga_USFX_Source_Galaga_USFX_State_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_USFX_API UState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_USFX_API UState(UState&&); \
	GALAGA_USFX_API UState(const UState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_USFX_API, UState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UState); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UState)


#define Galaga_USFX_Source_Galaga_USFX_State_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUState(); \
	friend struct Z_Construct_UClass_UState_Statics; \
public: \
	DECLARE_CLASS(UState, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Galaga_USFX"), GALAGA_USFX_API) \
	DECLARE_SERIALIZER(UState)


#define Galaga_USFX_Source_Galaga_USFX_State_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Galaga_USFX_Source_Galaga_USFX_State_h_14_GENERATED_UINTERFACE_BODY() \
	Galaga_USFX_Source_Galaga_USFX_State_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_State_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Galaga_USFX_Source_Galaga_USFX_State_h_14_GENERATED_UINTERFACE_BODY() \
	Galaga_USFX_Source_Galaga_USFX_State_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_State_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IState() {} \
public: \
	typedef UState UClassType; \
	typedef IState ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Galaga_USFX_Source_Galaga_USFX_State_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IState() {} \
public: \
	typedef UState UClassType; \
	typedef IState ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Galaga_USFX_Source_Galaga_USFX_State_h_11_PROLOG
#define Galaga_USFX_Source_Galaga_USFX_State_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_State_h_14_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_State_h_14_RPC_WRAPPERS \
	Galaga_USFX_Source_Galaga_USFX_State_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_State_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_State_h_14_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_State_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_USFX_Source_Galaga_USFX_State_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_API UClass* StaticClass<class UState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_USFX_Source_Galaga_USFX_State_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
