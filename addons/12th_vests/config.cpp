/*
  ==============================================================================
  config.cpp

  This file configures our custom vests, referencing macros and selection sets
  defined in "config_macros.hpp" and "unscf_vest_sel.hpp". It includes:
    - CfgPatches (describing what's included in this addon).
    - CfgVehicles (to define supply containers or special vest containers).
    - CfgWeapons (to define the vests themselves).

  Notable Macros:
    - VEST_MAXLOAD: sets the maximum carrying capacity for the containerClass.
    - UNSCF_VEST_ALL_VARIANTS(): expands into multiple vest classes for each
      camo variant (e.g., standard or winter).
  ==============================================================================
*/

// This directive suppresses specific Hemtt warnings related to padded arguments in the configuration file.
#pragma hemtt suppress pw3_padded_arg config

// Includes the macros used below (e.g., VEST_MAXLOAD, etc.)
#include "config_macros.hpp"


// -----------------------------------------------------------------------------
//  CfgPatches
// -----------------------------------------------------------------------------
class CfgPatches {
  class twelfth_vests {
    units[]= {}; // We’re not defining placeable units in this PBO.
    weapons[]= { 
      "twelfth_invis_vest","twelfth_M43A_Light_base"
        /*
          If you create more vests that are stand-alone (not just variants),
          add them here so the engine recognizes them as part of this mod.
        */
    };
    requiredVersion=0.1;
  };
};

// -----------------------------------------------------------------------------
//  CfgVehicles
// -----------------------------------------------------------------------------
class CfgVehicles {
  /*
    We'll create a supply container class that references a macro
    for max load. This containerClass is used by the vests to determine
    how much gear can be carried.
  */
  class ContainerSupply; // Pre-declaration: inherits from a base ArmA class.
  class twelfth_vest_supply : ContainerSupply {
    maximumLoad=200;
    /*
      The VEST_MAXLOAD macro is defined in config_macros.hpp. 
      This sets how many "units" of gear can fit inside the vest container.
    */
  };
};

// -----------------------------------------------------------------------------
//  CfgWeapons (Primary location for vest definitions)
// -----------------------------------------------------------------------------
class CfgWeapons
{
  class ItemCore;
  class VestItem;
  class OPTRE_UNSC_M52A_Armor2_MAR;




    /*
      This is an OPTRE (Operation: Trebuchet) base class used
      purely as an inheritance reference for the invisible vest. 
      Make sure your requiredAddons[] includes the mod that defines this.
    */

  
  // ---------------------------------------------------------------------------
  //  Invisible Vest
  // ---------------------------------------------------------------------------
  class twelfth_invis_vest: OPTRE_UNSC_M52A_Armor2_MAR {
    author="Weber"; 
    scope=2;  // Visible in-game.
    scopeArsenal=2;  // Available in the Arsenal.
    displayName = "[12th] Invisible Vest";
    model="\halo_marine\null.p3d";
      /*
        This is a blank model referencing an invisible or “null” vest geometry.
      */
    picture="";
    hiddenSelectionsTextures[] = {""};
      /*
        Usually, you’d set an empty texture. If you have an actual blank texture,
        you could define it here. Otherwise, leaving it blank is enough.
      */
    // Use our macro to define vest characteristics (mass, container size, etc.)
    INVIS_VEST_ITEM_INFO
  };

  
  //-New Armour-----------------------------------------------------
  NEW_VEST_SETUP
  ALL_VESTS(std)

  // Base uniform item for new-gen armor
};
