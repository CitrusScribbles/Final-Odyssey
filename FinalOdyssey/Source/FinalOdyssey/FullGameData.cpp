// Fill out your copyright notice in the Description page of Project Settings.


#include "FullGameData.h"
#include "Runtime\Core\Public\Misc\Paths.h"
#include "Runtime\Core\Public\HAL\Platformfilemanager.h"

FString UFullGameData::LoadFileToString(FString Filename)
{

	FString directory = FPaths::ProjectContentDir();
	FString result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*directory)) {
		FString myFile = directory + "/" + Filename;
		FFileHelper::LoadFileToString(result, *myFile);
	}
	else {
		//Below simply prints to the screen if it is NOT working
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ERROR YOU DUMB FUCK, FILE NOT FOUND"));
	}

	return result;
}

FString UFullGameData::SaveStringToFile(FString Filename, FString SaveTxt)
{
	FString directory = FPaths::ProjectContentDir();
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*directory)) {
		FString myFile = directory + "/" + Filename;
		FFileHelper::SaveStringToFile(SaveTxt, *myFile);
	}

	return SaveTxt;

}
