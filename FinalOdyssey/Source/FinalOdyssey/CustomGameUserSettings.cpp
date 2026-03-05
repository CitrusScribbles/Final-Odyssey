// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomGameUserSettings.h"

UCustomGameUserSettings::UCustomGameUserSettings(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{
	TopDownControls = int32(0);
}

void UCustomGameUserSettings::SetTopDownControls(int32 PickedControls)
{
	TopDownControls = PickedControls;
}

int32 UCustomGameUserSettings::GetTopDownControls() const
{
	return TopDownControls;
}

UCustomGameUserSettings* UCustomGameUserSettings::GetTopDownControlSaved()
{
	return Cast<UCustomGameUserSettings>(UGameUserSettings::GetGameUserSettings());
}
