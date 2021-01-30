// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzleDemo/PuzzleDemoPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleDemoPlayerController() {}
// Cross Module References
	PUZZLEDEMO_API UClass* Z_Construct_UClass_APuzzleDemoPlayerController_NoRegister();
	PUZZLEDEMO_API UClass* Z_Construct_UClass_APuzzleDemoPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_PuzzleDemo();
// End Cross Module References
	void APuzzleDemoPlayerController::StaticRegisterNativesAPuzzleDemoPlayerController()
	{
	}
	UClass* Z_Construct_UClass_APuzzleDemoPlayerController_NoRegister()
	{
		return APuzzleDemoPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_APuzzleDemoPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzleDemoPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzleDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleDemoPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** PlayerController class used to enable cursor */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PuzzleDemoPlayerController.h" },
		{ "ModuleRelativePath", "PuzzleDemoPlayerController.h" },
		{ "ToolTip", "PlayerController class used to enable cursor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzleDemoPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzleDemoPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzleDemoPlayerController_Statics::ClassParams = {
		&APuzzleDemoPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APuzzleDemoPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleDemoPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzleDemoPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuzzleDemoPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzleDemoPlayerController, 2979225137);
	template<> PUZZLEDEMO_API UClass* StaticClass<APuzzleDemoPlayerController>()
	{
		return APuzzleDemoPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzleDemoPlayerController(Z_Construct_UClass_APuzzleDemoPlayerController, &APuzzleDemoPlayerController::StaticClass, TEXT("/Script/PuzzleDemo"), TEXT("APuzzleDemoPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzleDemoPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
