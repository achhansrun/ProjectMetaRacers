// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMetaRacers/ProjectMetaRacersGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectMetaRacersGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PROJECTMETARACERS_API UClass* Z_Construct_UClass_AProjectMetaRacersGameModeBase();
	PROJECTMETARACERS_API UClass* Z_Construct_UClass_AProjectMetaRacersGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMetaRacers();
// End Cross Module References
	void AProjectMetaRacersGameModeBase::StaticRegisterNativesAProjectMetaRacersGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectMetaRacersGameModeBase);
	UClass* Z_Construct_UClass_AProjectMetaRacersGameModeBase_NoRegister()
	{
		return AProjectMetaRacersGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProjectMetaRacersGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectMetaRacersGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMetaRacers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMetaRacersGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectMetaRacersGameModeBase.h" },
		{ "ModuleRelativePath", "ProjectMetaRacersGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectMetaRacersGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectMetaRacersGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectMetaRacersGameModeBase_Statics::ClassParams = {
		&AProjectMetaRacersGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProjectMetaRacersGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMetaRacersGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectMetaRacersGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AProjectMetaRacersGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectMetaRacersGameModeBase.OuterSingleton, Z_Construct_UClass_AProjectMetaRacersGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectMetaRacersGameModeBase.OuterSingleton;
	}
	template<> PROJECTMETARACERS_API UClass* StaticClass<AProjectMetaRacersGameModeBase>()
	{
		return AProjectMetaRacersGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectMetaRacersGameModeBase);
	AProjectMetaRacersGameModeBase::~AProjectMetaRacersGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_ProjectMetaRacers_ProjectMetaRacers_Source_ProjectMetaRacers_ProjectMetaRacersGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ProjectMetaRacers_ProjectMetaRacers_Source_ProjectMetaRacers_ProjectMetaRacersGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectMetaRacersGameModeBase, AProjectMetaRacersGameModeBase::StaticClass, TEXT("AProjectMetaRacersGameModeBase"), &Z_Registration_Info_UClass_AProjectMetaRacersGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectMetaRacersGameModeBase), 3927858644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ProjectMetaRacers_ProjectMetaRacers_Source_ProjectMetaRacers_ProjectMetaRacersGameModeBase_h_371297635(TEXT("/Script/ProjectMetaRacers"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_ProjectMetaRacers_ProjectMetaRacers_Source_ProjectMetaRacers_ProjectMetaRacersGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ProjectMetaRacers_ProjectMetaRacers_Source_ProjectMetaRacers_ProjectMetaRacersGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
