using UnrealBuildTool;

public class TestWorldTarget : TargetRules
{
	public TestWorldTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V2;
		Type = TargetType.Game;
		ExtraModuleNames.Add("TestWorld");
	}
}
