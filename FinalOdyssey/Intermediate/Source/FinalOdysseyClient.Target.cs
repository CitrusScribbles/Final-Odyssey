using UnrealBuildTool;

public class FinalOdysseyClientTarget : TargetRules
{
	public FinalOdysseyClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("FinalOdyssey");
	}
}
