using UnrealBuildTool;

public class FinalOdysseyTarget : TargetRules
{
	public FinalOdysseyTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("FinalOdyssey");
	}
}
