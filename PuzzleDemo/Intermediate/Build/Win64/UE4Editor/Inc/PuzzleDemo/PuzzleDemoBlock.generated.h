// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef PUZZLEDEMO_PuzzleDemoBlock_generated_h
#error "PuzzleDemoBlock.generated.h already included, missing '#pragma once' in PuzzleDemoBlock.h"
#endif
#define PUZZLEDEMO_PuzzleDemoBlock_generated_h

#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_SPARSE_DATA
#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock); \
	DECLARE_FUNCTION(execBlockClicked);


#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock); \
	DECLARE_FUNCTION(execBlockClicked);


#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPuzzleDemoBlock(); \
	friend struct Z_Construct_UClass_APuzzleDemoBlock_Statics; \
public: \
	DECLARE_CLASS(APuzzleDemoBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PuzzleDemo"), PUZZLEDEMO_API) \
	DECLARE_SERIALIZER(APuzzleDemoBlock)


#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPuzzleDemoBlock(); \
	friend struct Z_Construct_UClass_APuzzleDemoBlock_Statics; \
public: \
	DECLARE_CLASS(APuzzleDemoBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PuzzleDemo"), PUZZLEDEMO_API) \
	DECLARE_SERIALIZER(APuzzleDemoBlock)


#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PUZZLEDEMO_API APuzzleDemoBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APuzzleDemoBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PUZZLEDEMO_API, APuzzleDemoBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleDemoBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PUZZLEDEMO_API APuzzleDemoBlock(APuzzleDemoBlock&&); \
	PUZZLEDEMO_API APuzzleDemoBlock(const APuzzleDemoBlock&); \
public:


#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PUZZLEDEMO_API APuzzleDemoBlock(APuzzleDemoBlock&&); \
	PUZZLEDEMO_API APuzzleDemoBlock(const APuzzleDemoBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PUZZLEDEMO_API, APuzzleDemoBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleDemoBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APuzzleDemoBlock)


#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(APuzzleDemoBlock, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(APuzzleDemoBlock, BlockMesh); }


#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_10_PROLOG
#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_SPARSE_DATA \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_RPC_WRAPPERS \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_INCLASS \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_SPARSE_DATA \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_INCLASS_NO_PURE_DECLS \
	PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLEDEMO_API UClass* StaticClass<class APuzzleDemoBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PuzzleDemo_Source_PuzzleDemo_PuzzleDemoBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
