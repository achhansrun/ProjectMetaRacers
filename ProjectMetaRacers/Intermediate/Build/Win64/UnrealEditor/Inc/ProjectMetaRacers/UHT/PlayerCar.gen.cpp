// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMetaRacers/PlayerCar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCar() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	PROJECTMETARACERS_API UClass* Z_Construct_UClass_APlayerCar();
	PROJECTMETARACERS_API UClass* Z_Construct_UClass_APlayerCar_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMetaRacers();
// End Cross Module References
	void APlayerCar::StaticRegisterNativesAPlayerCar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCar);
	UClass* Z_Construct_UClass_APlayerCar_NoRegister()
	{
		return APlayerCar::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMetaRacers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCar_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCar.h" },
		{ "ModuleRelativePath", "PlayerCar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCar_Statics::ClassParams = {
		&APlayerCar::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCar()
	{
		if (!Z_Registration_Info_UClass_APlayerCar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCar.OuterSingleton, Z_Construct_UClass_APlayerCar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerCar.OuterSingleton;
	}
	template<> PROJECTMETARACERS_API UClass* StaticClass<APlayerCar>()
	{
		return APlayerCar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCar);
	APlayerCar::~APlayerCar() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_ProjectMetaRacers_ProjectMetaRacers_Source_ProjectMetaRacers_PlayerCar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ProjectMetaRacers_ProjectMetaRacers_Source_ProjectMetaRacers_PlayerCar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCar, APlayerCar::StaticClass, TEXT("APlayerCar"), &Z_Registration_Info_UClass_APlayerCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCar), 1549189631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ProjectMetaRacers_ProjectMetaRacers_Source_ProjectMetaRacers_PlayerCar_h_2186966755(TEXT("/Script/ProjectMetaRacers"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_ProjectMetaRacers_ProjectMetaRacers_Source_ProjectMetaRacers_PlayerCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ProjectMetaRacers_ProjectMetaRacers_Source_ProjectMetaRacers_PlayerCar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
