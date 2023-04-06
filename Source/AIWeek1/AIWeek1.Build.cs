// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AIWeek1 : ModuleRules
{
	public AIWeek1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
