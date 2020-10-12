// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tower_Command/Tower_CommandGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTower_CommandGameMode() {}
// Cross Module References
	TOWER_COMMAND_API UClass* Z_Construct_UClass_ATower_CommandGameMode_NoRegister();
	TOWER_COMMAND_API UClass* Z_Construct_UClass_ATower_CommandGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Tower_Command();
// End Cross Module References
	void ATower_CommandGameMode::StaticRegisterNativesATower_CommandGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATower_CommandGameMode_NoRegister()
	{
		return ATower_CommandGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATower_CommandGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATower_CommandGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tower_Command,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_CommandGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Tower_CommandGameMode.h" },
		{ "ModuleRelativePath", "Tower_CommandGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATower_CommandGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATower_CommandGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATower_CommandGameMode_Statics::ClassParams = {
		&ATower_CommandGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATower_CommandGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_CommandGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATower_CommandGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATower_CommandGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATower_CommandGameMode, 1248756629);
	template<> TOWER_COMMAND_API UClass* StaticClass<ATower_CommandGameMode>()
	{
		return ATower_CommandGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATower_CommandGameMode(Z_Construct_UClass_ATower_CommandGameMode, &ATower_CommandGameMode::StaticClass, TEXT("/Script/Tower_Command"), TEXT("ATower_CommandGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATower_CommandGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
