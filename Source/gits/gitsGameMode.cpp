// Copyright Epic Games, Inc. All Rights Reserved.

#include "gitsGameMode.h"
#include "gitsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AgitsGameMode::AgitsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
