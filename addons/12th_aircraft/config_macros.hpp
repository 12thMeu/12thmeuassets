#define P(PATH) \x\12thMEUAssets\addons\12th_aircraft\##PATH
#define QP(PATH) #P(PATH)

#define AIR_SP_INFO(VEH,PRI,TYPE) \
class VehicleSpawnerInfo {        \
  class 12th_air_spawner {        \
    priority=PRI;                 \
    spawner = "12th Aircraft";    \
    scope = 1;                    \
    vehicle = #VEH;               \
    icon="";                      \
    type=#TYPE;                   \
    cost=0;                       \
  };                              \
};

//--------------------------------------------------------------------

#define PELICAN_TEXTURESETS                       \
hiddenSelections[] = {                            \
  "camo1",                                        \
  "camo2",                                        \
  "camo3",                                        \
  "troop_bay",                                    \
  "doors",                                        \
  "hall_and_cockpit"                              \
};                                                \
hiddenSelectionsTextures[] = {                    \
  QP(pelican\default\body_co.paa),                \
  QP(pelican\default\wings_and_gear_co.paa),      \
  QP(pelican\default\weaponry_co.paa),            \
  QP(pelican\default\troop_bay_co.paa),           \
  QP(pelican\default\doors_co.paa),               \
  QP(pelican\default\hall_and_cockpit_co.paa)     \
};                                                \
class textureSources {                            \
  class 12th_d77tc_tex_default {                  \
    displayName = "Default";                      \
    author = "Gepard";                            \
    textures[] = {                                \
      QP(pelican\default\body_co.paa),            \
      QP(pelican\default\wings_and_gear_co.paa),  \
      QP(pelican\default\weaponry_co.paa),        \
      QP(pelican\default\troop_bay_co.paa),       \
      QP(pelican\default\doors_co.paa),           \
      QP(pelican\default\hall_and_cockpit_co.paa) \
    };                                            \
    factions[] = {"12th_MEU"};                    \
  };                                              \
  class 12th_d77tc_tex_medical {                  \
    displayName = "Medical";                      \
    author = "Gepard";                            \
    textures[] = {                                \
      QP(pelican\medical\body_co.paa),            \
      QP(pelican\default\wings_and_gear_co.paa),  \
      QP(pelican\default\weaponry_co.paa),        \
      QP(pelican\default\troop_bay_co.paa),       \
      QP(pelican\default\doors_co.paa),           \
      QP(pelican\default\hall_and_cockpit_co.paa) \
    };                                            \
  factions[] = {"12th_MEU"};                      \
  };                                              \
                                                  \
  class 12th_d77tc_tex_cstm_rich {                \
    displayName = "Custom (Rich)";                \
    author = "Gepard";                            \
    textures[] = {                                \
      QP(pelican\rich\body_co.paa),               \
      QP(pelican\default\wings_and_gear_co.paa),  \
      QP(pelican\default\weaponry_co.paa),        \
      QP(pelican\default\troop_bay_co.paa),       \
      QP(pelican\default\doors_co.paa),           \
      QP(pelican\default\hall_and_cockpit_co.paa) \
    };                                            \
    factions[] = {"12th_MEU"};                    \
  };                                              \
  class 12th_d77tc_tex_cstm_penquite {            \
    displayName = "Custom (Penquite)";            \
    author = "Gepard";                            \
    textures[] = {                                \
      QP(pelican\penquite\body_co.paa),           \
      QP(pelican\default\wings_and_gear_co.paa),  \
      QP(pelican\default\weaponry_co.paa),        \
      QP(pelican\default\troop_bay_co.paa),       \
      QP(pelican\default\doors_co.paa),           \
      QP(pelican\default\hall_and_cockpit_co.paa) \
    };                                            \
    factions[] = {"12th_MEU"};                    \
  };                                              \
  class 12th_d77tc_tex_winter {                   \
    displayName = "Winter";                       \
    author = "Gepard";                            \
    textures[] = {                                \
      QP(pelican\winter\body_co.paa),             \
      QP(pelican\winter\wings_and_gear_co.paa),   \
      QP(pelican\winter\weaponry_co.paa),         \
      QP(pelican\winter\troop_bay_co.paa),        \
      QP(pelican\winter\doors_co.paa),            \
      QP(pelican\winter\hall_and_cockpit_co.paa)  \
    };                                            \
    factions[] = {"12th_MEU"};                    \
  };                                              \
  class 12th_d77tc_tex_winter_med {               \
    displayName = "Winter Medical";               \
    author = "Gepard";                            \
    textures[] = {                                \
      QP(pelican\winter_medical\body_co.paa),     \
      QP(pelican\winter\wings_and_gear_co.paa),   \
      QP(pelican\winter\weaponry_co.paa),         \
      QP(pelican\winter\troop_bay_co.paa),        \
      QP(pelican\winter\doors_co.paa),            \
      QP(pelican\winter\hall_and_cockpit_co.paa)  \
    };                                            \
    factions[] = {"12th_MEU"};                    \
  };                                              \
  class 12th_d77tc_tex_winter_cstm_penquite {     \
    displayName = "Winter Custom (Penquite)";     \
    author = "Gepard";                            \
    textures[] = {                                \
      QP(pelican\winter_penquite\body_co.paa),    \
      QP(pelican\winter\wings_and_gear_co.paa),   \
      QP(pelican\winter\weaponry_co.paa),         \
      QP(pelican\winter\troop_bay_co.paa),        \
      QP(pelican\winter\doors_co.paa),            \
      QP(pelican\winter\hall_and_cockpit_co.paa)  \
    };                                            \
    factions[] = {"12th_MEU"};                    \
  };                                              \
  class 12th_d77tc_tex_winter_cstm_rich {         \
    displayName = "Winter Custom (Rich)";         \
    author = "Gepard";                            \
    textures[] = {                                \
      QP(pelican\winter_rich\body_co.paa),        \
      QP(pelican\winter\wings_and_gear_co.paa),   \
      QP(pelican\winter\weaponry_co.paa),         \
      QP(pelican\winter\troop_bay_co.paa),        \
      QP(pelican\winter\doors_co.paa),            \
      QP(pelican\winter\hall_and_cockpit_co.paa)  \
    };                                            \
    factions[] = {"12th_MEU"};                    \
  };                                              \
};

