// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TERRY_LogPrint_generated_h
#error "LogPrint.generated.h already included, missing '#pragma once' in LogPrint.h"
#endif
#define TERRY_LogPrint_generated_h

#define terry_Source_terry_LogPrint_h_13_SPARSE_DATA
#define terry_Source_terry_LogPrint_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execprint);


#define terry_Source_terry_LogPrint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execprint);


#define terry_Source_terry_LogPrint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULogPrint(); \
	friend struct Z_Construct_UClass_ULogPrint_Statics; \
public: \
	DECLARE_CLASS(ULogPrint, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/terry"), NO_API) \
	DECLARE_SERIALIZER(ULogPrint)


#define terry_Source_terry_LogPrint_h_13_INCLASS \
private: \
	static void StaticRegisterNativesULogPrint(); \
	friend struct Z_Construct_UClass_ULogPrint_Statics; \
public: \
	DECLARE_CLASS(ULogPrint, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/terry"), NO_API) \
	DECLARE_SERIALIZER(ULogPrint)


#define terry_Source_terry_LogPrint_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULogPrint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogPrint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULogPrint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogPrint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULogPrint(ULogPrint&&); \
	NO_API ULogPrint(const ULogPrint&); \
public:


#define terry_Source_terry_LogPrint_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULogPrint(ULogPrint&&); \
	NO_API ULogPrint(const ULogPrint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULogPrint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogPrint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULogPrint)


#define terry_Source_terry_LogPrint_h_13_PRIVATE_PROPERTY_OFFSET
#define terry_Source_terry_LogPrint_h_10_PROLOG
#define terry_Source_terry_LogPrint_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	terry_Source_terry_LogPrint_h_13_PRIVATE_PROPERTY_OFFSET \
	terry_Source_terry_LogPrint_h_13_SPARSE_DATA \
	terry_Source_terry_LogPrint_h_13_RPC_WRAPPERS \
	terry_Source_terry_LogPrint_h_13_INCLASS \
	terry_Source_terry_LogPrint_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define terry_Source_terry_LogPrint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	terry_Source_terry_LogPrint_h_13_PRIVATE_PROPERTY_OFFSET \
	terry_Source_terry_LogPrint_h_13_SPARSE_DATA \
	terry_Source_terry_LogPrint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	terry_Source_terry_LogPrint_h_13_INCLASS_NO_PURE_DECLS \
	terry_Source_terry_LogPrint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TERRY_API UClass* StaticClass<class ULogPrint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID terry_Source_terry_LogPrint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
