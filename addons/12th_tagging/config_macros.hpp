#define P(PATH) \x\12thMEUAssets\addons\12th_tagging\##PATH
#define QP(PATH) #P(PATH)
#define Q(INPUT) #INPUT
#define GLUE(g1,g2) g1##g2

/*
  Adds a basic prefix to indicate a spray class.
*/
#define SPRAY_CLASS(CSFX) 12th_spray_##CSFX

/*
  Stands for Tag Path. Nothing but a simple path macro.
*/
#define TPATH(TYPE,FILE) P(data\tags\##TYPE\##FILE)

/*
  A macro that defines a spray can item.
  Input:
  CSFX - Class suffix. Keep unique between different items. This gets
         appended onto the class name of this macro.
  DSFX - Display value suffix. Gets appended onto the display value
         within the definition for this class.
*/
#define SPRAY_ITEM(CSFX,DSFX)                                       \
class SPRAY_CLASS(CSFX) : ACE_SpraypaintBlack {                     \
  author="Kelp; Gepard";                                            \
  displayName=#GLUE([12th] Spray Can,DSFX);                         \
  picture="\z\ace\addons\tagging\UI\items\itemSpraypaintBlack.paa"; \
  hiddenSelectionsTextures[] = {                                    \
    "\z\ace\addons\tagging\data\spraycanBlack_co.paa"               \
  };                                                                \
  class ItemInfo: CBA_MiscItem_ItemInfo {                           \
    mass = 0;                                                       \
  };                                                                \
};

/*
  A macro for a single tag item.
  Input:
  SUFFIX - A unique word that is appended to the class name of the tag
  REQ_ITEM - The required Item class, in quotes.
  TEXPATH - A full texture path that points to the texture
            that the will be painted onto a surface.
*/
#define TAG(SUFFIX,REQ_ITEM,DISPLAY,TEXPATH) \
class 12th_tag_##SUFFIX {                    \
  displayName=DISPLAY;                       \
  requiredItem=REQ_ITEM;                     \
  textures[]={ #TEXPATH };                   \
  icon= #TEXPATH ;                           \
};

/*
  A macro for a standard set of tags, the difference between the sets
  being the platoon (or HQ element) to which they are assigned.
  Input:
  CSFX - Stands for class suffix. Value doesn't matter too much, just
         ensure that it's unique.
  REQ_ITEM - The required Item class, in quotes.
  TYPE - The folder name for a single set of platoon-specific tags.
*/
#define PLT_TAGS(CSFX,REQ_ITEM,TYPE)                              \
TAG(GLUE(CSFX,_bhz),REQ_ITEM,"Biohazard",TPATH(TYPE,bhz.paa))     \
TAG(GLUE(CSFX,_clr),REQ_ITEM,"Clear",TPATH(TYPE,clr.paa))         \
TAG(GLUE(CSFX,_int),REQ_ITEM,"Intel",TPATH(TYPE,int.paa))         \
TAG(GLUE(CSFX,_mines),REQ_ITEM,"Mines",TPATH(TYPE,mines.paa))     \
TAG(GLUE(CSFX,_noent),REQ_ITEM,"No Entry",TPATH(TYPE,no_ent.paa))