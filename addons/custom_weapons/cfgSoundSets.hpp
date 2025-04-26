class CfgSoundSets
{
	class Test_Weapon_01_Shot_SoundSet
	{
		// array of SoundShaders to be played together with 100% synchronization
		// note that not all SoundShaders will necessarily play, it depends on their specific configuration and also on soundShadersLimit parameter
		soundShaders[] =
		{
			"Test_Weapon_01_closeShot_SoundShader"
		};

		volumeFactor = 1.6; // volume multiplicator factor
		volumeCurve = "Test_Weapon_01_InverseSquareCurve"; // amplitude attenuation curve, can be class name or array of points (CfgSoundCurves)
		sound3DProcessingType = "Test_Weapon_01_Shot3DProcessingType"; // sound processing type class name (CfgSound3DProcessors)
		distanceFilter = "Test_Weapon_01_ShotDistanceFreqAttenuationFilter"; // class name of custom distance frequency attenuation filter (CfgDistanceFilters)
		spatial = true; // is sound considered as positional
		doppler = false; // doppler effect simulation
		loop = false;
	};
};