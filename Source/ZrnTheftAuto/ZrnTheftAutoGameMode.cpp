// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "ZrnTheftAuto.h"
#include "ZrnTheftAutoGameMode.h"
#include "ZrnTheftAutoCharacter.h"

AZrnTheftAutoGameMode::AZrnTheftAutoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
