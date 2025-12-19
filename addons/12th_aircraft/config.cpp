#include "config_macros.hpp"

/*
  ==============================================================================
  config.cpp

  This file defines all the 12th MEU aircraft classes. It references base
  classes from OPTRE, the Splits Pelican mod, and vanilla Arma. The macros
  in config_macros.hpp apply additional textures, set up hiddenSelections,
  and define spawn info (AIR_SP_INFO) used by your vehicle spawner script.

  Key Points:
    - CfgPatches: Registers these classes so Arma recognizes them.
    - CfgVehicles: Actual aircraft classes with references to new textures,
      macros for additional texture sets, and custom factions (twelfth_MEU).
    - Macros for each aircraft type handle texture sources, hidden selections,
      and spawner info definitions.

  Expand or comment out sections as needed for future updates or newly added
  aircraft.
  ==============================================================================
*/

class CfgPatches {
  class twelfth_aircraft {
    units[] = {
      "twelfth_d77_tc_pelican",
      "twelfth_hornet",
      "twelfth_falcon_unarmed",
      "twelfth_falcon_armed",
      "twelfth_falcon_s_unarmed",
      "twelfth_falcon_s_armed",
      "twelfth_sparrowhawk_m",
      "twelfth_sparrowhawk_l",
      "twelfth_sparrowhawk_ml",
      "twelfth_sparrowhawk",
      "twelfth_wyvern_inf",
      "twelfth_wyvern_veh",
      "twelfth_prime",
      "twelfth_blackfish_inf",
      "twelfth_blackfish_veh",
      "twelfth_blackfish_armed"
    };
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {
      "A3_Air_F",
      "A3_Air_F_Beta",
      "A3_Weapons_F",
      "OPTRE_Core",
      "OPTRE_Vehicles_Air",
      "Splits_Functions"
    };
  };
};

/*
  ==============================================================================
  CfgVehicles
  ==============================================================================
  Each custom aircraft class inherits from a base class (e.g., Splits_Pelican_base),
  modifies textures, sets faction, and includes macros for more complex logic
  like extended spawn info or texture sets.
*/

class CfgVehicles {
  // -------------------------- Base Classes --------------------------
  class Splits_Pelican_base;

  class OPTRE_UNSC_hornet;

  class OPTRE_UNSC_falcon;
  class OPTRE_UNSC_falcon_armed;
  class OPTRE_UNSC_falcon_S;
  class OPTRE_UNSC_falcon_armed_S;

  class OPTRE_AV22_Sparrowhawk_Base;
  class OPTRE_AV22_Sparrowhawk;
  class OPTRE_AV22A_Sparrowhawk;
  class OPTRE_AV22B_Sparrowhawk;
  class OPTRE_AV22C_Sparrowhawk;

  // Wyvern
  class O_T_VTOL_02_infantry_dynamicLoadout_F;
  class O_T_VTOL_02_vehicle_dynamicLoadout_F;

  // AL-6
  class B_UAV_06_F;

  // blackfish
  class B_T_VTOL_01_infantry_F;
  class B_T_VTOL_01_vehicle_F;
  class B_T_VTOL_01_armed_F;

