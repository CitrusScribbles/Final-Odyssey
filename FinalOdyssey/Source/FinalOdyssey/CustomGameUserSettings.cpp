// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomGameUserSettings.h"

UCustomGameUserSettings::UCustomGameUserSettings(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{
	TopDownControls = int32(0); //Set variable as kind [ex. integer], label, and starting value
}

void UCustomGameUserSettings::SetTopDownControls(int32 PickedControls)
{
	TopDownControls = PickedControls; //Create an in-script variable [PickedControls] to pass around the new value. This cannot be found in blueprints, only this script.
}

int32 UCustomGameUserSettings::GetTopDownControls() const
{
	return TopDownControls;
}

UCustomGameUserSettings* UCustomGameUserSettings::GetTopDownControlSaved()
{
	return Cast<UCustomGameUserSettings>(UGameUserSettings::GetGameUserSettings()); //Links this variable directly to game user settings, under the script of CustomGameUserSettings
}
