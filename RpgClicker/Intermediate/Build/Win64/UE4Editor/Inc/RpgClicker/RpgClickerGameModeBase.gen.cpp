// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpgClicker/RpgClickerGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpgClickerGameModeBase() {}
// Cross Module References
	RPGCLICKER_API UClass* Z_Construct_UClass_ARpgClickerGameModeBase_NoRegister();
	RPGCLICKER_API UClass* Z_Construct_UClass_ARpgClickerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RpgClicker();
// End Cross Module References
	void ARpgClickerGameModeBase::StaticRegisterNativesARpgClickerGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARpgClickerGameModeBase_NoRegister()
	{
		return ARpgClickerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARpgClickerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARpgClickerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RpgClicker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARpgClickerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RpgClickerGameModeBase.h" },
		{ "ModuleRelativePath", "RpgClickerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARpgClickerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARpgClickerGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARpgClickerGameModeBase_Statics::ClassParams = {
		&ARpgClickerGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARpgClickerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARpgClickerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARpgClickerGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARpgClickerGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARpgClickerGameModeBase, 174692930);
	template<> RPGCLICKER_API UClass* StaticClass<ARpgClickerGameModeBase>()
	{
		return ARpgClickerGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARpgClickerGameModeBase(Z_Construct_UClass_ARpgClickerGameModeBase, &ARpgClickerGameModeBase::StaticClass, TEXT("/Script/RpgClicker"), TEXT("ARpgClickerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARpgClickerGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
