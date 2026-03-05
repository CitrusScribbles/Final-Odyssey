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

// Begin Class UCustomGameUserSettings Function GetTopDownControls
struct Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControls_Statics
{
	struct CustomGameUserSettings_eventGetTopDownControls_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CustomGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControls_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomGameUserSettings_eventGetTopDownControls_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControls_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControls_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControls_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGameUserSettings, nullptr, "GetTopDownControls", nullptr, nullptr, Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControls_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControls_Statics::CustomGameUserSettings_eventGetTopDownControls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControls_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControls_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControls_Statics::CustomGameUserSettings_eventGetTopDownControls_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControls()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControls_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomGameUserSettings::execGetTopDownControls)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTopDownControls();
	P_NATIVE_END;
}
// End Class UCustomGameUserSettings Function GetTopDownControls

// Begin Class UCustomGameUserSettings Function GetTopDownControlSaved
struct Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControlSaved_Statics
{
	struct CustomGameUserSettings_eventGetTopDownControlSaved_Parms
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControlSaved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomGameUserSettings_eventGetTopDownControlSaved_Parms, ReturnValue), Z_Construct_UClass_UCustomGameUserSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControlSaved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControlSaved_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControlSaved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControlSaved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGameUserSettings, nullptr, "GetTopDownControlSaved", nullptr, nullptr, Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControlSaved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControlSaved_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControlSaved_Statics::CustomGameUserSettings_eventGetTopDownControlSaved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControlSaved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControlSaved_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControlSaved_Statics::CustomGameUserSettings_eventGetTopDownControlSaved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControlSaved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControlSaved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomGameUserSettings::execGetTopDownControlSaved)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCustomGameUserSettings**)Z_Param__Result=UCustomGameUserSettings::GetTopDownControlSaved();
	P_NATIVE_END;
}
// End Class UCustomGameUserSettings Function GetTopDownControlSaved

// Begin Class UCustomGameUserSettings Function SetTopDownControls
struct Z_Construct_UFunction_UCustomGameUserSettings_SetTopDownControls_Statics
{
	struct CustomGameUserSettings_eventSetTopDownControls_Parms
	{
		int32 PickedControls;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CustomGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PickedControls;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_SetTopDownControls_Statics::NewProp_PickedControls = { "PickedControls", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomGameUserSettings_eventSetTopDownControls_Parms, PickedControls), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGameUserSettings_SetTopDownControls_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_SetTopDownControls_Statics::NewProp_PickedControls,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_SetTopDownControls_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameUserSettings_SetTopDownControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGameUserSettings, nullptr, "SetTopDownControls", nullptr, nullptr, Z_Construct_UFunction_UCustomGameUserSettings_SetTopDownControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_SetTopDownControls_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomGameUserSettings_SetTopDownControls_Statics::CustomGameUserSettings_eventSetTopDownControls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_SetTopDownControls_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomGameUserSettings_SetTopDownControls_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomGameUserSettings_SetTopDownControls_Statics::CustomGameUserSettings_eventSetTopDownControls_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomGameUserSettings_SetTopDownControls()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGameUserSettings_SetTopDownControls_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomGameUserSettings::execSetTopDownControls)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PickedControls);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTopDownControls(Z_Param_PickedControls);
	P_NATIVE_END;
}
// End Class UCustomGameUserSettings Function SetTopDownControls

// Begin Class UCustomGameUserSettings
void UCustomGameUserSettings::StaticRegisterNativesUCustomGameUserSettings()
{
	UClass* Class = UCustomGameUserSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTopDownControls", &UCustomGameUserSettings::execGetTopDownControls },
		{ "GetTopDownControlSaved", &UCustomGameUserSettings::execGetTopDownControlSaved },
		{ "SetTopDownControls", &UCustomGameUserSettings::execSetTopDownControls },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownControls_MetaData[] = {
		{ "ModuleRelativePath", "CustomGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TopDownControls;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControls, "GetTopDownControls" }, // 1753970603
		{ &Z_Construct_UFunction_UCustomGameUserSettings_GetTopDownControlSaved, "GetTopDownControlSaved" }, // 1462681783
		{ &Z_Construct_UFunction_UCustomGameUserSettings_SetTopDownControls, "SetTopDownControls" }, // 375759905
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomGameUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_TopDownControls = { "TopDownControls", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameUserSettings, TopDownControls), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownControls_MetaData), NewProp_TopDownControls_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomGameUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_TopDownControls,
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
		{ Z_Construct_UClass_UCustomGameUserSettings, UCustomGameUserSettings::StaticClass, TEXT("UCustomGameUserSettings"), &Z_Registration_Info_UClass_UCustomGameUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomGameUserSettings), 2826936734U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xlile_Desktop_3PA_Code_Games_Final_Odyssey_FinalOdyssey_Source_FinalOdyssey_CustomGameUserSettings_h_3470180215(TEXT("/Script/FinalOdyssey"),
	Z_CompiledInDeferFile_FID_Users_xlile_Desktop_3PA_Code_Games_Final_Odyssey_FinalOdyssey_Source_FinalOdyssey_CustomGameUserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xlile_Desktop_3PA_Code_Games_Final_Odyssey_FinalOdyssey_Source_FinalOdyssey_CustomGameUserSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
