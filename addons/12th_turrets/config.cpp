class CfgPatches {
  class 12th_Weapons_Turrets {
    units[] = {
      "12th_Static_M41",
			"12th_Static_Gauss",
			"12th_Static_ATGM",
			"12th_Static_AA",
			"12th_Static_Base_Turret",
			"12th_Static_M41_Ins",
			"12th_Static_AA_Ins",
			"12th_Static_ATGM_Ins",
			"12th_Static_Gauss_CMA",
			"12th_Static_M41_CMA",
			"12th_Static_AA_CMA",
			"12th_Static_ATGM_CMA"
    };
    weapons[] = {};
    ammo[] = {};
    magazines[] = {};
    requiredVersion=0.1;
    requiredAddons[]= {
      "OPTRE_Weapons_Turrets",
      "A3_Weapons_F",
      "A3_Weapons_F_Exp"
    };
  };
};

// START DEFINE CLASS 
class OPTRE_Static_M41;
class OPTRE_Static_Gauss;
class OPTRE_Static_ATGM;
class OPTRE_Static_AA;
class OPTRE_Static_Base_Turret;
class OPTRE_Static_M41_Ins;
class OPTRE_Static_AA_Ins;
class OPTRE_Static_ATGM_Ins;
class OPTRE_Static_Gauss_Ins;
class OPTRE_Static_Gauss_CMA;
class OPTRE_Static_M41_CMA;
class OPTRE_Static_AA_CMA;
class OPTRE_Static_ATGM_CMA;

class CfgVehicles {
  // Start UNSC Turrets
  class 12th_Static_M41: OPTRE_Static_M41 {
    scope=2;
    scopeCurator=2;
    author="Weber";
    displayName="[12th] M41 LAAG Turret";
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Turrets";
    armor=200;
  };
  class 12th_Static_Gauss: OPTRE_Static_Gauss {
    scope=2;
    scopeCurator=2;
    author="Weber";
    displayName="[12th] M41 Gauss Turret";
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Turrets";
    armor=200;
  };
  class 12th_Static_ATGM: OPTRE_Static_ATGM {
    scope=2;
    scopeCurator=2;
    author="Weber";
    displayName="[12th] M41 ATGM Turret";
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Turrets";
    armor=200;
  };
  class 12th_Static_AA: OPTRE_Static_AA {
    scope=2;
    scopeCurator=2;
    author="Weber";
    displayName="[12th] M41 AA Turret";
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Turrets";
    armor=200;
  };
  // Start Insurrection Turrets
  class 12th_Static_M41_Ins: OPTRE_Static_M41_Ins {
    scope=2;
    scopeCurator=2;
    author="Weber";
    displayName="[12th] M41 LAAG Turret (Insurrectionist)";
    faction="12th_MEU_Ins";
    editorCategory="12th_MEU_Ins";
    editorSubcategory="12th_MEU_INS_Turrets";
    armor=200;
  };
  class 12th_Static_Gauss_Ins: OPTRE_Static_Gauss_Ins {
    scope=2;
    scopeCurator=2;
    author="Weber";
    displayName="[12th] M41 Gauss Turret (Insurrectionist)";
    faction="12th_MEU_Ins";
    editorCategory="12th_MEU_Ins";
    editorSubcategory="12th_MEU_INS_Turrets";
    armor=200;
  };
  class 12th_Static_ATGM_Ins: OPTRE_Static_ATGM_Ins {
    scope=2;
    scopeCurator=2;
    author="Weber";
    displayName="[12th] M41 ATGM Turret (Insurrectionist)";
    faction="12th_MEU_Ins";
    editorCategory="12th_MEU_Ins";
    editorSubcategory="12th_MEU_INS_Turrets";
    armor=200;
  };
  class 12th_Static_AA_Ins: OPTRE_Static_AA_Ins {
    scope=2;
    scopeCurator=2;
    author="Weber";
    displayName="[12th] M41 AA Turret (Insurrectionist)";
    faction="12th_MEU_Ins";
    editorCategory="12th_MEU_Ins";
    editorSubcategory="12th_MEU_INS_Turrets";
    armor=200;
  };
  // Start CMA Turrets
  class 12th_Static_M41_CMA: OPTRE_Static_M41_CMA {
    scope=2;
    scopeCurator=2;
    author="Weber";
    displayName="[12th] M41 LAAG Turret (CMA)";
    faction="12th_MEU_CMA";
    editorCategory="12th_MEU_CMA";
    editorSubcategory="12th_MEU_CMA_Turrets";
    armor=200;
  };
  class 12th_Static_Gauss_CMA: OPTRE_Static_Gauss_CMA {
    scope=2;
    scopeCurator=2;
    author="Weber";
    displayName="[12th] M41 Gauss Turret (CMA)";
    faction="12th_MEU_CMA";
    editorCategory="12th_MEU_CMA";
    editorSubcategory="12th_MEU_CMA_Turrets";
    armor=200;
  };
  class 12th_Static_ATGM_CMA: OPTRE_Static_ATGM_CMA {
    scope=2;
    scopeCurator=2;
    author="Weber";
    displayName="[12th] M41 ATGM Turret (CMA)";
    faction="12th_MEU_CMA";
    editorCategory="12th_MEU_CMA";
    editorSubcategory="12th_MEU_CMA_Turrets";
    armor=200;
  };
  class 12th_Static_AA_CMA: OPTRE_Static_AA_CMA {
    scope=2;
    scopeCurator=2;
    author="Weber";
    displayName="[12th] M41 AA Turret (CMA)";
    faction="12th_MEU_CMA";
    editorCategory="12th_MEU_CMA";
    editorSubcategory="12th_MEU_CMA_Turrets";
    armor=200;
  };
};
