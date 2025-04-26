// see http://community.bistudio.com/wiki/Sound for more details

class CfgSoundShaders
{



// Standart shot ---------------------------------------------------------------------------------------------------------------------------

	class Test_Weapon_01_closeShot_SoundShader
	{
		samples[] = // array of actual samples with probability weight, engine will randomly select one sample with no immediate repeat within SoundShader
		{
			{ "x\12thMEU\addons\Custom_Weapons\data\LaserFireSingle.ogg", 1 }
		};
		volume = 10; // basic sound level value in dBFS (or actual sound level value) db6~2, db-6~0.5, simple expressions with sound controllers can be used
		range = 50; // maximum range in meters where sound is played
		rangeCurve = "closeShotCurve"; // curve class name (CfgSoundCurves) or specific curve definition (array of points)
		// note that curve is stretched to region <0;range>
	};

};