#include "config_macros.hpp"

class CfgPatches {
    class 12th_weapons {
        units[] = {};
        weapons[] = {
            "12th_ma5c", "12th_ma5c_gl", "12th_ma5c_nerf", "12th_ma37k",
            "12th_br45", "12th_m6b", "12th_m6b_glow", "12th_m45",
            "12th_m96", "12th_m7", "12th_m7_folded", "12th_commando",
            "12th_mmg33_t", "12th_m33_t", "12th_m247", "12th_m392",
            "12th_m319", "12th_m319n", "12th_BR55", "12th_BR55_gl",
            "12th_BR55_HB", "12th_BR55_HB_gl", "12th_M392T", "12th_SRS99AM", 
            "12th_M6C", "12th_M7_Test", "12th_M7_Test_Folded", "12th_M90", 
            "12th_MA5A", "12th_MA5A_gl", "12th_MA5B"
        };
        ammo[] = { "12th_ma5c_ammo_nerf" };
        magazines[] = {
            "12th_ma5c_mag_nerf", "12th_762x51_200rnd", "12th_762x51_400rnd_T",
            "12th_762x51_200rnd_T"
        };
        requiredVersion = 0.1;
        requiredAddons[] = {
            "Dmns_Weapons", "OPTRE_Weapons", "Dmns_Weapons_F_MachineGuns",
            "A3_Weapons_F", "A3_Weapons_F_Exp", "19_UNSC_Weapons"
        };
    };
};

class SlotInfo;
class CowsSlot: SlotInfo {
    compatibleItems[] += {
        "optic_arco_ak_blk_f", "optic_dms", "optic_aco_grn", "optic_aco",
        "optic_arco_blk_f", "optic_holosight_blk_f", "optic_mrco",
        "optic_khs_blk", "optic_hamr", "optic_sos", "optic_lrps",
        "optic_nightstalker", "optic_erco_blk_f", "optic_ams", "optic_yorris",
        "optic_ico_01_black_f", "optic_aco_smg", "optic_aco_grn_smg",
        "optic_holosight_smg_blk_f", "optic_mrd_black", "optic_tws",
        "optic_nvs", "ace_optic_arco_2d", "ace_optic_arco_pip",
        "ace_optic_lrps_2d", "ace_optic_lrps_pip", "ace_optic_sos_2d",
        "ace_optic_sos_pip", "ace_optic_mrco_2d", "ace_optic_hamr_2d",
        "ace_optic_hamr_pip", "OPTRE_M7_Sight", "OPTRE_HMG38_CarryHandle",
        "OPTRE_M12_Optic", "OPTRE_M12_Optic_Red", "OPTRE_M12_Optic_Green",
        "OPTRE_M6C_Scope", "OPTRE_M6G_Scope", "Optre_Recon_Sight",
        "Optre_Recon_Sight_Red", "Optre_Recon_Sight_Green",
        "Optre_Recon_Sight_Desert", "Optre_Recon_Sight_UNSC",
        "Optre_Recon_Sight_Snow", "OPTRE_BR45_Scope", "OPTRE_BR55HB_Scope",
        "OPTRE_BR55HB_Scope_Grey", "OPTRE_BMR_Scope", "OPTRE_M392_Scope",
        "OPTRE_M393_Scope", "OPTRE_M393_ACOG", "OPTRE_M393_EOTECH",
        "OPTRE_SRM_Sight", "OPTRE_SRS99C_Scope", "OPTRE_SRS99_Scope",
        "OPTRE_M73_SmartLink", "OPTRE_MA5_SmartLink", "OPTRE_MA5C_SmartLink",
        "OPTRE_MA5_BUIS", "19_UNSC_br_scope", "19_UNSC_evosd", "19_UNSC_evo"
    };
};

class CowsSlot_Rail: CowsSlot {
    class compatibleItems {
        OPTRE_M7_Sight = 1;
        OPTRE_HMG38_CarryHandle = 1;
        OPTRE_M12_Optic = 1;
        OPTRE_M12_Optic_Red = 1;
        OPTRE_M12_Optic_Green = 1;
        OPTRE_M6C_Scope = 1;
        OPTRE_M6G_Scope = 1;
        Optre_Recon_Sight = 1;
        Optre_Recon_Sight_Red = 1;
        Optre_Recon_Sight_Green = 1;
        Optre_Recon_Sight_Desert = 1;
        Optre_Recon_Sight_UNSC = 1;
        Optre_Recon_Sight_Snow = 1;
        OPTRE_M73_SmartLink = 1;
        OPTRE_MA5_SmartLink = 1;
        OPTRE_MA5C_SmartLink = 1;
        OPTRE_MA5_BUIS = 1;
        OPTRE_BR45_Scope = 1;
        OPTRE_BR55HB_Scope = 1;
        OPTRE_BR55HB_Scope_Grey = 1;
        OPTRE_BMR_Scope = 1;
        OPTRE_M392_Scope = 1;
        OPTRE_M393_Scope = 1;
        OPTRE_M393_ACOG = 1;
        OPTRE_M393_EOTECH = 1;
        OPTRE_SRM_Sight = 1;
        OPTRE_SRS99C_Scope = 1;
        OPTRE_SRS99_Scope = 1;
    };
};

class CowsSlot_BRRail: CowsSlot {
    class compatibleItems {
        OPTRE_M7_Sight = 1;
        OPTRE_M12_Optic = 1;
        OPTRE_M12_Optic_Red = 1;
        OPTRE_M12_Optic_Green = 1;
        Optre_Recon_Sight = 1;
        Optre_Recon_Sight_Red = 1;
        Optre_Recon_Sight_Green = 1;
        Optre_Recon_Sight_Desert = 1;
        Optre_Recon_Sight_UNSC = 1;
        Optre_Recon_Sight_Snow = 1;
        OPTRE_BR55HB_Scope = 1;
        19_UNSC_br_scope = 1;
        19_UNSC_evo = 1;
    };
};


