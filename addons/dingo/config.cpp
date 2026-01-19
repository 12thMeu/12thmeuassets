#include "script_component.hpp"
//Fixed with the help of Crowdedlight


class DefaultEventhandlers;
class CfgPatches {
  class vehicle_Dingo {
    units[] = {
	  "SMT_DingoCargo",
    "SMT_DingoTroop"
    };
    weapons[] = {};           // No specific weapons defined in this config
    ammo[] = {};              // No specific ammo defined in this config
    magazines[] = {
    };
    requiredVersion = 0.1;    // Minimum required version of the game
    requiredAddons[] = { 
     "A3_Armor_F_Gamma","A3_Air_F","A3_Air_F_Beta","A3_Weapons_F","A3_Soft_F_Exp","A3_Characters_F_BLUFOR","ace_interaction","ace_common"    // List of required addons for this config to work
    };
  };
};


class CfgFactionClasses {
  class SMT_Faction {
    displayName = "Sanguine Materials Technologies";
    icon="";  // TODO: Add faction icon.
    priority=98;  // High priority to ensure it appears at the top of the list.
    side=1;  // Blufor (friendly) side.
  };
};


class CfgEditorCategories {
  class ED_SMT_Faction {
    displayName="Sanguine Materials Technologies";
    priority=98;  // High priority for easy access.
    side=1;  // Blufor (friendly) side.
  };
};

class CfgEditorSubcategories {
    class EDS_SMT_faction_Vehicles {
    displayName="Vehicles";  // Ground vehicles (cars, trucks).
  };
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;

#include "model.cfg"
#include "CfgVehicles.hpp"