#define FALCON_TEXTURESETS                   \
hiddenSelectionsTextures[] = {               \
    QP(falcon\default\main_co.paa),          \
    QP(falcon\default\attachments_co.paa),   \
    QP(falcon\default\interior_co.paa),      \
};                                           \
class textureSources {                       \
  class 12th_falcon_tex_default {            \
    displayName = "Default";                 \
    author = "Gepard";                       \
    textures[] = {                           \
      QP(falcon\default\main_co.paa),        \
      QP(falcon\default\attachments_co.paa), \
      QP(falcon\default\interior_co.paa),    \
    };                                       \
  };                                         \
  class 12th_falcon_tex_medical {            \
    displayName = "Medical";                 \
    author = "Gepard";                       \
    textures[] = {                           \
      QP(falcon\medical\main_co.paa),        \
      QP(falcon\default\attachments_co.paa), \
      QP(falcon\default\interior_co.paa),    \
    };                                       \
  };                                         \
  class 12th_falcon_tex_winter {             \
    displayName = "Winter";                  \
    author = "Gepard";                       \
    textures[] = {                           \
      QP(falcon\winter\main_co.paa),         \
      QP(falcon\winter\attachments_co.paa),  \
      QP(falcon\winter\interior_co.paa),     \
    };                                       \
  };                                         \
  class 12th_falcon_tex_winter_medical {     \
    displayName = "Winter Medical";          \
    author = "Gepard";                       \
    textures[] = {                           \
      QP(falcon\winter_medical\main_co.paa), \
      QP(falcon\winter\attachments_co.paa),  \
      QP(falcon\winter\interior_co.paa),     \
    };                                       \
  };                                         \
  textureList[]={                            \
      "12th_falcon_tex_default", 1,          \
      "12th_falcon_tex_medical", 1,          \
      "12th_falcon_tex_winter", 1,           \
      "12th_falcon_tex_winter_medical", 1    \
  };                                         \
};

#define SPARROWHAWK_TEXTURESETS \
hiddenSelectionsTextures[]= { \
  "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\body_01_co.paa", \
  "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\body_02_co.paa", \
  "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\body_03_co.paa", \
  "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\body_04_co.paa", \
  "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\body_05_co.paa", \
  "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\autocannon_co.paa", \
  "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\feed_autocannon_co.paa", \
  "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\decal_01_co.paa", \
  "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\decal_01_co.paa" \
}; \
class textureSources { \
  class 12th_sph_tex_default { \
     displayName="Default"; \
     author="Gepard"; \
     textures[] = { \
       "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\body_01_co.paa", \
       "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\body_02_co.paa", \
       "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\body_03_co.paa", \
       "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\body_04_co.paa", \
       "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\body_05_co.paa", \
       "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\autocannon_co.paa", \
       "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\feed_autocannon_co.paa", \
       "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\decal_01_co.paa", \
       "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\decal_01_co.paa" \
     }; \
     factions[] = {"12th_MEU"}; \
  }; \
  class 12th_sph_tex_winter { \
     displayName="Winter"; \
     author="Gepard"; \
     textures[] = { \
       "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\winter\body_01_co.paa", \
       "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\winter\body_02_co.paa", \
       "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\winter\body_03_co.paa", \
       "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\winter\body_04_co.paa", \
       "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\winter\body_05_co.paa", \
       "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\winter\autocannon_co.paa", \
       "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\winter\feed_autocannon_co.paa", \
       "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\decal_01_co.paa", \
       "\x\12thMEUAssets\addons\12th_aircraft\sparrowhawk\default\decal_01_co.paa" \
     }; \
     factions[] = {"12th_MEU"}; \
  }; \
}; \
textureList[] = { \
  "12th_sph_tex_default", 1, \
  "12th_sph_tex_winter", 1 \
};

#define BLACKFISH_TEXTURESETS \
hiddenSelections[]={"Camo_1", "Camo_2", "Camo_3", "Camo_4", "Camo_5"}; \
hiddenSelectionsTextures[]={ \
  QP(blackfish\default\ext01_co.paa), \
  QP(blackfish\default\ext02_co.paa), \
  QP(blackfish\default\ext03_co.paa), \
  QP(blackfish\default\ext04_co.paa), \
  QP(blackfish\default\signs_ca.paa) \
}; \
class textureSources { \
  class 12th_blackfish_tex_default { \
    displayName="Default"; \
    author="Gepard"; \
    textures[]= { \
      QP(blackfish\default\ext01_co.paa), \
      QP(blackfish\default\ext02_co.paa), \
      QP(blackfish\default\ext03_co.paa), \
      QP(blackfish\default\ext04_co.paa), \
      QP(blackfish\default\signs_ca.paa) \
    }; \
  }; \
  class 12th_blackfish_tex_winter { \
    displayName="Winter"; \
    author="Gepard"; \
    textures[]= { \
      QP(blackfish\winter\ext01_co.paa), \
      QP(blackfish\winter\ext02_co.paa), \
      QP(blackfish\winter\ext03_co.paa), \
      QP(blackfish\winter\ext04_co.paa), \
      QP(blackfish\default\signs_ca.paa) \
    }; \
  }; \
};
