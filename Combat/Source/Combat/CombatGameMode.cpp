// Copyright Epic Games, Inc. All Rights Reserved.

#include "CombatGameMode.h"
#include "CombatCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACombatGameMode::ACombatGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Paladin/Paladin"));
	DefaultPawnClass = PlayerPawnBPClass.Class;
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
