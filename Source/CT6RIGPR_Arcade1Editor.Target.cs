// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class CT6RIGPR_Arcade1EditorTarget : TargetRules
{
    public CT6RIGPR_Arcade1EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("CT6RIGPR_Arcade1");
	}
}
