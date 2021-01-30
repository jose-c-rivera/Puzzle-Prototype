// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUZZLEDEMO_PuzzleDemoPawn_generated_h
#error "PuzzleDemoPawn.generated.h already included, missing '#pragma once' in PuzzleDemoPawn.h"
#endif
#define PUZZLEDEMO_PuzzleDemoPawn_generated_h

#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_SPARSE_DATA
#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_RPC_WRAPPERS
#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPuzzleDemoPawn(); \
	friend struct Z_Construct_UClass_APuzzleDemoPawn_Statics; \
public: \
	DECLARE_CLASS(APuzzleDemoPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PuzzleDemo"), NO_API) \
	DECLARE_SERIALIZER(APuzzleDemoPawn)


#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPuzzleDemoPawn(); \
	friend struct Z_Construct_UClass_APuzzleDemoPawn_Statics; \
public: \
	DECLARE_CLASS(APuzzleDemoPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PuzzleDemo"), NO_API) \
	DECLARE_SERIALIZER(APuzzleDemoPawn)


#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APuzzleDemoPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APuzzleDemoPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzleDemoPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleDemoPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzleDemoPawn(APuzzleDemoPawn&&); \
	NO_API APuzzleDemoPawn(const APuzzleDemoPawn&); \
public:


#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APuzzleDemoPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzleDemoPawn(APuzzleDemoPawn&&); \
	NO_API APuzzleDemoPawn(const APuzzleDemoPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzleDemoPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleDemoPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APuzzleDemoPawn)


#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentBlockFocus() { return STRUCT_OFFSET(APuzzleDemoPawn, CurrentBlockFocus); }


#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_9_PROLOG
#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_SPARSE_DATA \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_RPC_WRAPPERS \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_INCLASS \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_SPARSE_DATA \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_INCLASS_NO_PURE_DECLS \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PuzzleDemoPawn."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLEDEMO_API UClass* StaticClass<class APuzzleDemoPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PuzzleDemo_Source_PuzzleDemo_PuzzleDemoPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
