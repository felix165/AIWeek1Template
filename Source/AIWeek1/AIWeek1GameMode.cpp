// Copyright Epic Games, Inc. All Rights Reserved.

#include "AIWeek1GameMode.h"
#include "AIWeek1Character.h"
#include "UObject/ConstructorHelpers.h"

AAIWeek1GameMode::AAIWeek1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