  // Nandao
  class MEU_F29_Nandao_VTOL;
  // ---------------------------------------------------------------------------
  //  Pelican (D77-TC)
  // ---------------------------------------------------------------------------
  class twelfth_d77_tc_pelican: Splits_Pelican_base {
    scope = 2;
    scopeCurator = 2;
    side = 1;
    vehicleClass = "Air";
    author = "Weber";
    faction = "twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Rotary";
    OPTRE_canThrust = 1;
    OPTRE_minVelocity = 1.4;
    OPTRE_maxVelocity = 167;
    OPTRE_velocityMult = 1;
    crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR"; // When we make our own faction be sure to change this
    displayName = "[12th] D77-TC Pelican";
    PELICAN_TEXTURESETS
    AIR_SP_INFO(Pelican,0,Troop Transport)
  };
  // ---------------------------------------------------------------------------
  //  AV-14 Hornet
  // ---------------------------------------------------------------------------
  class twelfth_hornet: OPTRE_UNSC_hornet {
    scope = 2;
    scopeCurator = 2;
    side = 1;
    vehicleClass = "Air";
    author="Waylen";
    displayName="[12th] AV-14 Hornet";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Rotary";
    hiddenSelections[]={"camo1"};
    hiddenSelectionsTextures[]={
      "\x\12thMEU\addons\12th_aircraft\hornet\default\hull_co.paa"
    };
    class textureSources {
      class twelfth_hornet_tex_default {
        displayName="Default";
        author="Waylen";
        textures[]= {
          "\x\12thMEU\addons\12th_aircraft\hornet\default\hull_co.paa"
        };
      };
      class twelfth_hornet_tex_asg {
        displayName="Air Superiority Grey";
        author="Wolfe";
        textures[]= {
          "\x\12thMEU\addons\12th_aircraft\hornet\asg\hull_co.paa"
        };
      };
    };
    AIR_SP_INFO(Hornet,0,Base)
  };
  // ---------------------------------------------------------------------------
  //  UH-144 Falcon Variants
  // ---------------------------------------------------------------------------
  // Unarmed
  class twelfth_falcon_unarmed: OPTRE_UNSC_falcon {
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] UH-144 Falcon Unarmed";
    AIR_SP_INFO(Falcon,0,Unarmed)
    FALCON_TEXTURESETS
  };
  // Armed
  class twelfth_falcon_armed: OPTRE_UNSC_falcon_armed {
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] UH-144 Falcon Armed";
    AIR_SP_INFO(Falcon,1,20mm Cannon)
    FALCON_TEXTURESETS
  };
  // S variant (Side Gun) unarmed
  class twelfth_falcon_s_unarmed: OPTRE_UNSC_falcon_S {
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] UH-144S Falcon Unarmed";
    AIR_SP_INFO(Falcon,2,Unarmed w/ Side Gun)
    FALCON_TEXTURESETS
  };
  // S variant armed
  class twelfth_falcon_s_armed: OPTRE_UNSC_falcon_armed_S {
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] UH-144S Falcon Armed";
    AIR_SP_INFO(Falcon,3,20mm w/ Side Gun)
    FALCON_TEXTURESETS
  };
  // ---------------------------------------------------------------------------
  //  AV-22 Sparrowhawk Variants
  // ---------------------------------------------------------------------------
  class twelfth_sparrowhawk_m: OPTRE_AV22_Sparrowhawk {
    author="Waylen";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] AV-22M Sparrowhawk";
    hiddenSelections[] = {
      "camo1",
      "camo2",
      "camo3",
      "camo4",
      "camo5",
      "camo6",
      "camo7",
      "attach_Decal1",
      "attach_Decal2",
      "attach_noseLaser",
      "attach_CannonHeavy"
    };
    AIR_SP_INFO(Sparrowhawk,0,50mm Fixed | Cannon)
    SPARROWHAWK_TEXTURESETS
  };

  class twelfth_sparrowhawk_l: OPTRE_AV22A_Sparrowhawk {
    author="Waylen";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] AV-22L Sparrowhawk";
    hiddenSelections[] = {
      "camo1",
      "camo2",
      "camo3",
      "camo4",
      "camo5",
      "camo6",
      "camo7",
      "attach_Decal1",
      "attach_Decal2",
      "attach_noseCannon",
      "attach_CannonLight"
    };
    AIR_SP_INFO(Sparrowhawk,1,30mm Fixed | Laser)
    SPARROWHAWK_TEXTURESETS
  };

  class twelfth_sparrowhawk_ml: OPTRE_AV22B_Sparrowhawk {
    author="Waylen";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] AV-22ML Sparrowhawk";
    hiddenSelections[] = {
      "camo1",
      "camo2",
      "camo3",
      "camo4",
      "camo5",
      "camo6",
      "camo7",
      "attach_Decal1",
      "attach_Decal2",
      "attach_noseCannon",
      "attach_CannonHeavy"
    };
    AIR_SP_INFO(Sparrowhawk,2,50mm Fixed | Laser)
    SPARROWHAWK_TEXTURESETS
  };

  class twelfth_sparrowhawk: OPTRE_AV22C_Sparrowhawk {
    author="Waylen";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] AV-22 Sparrowhawk";
    hiddenSelections[] = {
      "camo1",
      "camo2",
      "camo3",
      "camo4",
      "camo5",
      "camo6",
      "camo7",
      "attach_Decal1",
      "attach_Decal2",
      "attach_noseLaser",
      "attach_CannonLight"
    };
    AIR_SP_INFO(Sparrowhawk,3,30mm Fixed | Cannon)
    SPARROWHAWK_TEXTURESETS
  };
  // ---------------------------------------------------------------------------
  //  Wyvern (Based on Tigris/VTOL)
  // ---------------------------------------------------------------------------
  // Infantry version
  class twelfth_wyvern_inf: O_T_VTOL_02_infantry_dynamicLoadout_F {
    author="Waylen";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] AVD-99IT Wyvern";
    hiddenSelections[]={
      "camo_1",
      "camo_2",
      "camo_3",
      "camo_4",
      "camo_5"
    };
    hiddenSelectionsTextures[]= {
      "\x\12thMEU\addons\12th_aircraft\wyvern\default\ext_01_co.paa",
      "\x\12thMEU\addons\12th_aircraft\wyvern\default\ext_02_co.paa",
      "\x\12thMEU\addons\12th_aircraft\wyvern\default\ext_03_r_co.paa",
      "\x\12thMEU\addons\12th_aircraft\wyvern\default\ext_03_l_co.paa",
      "\x\12thMEU\addons\12th_aircraft\wyvern\default\signs_co.paa"
    };
    class TextureSources {
      class twelfth_wyvern_tex_default {
        displayName="Default";
        author="Wolfe";
        textures[]= {
          "\x\12thMEU\addons\12th_aircraft\wyvern\default\ext_01_co.paa",
          "\x\12thMEU\addons\12th_aircraft\wyvern\default\ext_02_co.paa",
          "\x\12thMEU\addons\12th_aircraft\wyvern\default\ext_03_r_co.paa",
          "\x\12thMEU\addons\12th_aircraft\wyvern\default\ext_03_l_co.paa",
          "\x\12thMEU\addons\12th_aircraft\wyvern\default\signs_co.paa"
        };
      };
      class twelfth_wyvern_asg_default {
        displayName="Air Superiority Grey";
        author="Wolfe";
        textures[]= {
          "\x\12thMEU\addons\12th_aircraft\wyvern\asg\ext_01_co.paa",
          "\x\12thMEU\addons\12th_aircraft\wyvern\asg\ext_02_co.paa",
          "\x\12thMEU\addons\12th_aircraft\wyvern\asg\ext_03_r_co.paa",
          "\x\12thMEU\addons\12th_aircraft\wyvern\asg\ext_03_l_co.paa",
          "\x\12thMEU\addons\12th_aircraft\wyvern\default\signs_co.paa"
        };
      };
    };
    AIR_SP_INFO(Wyvern,0,Infantry)
  };
  // Vehicle version
  class twelfth_wyvern_veh: O_T_VTOL_02_vehicle_dynamicLoadout_F {
    author="Waylen";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] AVD-99VT Wyvern";
    hiddenSelections[]={
      "camo_1",
      "camo_2",
      "camo_3",
      "camo_4",
      "camo_5"
    };
    hiddenSelectionsTextures[]= {
      "\x\12thMEU\addons\12th_aircraft\wyvern\default\ext_01_co.paa",
      "\x\12thMEU\addons\12th_aircraft\wyvern\default\ext_02_co.paa",
      "\x\12thMEU\addons\12th_aircraft\wyvern\default\ext_03_l_co.paa",
      "\x\12thMEU\addons\12th_aircraft\wyvern\default\ext_03_r_co.paa",
      "\x\12thMEU\addons\12th_aircraft\wyvern\default\signs_co.paa"
    };
    class TextureSources {
      class twelfth_wyvern_tex_default {
        displayName="Default";
        author="Wolfe";
        textures[]= {
          "\x\12thMEU\addons\12th_aircraft\wyvern\default\ext_01_co.paa",
          "\x\12thMEU\addons\12th_aircraft\wyvern\default\ext_02_co.paa",
          "\x\12thMEU\addons\12th_aircraft\wyvern\default\ext_03_l_co.paa",
          "\x\12thMEU\addons\12th_aircraft\wyvern\default\ext_03_r_co.paa",
          "\x\12thMEU\addons\12th_aircraft\wyvern\default\signs_co.paa"
        };
      };
      class twelfth_wyvern_tex_asg {
        displayName="Air Superiority Grey";
        author="Wolfe";
        textures[]= {
          "\x\12thMEU\addons\12th_aircraft\asg\default\ext_01_co.paa",
          "\x\12thMEU\addons\12th_aircraft\asg\default\ext_02_co.paa",
          "\x\12thMEU\addons\12th_aircraft\asg\default\ext_03_l_co.paa",
          "\x\12thMEU\addons\12th_aircraft\asg\default\ext_03_r_co.paa",
          "\x\12thMEU\addons\12th_aircraft\wyvern\default\signs_co.paa"
        };
      };
    };
    AIR_SP_INFO(Wyvern,1,Vehicle)
  };

  /*class twelfth_prime: B_UAV_06_F {
    side=1;
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] AL-6 Prime";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Drones";
    crew="B_UAV_AI_F";
    typicalCargo[]={"B_UAV_AI_F"};
    class TransportItems {};
    class TransportMagazines {};
    class TransportWeapons {};
    hiddenSelections[]= {"Camo", "Medical"};
    hiddenSelectionsTextures[] = {
      QP(prime\medical\main_co.paa),
      QP(prime\medical\main_co.paa)
    };
    class TextureSources {
      class twelfth_prime_tex_default {
        displayname="Default";
        author="Waylen";
        factions[] = {"twelfth_MEU"};
        textures[]={
          QP(prime\medical\main_co.paa),
          QP(prime\medical\main_co.paa)
        };
      };
    };
    Camouflage=0;
    AIR_SP_INFO(Prime UAV,0,Base)
  };*/


  // ---------------------------------------------------------------------------
  //  Blackfish Variants
  // ---------------------------------------------------------------------------
  class twelfth_blackfish_inf: B_T_VTOL_01_infantry_F {
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] Blackfish (Infantry)";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Rotary";
    BLACKFISH_TEXTURESETS
    AIR_SP_INFO(Blackfish,0,Troop Transport)
  };

  class twelfth_blackfish_veh: B_T_VTOL_01_vehicle_F {
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] Blackfish (Vehicle)";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Rotary";
    BLACKFISH_TEXTURESETS
    AIR_SP_INFO(Blackfish,1,Vehicle Transport)
  };

  class twelfth_blackfish_armed: B_T_VTOL_01_armed_F {
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] Blackfish (Armed)";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Rotary";
    BLACKFISH_TEXTURESETS
    AIR_SP_INFO(Blackfish,2,Gunship)
  };

  class twelfth_nandao: MEU_F29_Nandao_VTOL {
    scope=2;
    scopeCurator=2;
    author="Weber";
    displayName="[12th] F-29 Nandao";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_FixedWing";
    hiddenSelections[] = {"camo_body","camo_canopy","MapUVObject"};
    hiddenSelectionsTextures[] = {"PN_F29_Nandao\F29_Nandao\data\Body_co.paa","PN_F29_Nandao\F29_Nandao\data\camos\Canopy_Black_ca.paa"};
    class TextureSources
    {
      class MEU_FactoryGrey{
        displayName = "Factory Grey";
        author = "1st MEU Venom";
        textures[] = {"PN_F29_Nandao\F29_Nandao\data\Body_co.paa","PN_F29_Nandao\F29_Nandao\data\camos\Canopy_Black_ca.paa"};
        factions[] = {"twelfth_MEU"};
      };
      class Apache{
        displayName = "Apache";
        author = "Apache/Sammy";
        textures[] = {"\x\12thMEU\addons\12th_aircraft\nandao\apache\Body_co.paa","PN_F29_Nandao\F29_Nandao\data\Canopy_ca.paa"};
        factions[] = {"twelfth_MEU"};
      };
    };
    textureList[] = {"MEU_FactoryGrey",1,"Apache",1};
    
    AIR_SP_INFO(Nandao,0,Base)
  };

  class OPTRE_Sabre_Base;
  class Components;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeftSensors;
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
  class twelfth_sabre_single_fast : OPTRE_Sabre_Base{
    scope = 2;
    scopeCurator = 2;
    displayName = "[12th] YSS-1000-A-S Sabre Fast";
    acceleration = 2000;
    altNoForce = 990000;
    altFullForce = 990000;
    envelope[] = {0,0.1,0.8,3,4,4.4,4.5,4.5,4.4,4.1,3.5,2.5,2};
    thrustCoef[] = {1.76,1.69,1.62,1.68,1.74,1.81,1.89,1.95,1.96,1.96,1.92,1.4,0.4,0.0,0.0,0.0};
    elevatorCoef[] = {0.3,0.5,0.6,0.7,0.8,0.9,1,0.9,0.7,0.6,0.5,0.3,0.1};
    aileronCoef[] = {0.5,0.7,0.8,0.9,1,1.1,1.2,1.1,0.9,0.8,0.7,0.5,0.3};
    rudderCoef[] = {"0.7*5","0.8*5","0.9*5","1*5","1*5","0.9*5","0.8*5","0.7*5","0.6*5","0.5*5","0.4*5","0.3*5","0.2*5","0.1*5"};


    //Spawning stuff
    editorPreview = "\OPTRE_Vehicles_Air\Sabre\data\UI\OPTRE_YSS_1000_A.jpg";
    side = 1;
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_FixedWing";
    magazines[] = {"Laserbatteries","120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","OPTRE_SpLaser_Battery","OPTRE_SpLaser_Battery","OPTRE_SpLaser_Battery","OPTRE_SpLaser_Battery","OPTRE_SpLaser_Battery","OPTRE_SpLaser_Battery"};
    //single seater
    class Turrets{};
    AIR_SP_INFO(sabre_single,4,Base)
    class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 90;
						maxTrackableSpeed = 400;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 26;
						angleRangeVertical = 20;
						maxTrackableSpeed = 100;
						aimDown = 1;
						animDirection = "mainGun";
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 15000;
							maxRange = 15000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 8000;
						angleRangeHorizontal = 45;
						angleRangeVertical = 45;
						groundNoiseDistanceCoef = 0.2;
					};
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
						class AirTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableATL = 100;
						maxTrackableSpeed = 60;
						angleRangeHorizontal = 60;
						angleRangeVertical = 180;
					};
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
						resource = "RscTransportCameraComponentDriver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {16000,8000,4000,2000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {16000,8000,4000,2000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				UIPicture = "\A3\Air_F_Jets\Plane_Fighter_01\Data\UI\Fighter_01_3DEN_CA.paa";
				class pylons
				{
					class Pylons_MedusaPod_1
					{
						hardpoints[] = {"OPTRE_Hardpoint_SabrePilot"};
						attachment = "OPTRE_STMedusa_6Rnd_AA_Missile";
						priority = 5;
						maxweight = 10000;
						UIposition[] = {0.34,0.08};
						bay = 1;
					};
					class Pylons_Missile_Bay_1
					{
						hardpoints[] = {"OPTRE_Hardpoint_SabreCopilot","B_MISSILE_PYLON","B_BOMB_PYLON"};
						priority = 4;
						attachment = "OPTRE_3Rnd_Jackknife_sabre_missile";
						maxweight = 10000;
						UIposition[] = {0.345,0.13};
						bay = 3;
					};
					class Pylons_MedusaPod_2: Pylons_MedusaPod_1
					{
						UIposition[] = {0.34,0.48};
						mirroredMissilePos = 1;
						bay = 2;
					};
					class Pylons_Missile_Bay_2: Pylons_Missile_Bay_1
					{
						UIposition[] = {0.33,0.43};
						mirroredMissilePos = 2;
						bay = 4;
					};
          class Pylons_Missile_Bay_3: Pylons_Missile_Bay_1
					{
						UIposition[] = {0.1,0.9};
						mirroredMissilePos = 2;
						bay = 5;
					};
          class Pylons_Missile_Bay_4: Pylons_Missile_Bay_1
					{
						UIposition[] = {0.9,0.1};
						mirroredMissilePos = 2;
						bay = 6;
					};
					class Pylons_30mmGun
					{
						displayName = "M1024 ASW/AC 30mm MLA";
						priority = 2;
						attachment = "OPTRE_M1024_2000Rnd_30mm";
						maxweight = 10000;
						UIposition[] = {0.24,0.28};
						hardpoints[] = {"OPTRE_Hardpoint_M1024_30mm"};
					};
				};
				class Bays
				{
					class BayCenter1
					{
						bayOpenTime = 0.35;
						openBayWhenWeaponSelected = 1;
						autoCloseWhenEmptyDelay = 0;
					};
					class BayCenter2: BayCenter1{};
					class BayRight1
					{
						bayOpenTime = 0.35;
						openBayWhenWeaponSelected = 1;
						autoCloseWhenEmptyDelay = 0;
					};
					class BayLeft1: BayRight1{};
				};
			};
		};
  };
  class twelfth_sabre_single_agile : twelfth_sabre_single_fast{
    scope = 2;
    scopeCurator = 2;
    displayName = "[12th] YSS-1000-A-S Sabre Agile";
    acceleration = 1000;
    envelope[] = {0,0.1,0.8,3,4,4.4,4.5,4.5,4.4,4.1,3.5,2.5,2};
    thrustCoef[] = {1.6,1.6,1.5,1.5,1.5,1.4,1.4,1.3,1.3,1.1,1.1,0.8,0.6};
    elevatorCoef[] = {0.5,0.7,0.8,0.9,1,1.1,1.2,1.1,0.9,0.8,0.7,0.5,0.3};
    aileronCoef[] = {0.5,0.7,0.8,0.9,1,1.1,1.2,1.1,0.9,0.8,0.7,0.5,0.3};
    rudderCoef[] = {"0.7*5","0.8*5","0.9*5","1*5","1*5","0.9*5","0.8*5","0.7*5","0.6*5","0.5*5","0.4*5","0.3*5","0.2*5","0.1*5"};
    //Spawning stuff
    
  };
};
