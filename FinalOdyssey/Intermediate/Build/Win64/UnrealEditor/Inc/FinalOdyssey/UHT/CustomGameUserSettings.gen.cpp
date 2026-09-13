// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalOdyssey/CustomGameUserSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomGameUserSettings() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings();
FINALODYSSEY_API UClass* Z_Construct_UClass_UCustomGameUserSettings();
FINALODYSSEY_API UClass* Z_Construct_UClass_UCustomGameUserSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalOdyssey();
// End Cross Module References

// Begin Class UCustomGameUserSettings Function GetCustomUserSettings
struct Z_Construct_UFunction_UCustomGameUserSettings_GetCustomUserSettings_Statics
{
	struct CustomGameUserSettings_eventGetCustomUserSettings_Parms
	{
		UCustomGameUserSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CustomGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_GetCustomUserSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomGameUserSettings_eventGetCustomUserSettings_Parms, ReturnValue), Z_Construct_UClass_UCustomGameUserSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGameUserSettings_GetCustomUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_GetCustomUserSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_GetCustomUserSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameUserSettings_GetCustomUserSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGameUserSettings, nullptr, "GetCustomUserSettings", nullptr, nullptr, Z_Construct_UFunction_UCustomGameUserSettings_GetCustomUserSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_GetCustomUserSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomGameUserSettings_GetCustomUserSettings_Statics::CustomGameUserSettings_eventGetCustomUserSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_GetCustomUserSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomGameUserSettings_GetCustomUserSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomGameUserSettings_GetCustomUserSettings_Statics::CustomGameUserSettings_eventGetCustomUserSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomGameUserSettings_GetCustomUserSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGameUserSettings_GetCustomUserSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomGameUserSettings::execGetCustomUserSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCustomGameUserSettings**)Z_Param__Result=UCustomGameUserSettings::GetCustomUserSettings();
	P_NATIVE_END;
}
// End Class UCustomGameUserSettings Function GetCustomUserSettings

// Begin Class UCustomGameUserSettings Function GetMasterVolume
struct Z_Construct_UFunction_UCustomGameUserSettings_GetMasterVolume_Statics
{
	struct CustomGameUserSettings_eventGetMasterVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CustomGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_GetMasterVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomGameUserSettings_eventGetMasterVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGameUserSettings_GetMasterVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_GetMasterVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_GetMasterVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameUserSettings_GetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGameUserSettings, nullptr, "GetMasterVolume", nullptr, nullptr, Z_Construct_UFunction_UCustomGameUserSettings_GetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_GetMasterVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomGameUserSettings_GetMasterVolume_Statics::CustomGameUserSettings_eventGetMasterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_GetMasterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomGameUserSettings_GetMasterVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomGameUserSettings_GetMasterVolume_Statics::CustomGameUserSettings_eventGetMasterVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomGameUserSettings_GetMasterVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGameUserSettings_GetMasterVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomGameUserSettings::execGetMasterVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMasterVolume();
	P_NATIVE_END;
}
// End Class UCustomGameUserSettings Function GetMasterVolume

