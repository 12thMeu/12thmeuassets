class CfgPatches {
  class 12th_items {
    units[] = {
      "12th_Biofoam_C",       // Corpsman-specific Biofoam item
      "12th_Medigel_C",       // Corpsman-specific Medigel item'
	  "Dons_Radio"		//Radio for mission building
    };
    weapons[] = {};           // No specific weapons defined in this config
    ammo[] = {};              // No specific ammo defined in this config
    magazines[] = {
      "12th_Biofoam_C",       // Magazines array for Biofoam item
      "12th_Medigel_C"        // Magazines array for Medigel item
    };
    requiredVersion = 0.1;    // Minimum required version of the game
    requiredAddons[] = {      // List of required addons for this config to work
      "kat_pharma",           // KAT medical module
      "OPTRE_ACE_Compat",     // OPTRE and ACE compatibility module
      "ace_medical_engine"    // ACE medical engine
    };
  };
};

class CfgFunctions {
  class OPTRE {
    class ACE_Compat {
      class treatmentBandageAndPainReduction;        // Function for bandage and pain reduction treatment
      class treatmentBandageAndPainReductionLocal;   // Local variant of the above function
    };
  };
};

// Define the Biofoam and Medigel items, inheriting from OPTRE base classes
class OPTRE_Biofoam;  // Base class for Biofoam from OPTRE mod
class OPTRE_Medigel;  // Base class for Medigel from OPTRE mod

class ACE_Medical_Treatment_Actions {
  class OPTRE_Biofoam;  // Inherit properties from OPTRE's Biofoam class
  class TXA;            // Existing ACE medical action class for TXA
  class 12th_Biofoam_C: OPTRE_Biofoam {  // Define the custom 12th Biofoam item
    displayName = "Inject Corpsman Biofoam";  // Custom display name for the Biofoam
  };
  class Phenylephrine;  // Existing ACE medical action class for Phenylephrine
  class 12th_Medigel_C: OPTRE_Medigel {  // Define the custom 12th Medigel item
    displayName = "Apply Corpsman Medigel";  // Custom display name for the Medigel
  };
};

class CfgVehicles
{ 
	class Land_Basketball_01_F;
	class Dons_Radio: Land_Basketball_01_F
		{
			scope = 2;
			scopeCurator = 2;
			editorCategory ="12th_Assets";
			editorSubcategory="Misc_Props";
			destrType="DestructNo";
			displayname = "Radio";
			editorPreview="12th_items\icon.paa";
			model = "12th_items\Dons_Radio.p3d";
			description = "Radio Greble";
			ace_dragging_canCarry = 1;
			ace_dragging_carryPosition[] = {0, 1.5, 0};
			ace_dragging_carryDirection = 0;
		};
};
/// editor/curator category creation!
class CfgEditorCategories
{
	class 12th_Assets // Category class, you point to it in editorCategory property
	{
		displayName = "12th MEU Props"; // Name visible in the list
	};
};
    class CfgEditorSubcategories ///sub category creation.
{
	class Misc_Props
	{
		displayName="Misc Props";
	};
	

};

