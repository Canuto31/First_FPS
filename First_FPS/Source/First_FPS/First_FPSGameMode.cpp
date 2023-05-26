// Copyright Epic Games, Inc. All Rights Reserved.

#include "First_FPSGameMode.h"
#include "First_FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirst_FPSGameMode::AFirst_FPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
