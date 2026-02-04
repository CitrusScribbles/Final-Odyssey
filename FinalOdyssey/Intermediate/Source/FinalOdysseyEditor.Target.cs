using UnrealBuildTool;

public class FinalOdysseyEditorTarget : TargetRules
{
	public FinalOdysseyEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("FinalOdyssey");
	}
}
