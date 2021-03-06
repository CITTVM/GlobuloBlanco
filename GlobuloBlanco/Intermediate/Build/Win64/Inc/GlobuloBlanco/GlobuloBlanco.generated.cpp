// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GlobuloBlanco.h"
#include "GlobuloBlanco.generated.dep.h"
void EmptyLinkFunctionForGeneratedCodeGlobuloBlanco() {}
	void AGlobuloBlancoGameMode::StaticRegisterNativesAGlobuloBlancoGameMode()
	{
	}
	IMPLEMENT_CLASS(AGlobuloBlancoGameMode, 1122240559);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();

	GLOBULOBLANCO_API class UClass* Z_Construct_UClass_AGlobuloBlancoGameMode_NoRegister();
	GLOBULOBLANCO_API class UClass* Z_Construct_UClass_AGlobuloBlancoGameMode();
	GLOBULOBLANCO_API class UPackage* Z_Construct_UPackage_GlobuloBlanco();
	UClass* Z_Construct_UClass_AGlobuloBlancoGameMode_NoRegister()
	{
		return AGlobuloBlancoGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AGlobuloBlancoGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage_GlobuloBlanco();
			OuterClass = AGlobuloBlancoGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x209002AC;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Movement Collision Rendering Utilities|Transformation Info MovementReplication Replication Actor"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GlobuloBlancoGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("GlobuloBlancoGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGlobuloBlancoGameMode(Z_Construct_UClass_AGlobuloBlancoGameMode, TEXT("AGlobuloBlancoGameMode"));
	UPackage* Z_Construct_UPackage_GlobuloBlanco()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/GlobuloBlanco")), false, false));
			ReturnPackage->PackageFlags |= PKG_CompiledIn | 0x00000000;
			FGuid Guid;
			Guid.A = 0x17D4AAA8;
			Guid.B = 0x0E891A5C;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);
		}
		return ReturnPackage;
	}
#endif

