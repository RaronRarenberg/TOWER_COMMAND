// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tower_CommandGameMode.h"
#include "Tower_CommandPlayerController.h"
#include "Tower_CommandCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATower_CommandGameMode::ATower_CommandGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATower_CommandPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}