using UnrealBuildTool;

public class Project08 : ModuleRules
{
	public Project08(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "UMG" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}