// Begin Class UCustomGameUserSettings Function SetMasterVolume
struct Z_Construct_UFunction_UCustomGameUserSettings_SetMasterVolume_Statics
{
	struct CustomGameUserSettings_eventSetMasterVolume_Parms
	{
		float DesiredVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Creates ways the blueprint can interact with this script by name, as seen below.\n//Below is the Volum getter and setter functions\n" },
#endif
		{ "ModuleRelativePath", "CustomGameUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates ways the blueprint can interact with this script by name, as seen below.\nBelow is the Volum getter and setter functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_SetMasterVolume_Statics::NewProp_DesiredVolume = { "DesiredVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomGameUserSettings_eventSetMasterVolume_Parms, DesiredVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGameUserSettings_SetMasterVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_SetMasterVolume_Statics::NewProp_DesiredVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_SetMasterVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameUserSettings_SetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGameUserSettings, nullptr, "SetMasterVolume", nullptr, nullptr, Z_Construct_UFunction_UCustomGameUserSettings_SetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_SetMasterVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomGameUserSettings_SetMasterVolume_Statics::CustomGameUserSettings_eventSetMasterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_SetMasterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomGameUserSettings_SetMasterVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomGameUserSettings_SetMasterVolume_Statics::CustomGameUserSettings_eventSetMasterVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomGameUserSettings_SetMasterVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGameUserSettings_SetMasterVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomGameUserSettings::execSetMasterVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DesiredVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMasterVolume(Z_Param_DesiredVolume);
	P_NATIVE_END;
}
// End Class UCustomGameUserSettings Function SetMasterVolume

// Begin Class UCustomGameUserSettings
void UCustomGameUserSettings::StaticRegisterNativesUCustomGameUserSettings()
{
	UClass* Class = UCustomGameUserSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomUserSettings", &UCustomGameUserSettings::execGetCustomUserSettings },
		{ "GetMasterVolume", &UCustomGameUserSettings::execGetMasterVolume },
		{ "SetMasterVolume", &UCustomGameUserSettings::execSetMasterVolume },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomGameUserSettings);
UClass* Z_Construct_UClass_UCustomGameUserSettings_NoRegister()
{
	return UCustomGameUserSettings::StaticClass();
}
struct Z_Construct_UClass_UCustomGameUserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CustomGameUserSettings.h" },
		{ "ModuleRelativePath", "CustomGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterVolume_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Below is the name of the volume variable\n" },
#endif
		{ "ModuleRelativePath", "CustomGameUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Below is the name of the volume variable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MasterVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomGameUserSettings_GetCustomUserSettings, "GetCustomUserSettings" }, // 2385407419
		{ &Z_Construct_UFunction_UCustomGameUserSettings_GetMasterVolume, "GetMasterVolume" }, // 3141428683
		{ &Z_Construct_UFunction_UCustomGameUserSettings_SetMasterVolume, "SetMasterVolume" }, // 2149500929
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomGameUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_MasterVolume = { "MasterVolume", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameUserSettings, MasterVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterVolume_MetaData), NewProp_MasterVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomGameUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_MasterVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameUserSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCustomGameUserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameUserSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalOdyssey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameUserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomGameUserSettings_Statics::ClassParams = {
	&UCustomGameUserSettings::StaticClass,
	"GameUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCustomGameUserSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameUserSettings_Statics::PropPointers),
	0,
	0x409000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomGameUserSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomGameUserSettings()
{
	if (!Z_Registration_Info_UClass_UCustomGameUserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomGameUserSettings.OuterSingleton, Z_Construct_UClass_UCustomGameUserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomGameUserSettings.OuterSingleton;
}
template<> FINALODYSSEY_API UClass* StaticClass<UCustomGameUserSettings>()
{
	return UCustomGameUserSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomGameUserSettings);
UCustomGameUserSettings::~UCustomGameUserSettings() {}
// End Class UCustomGameUserSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_xlile_Desktop_3PA_Code_Games_Final_Odyssey_FinalOdyssey_Source_FinalOdyssey_CustomGameUserSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomGameUserSettings, UCustomGameUserSettings::StaticClass, TEXT("UCustomGameUserSettings"), &Z_Registration_Info_UClass_UCustomGameUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomGameUserSettings), 3780716725U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xlile_Desktop_3PA_Code_Games_Final_Odyssey_FinalOdyssey_Source_FinalOdyssey_CustomGameUserSettings_h_129294404(TEXT("/Script/FinalOdyssey"),
	Z_CompiledInDeferFile_FID_Users_xlile_Desktop_3PA_Code_Games_Final_Odyssey_FinalOdyssey_Source_FinalOdyssey_CustomGameUserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xlile_Desktop_3PA_Code_Games_Final_Odyssey_FinalOdyssey_Source_FinalOdyssey_CustomGameUserSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