class 12th_CowsSlot_Rail: CowsSlot_Rail {};

class 12th_CowsSlot_BRRail: CowsSlot_BRRail {};

class CfgMagazineWells {
    class 12th_ma5c_nerf_clipwell {
        12th_magazines[] = { "12th_ma5c_mag_nerf" };
    };
};

class CfgMagazines {
  class OPTRE_32Rnd_762x51_Mag;
  class OPTRE_36Rnd_95x40_Mag;
  class OPTRE_400Rnd_762x51_Box_Tracer;
  class OPTRE_100Rnd_762x51_Box;
  class OPTRE_60Rnd_5x23mm_Mag;
  class RPG32_HE_F;
  class M319_HEAT_Grenade_Shell;
  class OPTRE_60Rnd_762x51_Mag;

  class 12th_40mm_heat: M319_HEAT_Grenade_Shell {
    scope = 2;
    displayName = "[12th] 40mm HEAT";
    displaynameshort = "40mm HEAT";
    ammo = "12th_40mmG_HEAT";
    author = "Waylen";
    mass = 8;
  };

  class 12th_ma5c_mag_nerf: OPTRE_32Rnd_762x51_Mag {
    displayName = "32Drt 12.7x73mm Clip";
    displaynameshort = "12.7x73mm Dart";
    count=32;
    initspeed=1500;
    ammo = "12th_ma5c_ammo_nerf";
  };

  class 12th_95x40_100rnd: OPTRE_36Rnd_95x40_Mag {
      scope = 2;
      author = "Kelp";
      displayName = "100rnd 9.5x40mm Box Magazine";
      ammo = "OPTRE_B_95x40_Ball";
      count = 100;
      mass = 40;
      tracersEvery = 0;
      lastRoundsTracer = 6;
  };

    class 12th_762x51_200rnd: OPTRE_100Rnd_762x51_Box {
        author = "Kelp";
        displayName = "200rnd 7.62x51mm Box Magazine";
        count = 200;
        mass = 40;
    };

    class 12th_762x51_200rnd_T: OPTRE_400Rnd_762x51_Box_Tracer {
        author = "Kelp";
        displayName = "200rnd 7.62x51mm Box Magazine (Tracer)";
        count = 200;
        mass = 40;
    };

    class 12th_br_36Rnd_UW: OPTRE_36Rnd_95x40_Mag {
        displayName = "36Rnd 9.5x40mm Magazine (Underwater)";
        count = 36;
        initspeed = 700;
        descriptionShort = "36 Round Magazine 9.5x40mm";
        mass = 10;
        ammo = "12th_95x40_UW";
    };

    class 12th_m7_60rnd_UW: OPTRE_60Rnd_5x23mm_Mag {
        author = "Weber";
        displayName = "60Rnd 5x23mm Magazine (Underwater)";
        count = 60;
        initspeed = 700;
        descriptionShort = "60 Round Magazine 5x23mm (Increased Muzzle Velocity)";
        mass = 8;
        ammo = "12th_5x23mm_UW";
    };

    class 12th_m7_48rnd_UW: OPTRE_60Rnd_5x23mm_Mag {
        author = "Weber";
        displayName = "48Rnd 5x23mm Magazine (Underwater)";
        count = 48;
        initspeed = 700;
        descriptionShort = "48 Round Magazine 5x23mm (Increased Muzzle Velocity)";
        mass = 8;
        ammo = "12th_5x23mm_UW";
    };

