// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomGameUserSettings.h"

UCustomGameUserSettings::UCustomGameUserSettings(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{
	MasterVolume = float(1); //Set standard volume as 1.
}

void UCustomGameUserSettings::SetMasterVolume(float DesiredVolume)
{
	MasterVolume = DesiredVolume; //Set master volume of saved value to inputted volume.
}

float UCustomGameUserSettings::GetMasterVolume() const
{
	return MasterVolume;
}

void UCustomGameUserSettings::SetMusicVolume(float DesiredMusicVolume)
{
	MusicVolume = DesiredMusicVolume; //Set music volume of saved value to inputted volume.
}

float UCustomGameUserSettings::GetMusicVolume() const
{
	return MusicVolume;
}

void UCustomGameUserSettings::SetSFXVolume(float DesiredSFXVolume)
{
	SFXVolume = DesiredSFXVolume; //Set SFX volume of saved value to inputted volume.
}

float UCustomGameUserSettings::GetSFXVolume() const
{
	return SFXVolume;
}

UCustomGameUserSettings* UCustomGameUserSettings::GetCustomUserSettings()
{
	return Cast<UCustomGameUserSettings>(UGameUserSettings::GetGameUserSettings());
}
