class CfgPatches {
  class 12th_items {
    units[] = {
      "12th_Biofoam_C",
			"12th_Medigel_C"
    };
    weapons[] = {};
    ammo[] = {};
    magazines[] = {
      "12th_Biofoam_C",
			"12th_Medigel_C"
    };
    requiredVersion=0.1;
    requiredAddons[]= {
			"kat_pharma",
			"OPTRE_ACE_Compat",
			"ace_medical_engine"
		};
  };
};

class CfgFunctions
{
	class OPTRE
	{
		class ACE_Compat
		{
			class treatmentBandageAndPainReduction;
			class treatmentBandageAndPainReductionLocal;
		};
	};
};

class OPTRE_Biofoam;
class OPTRE_Medigel;
class ACE_Medical_Treatment_Actions
{
  class OPTRE_Biofoam;
  class TXA;
  class 12th_Biofoam_C: OPTRE_Biofoam {
    displayName="Inject Corpsman Biofoam";
  };
  class Phenylephrine;
  class 12th_Medigel_C: OPTRE_Medigel {
    displayName="Apply Corpsman Medigel";
  };
};
