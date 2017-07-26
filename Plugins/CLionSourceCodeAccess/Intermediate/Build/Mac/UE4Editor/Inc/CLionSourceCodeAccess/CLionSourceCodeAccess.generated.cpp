// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/CLionSourceCodeAccessPrivatePCH.h"
#include "CLionSourceCodeAccess.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1CLionSourceCodeAccess() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FFilePath();

	CLIONSOURCECODEACCESS_API class UClass* Z_Construct_UClass_UCLionSettings_NoRegister();
	CLIONSOURCECODEACCESS_API class UClass* Z_Construct_UClass_UCLionSettings();
	CLIONSOURCECODEACCESS_API class UPackage* Z_Construct_UPackage__Script_CLionSourceCodeAccess();
	void UCLionSettings::StaticRegisterNativesUCLionSettings()
	{
	}
	UClass* Z_Construct_UClass_UCLionSettings_NoRegister()
	{
		return UCLionSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UCLionSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_CLionSourceCodeAccess();
			OuterClass = UCLionSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000086;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Mono = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mono"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Mono, UCLionSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FFilePath());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bProjectUE4Game, UCLionSettings, bool);
				UProperty* NewProp_bProjectUE4Game = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bProjectUE4Game"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bProjectUE4Game, UCLionSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bProjectUE4Game, UCLionSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bProjectUE4Editor, UCLionSettings, bool);
				UProperty* NewProp_bProjectUE4Editor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bProjectUE4Editor"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bProjectUE4Editor, UCLionSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bProjectUE4Editor, UCLionSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bProjectSpecificEditor, UCLionSettings, bool);
				UProperty* NewProp_bProjectSpecificEditor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bProjectSpecificEditor"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bProjectSpecificEditor, UCLionSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bProjectSpecificEditor, UCLionSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bProjectSpecificGame, UCLionSettings, bool);
				UProperty* NewProp_bProjectSpecificGame = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bProjectSpecificGame"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bProjectSpecificGame, UCLionSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bProjectSpecificGame, UCLionSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIncludeShaders, UCLionSettings, bool);
				UProperty* NewProp_bIncludeShaders = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIncludeShaders"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIncludeShaders, UCLionSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bIncludeShaders, UCLionSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIncludePlugins, UCLionSettings, bool);
				UProperty* NewProp_bIncludePlugins = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIncludePlugins"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIncludePlugins, UCLionSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bIncludePlugins, UCLionSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIncludeConfigs, UCLionSettings, bool);
				UProperty* NewProp_bIncludeConfigs = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIncludeConfigs"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIncludeConfigs, UCLionSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bIncludeConfigs, UCLionSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bGenerateVisualStudioCodeProject, UCLionSettings, bool);
				UProperty* NewProp_bGenerateVisualStudioCodeProject = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bGenerateVisualStudioCodeProject"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bGenerateVisualStudioCodeProject, UCLionSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bGenerateVisualStudioCodeProject, UCLionSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bConfigureTest, UCLionSettings, bool);
				UProperty* NewProp_bConfigureTest = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bConfigureTest"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bConfigureTest, UCLionSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bConfigureTest, UCLionSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bConfigureShipping, UCLionSettings, bool);
				UProperty* NewProp_bConfigureShipping = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bConfigureShipping"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bConfigureShipping, UCLionSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bConfigureShipping, UCLionSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bConfigureDevelopment, UCLionSettings, bool);
				UProperty* NewProp_bConfigureDevelopment = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bConfigureDevelopment"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bConfigureDevelopment, UCLionSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bConfigureDevelopment, UCLionSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bConfigureDebugGame, UCLionSettings, bool);
				UProperty* NewProp_bConfigureDebugGame = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bConfigureDebugGame"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bConfigureDebugGame, UCLionSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bConfigureDebugGame, UCLionSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bConfigureDebug, UCLionSettings, bool);
				UProperty* NewProp_bConfigureDebug = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bConfigureDebug"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bConfigureDebug, UCLionSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bConfigureDebug, UCLionSettings), sizeof(bool), true);
				UProperty* NewProp_CXXCompiler = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CXXCompiler"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CXXCompiler, UCLionSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FFilePath());
				UProperty* NewProp_CLion = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CLion"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CLion, UCLionSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FFilePath());
				UProperty* NewProp_CCompiler = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CCompiler"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CCompiler, UCLionSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FFilePath());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("EditorUserSettings"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UCLionSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CLionSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/CLionSettings.h"));
				MetaData->SetValue(NewProp_Mono, TEXT("Category"), TEXT("Unreal Engine"));
				MetaData->SetValue(NewProp_Mono, TEXT("DisplayName"), TEXT("Mono Executable (Ignore On Windows)"));
				MetaData->SetValue(NewProp_Mono, TEXT("ModuleRelativePath"), TEXT("Private/CLionSettings.h"));
				MetaData->SetValue(NewProp_Mono, TEXT("ToolTip"), TEXT("Path to the Mono executable (Required on non-Windows platforms)."));
				MetaData->SetValue(NewProp_bProjectUE4Game, TEXT("Category"), TEXT("CMake Target Projects"));
				MetaData->SetValue(NewProp_bProjectUE4Game, TEXT("DisplayName"), TEXT("UE4 Game"));
				MetaData->SetValue(NewProp_bProjectUE4Game, TEXT("ModuleRelativePath"), TEXT("Private/CLionSettings.h"));
				MetaData->SetValue(NewProp_bProjectUE4Game, TEXT("ToolTip"), TEXT("Target Project UE4 Game"));
				MetaData->SetValue(NewProp_bProjectUE4Editor, TEXT("Category"), TEXT("CMake Target Projects"));
				MetaData->SetValue(NewProp_bProjectUE4Editor, TEXT("DisplayName"), TEXT("UE4 Editor"));
				MetaData->SetValue(NewProp_bProjectUE4Editor, TEXT("ModuleRelativePath"), TEXT("Private/CLionSettings.h"));
				MetaData->SetValue(NewProp_bProjectUE4Editor, TEXT("ToolTip"), TEXT("Target Project UE4 Editor"));
				MetaData->SetValue(NewProp_bProjectSpecificEditor, TEXT("Category"), TEXT("CMake Target Projects"));
				MetaData->SetValue(NewProp_bProjectSpecificEditor, TEXT("DisplayName"), TEXT("Project Editor"));
				MetaData->SetValue(NewProp_bProjectSpecificEditor, TEXT("ModuleRelativePath"), TEXT("Private/CLionSettings.h"));
				MetaData->SetValue(NewProp_bProjectSpecificEditor, TEXT("ToolTip"), TEXT("Target Project Specific Editor"));
				MetaData->SetValue(NewProp_bProjectSpecificGame, TEXT("Category"), TEXT("CMake Target Projects"));
				MetaData->SetValue(NewProp_bProjectSpecificGame, TEXT("DisplayName"), TEXT("Project Game"));
				MetaData->SetValue(NewProp_bProjectSpecificGame, TEXT("ModuleRelativePath"), TEXT("Private/CLionSettings.h"));
				MetaData->SetValue(NewProp_bProjectSpecificGame, TEXT("ToolTip"), TEXT("Target Project Game Editor"));
				MetaData->SetValue(NewProp_bIncludeShaders, TEXT("Category"), TEXT("Additional Folders"));
				MetaData->SetValue(NewProp_bIncludeShaders, TEXT("DisplayName"), TEXT("Include Shaders"));
				MetaData->SetValue(NewProp_bIncludeShaders, TEXT("ModuleRelativePath"), TEXT("Private/CLionSettings.h"));
				MetaData->SetValue(NewProp_bIncludeShaders, TEXT("ToolTip"), TEXT("Include Shaders In Makefile"));
				MetaData->SetValue(NewProp_bIncludePlugins, TEXT("Category"), TEXT("Additional Folders"));
				MetaData->SetValue(NewProp_bIncludePlugins, TEXT("DisplayName"), TEXT("Include Plugins"));
				MetaData->SetValue(NewProp_bIncludePlugins, TEXT("ModuleRelativePath"), TEXT("Private/CLionSettings.h"));
				MetaData->SetValue(NewProp_bIncludePlugins, TEXT("ToolTip"), TEXT("Include Plugins In Makefile"));
				MetaData->SetValue(NewProp_bIncludeConfigs, TEXT("Category"), TEXT("Additional Folders"));
				MetaData->SetValue(NewProp_bIncludeConfigs, TEXT("DisplayName"), TEXT("Include Configs"));
				MetaData->SetValue(NewProp_bIncludeConfigs, TEXT("ModuleRelativePath"), TEXT("Private/CLionSettings.h"));
				MetaData->SetValue(NewProp_bIncludeConfigs, TEXT("ToolTip"), TEXT("Include Config In Makefile"));
				MetaData->SetValue(NewProp_bGenerateVisualStudioCodeProject, TEXT("Category"), TEXT("Visual Studio Code"));
				MetaData->SetValue(NewProp_bGenerateVisualStudioCodeProject, TEXT("DisplayName"), TEXT("Generate c_cpp_properties.json File"));
				MetaData->SetValue(NewProp_bGenerateVisualStudioCodeProject, TEXT("ModuleRelativePath"), TEXT("Private/CLionSettings.h"));
				MetaData->SetValue(NewProp_bGenerateVisualStudioCodeProject, TEXT("ToolTip"), TEXT("General Visual Studio Code Project Files"));
				MetaData->SetValue(NewProp_bConfigureTest, TEXT("Category"), TEXT("CMake Target Configurations"));
				MetaData->SetValue(NewProp_bConfigureTest, TEXT("DisplayName"), TEXT("Test"));
				MetaData->SetValue(NewProp_bConfigureTest, TEXT("ModuleRelativePath"), TEXT("Private/CLionSettings.h"));
				MetaData->SetValue(NewProp_bConfigureTest, TEXT("ToolTip"), TEXT("Target Configuration Test"));
				MetaData->SetValue(NewProp_bConfigureShipping, TEXT("Category"), TEXT("CMake Target Configurations"));
				MetaData->SetValue(NewProp_bConfigureShipping, TEXT("DisplayName"), TEXT("Shipping"));
				MetaData->SetValue(NewProp_bConfigureShipping, TEXT("ModuleRelativePath"), TEXT("Private/CLionSettings.h"));
				MetaData->SetValue(NewProp_bConfigureShipping, TEXT("ToolTip"), TEXT("Target Configuration Shipping"));
				MetaData->SetValue(NewProp_bConfigureDevelopment, TEXT("Category"), TEXT("CMake Target Configurations"));
				MetaData->SetValue(NewProp_bConfigureDevelopment, TEXT("DisplayName"), TEXT("Development"));
				MetaData->SetValue(NewProp_bConfigureDevelopment, TEXT("ModuleRelativePath"), TEXT("Private/CLionSettings.h"));
				MetaData->SetValue(NewProp_bConfigureDevelopment, TEXT("ToolTip"), TEXT("Target Configuration Development"));
				MetaData->SetValue(NewProp_bConfigureDebugGame, TEXT("Category"), TEXT("CMake Target Configurations"));
				MetaData->SetValue(NewProp_bConfigureDebugGame, TEXT("DisplayName"), TEXT("DebugGame"));
				MetaData->SetValue(NewProp_bConfigureDebugGame, TEXT("ModuleRelativePath"), TEXT("Private/CLionSettings.h"));
				MetaData->SetValue(NewProp_bConfigureDebugGame, TEXT("ToolTip"), TEXT("Target Configuration DebugGame"));
				MetaData->SetValue(NewProp_bConfigureDebug, TEXT("Category"), TEXT("CMake Target Configurations"));
				MetaData->SetValue(NewProp_bConfigureDebug, TEXT("DisplayName"), TEXT("Debug"));
				MetaData->SetValue(NewProp_bConfigureDebug, TEXT("ModuleRelativePath"), TEXT("Private/CLionSettings.h"));
				MetaData->SetValue(NewProp_bConfigureDebug, TEXT("ToolTip"), TEXT("Target Configuration Debug"));
				MetaData->SetValue(NewProp_CXXCompiler, TEXT("Category"), TEXT("CMake Compiler"));
				MetaData->SetValue(NewProp_CXXCompiler, TEXT("DisplayName"), TEXT("C++ Compiler (Optional)"));
				MetaData->SetValue(NewProp_CXXCompiler, TEXT("ModuleRelativePath"), TEXT("Private/CLionSettings.h"));
				MetaData->SetValue(NewProp_CXXCompiler, TEXT("ToolTip"), TEXT("[optional] Path to a C++ compiler to be used in the CMakeList file.\""));
				MetaData->SetValue(NewProp_CLion, TEXT("Category"), TEXT("CLion"));
				MetaData->SetValue(NewProp_CLion, TEXT("DisplayName"), TEXT("CLion Executable"));
				MetaData->SetValue(NewProp_CLion, TEXT("ModuleRelativePath"), TEXT("Private/CLionSettings.h"));
				MetaData->SetValue(NewProp_CLion, TEXT("ToolTip"), TEXT("Path to CLion executable, used when needing to launch CLion."));
				MetaData->SetValue(NewProp_CCompiler, TEXT("Category"), TEXT("CMake Compiler"));
				MetaData->SetValue(NewProp_CCompiler, TEXT("DisplayName"), TEXT("C Compiler (Optional)"));
				MetaData->SetValue(NewProp_CCompiler, TEXT("ModuleRelativePath"), TEXT("Private/CLionSettings.h"));
				MetaData->SetValue(NewProp_CCompiler, TEXT("ToolTip"), TEXT("[optional] Path to a C compiler to be used in the CMakeList file."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCLionSettings, 1627151072);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCLionSettings(Z_Construct_UClass_UCLionSettings, &UCLionSettings::StaticClass, TEXT("/Script/CLionSourceCodeAccess"), TEXT("UCLionSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCLionSettings);
	UPackage* Z_Construct_UPackage__Script_CLionSourceCodeAccess()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/CLionSourceCodeAccess")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000040);
			FGuid Guid;
			Guid.A = 0x64436672;
			Guid.B = 0x62B2C54E;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
