// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "CustomGameUserSettings.generated.h"

/**
 * 
 */
UCLASS()
class FINALODYSSEY_API UCustomGameUserSettings : public UGameUserSettings
{
	GENERATED_UCLASS_BODY()

public: //Creates ways the blueprint can interact with this script by name, as seen below.
	//Below is the Volum getter and setter functions
	UFUNCTION(BlueprintCallable)
	void SetMasterVolume(float DesiredVolume);

	UFUNCTION(BlueprintPure)
	float GetMasterVolume() const;

	UFUNCTION(BlueprintCallable)
	static UCustomGameUserSettings* GetCustomUserSettings();


protected:
	//Below is the name of the volume variable
	UPROPERTY(Config)
	float MasterVolume;
	
};
