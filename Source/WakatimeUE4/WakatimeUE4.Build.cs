// Copyright 2015-2018 Joy Machine, LLC. All rights reserved.

using UnrealBuildTool;

public class WakatimeUE4 : ModuleRules
{
    public WakatimeUE4(ReadOnlyTargetRules Target) : base(Target)
    {
        PublicIncludePaths.AddRange(
            new string[] { "WakatimeUE4/Public" }
        );


        PrivateIncludePaths.AddRange(
            new string[] { "WakatimeUE4/Private", }
        );


        PublicDependencyModuleNames.AddRange(
            new string[] { "Core", }
        );


        PrivateDependencyModuleNames.AddRange(
            new string[] {
                "Core",
                "CoreUObject",
                "Engine",
                "InputCore",
                "UnrealEd",
                "Slate",
                "SlateCore",
                "EditorStyle",
                "TargetPlatform",
                "DesktopPlatform",
                "Kismet"
            }
        );
    }
}
