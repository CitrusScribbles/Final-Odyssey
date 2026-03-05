// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomGameUserSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCustomGameUserSettings;
#ifdef FINALODYSSEY_CustomGameUserSettings_generated_h
#error "CustomGameUserSettings.generated.h already included, missing '#pragma once' in CustomGameUserSettings.h"
#endif
#define FINALODYSSEY_CustomGameUserSettings_generated_h

#define FID_Users_xlile_Desktop_3PA_Code_Games_Final_Odyssey_FinalOdyssey_Source_FinalOdyssey_CustomGameUserSettings_h_15_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetTopDownControlSaved); \
	DECLARE_FUNCTION(execGetTopDownControls); \
	DECLARE_FUNCTION(execSetTopDownControls);


#define FID_Users_xlile_Desktop_3PA_Code_Games_Final_Odyssey_FinalOdyssey_Source_FinalOdyssey_CustomGameUserSettings_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCustomGameUserSettings(); \
	friend struct Z_Construct_UClass_UCustomGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(UCustomGameUserSettings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalOdyssey"), NO_API) \
	DECLARE_SERIALIZER(UCustomGameUserSettings)


#define FID_Users_xlile_Desktop_3PA_Code_Games_Final_Odyssey_FinalOdyssey_Source_FinalOdyssey_CustomGameUserSettings_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomGameUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomGameUserSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGameUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGameUserSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCustomGameUserSettings(UCustomGameUserSettings&&); \
	UCustomGameUserSettings(const UCustomGameUserSettings&); \
public: \
	NO_API virtual ~UCustomGameUserSettings();


#define FID_Users_xlile_Desktop_3PA_Code_Games_Final_Odyssey_FinalOdyssey_Source_FinalOdyssey_CustomGameUserSettings_h_12_PROLOG
#define FID_Users_xlile_Desktop_3PA_Code_Games_Final_Odyssey_FinalOdyssey_Source_FinalOdyssey_CustomGameUserSettings_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_xlile_Desktop_3PA_Code_Games_Final_Odyssey_FinalOdyssey_Source_FinalOdyssey_CustomGameUserSettings_h_15_RPC_WRAPPERS \
	FID_Users_xlile_Desktop_3PA_Code_Games_Final_Odyssey_FinalOdyssey_Source_FinalOdyssey_CustomGameUserSettings_h_15_INCLASS \
	FID_Users_xlile_Desktop_3PA_Code_Games_Final_Odyssey_FinalOdyssey_Source_FinalOdyssey_CustomGameUserSettings_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALODYSSEY_API UClass* StaticClass<class UCustomGameUserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_xlile_Desktop_3PA_Code_Games_Final_Odyssey_FinalOdyssey_Source_FinalOdyssey_CustomGameUserSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
