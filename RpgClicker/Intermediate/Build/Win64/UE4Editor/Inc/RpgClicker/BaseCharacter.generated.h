// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseCharacter;
#ifdef RPGCLICKER_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define RPGCLICKER_BaseCharacter_generated_h

#define RpgClicker_Source_RpgClicker_BaseCharacter_h_14_SPARSE_DATA
#define RpgClicker_Source_RpgClicker_BaseCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMaxHealth); \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execSetCritChance); \
	DECLARE_FUNCTION(execSetAvoidChance); \
	DECLARE_FUNCTION(execSetDefense); \
	DECLARE_FUNCTION(execSetAttack); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetCritChance); \
	DECLARE_FUNCTION(execGetAvoidChance); \
	DECLARE_FUNCTION(execGetDefense); \
	DECLARE_FUNCTION(execGetAttack); \
	DECLARE_FUNCTION(execCalculatePercentHealth); \
	DECLARE_FUNCTION(execCheckDead); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execPerformAttack);


#define RpgClicker_Source_RpgClicker_BaseCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaxHealth); \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execSetCritChance); \
	DECLARE_FUNCTION(execSetAvoidChance); \
	DECLARE_FUNCTION(execSetDefense); \
	DECLARE_FUNCTION(execSetAttack); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetCritChance); \
	DECLARE_FUNCTION(execGetAvoidChance); \
	DECLARE_FUNCTION(execGetDefense); \
	DECLARE_FUNCTION(execGetAttack); \
	DECLARE_FUNCTION(execCalculatePercentHealth); \
	DECLARE_FUNCTION(execCheckDead); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execPerformAttack);


#define RpgClicker_Source_RpgClicker_BaseCharacter_h_14_EVENT_PARMS
#define RpgClicker_Source_RpgClicker_BaseCharacter_h_14_CALLBACK_WRAPPERS
#define RpgClicker_Source_RpgClicker_BaseCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RpgClicker"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define RpgClicker_Source_RpgClicker_BaseCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RpgClicker"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define RpgClicker_Source_RpgClicker_BaseCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define RpgClicker_Source_RpgClicker_BaseCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define RpgClicker_Source_RpgClicker_BaseCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__attack() { return STRUCT_OFFSET(ABaseCharacter, attack); } \
	FORCEINLINE static uint32 __PPO__defense() { return STRUCT_OFFSET(ABaseCharacter, defense); } \
	FORCEINLINE static uint32 __PPO__avoidChance() { return STRUCT_OFFSET(ABaseCharacter, avoidChance); } \
	FORCEINLINE static uint32 __PPO__critChance() { return STRUCT_OFFSET(ABaseCharacter, critChance); } \
	FORCEINLINE static uint32 __PPO__maxHealth() { return STRUCT_OFFSET(ABaseCharacter, maxHealth); }


#define RpgClicker_Source_RpgClicker_BaseCharacter_h_11_PROLOG \
	RpgClicker_Source_RpgClicker_BaseCharacter_h_14_EVENT_PARMS


#define RpgClicker_Source_RpgClicker_BaseCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RpgClicker_Source_RpgClicker_BaseCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	RpgClicker_Source_RpgClicker_BaseCharacter_h_14_SPARSE_DATA \
	RpgClicker_Source_RpgClicker_BaseCharacter_h_14_RPC_WRAPPERS \
	RpgClicker_Source_RpgClicker_BaseCharacter_h_14_CALLBACK_WRAPPERS \
	RpgClicker_Source_RpgClicker_BaseCharacter_h_14_INCLASS \
	RpgClicker_Source_RpgClicker_BaseCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RpgClicker_Source_RpgClicker_BaseCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RpgClicker_Source_RpgClicker_BaseCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	RpgClicker_Source_RpgClicker_BaseCharacter_h_14_SPARSE_DATA \
	RpgClicker_Source_RpgClicker_BaseCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	RpgClicker_Source_RpgClicker_BaseCharacter_h_14_CALLBACK_WRAPPERS \
	RpgClicker_Source_RpgClicker_BaseCharacter_h_14_INCLASS_NO_PURE_DECLS \
	RpgClicker_Source_RpgClicker_BaseCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPGCLICKER_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RpgClicker_Source_RpgClicker_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
