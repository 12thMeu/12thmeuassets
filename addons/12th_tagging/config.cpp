#pragma hemtt suppress pw3_padded_arg config
#include "config_macros.hpp"

class CfgPatches {
  class 12th_tagging {
    units[]={
      ""
    };
    weapons[]={
      "12th_spray_hq",
    };
    requiredAddons[]={
      "ace_interaction",
      "ace_tagging"
    };
    requiredVersion=0.1;
    version=0.1;
  };
};

class CfgVehicles {};

class CfgWeapons {
  class ACE_SpraypaintBlack;
  class CBA_MiscItem_ItemInfo;

  // Platoon-specific spraycans
  SPRAY_ITEM(hq, (HQ))
  SPRAY_ITEM(1stplt, (1stPLT))
  SPRAY_ITEM(2ndplt, (2ndPLT))

  // Contains various misc sprays, editable at our whims.
  SPRAY_ITEM(misc, (Miscellaneous))
};

class ACE_Tags {
  // NOTE: The arguments here may be the same but they all represent
  // very different things i promis ;-;
  PLT_TAGS(hq,Q(SPRAY_CLASS(hq)),hq)
  PLT_TAGS(1stplt,Q(SPRAY_CLASS(1stplt)),1stplt)
  PLT_TAGS(2ndplt,Q(SPRAY_CLASS(2ndplt)),2ndplt)

  TAG(misc_lb,Q(SPRAY_CLASS(misc)),"12th Logo (Black)",TPATH(misc,12thLogoBlack.paa))
  TAG(misc_lw,Q(SPRAY_CLASS(misc)),"12th Logo (White)",TPATH(misc,12thLogoWhite.paa))
  TAG(misc_bs,Q(SPRAY_CLASS(misc)),"Blank Square",TPATH(misc,BlankSquare.paa))
  TAG(misc_au,Q(SPRAY_CLASS(misc)),"Arrow Up",TPATH(misc,ArrowUp.paa))
  TAG(misc_ar,Q(SPRAY_CLASS(misc)),"Arrow Right",TPATH(misc,ArrowRight.paa))
  TAG(misc_ad,Q(SPRAY_CLASS(misc)),"Arrow Down",TPATH(misc,ArrowDown.paa))
  TAG(misc_al,Q(SPRAY_CLASS(misc)),"Arrow Left",TPATH(misc,ArrowLeft.paa))
};