#include "\x\cba\addons\main\script_macros_common.hpp"
#include "config_macros.hpp"

class CfgPatches {
  class 12th_backpacks {
    units[]= {
      "12th_backpack_standard",
      "12th_backpack_standard_rto",
      "12th_backpack_standard_bio",
      "12th_backpack_standard_pouch",
      "12th_backpack_jungle",
      "12th_backpack_jungle_rto",
      "12th_backpack_jungle_bio",
      "12th_backpack_jungle_pouch",
      "12th_backpack_desert",
      "12th_backpack_desert_rto",
      "12th_backpack_desert_bio",
      "12th_backpack_desert_pouch",
      "12th_backpack_winter",
      "12th_backpack_winter_rto",
      "12th_backpack_winter_bio",
      "12th_backpack_winter_pouch",
      "12th_backpack_alt_rto"
    };
    weapons[]= {};
    requiredVersion=0.1;
  };
};

class CfgVehicles {
  class B_AssaultPack_Base;
  class 19th_Bag_Base;

  class 12th_backpack_base: B_AssaultPack_Base {
    author="Kelp";
    scope=0;
    scopeArsenal=0;
    picture="";
    displayName="[12th] Backpack Base (DON'T USE)";
    model= "\x\12thMEUAssets\addons\12th_backpacks\backpack\12thkelpbackpack.p3d";
    hiddenSelections[]= {
      "Main",
      "Pouches",
      "Biofoam",
      "Antenna"
    };
    maximumLoad=BP_MAXLOAD;
    mass=BP_MASS;
    class TransportMagazines {};
    class TransportItems {};
  };

  class 12th_backpack_invis: 12th_backpack_base {
    author="Kelp";
    scope=2;
    scopeArsenal=2;
    displayName="[12th] Invisible Backpack";
    model="\halo_marine\null.p3d";
    hiddenSelectionsTextures[] = {"", "", "", ""};
  };

  // Back due to popular demand.
  class 12th_backpack_alt_rto: 19th_Bag_Base {
    scope=2;
    author="Kelp";
    scopeArsenal=2;
    displayName="[12th][Alt] Backpack RTO";
    maximumLoad=BP_MAXLOAD;
    mass=BP_MASS;
    picture="";
    hiddenSelections[] = {
      "Bag",
      "PouchFront"
    };
    hiddenSelectionsTextures[] = {
      "",
      ""
    };
  };

  BACKPACK_ALLTYPES(winter,Winter)
  BACKPACK_ALLTYPES(desert,Desert)
  BACKPACK_ALLTYPES(standard,Standard)
  BACKPACK_ALLTYPES(jungle,Jungle)
};