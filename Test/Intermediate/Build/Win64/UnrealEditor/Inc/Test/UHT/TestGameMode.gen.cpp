// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test/TestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TEST_API UClass* Z_Construct_UClass_ATestGameMode();
	TEST_API UClass* Z_Construct_UClass_ATestGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Test();
// End Cross Module References
	void ATestGameMode::StaticRegisterNativesATestGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestGameMode);
	UClass* Z_Construct_UClass_ATestGameMode_NoRegister()
	{
		return ATestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Test,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TestGameMode.h" },
		{ "ModuleRelativePath", "TestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestGameMode_Statics::ClassParams = {
		&ATestGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATestGameMode()
	{
		if (!Z_Registration_Info_UClass_ATestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestGameMode.OuterSingleton, Z_Construct_UClass_ATestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestGameMode.OuterSingleton;
	}
	template<> TEST_API UClass* StaticClass<ATestGameMode>()
	{
		return ATestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestGameMode);
	ATestGameMode::~ATestGameMode() {}
	struct Z_CompiledInDeferFile_FID_Test_Source_Test_TestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_Source_Test_TestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestGameMode, ATestGameMode::StaticClass, TEXT("ATestGameMode"), &Z_Registration_Info_UClass_ATestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestGameMode), 2642096395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_Source_Test_TestGameMode_h_3598573237(TEXT("/Script/Test"),
		Z_CompiledInDeferFile_FID_Test_Source_Test_TestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_Source_Test_TestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
