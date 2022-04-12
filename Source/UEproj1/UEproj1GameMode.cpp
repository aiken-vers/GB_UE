// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEproj1GameMode.h"
#include "UEproj1Character.h"
#include "UObject/ConstructorHelpers.h"

AUEproj1GameMode::AUEproj1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
