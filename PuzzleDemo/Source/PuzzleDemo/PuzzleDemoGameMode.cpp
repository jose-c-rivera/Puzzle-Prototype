// Copyright Epic Games, Inc. All Rights Reserved.

#include "PuzzleDemoGameMode.h"
#include "PuzzleDemoPlayerController.h"
#include "PuzzleDemoPawn.h"

APuzzleDemoGameMode::APuzzleDemoGameMode()
{
	// no pawn by default
	DefaultPawnClass = APuzzleDemoPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = APuzzleDemoPlayerController::StaticClass();
}