    class 12th_m96_heat: RPG32_HE_F {
        displayName = "M96 HEAT Disposable Rockets";
        displaynameshort = "HEAT";
        descriptionShort = "High Explosive Anti Tank<br/>Un-guided";
        ammo = "12th_m96_rocket_heat";
        picture = "\DMNS\Weapons\Launchers\icons\gear_rpg32_rocket_ca.paa";
        model = "\a3\weapons_f\ammo\rocket_01_f.p3d";
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "" };
        count = 1;
        mass = 45;
        initSpeed = 650;
        allowedSlots[] = { 901, 701 };
    };

    // NOTE: this class is only here to cancel out a weird error.
    class 12th_200Rnd_762x51_Box_Tracer: 12th_762x51_200rnd_T {
        scope = 0;
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CBA_DisposableLaunchers {
    ACE_12th_m96_ready_F[] = { "12th_m96", "ACE_12th_m96_used_F" };
};

class CfgAmmo {
  class B_45ACP_Ball;
  class M_NLAW_AT_F;
  class M319_HEAT;

  class 12th_40mmG_HEAT: M319_HEAT {
  ace_frag_metal = 2000;
  indirectHitRange = 0.1;
  hit = 470;
  };

    class 12th_ma5c_ammo_nerf: B_45ACP_Ball {
        hit = 1;
        typicalSpeed = 1500;
        caliber = 0.5;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        descriptionShort = "Nerf or Nothin'";
        displayName = "12.7x73mm Nerf Darts";
        displaynameshort = "12.7x73mm Dart";
        tracersEvery = 1;
    };

    class OPTRE_B_95x40_Ball;
    class 12th_95x40_UW: OPTRE_B_95x40_Ball {
        typicalSpeed = 700;
        waterFriction = -0.00096;
        timeToLive = 0.12;
        effectFly = "AmmoUnderwater";
    };

    class OPTRE_B_5x23_Caseless;
    class 12th_5x23mm_UW: OPTRE_B_5x23_Caseless {
        typicalSpeed = 700;
        waterFriction = -0.00095999998;
        timeToLive = 0.12;
        effectFly = "AmmoUnderwater";
    };

    class 12th_m96_rocket_heat: M_NLAW_AT_F {
        model = "DMNS\Weapons\Launchers\M96_rocket.p3d";
        hit = 600;
        indirectHit = 20;
        indirectHitRange = 2;
        explosive = 0.8;
        cost = 500;
        airFriction = 0;
        sideairFriction = 0;
        coefGravity = 0;
        maxSpeed = 450;
        typicalSpeed = 250;
        initTime = 0.2;
        thrustTime = 0.8;
        thrust = 100;
        fuseDistance = 20;
        simulationStep = 0.02;
        timeToLive = 30;
        effectsMissile = "missile3";
        whistleDist = 20;
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        submunitionAmmo = "ammo_Penetrator_Titan_AT";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
        submunitionInitialOffset[] = { 0, 0, -0.2 };
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        flightProfiles[] = { "Direct" };
        class Direct {};
    };
};

#define COMMON_MA5C_MAGAZINES { "OPTRE_32Rnd_762x51_Mag", "OPTRE_32Rnd_762x51_Mag_Tracer", "OPTRE_32Rnd_762x51_Mag_UW" }
#define COMMON_BR_MAGAZINES {"OPTRE_36Rnd_95x40_Mag", "OPTRE_36Rnd_95x40_Mag_Tracer", "12th_br_36Rnd_UW"}
#define COMMON_M6_MAGAZINES {"OPTRE_8Rnd_127x40_Mag", "OPTRE_8Rnd_127x40_Mag_Tracer", "OPTRE_16Rnd_127x40_Mag", "OPTRE_16Rnd_127x40_Mag_Tracer"}

class CfgWeapons {
    class OPTRE_M247;
    class OPTRE_MA5C;
    class OPTRE_MA5CGL;
    class OPTRE_MA37K;
    class OPTRE_BR45;
    class OPTRE_M6B;
    class OPTRE_M45;
    class OPTRE_M7;
    class OPTRE_M7_Folded;
    class OPTRE_Commando;
    class OPTRE_M392_DMR;
    class OPTRE_M319;
    class OPTRE_M319N;
    class WeaponSlotsInfo;
    class Dmns_M33_T;
    class DMNS_M96_LAW;
    class MuzzleSlot;
    class PointerSlot;
    class UnderBarrelSlot;
    class FullAuto;
    class OPTRE_M301UGL;
    class 19_UNSC_br55;
    class 19_UNSC_br55_gl;
    class 19_UNSC_br55_HB;
    class 19_UNSC_br55_HB_gl;
    class GL_3GL_F;
    class 19_UNSC_M392;
    class 19_UNSC_SRS99AM;
    class OPTRE_SRS99C_Scope;
    class Launcher;
    class 19_UNSC_M6C;
    class 19_UNSC_M7;
    class 19_UNSC_M90;
    class 19_UNSC_MA5A;
    class 19_UNSC_MA5A_gl;
    class 19_UNSC_MA5B;
    class 19_UNSC_M7_Side;

    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };
    class InventoryOpticsItem_Base_F;

    class 12th_m96: Launcher_Base_F {
        author = "DemonicOnPc; Kelp";
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = "12th_m96";
        displayName = "[12th] M96 LAW - Mk VI";
        hiddenSelections[] = { "camo1", "camo2" };
        hiddenSelectionsTextures[] = {
            "\x\12thMEUAssets\addons\12th_weapons\data\m96\tube_co.paa",
            "\x\12thMEUAssets\addons\12th_weapons\data\m96\body_co.paa"
        };
        model = "\DMNS\Weapons\Launchers\DMNS_M96_LAW_loaded.p3d";
        picture = "\DMNS\Weapons\Launchers\Data\Law_Icon.paa";
        UiPicture = "\DMNS\Weapons\Launchers\Data\Law_Icon.paa";
        handAnim[] = {
            "OFP2_ManSkeleton",
            "\A3\Weapons_F_Exp\Launchers\RPG7\Data\Anim\RPG7V.rtm"
        };
        reloadAction = "GestureReloadRPG7";
        recoil = "recoil_nlaw";
        maxZeroing = 500;
        shotPos = "muzzlePos2";
        shotEnd = "muzzleEnd2";
        modes[] = { "Single" };

        class Single: Mode_SemiAuto {
            sounds[] = { "StandardSound" };

            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                begin1[] = { "A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw", 1.99526, 1, 1800 };
                soundBegin[] = { "begin1", 1 };
            };

            recoil = "recoil_single_nlaw";
            aiRateOfFire = 7;
            aiRateOfFireDistance = 500;
            minRange = 25;
            minRangeProbab = 0.8;
            midRange = 50;
            midRangeProbab = 0.8;
            maxRange = 790;
            maxRangeProbab = 0.8;
        };

        class GunParticles {
            class effect1 {
                positionName = "muzzleEnd2";
                directionName = "muzzlePos2";
                effectName = "RocketBackEffectsNLAWNT";
            };
        };

        drySound[] = { "A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Dry_NLAW", 0.177828, 1, 15 };
        reloadMagazineSound[] = { "A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Reload_NLAW", 1, 1, 10 };
        lockingTargetSound[] = { "A3\Sounds_F\arsenal\weapons\Launchers\NLAW\locking_NLAW", 0.316228, 1 };
        lockedTargetSound[] = { "A3\Sounds_F\arsenal\weapons\Launchers\NLAW\locked_NLAW", 0.316228, 2.5 };
        changeFiremodeSound[] = { "A3\sounds_f\dummysound", 0.562341, 1, 20 };
        modelOptics = "-";

        class OpticsModes {
            class irons {
                opticsID = 1;
                useModelOptics = 0;
                opticsPPEffects[] = {};
                opticsZoomMin = 0.375;
                opticsZoomMax = 1.25;
                opticsZoomInit = 0.75;
                visionMode[] = {};
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                distanceZoomMin = 300;
                distanceZoomMax = 300;
                cameraDir = "look";
                discreteDistance[] = { 300 };
                discreteDistanceInitIndex = 0;
                discreteDistanceCameraPoint[] = { "eye_300" };
            };
        };

        canLock = 0;
        ballisticsComputer = 0;
        magazines[] = { "CBA_FakeLauncherMagazine" };
        magazineWell[] = { "" };
        magazineReloadTime = 0.1;
        inertia = 1;
        aimTransitionSpeed = 0.5;
        dexterity = 1;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                displayName = "$STR_A3_CowsSlot0";
                compatibleitems[] = {
                    "optic_Nightstalker", "optic_tws", "optic_tws_mg",
                    "optic_NVS", "optic_MRCO", "optic_Arco", "optic_aco",
                    "optic_ACO_grn", "optic_aco_smg", "optic_ACO_grn_smg",
                    "optic_hamr", "optic_Holosight", "optic_Holosight_smg",
                    "optic_Hamr_khk_F", "optic_Arco_ghex_F", "optic_Arco_blk_F",
                    "optic_DMS_ghex_F", "optic_ERCO_blk_F", "optic_ERCO_khk_F",
                    "optic_ERCO_snd_F", "optic_Holosight_blk_F", "optic_Holosight_khk_F",
                    "optic_Holosight_smg_blk_F", "optic_Holosight_smg_khk_F"
                };
                iconPosition[] = { 0.5, 0.3 };
            };
            mass = 145;
        };

        class ItemInfo {
            priority = 3;
        };
        descriptionShort = "A 66mm single-use RPG, effective against medium armor";
    };

    class ACE_12th_m96_ready_F: 12th_m96 {
        author = "DemonicOnPc; Kelp";
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "12th_m96";
        magazines[] = { "12th_m96_heat" };

        class EventHandlers {
            fired = "_this call CBA_fnc_firedDisposable";
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                displayName = "$STR_A3_CowsSlot0";
                compatibleitems[] = {
                    "optic_Nightstalker", "optic_tws", "optic_tws_mg",
                    "optic_NVS", "optic_MRCO", "optic_Arco", "optic_aco",
                    "optic_ACO_grn", "optic_aco_smg", "optic_ACO_grn_smg",
                    "optic_hamr", "optic_Holosight", "optic_Holosight_smg",
                    "optic_Hamr_khk_F", "optic_Arco_ghex_F", "optic_Arco_blk_F",
                    "optic_DMS_ghex_F", "optic_ERCO_blk_F", "optic_ERCO_khk_F",
                    "optic_ERCO_snd_F", "optic_Holosight_blk_F", "optic_Holosight_khk_F",
                    "optic_Holosight_smg_blk_F", "optic_Holosight_smg_khk_F"
                };
                iconPosition[] = { 0.5, 0.3 };
            };
            mass = 145;
        };
    };

    class ACE_12th_m96_used_F: 12th_m96 {
        author = "DemonicOnPc; Kelp";
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "12th_m96";
        model = "DMNS\Weapons\Launchers\DMNS_M96_LAW_Used.p3d";
        displayName = "[12th] M96 LAW - Mk VI (Used)";
        descriptionShort = "A used up M96 LAW - Mk VI launcher";
        weaponPoolAvailable = 0;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                displayName = "$STR_A3_CowsSlot0";
                compatibleitems[] = {
                    "optic_Nightstalker", "optic_tws", "optic_tws_mg",
                    "optic_NVS", "optic_MRCO", "optic_Arco", "optic_aco",
                    "optic_ACO_grn", "optic_aco_smg", "optic_ACO_grn_smg",
                    "optic_hamr", "optic_Holosight", "optic_Holosight_smg",
                    "optic_Hamr_khk_F", "optic_Arco_ghex_F", "optic_Arco_blk_F",
                    "optic_DMS_ghex_F", "optic_ERCO_blk_F", "optic_ERCO_khk_F",
                    "optic_ERCO_snd_F", "optic_Holosight_blk_F", "optic_Holosight_khk_F",
                    "optic_Holosight_smg_blk_F", "optic_Holosight_smg_khk_F"
                };
                iconPosition[] = { 0.5, 0.3 };
            };
            mass = 100;
        };
    };

    /*class 12th_SRS99_Scope: OPTRE_SRS99C_Scope {
        scope = 2;
        displayName = "[12th] Oracle N-variant SRS99AM Scope with Rangefinding Module";
        descriptionShort = "Oracle N-variant SRS99AM Sniper Rifle 5-10x56 Scope";
        picture = "\UNSC_F_Weapons\weapons\UI\srs99_UI.paa";
        model = "\UNSC_F_Weapons\weapons\srs99_data\attachments\SRS99AM_scope_proxy.p3d";
        weaponInfoType = "RscOptics_Rangefinder";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 1;
            opticType = 1;
            optics = 1;
            modelOptics = "\UNSC_F_Weapons\weapons\srs99_data\attachments\SRS99AM_scope_proxy.p3d";
            class OpticsModes {
                class srs_scope_top {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsPPEffects[] = { "" };
                    opticsFlare = false;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.375;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = { "Normal", "NVG" };
                    discreteDistance[] = { 100 };
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    distanceZoominit = 100;
                    cameraDir = "";
                };
                class srs_zoom {
                    opticsID = 2;
                    opticsFlare = false;
                    opticsDisablePeripherialVision = 0;
                    useModelOptics = 1;
                    opticsPPEffects[] = {
                        "OpticsCHAbera1", "OpticsBlur1"
                    };
                    opticsZoomMin = 0.0099999998;
                    opticsZoomMax = 0.25;
                    opticsZoomInit = 0.25;
                    discretefov[] = { 0.25, 0.050000001, 0.025, 0.0099999998 };
                    discreteinitIndex = 0;
                    discreteDistance[] = { 50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1550, 1600, 1650, 1700, 1750, 1800, 1850, 1900, 1950, 2000 };
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 100;
                    distanceZoomMax = 2000;
                    memoryPointCamera = "opticView";
                    modelOptics[] = {
                        "\OPTRE_Weapons\Sniper\Sniper_Oracle10_Optic"
                    };
                    visionMode[] = {
                        "Normal", "NVG", "TI"
                    };
                    thermalMode[] = { 0 };
                };
            };
        };
    };*/

    class 12th_ma5c: OPTRE_MA5C {
        author = "Kelp";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[12th] MA5C Assault Rifle";
        baseWeapon = "12th_ma5c";
        canShootInWater = 1;
        hiddenSelections[] = { "camo", "camo1" };
        magazines[] = COMMON_MA5C_MAGAZINES;
        hiddenSelectionsTextures[] = {
            "\x\12thMEUAssets\addons\12th_weapons\data\ma5c\default\main_co.paa",
            "\x\12thMEUAssets\addons\12th_weapons\data\ma5c\default\cover_1_co.paa"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: MuzzleSlot {
                compatibleitems[] = { "OPTRE_MA5Suppressor" };
            };
            class CowsSlot: 12th_CowsSlot_Rail {};
            class PointerSlot: PointerSlot {
                compatibleitems[] = {
                    "OPTRE_BMR_Laser", "ACE_acc_pointer_red", "ace_acc_pointer_green",
                    "ACE_acc_pointer_green_IR", "acc_pointer_ir"
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot {
                compatibleitems[] = {};
            };
        };
    };

    class 12th_ma5c_gl: OPTRE_MA5CGL {
        author = "Kelp";
        scope = 2;
        scopeArsenal = 2;
        canShootInWater = 1;
        displayName = "[12th] MA5CGL Assault Rifle";
        muzzles[] = { "this", "12th_M301UGL" };
        class 12th_M301UGL: OPTRE_M301UGL {
            displayName = "M301 Grenade Launcher";
            descriptionShort = "M301 GL";
            magazines[] = { COMMON_GL_MAGS };
        };
        baseWeapon = "12th_ma5c_gl";
        hiddenSelections[] = { "camo", "camo1" };
        magazines[] = COMMON_MA5C_MAGAZINES;        hiddenSelectionsTextures[] = {
            "\x\12thMEUAssets\addons\12th_weapons\data\ma5c\default\main_co.paa",
            "\x\12thMEUAssets\addons\12th_weapons\data\ma5c\default\cover_1_co.paa"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: MuzzleSlot {
                compatibleitems[] = { "OPTRE_MA5Suppressor" };
            };
            class CowsSlot: 12th_CowsSlot_Rail {};
            class PointerSlot: PointerSlot {
                compatibleitems[] = {
                    "OPTRE_BMR_Laser", "ACE_acc_pointer_red", "ace_acc_pointer_green",
                    "ACE_acc_pointer_green_IR", "acc_pointer_ir"
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot {
                compatibleitems[] = {};
            };
        };
    };

    class 12th_ma5c_nerf: OPTRE_MA5C {
        author = "Kelp";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[12th] MA5C Nerf Gun";
        baseWeapon = "12th_ma5c_nerf";
        magazines[] = { "12th_ma5c_mag_nerf" };
        magazineWell[] = { "12th_ma5c_nerf_clipwell" };
        hiddenSelections[] = { "camo", "camo1", "camo2" };
        hiddenSelectionsTextures[] = {
            "\x\12thMEUAssets\addons\12th_weapons\data\ma5c\nerf\main_co.paa",
            "\x\12thMEUAssets\addons\12th_weapons\data\ma5c\nerf\cover_1_co.paa",
            "\x\12thMEUAssets\addons\12th_weapons\data\ma5c\nerf\cover_2_co.paa"
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: MuzzleSlot {
                compatibleitems[] = { "OPTRE_MA5Suppressor" };
            };
            class CowsSlot: 12th_CowsSlot_Rail {};
            class PointerSlot: PointerSlot {
                compatibleitems[] = {
                    "OPTRE_BMR_Laser", "ACE_acc_pointer_red", "ace_acc_pointer_green",
                    "ACE_acc_pointer_green_IR", "acc_pointer_ir"
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot {
                compatibleitems[] = {};
            };
        };
    };

    class 12th_ma37k: OPTRE_MA37K {
        author = "Kelp";
        scope = 2;
        scopeArsenal = 2;
        canShootInWater = 1;
        mass = 30;
        displayName = "[12th] MA37K Carbine";
        baseWeapon = "12th_ma37k";
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = {
            "\x\12thMEUAssets\addons\12th_weapons\data\ma37k\default\ma37k_co.paa"
        };
        magazines[] = COMMON_MA5C_MAGAZINES;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: MuzzleSlot {
                compatibleitems[] = { "OPTRE_MA37KSuppressor" };
            };
            class CowsSlot: 12th_CowsSlot_Rail {};
            class PointerSlot: PointerSlot {
                compatibleitems[] = {
                    "OPTRE_BMR_Laser", "ACE_acc_pointer_red", "ace_acc_pointer_green",
                    "ACE_acc_pointer_green_IR", "acc_pointer_ir", "OPTRE_M12_Laser"
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot {
                compatibleitems[] = {};
            };
        };
    };

    class 12th_br45: OPTRE_BR45 {
        author = "Kelp";
        scope = 2;
        scopeArsenal = 2;
        canShootInWater = 1;
        displayName = "[12th] BR45";
        baseWeapon = "12th_br45";
        hiddenSelections[] = { "camo", "camo_details" };
        hiddenSelectionsTextures[] = {
            "\x\12thMEUAssets\addons\12th_weapons\data\br45\default\br45_co.paa",
            "\x\12thMEUAssets\addons\12th_weapons\data\br45\default\decals_ca.paa"
        };
        magazines[] = COMMON_BR_MAGAZINES;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: MuzzleSlot {
                compatibleitems[] = { "OPTRE_MA5Suppressor" };
            };
            class CowsSlot: 12th_CowsSlot_Rail {};
            class PointerSlot: PointerSlot {
                compatibleitems[] = {
                    "OPTRE_BMR_Laser", "ACE_acc_pointer_red", "ace_acc_pointer_green",
                    "ACE_acc_pointer_green_IR", "acc_pointer_ir"
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot {
                compatibleitems[] = {};
            };
        };
    };

    class 12th_m6b: OPTRE_M6B {
        author = "Kelp";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[12th] M6B Handgun";
        magazines[] = COMMON_M6_MAGAZINES;
        baseWeapon = "12th_m6b";
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = {
            "\x\12thMEUAssets\addons\12th_weapons\data\m6b\default\m6b_co.paa"
        };
    };

    class 12th_m6b_glow: OPTRE_M6B {
        author = "Kelp";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[12th] M6BG Handgun";
        magazines[] = COMMON_M6_MAGAZINES;
        baseWeapon = "12th_m6b_glow";
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = {
            "\x\12thMEUAssets\addons\12th_weapons\data\m6b\night_sight\m6b_co.paa"
        };
    };

    class 12th_m45: OPTRE_M45 {
        author = "Kelp";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[12th] M45 CAWS Shotgun";
        baseWeapon = "12th_m45";
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = {
            "\x\12thMEUAssets\addons\12th_weapons\data\m45\default\shotgun_co.paa"
        };
    };

    class 12th_m7: OPTRE_M7 {
        author = "Kelp";
        scope = 2;
        scopeArsenal = 2;
        canShootInWater = 1;
        displayName = "[12th] M7 SMG";
        baseWeapon = "12th_m7";
        magazines[] = {
            "12th_m7_60rnd_UW", "12th_m7_48rnd_UW", "OPTRE_60Rnd_5x23mm_Mag",
            "OPTRE_60Rnd_5x23mm_Mag_tracer", "OPTRE_48Rnd_5x23mm_Mag",
            "OPTRE_48Rnd_5x23mm_Mag_tracer"
        };
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = {
            "\x\12thMEUAssets\addons\12th_weapons\data\m7\default\m7_co.paa"
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: MuzzleSlot {
                compatibleitems[] = { "OPTRE_M7_silencer" };
            };
            class CowsSlot: 12th_CowsSlot_Rail {};
            class PointerSlot: PointerSlot {
                compatibleitems[] = {
                    "OPTRE_M7_Laser", "OPTRE_M7_Flashlight",
                    "OPTRE_M7_Vis_Red_Laser"
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot {
                compatibleitems[] = {};
            };
        };
    };

    class 12th_commando: OPTRE_Commando {
        author = "Kelp";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[12th] VK78 Commando";
        baseWeapon = "12th_commando";
        hiddenSelections[] = { "camo1", "camo2" };
        hiddenSelectionsTextures[] = {
            "\x\12thMEUAssets\addons\12th_weapons\data\commando\default\commando_co.paa",
            "\x\12thMEUAssets\addons\12th_weapons\data\commando\default\commando2_co.paa"
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: MuzzleSlot {
                compatibleitems[] = { "OPTRE_M7_silencer" };
            };
            class CowsSlot: 12th_CowsSlot_Rail {};
            class PointerSlot: PointerSlot {
                compatibleitems[] = {
                    "OPTRE_BMR_Laser", "ACE_acc_pointer_red", "ace_acc_pointer_green",
                    "ACE_acc_pointer_green_IR", "acc_pointer_ir"
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot {
                compatibleitems[] = {
                    "bipod_01_F_blk", "bipod_02_F_blk", "bipod_03_F_blk"
                };
            };
        };
    };

    class 12th_m392: OPTRE_M392_DMR {
        author = "Kelp";
        scope = 2;
        scopeArsenal = 2;
        canShootInWater = 1;
        displayName = "[12th] M392 DMR";
        baseWeapon = "12th_m392";
        HUD_TotalPosibleBullet = 32;
        magazines[] = COMMON_MA5C_MAGAZINES;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: MuzzleSlot {
                compatibleitems[] = { "OPTRE_MA5Suppressor" };
            };
            class CowsSlot: 12th_CowsSlot_Rail {};
            class PointerSlot: PointerSlot {
                compatibleitems[] = {
                    "OPTRE_BMR_Laser", "ACE_acc_pointer_red", "ace_acc_pointer_green",
                    "ACE_acc_pointer_green_IR", "acc_pointer_ir"
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot {
                compatibleitems[] = {
                    "bipod_01_F_blk", "bipod_02_F_blk", "bipod_03_F_blk", "dzn_tripod_rifle"
                };
            };
        };
    };

    class 12th_mmg33_t: Dmns_M33_T {
        author = "Jack";
        displayName = "[12th] MMG33-T";
        baseWeapon = "12th_mmg33_T";
        magazines[] = {
            "12th_95x40_100rnd", "OPTRE_36Rnd_95x40_Mag",
            "OPTRE_36Rnd_95x40_Mag_Tracer", "12th_95x40_100rnd_T"
        };
        modes[] = { "FullAuto", "FullAutoFast" };

        class FullAuto: FullAuto {
            dispersion = 0.00116;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-06;
            reloadTime = 0.15;

            class BaseSoundModType {};
            class standardsound: BaseSoundModType {
                soundsetshot[] = {
                    "MMG02_Shot_SoundSet", "MMG02_Tail_SoundSet",
                    "MMG02_InteriorTail_SoundSet"
                };
            };
        };

        class FullAutoFast: FullAuto {
            reloadTime = 0.11;
            textureType = "fastAuto";

            class BaseSoundModType {};
            class standardsound: BaseSoundModType {
                soundsetshot[] = {
                    "MMG02_Shot_SoundSet", "MMG02_Tail_SoundSet",
                    "MMG02_InteriorTail_SoundSet"
                };
            };
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: MuzzleSlot {
                compatibleitems[] = { "OPTRE_MA5Suppressor" };
            };
            class CowsSlot: 12th_CowsSlot_Rail {};
            class PointerSlot: PointerSlot {
                compatibleitems[] = {
                    "OPTRE_BMR_Laser", "ACE_acc_pointer_red", "ace_acc_pointer_green",
                    "ACE_acc_pointer_green_IR", "acc_pointer_ir"
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot {
                compatibleitems[] = {
                    "bipod_01_F_blk", "bipod_02_F_blk", "bipod_03_F_blk", "dzn_MG_Tripod_Universal"
                };
            };
        };
    };

    class 12th_m33_t: Dmns_M33_T {
        author = "Jack";
        displayName = "[12th] M33-T";
        baseWeapon = "12th_m33_T";
        magazines[] = {
            "12th_762x51_200rnd", "12th_762x51_200rnd_T",
            "OPTRE_32Rnd_762x51_Mag", "OPTRE_32Rnd_762x51_Mag_Tracer",
            "OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"
        };
        modes[] = { "FullAuto", "FullAutoFast" };

        class FullAuto: FullAuto {
            dispersion = 0.00116;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-06;
            reloadTime = 0.15;

            class BaseSoundModType {};
            class standardsound: BaseSoundModType {
                soundsetshot[] = {
                    "MMG01_Shot_SoundSet", "MMG01_Tail_SoundSet",
                    "MMG01_InteriorTail_SoundSet"
                };
            };
        };

        class FullAutoFast: FullAuto {
            reloadTime = 0.09;
            textureType = "fastAuto";

            class BaseSoundModType {};
            class standardsound: BaseSoundModType {
                soundsetshot[] = {
                    "MMG01_Shot_SoundSet", "MMG01_Tail_SoundSet",
                    "MMG01_InteriorTail_SoundSet"
                };
            };
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: MuzzleSlot {
                compatibleitems[] = { "OPTRE_MA5Suppressor" };
            };
            class CowsSlot: 12th_CowsSlot_Rail {};
            class PointerSlot: PointerSlot {
                compatibleitems[] = {
                    "OPTRE_BMR_Laser", "ACE_acc_pointer_red", "ace_acc_pointer_green",
                    "ACE_acc_pointer_green_IR", "acc_pointer_ir"
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot {
                compatibleitems[] = {
                    "bipod_01_F_blk", "bipod_02_F_blk", "bipod_03_F_blk", "dzn_MG_Tripod_Universal"
                };
            };
        };
    };

    class 12th_M247: OPTRE_M247 {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[12th] M247 GPMG";
        baseWeapon = "12th_M247";
        magazines[] = {
            "OPTRE_32Rnd_762x51_Mag", "OPTRE_32Rnd_762x51_Mag_Tracer",
            "OPTRE_32Rnd_762x51_Mag_Tracer_Yellow", "12th_762x51_200rnd",
            "12th_762x51_200rnd_T"
        };
        modes[] = { "FullAuto", "FullAutoFast" };

        class FullAuto: FullAuto {
            dispersion = 0.00116;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-06;
            reloadTime = 0.09;
        };

        class FullAutoFast: FullAuto {
            reloadTime = 0.07;
            textureType = "fastAuto";
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: MuzzleSlot {
                compatibleitems[] = { "OPTRE_MA5Suppressor" };
            };
            class CowsSlot: 12th_CowsSlot_Rail {};
            class PointerSlot: PointerSlot {
                compatibleitems[] = {
                    "OPTRE_BMR_Laser", "ACE_acc_pointer_red", "ace_acc_pointer_green",
                    "ACE_acc_pointer_green_IR", "acc_pointer_ir"
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot {
                compatibleitems[] = {
                    "bipod_01_F_blk", "bipod_02_F_blk", "bipod_03_F_blk", "dzn_MG_Tripod_Universal"
                };
            };
        };
    };

    class 12th_m319: OPTRE_M319 {
        author = "Weber";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[12th] M319 Individual Grenade Launcher";
        baseWeapon = "12th_m319";
        magazines[] = { COMMON_GL_MAGS };
    };

    class 12th_m319n: OPTRE_M319N {
        author = "Weber";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[12th] M319N Individual Grenade Launcher";
        baseWeapon = "12th_m319n";
        magazines[] = { COMMON_GL_MAGS };
    };

    class 12th_br55: 19_UNSC_br55 {
        author = "Weber";
        scope = 2;
        scopeArsenal = 2;
        canShootInWater = 1;
        displayName = "[12th] BR55";
        baseWeapon = "12th_BR55";
        magazines[] = COMMON_BR_MAGAZINES;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: MuzzleSlot {};
            class CowsSlot: 12th_CowsSlot_BRRail {};
            class PointerSlot: PointerSlot {};
            class UnderBarrelSlot: UnderBarrelSlot {
                compatibleitems[] = {};
            };
        };
    };

    class 12th_br55_gl: 19_UNSC_br55_gl {
        author = "Weber";
        scope = 2;
        scopeArsenal = 2;
        canShootInWater = 1;
        displayName = "[12th] BR55 UGL";
        muzzles[] = { "this", "12th_M301UGL" };
        class 12th_m301ugl: GL_3GL_F {
            displayName = "M301 Grenade Launcher";
            descriptionShort = "M301 GL";
            magazines[] = { COMMON_GL_MAGS };
        };
        baseWeapon = "12th_BR55_gl";
        magazines[] = COMMON_BR_MAGAZINES;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: MuzzleSlot {};
            class CowsSlot: 12th_CowsSlot_BRRail {};
            class PointerSlot: PointerSlot {};
            class UnderBarrelSlot: UnderBarrelSlot {
                compatibleitems[] = {};
            };
        };
    };

    class 12th_BR55_HB: 19_UNSC_br55_HB {
        author = "Weber";
        scope = 2;
        scopeArsenal = 2;
        canShootInWater = 1;
        displayName = "[12th] BR55HB";
        baseWeapon = "12th_BR55_HB";
        magazines[] = COMMON_BR_MAGAZINES;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: MuzzleSlot {};
            class CowsSlot: 12th_CowsSlot_BRRail {};
            class PointerSlot: PointerSlot {};
            class UnderBarrelSlot: UnderBarrelSlot {
                compatibleitems[] = {};
            };
        };
    };

    class 12th_BR55_HB_gl: 19_UNSC_br55_HB_gl {
        author = "Weber";
        scope = 2;
        scopeArsenal = 2;
        canShootInWater = 1;
        displayName = "[12th] BR55HB UGL";
        muzzles[] = { "this", "12th_M301UGL" };
        class 12th_m301ugl: GL_3GL_F {
            displayName = "M301 Grenade Launcher";
            descriptionShort = "M301 GL";
            magazines[] = { COMMON_GL_MAGS };
        };
        baseWeapon = "12th_BR55_HB_gl";
        magazines[] = COMMON_BR_MAGAZINES;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: MuzzleSlot {};
            class CowsSlot: 12th_CowsSlot_BRRail {};
            class PointerSlot: PointerSlot {};
            class UnderBarrelSlot: UnderBarrelSlot {
                compatibleitems[] = {};
            };
        };
    };

    class 12th_M392T: 19_UNSC_M392 {
        author = "Weber";
        scope = 2;
        scopeArsenal = 2;
        canShootInWater = 1;
        displayName = "[12th] M392 DMR Test";
        baseWeapon = "12th_M392T";
        HUD_TotalPosibleBullet = 32;
        magazines[] = {
            "OPTRE_32Rnd_762x51_Mag", "OPTRE_32Rnd_762x51_Mag_Tracer",
            "OPTRE_32Rnd_762x51_Mag_Tracer_Yellow", "OPTRE_32Rnd_762x51_Mag_UW"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: MuzzleSlot {
                compatibleitems[] = {
                    "optre_MA5Suppressor", "19_UNSC_BR55_Suppressor",
                    "19_UNSC_BR55L_Suppressor"
                };
            };
            class CowsSlot: 12th_CowsSlot_Rail {};
            class PointerSlot: PointerSlot {
                compatibleitems[] = {
                    "OPTRE_BMR_Laser", "ACE_acc_pointer_red", "ace_acc_pointer_green",
                    "ACE_acc_pointer_green_IR", "acc_pointer_ir", "19_UNSC_BR55_LAM"
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot {
                compatibleitems[] = { "bipod_01_F_blk", "dzn_MG_Tripod_Universal" };
            };
        };
    };

    // Start Foundry Weapons

    class 12th_M6C: 19_UNSC_M6C {
      scope=2;
      scopeArsenal = 2;
      author="Weber";
      display="[12th] M6C";
      baseWeapon = "12th_M6C";
      magazines[] = COMMON_M6_MAGAZINES;
    };

    class 12th_M7_Test: 19_UNSC_M7 {
      author="Weber";
      scope=2;
      scopeArsenal = 2;
      displayName="[12th] M7 TEST";
      baseWeapon = "12th_M7_Test";
      magazines[] = {
        "12th_m7_60rnd_UW", "12th_m7_48rnd_UW", "OPTRE_60Rnd_5x23mm_Mag",
        "OPTRE_60Rnd_5x23mm_Mag_tracer", "OPTRE_48Rnd_5x23mm_Mag",
        "OPTRE_48Rnd_5x23mm_Mag_tracer"
      };
    };

    class 12th_M7_Test_Folded: 19_UNSC_M7_Side {
      author="Weber";
      scope=2;
      scopeArsenal = 2;
      displayName="[12th] M7 Folded TEST";
      baseWeapon = "12th_M7_Test_Folded";
      magazines[] = {
        "12th_m7_60rnd_UW", "12th_m7_48rnd_UW", "OPTRE_60Rnd_5x23mm_Mag",
        "OPTRE_60Rnd_5x23mm_Mag_tracer", "OPTRE_48Rnd_5x23mm_Mag",
        "OPTRE_48Rnd_5x23mm_Mag_tracer"
      };
    };

    class 12th_M90: 19_UNSC_M90 {
      author="Weber";
      scope=2;
      scopeArsenal = 2;
      displayName="[12th] M90";
      baseWeapon = "12th_M90";
    };

    class 12th_MA5A: 19_UNSC_MA5A {
      author="Weber";
      scope=2;
      scopeArsenal = 2;
      canShootInWater = 1;
      displayName="[12th] MA5A";
      baseWeapon = "12th_MA5A";
      magazines[] = COMMON_MA5C_MAGAZINES;
    };

    class 12th_MA5A_gl: 19_UNSC_MA5A_gl {
      author="Weber";
      scope=2;
      scopeArsenal = 2;
      canShootInWater = 1;
      displayName="[12th] MA5A W/ M301";
      baseWeapon = "12th_MA5A_gl";
      muzzles[]= { "this", "12th_M301UGL" };
      class 12th_M301UGL: OPTRE_M301UGL {
        displayName = "M301 Grenade Launcher";
        descriptionShort = "M301 GL";
        magazines[] = { COMMON_GL_MAGS };
      };
      magazines[] = COMMON_MA5C_MAGAZINES;
    };

    class 12th_MA5B: 19_UNSC_MA5B {
      author="Weber";
      scope=2;
      scopeArsenal = 2;
      canShootInWater = 1;
      displayName="[12th] MA5B";
      baseWeapon = "12th_MA5B";
      magazines[] = {"OPTRE_60Rnd_762x51_Mag"};
    };

    /*class 12th_SRS99AM: 19_UNSC_SRS99AM {
        author = "Weber";
        baseWeapon = "12th_SRS99AM";
        scope = 2;
        displayName = "[12th] SRS99AM";
        model = "\UNSC_F_Weapons\weapons\UNSC_SRS99AM.p3d";
        mass = 300;
        reloadAction = "WBK_SRS99C_Reload";
        picture = "\UNSC_F_Weapons\weapons\UI\srs99_UI.paa";
        UiPicture = "\UNSC_F_Weapons\weapons\UI\srs99_ui.paa";

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 300;

            class MuzzleSlot: MuzzleSlot {
                compatibleItems[] = {};
            };

            class CowsSlot: CowsSlot {
                compatibleitems[] = { "12th_SRS99_Scope" };
            };

            class PointerSlot: PointerSlot {
                compatibleitems[] = {};
            };

            class UnderBarrelSlot: UnderBarrelSlot {
                compatibleitems[] = {};
            };
        };
    };*/
};