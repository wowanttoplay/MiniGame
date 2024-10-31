// Copyright Epic Games, Inc. All Rights Reserved.

#include "MiniGameGameMode.h"
#include "MiniGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMiniGameGameMode::AMiniGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
