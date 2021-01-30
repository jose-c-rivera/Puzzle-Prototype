// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzleDemo/PuzzleDemoGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleDemoGameMode() {}
// Cross Module References
	PUZZLEDEMO_API UClass* Z_Construct_UClass_APuzzleDemoGameMode_NoRegister();
	PUZZLEDEMO_API UClass* Z_Construct_UClass_APuzzleDemoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PuzzleDemo();
// End Cross Module References
	void APuzzleDemoGameMode::StaticRegisterNativesAPuzzleDemoGameMode()
	{
	}
	UClass* Z_Construct_UClass_APuzzleDemoGameMode_NoRegister()
	{
		return APuzzleDemoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APuzzleDemoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzleDemoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzleDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleDemoGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** GameMode class to specify pawn and playercontroller */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PuzzleDemoGameMode.h" },
		{ "ModuleRelativePath", "PuzzleDemoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameMode class to specify pawn and playercontroller" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzleDemoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzleDemoGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzleDemoGameMode_Statics::ClassParams = {
		&APuzzleDemoGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APuzzleDemoGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleDemoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzleDemoGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuzzleDemoGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzleDemoGameMode, 3306723233);
	template<> PUZZLEDEMO_API UClass* StaticClass<APuzzleDemoGameMode>()
	{
		return APuzzleDemoGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzleDemoGameMode(Z_Construct_UClass_APuzzleDemoGameMode, &APuzzleDemoGameMode::StaticClass, TEXT("/Script/PuzzleDemo"), TEXT("APuzzleDemoGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzleDemoGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
