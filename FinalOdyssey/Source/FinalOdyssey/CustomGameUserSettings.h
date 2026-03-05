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

public:
	UFUNCTION(BlueprintCallable)
	void SetTopDownControls(int32 PickedControls);

	UFUNCTION(BlueprintPure)
	int32 GetTopDownControls() const;

	UFUNCTION(BlueprintCallable)
	static UCustomGameUserSettings* GetTopDownControlSaved();

protected:
	UPROPERTY(Config)
	int32 TopDownControls;
	
};
