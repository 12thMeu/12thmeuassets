
class CfgMagazines
{
	class Default;

	class CA_Magazine;

	class 3Rnd_test_mag: CA_Magazine 
	{
		ace_disableRepacking = 1;
		scope = 2; /// or 2, to be precise
		displayName = "Liquid Magazine";
		picture="x\12thMEU\addons\custom_weapons\data\MagazinePreview.paa";
		ammo = "StandardLiquidLaserAmmo";
		count = 3; /// 30 rounds is enough
		initSpeed = 2000; /// standard muzzle speed
		tracersEvery = 1; /// disable tracers by default
		descriptionShort = "Fits in the prototype laser weapon."; /// on mouse-over in Inventory
		magazineGroup[]	= {"Liquid_mag_group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};

};