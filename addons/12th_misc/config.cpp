class CfgPatches {
  class 12th_misc {
    units[] = { };
    weapons[] = { };
    requiredVersion = 0.1;
    requiredAddons[] = {
      "A3_Characters_F",
      "A3_Data_F",
      "A3_Weapons_F"
    };
    version = 0.1;
  };
};

// The smigeon of code that makes it so that smoke shells
// don't roll or bounce.
class CfgAmmo {
  class SmokeShell;
  class G_40mm_Smoke: SmokeShell {
      simulation = "shotSmoke";
      deflectionSlowDown = 0;
  };
};

// The smigeon of code that adjusts the stamina for everyone
class CfgMovesFatigue {
  staminaDuration = 180;     // Default = 60
  staminaRestoration = 30;   // Default = 30
  staminaCooldown = 15;      // Default = 10
  aimPrecisionSpeedCoef = 5; // Default = 5
  terrainDrainSprint = -1;   // Default = -1
  terrainDrainRun = 0;       // Default = -1
  terrainSpeedCoef = 0.9;    // Default = 0.9
};