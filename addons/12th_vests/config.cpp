#pragma hemtt suppress pw3_padded_arg config

#include "config_macros.hpp"

class CfgPatches {
  class 12th_vests {
    units[]= {};
    weapons[]= {
      "12th_kipchak_base",
      "12th_carrier_base",
      "12th_kipchak_black",
      "12th_kipchak_standard",
      "12th_kipchak_desert",
      "12th_kipchak_jungle",
      "12th_kipchak_winter",
      "12th_carrier_black",
      "12th_carrier_standard",
      "12th_carrier_desert",
      "12th_carrier_jungle",
      "12th_carrier_winter",
      "12th_invis_vest"
    };
    requiredVersion=0.1;
  };
};

class CfgVehicles {
  class ContainerSupply;
  class 12th_vest_supply : ContainerSupply {
    maximumLoad=VEST_MAXLOAD;
  };
};

class CfgWeapons {
  class OPTRE_UNSC_M52A_Armor2_MAR;
  class ItemCore;
  class VestItem;

  class 12th_unscf_vest_base : ItemCore {
    scope=0;
    scopeArsenal=0;
    author="Kelp";
    picture="";
    model="\19th_H2A_armor\19th_H2A_marines_vests.p3d";
    allowedSlots[]={ 701 };
    hiddenSelections[]={};
    hiddenSelectionsTextures[]={};
    UNSCF_VEST_ITEM_INFO("",default)
  };

  class 12th_kipchak_base: ItemCore {
    author = "Kelp";
    scope = 0;
    scopeArsenal = 0;
    picture = "";
    displayName="[12th] Kipchak Vest Base (DON'T USE)";
    model="\A3\Characters_F_Enoch\Vests\V_SmershVest_01_F.p3d";
    hiddenSelections[] = {
      "Camo",
      "Camo2",
      "Radio2_hide"
    };
    KIPCHAK_ITEM_INFO(black)
  };

  class 12th_carrier_base: ItemCore {
    author = "Kelp";
    scope = 0;
    scopeArsenal = 0;
    picture = "";
    displayName= "[12th] Carrier Rig Base (DON'T USE)";
    model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
    hiddenSelections[] = {"camo"};
    CARRIER_RIG_ITEM_INFO(black)
  };

  class 12th_invis_vest: OPTRE_UNSC_M52A_Armor2_MAR {
    author="Kelp";
    scope=2;
    scopeArsenal=2;
    displayName = "[12th] Invisible Vest";
    model="\halo_marine\null.p3d";
    picture="";
    hiddenSelectionsTextures[] = {""};
    INVIS_VEST_ITEM_INFO
  };

  KIPCHAK_VEST(black,    "Z[12th][DEPRECATED][Black] Kipchak Vest")
  KIPCHAK_VEST(standard, "Z[12th][DEPRECATED] Kipchak Vest")
  KIPCHAK_VEST(desert,   "Z[12th][DEPRECATED][Desert] Kipchak Vest")
  KIPCHAK_VEST(jungle,   "Z[12th][DEPRECATED][Jungle] Kipchak Vest")
  KIPCHAK_VEST(winter,   "Z[12th][DEPRECATED][Winter] Kipchak Vest")

  CARRIER_VEST(black,    "Z[12th][DEPRECATED][Black] Carrier Rig")
  CARRIER_VEST(standard, "Z[12th][DEPRECATED] Carrier Rig")
  CARRIER_VEST(desert,   "Z[12th][DEPRECATED][Desert] Carrier Rig")
  CARRIER_VEST(jungle,   "Z[12th][DEPRECATED][Jungle] Carrier Rig")
  CARRIER_VEST(winter,   "Z[12th][DEPRECATED][Winter] Carrier Rig")

  UNSCF_VEST_ALL_VARIANTS(12th_unscf_vest_std,std,[12th][S])
  UNSCF_VEST_ALL_VARIANTS(12th_unscf_vest_win,winter,[12th][W])
};