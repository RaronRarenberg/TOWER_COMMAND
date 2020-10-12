// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWER_COMMAND_Tower_CommandCharacter_generated_h
#error "Tower_CommandCharacter.generated.h already included, missing '#pragma once' in Tower_CommandCharacter.h"
#endif
#define TOWER_COMMAND_Tower_CommandCharacter_generated_h

#define Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_SPARSE_DATA
#define Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_RPC_WRAPPERS
#define Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATower_CommandCharacter(); \
	friend struct Z_Construct_UClass_ATower_CommandCharacter_Statics; \
public: \
	DECLARE_CLASS(ATower_CommandCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tower_Command"), NO_API) \
	DECLARE_SERIALIZER(ATower_CommandCharacter)


#define Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATower_CommandCharacter(); \
	friend struct Z_Construct_UClass_ATower_CommandCharacter_Statics; \
public: \
	DECLARE_CLASS(ATower_CommandCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tower_Command"), NO_API) \
	DECLARE_SERIALIZER(ATower_CommandCharacter)


#define Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATower_CommandCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATower_CommandCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATower_CommandCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATower_CommandCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATower_CommandCharacter(ATower_CommandCharacter&&); \
	NO_API ATower_CommandCharacter(const ATower_CommandCharacter&); \
public:


#define Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATower_CommandCharacter(ATower_CommandCharacter&&); \
	NO_API ATower_CommandCharacter(const ATower_CommandCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATower_CommandCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATower_CommandCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATower_CommandCharacter)


#define Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ATower_CommandCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATower_CommandCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ATower_CommandCharacter, CursorToWorld); }


#define Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_9_PROLOG
#define Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_SPARSE_DATA \
	Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_RPC_WRAPPERS \
	Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_INCLASS \
	Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_SPARSE_DATA \
	Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWER_COMMAND_API UClass* StaticClass<class ATower_CommandCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tower_Command_Source_Tower_Command_Tower_CommandCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
