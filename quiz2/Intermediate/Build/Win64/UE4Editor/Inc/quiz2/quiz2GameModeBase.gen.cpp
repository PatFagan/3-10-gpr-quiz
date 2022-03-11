// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "quiz2/quiz2GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodequiz2GameModeBase() {}
// Cross Module References
	QUIZ2_API UClass* Z_Construct_UClass_Aquiz2GameModeBase_NoRegister();
	QUIZ2_API UClass* Z_Construct_UClass_Aquiz2GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_quiz2();
// End Cross Module References
	void Aquiz2GameModeBase::StaticRegisterNativesAquiz2GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Aquiz2GameModeBase_NoRegister()
	{
		return Aquiz2GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Aquiz2GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aquiz2GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_quiz2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aquiz2GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "quiz2GameModeBase.h" },
		{ "ModuleRelativePath", "quiz2GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aquiz2GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aquiz2GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aquiz2GameModeBase_Statics::ClassParams = {
		&Aquiz2GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Aquiz2GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aquiz2GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aquiz2GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aquiz2GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aquiz2GameModeBase, 2375582102);
	template<> QUIZ2_API UClass* StaticClass<Aquiz2GameModeBase>()
	{
		return Aquiz2GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aquiz2GameModeBase(Z_Construct_UClass_Aquiz2GameModeBase, &Aquiz2GameModeBase::StaticClass, TEXT("/Script/quiz2"), TEXT("Aquiz2GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aquiz2GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
