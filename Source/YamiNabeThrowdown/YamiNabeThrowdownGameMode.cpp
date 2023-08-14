// Copyright Epic Games, Inc. All Rights Reserved.

#include "YamiNabeThrowdownGameMode.h"
#include "YamiNabeThrowdownCharacter.h"
#include "UObject/ConstructorHelpers.h"

AYamiNabeThrowdownGameMode::AYamiNabeThrowdownGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
