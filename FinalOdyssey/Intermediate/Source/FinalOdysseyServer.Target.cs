using UnrealBuildTool;

public class FinalOdysseyServerTarget : TargetRules
{
	public FinalOdysseyServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("FinalOdyssey");
	}
}
