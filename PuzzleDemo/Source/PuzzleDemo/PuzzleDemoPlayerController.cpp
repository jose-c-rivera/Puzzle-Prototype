// Copyright Epic Games, Inc. All Rights Reserved.

#include "PuzzleDemoPlayerController.h"

APuzzleDemoPlayerController::APuzzleDemoPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
