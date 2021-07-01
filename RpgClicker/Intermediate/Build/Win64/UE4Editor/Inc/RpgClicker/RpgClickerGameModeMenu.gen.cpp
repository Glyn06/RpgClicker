// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpgClicker/RpgClickerGameModeMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpgClickerGameModeMenu() {}
// Cross Module References
	RPGCLICKER_API UClass* Z_Construct_UClass_ARpgClickerGameModeMenu_NoRegister();
	RPGCLICKER_API UClass* Z_Construct_UClass_ARpgClickerGameModeMenu();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RpgClicker();
// End Cross Module References
	void ARpgClickerGameModeMenu::StaticRegisterNativesARpgClickerGameModeMenu()
	{
	}
	UClass* Z_Construct_UClass_ARpgClickerGameModeMenu_NoRegister()
	{
		return ARpgClickerGameModeMenu::StaticClass();
	}
	struct Z_Construct_UClass_ARpgClickerGameModeMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARpgClickerGameModeMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RpgClicker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARpgClickerGameModeMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RpgClickerGameModeMenu.h" },
		{ "ModuleRelativePath", "RpgClickerGameModeMenu.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARpgClickerGameModeMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARpgClickerGameModeMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARpgClickerGameModeMenu_Statics::ClassParams = {
		&ARpgClickerGameModeMenu::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARpgClickerGameModeMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARpgClickerGameModeMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARpgClickerGameModeMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARpgClickerGameModeMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARpgClickerGameModeMenu, 1831096663);
	template<> RPGCLICKER_API UClass* StaticClass<ARpgClickerGameModeMenu>()
	{
		return ARpgClickerGameModeMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARpgClickerGameModeMenu(Z_Construct_UClass_ARpgClickerGameModeMenu, &ARpgClickerGameModeMenu::StaticClass, TEXT("/Script/RpgClicker"), TEXT("ARpgClickerGameModeMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARpgClickerGameModeMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
