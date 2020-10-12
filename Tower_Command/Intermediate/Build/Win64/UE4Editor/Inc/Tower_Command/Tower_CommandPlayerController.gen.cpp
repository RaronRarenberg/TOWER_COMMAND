// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tower_Command/Tower_CommandPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTower_CommandPlayerController() {}
// Cross Module References
	TOWER_COMMAND_API UClass* Z_Construct_UClass_ATower_CommandPlayerController_NoRegister();
	TOWER_COMMAND_API UClass* Z_Construct_UClass_ATower_CommandPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Tower_Command();
// End Cross Module References
	void ATower_CommandPlayerController::StaticRegisterNativesATower_CommandPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATower_CommandPlayerController_NoRegister()
	{
		return ATower_CommandPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATower_CommandPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATower_CommandPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Tower_Command,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_CommandPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Tower_CommandPlayerController.h" },
		{ "ModuleRelativePath", "Tower_CommandPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATower_CommandPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATower_CommandPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATower_CommandPlayerController_Statics::ClassParams = {
		&ATower_CommandPlayerController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATower_CommandPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_CommandPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATower_CommandPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATower_CommandPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATower_CommandPlayerController, 3452691282);
	template<> TOWER_COMMAND_API UClass* StaticClass<ATower_CommandPlayerController>()
	{
		return ATower_CommandPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATower_CommandPlayerController(Z_Construct_UClass_ATower_CommandPlayerController, &ATower_CommandPlayerController::StaticClass, TEXT("/Script/Tower_Command"), TEXT("ATower_CommandPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATower_CommandPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
