// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CT6RIGPR_Arcade1GameMode.h"
#include "CT6RIGPR_Arcade1Ball.h"

ACT6RIGPR_Arcade1GameMode::ACT6RIGPR_Arcade1GameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = ACT6RIGPR_Arcade1Ball::StaticClass();
}
