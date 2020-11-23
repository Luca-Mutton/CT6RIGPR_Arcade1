// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class CT6RIGPR_Arcade1Target : TargetRules
{
    public CT6RIGPR_Arcade1Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("CT6RIGPR_Arcade1");
	}
}
