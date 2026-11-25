// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <Misc\FileHelper.h>
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FullGameData.generated.h"

/**
 *
 */
UCLASS()
class FINALODYSSEY_API UFullGameData : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

		UFUNCTION(BlueprintCallable, Category = "File I/O")
		static FString LoadFileToString(FString Filename);

		UFUNCTION(BlueprintCallable, Category = "File I/O")
		static FString SaveStringToFile(FString Filename, FString SaveTxt);

};
