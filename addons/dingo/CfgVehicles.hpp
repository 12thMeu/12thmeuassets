#pragma hemtt suppress pw3_padded_arg config


class CfgVehicles
{ 
	class SRV_UKWD;
	class Car;
	class Car_f: Car
	{
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};



	class Dingo_F: Car_f{
		class AnimationSources;
		class Eventhandlers;
	};

	class Dingo_Base_F: Dingo_F
	{
		class VehicleTransport;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};


	class DingoHull: Dingo_Base_F
	{
		author="SamanthaNix";
		model = "x\12thMEU\addons\Dingo\Data\Dingo.p3d";
		picture	= "x\12thMEU\addons\Dingo\Data\preview.paa"; /// just some icon in command bar

		//Editor stuff
		editorPreview = "x\12thMEU\addons\Dingo\Data\preview.paa";
		Icon	= "\A3\Weapons_F\Data\placeholder_co.paa"; /// icon in map

		displayName = "Dingo Hull"; /// displayed in Editor




		//Handeling
		terrainCoef 	= 0.25; 	/// different surface affects this car more, stick to tarmac
		turnCoef 		= 3; 	/// should match the wheel turn radius
		precision 		= 10; 	/// how much freedom has the AI for its internal waypoints - lower number means more precise but slower approach to way
		brakeDistance 	= 3.0; 	/// how many internal waypoints should the AI plan braking in advance
		acceleration 	= 15; 	/// how fast acceleration does the AI think the car has

		fireResistance 	= 20; 	/// lesser protection against fire than tanks
		armor 			= 700; 	/// just some protection against missiles, collisions and explosions
		cost			= 50000; /// how likely is the enemy going to target this vehicle

		transportMaxBackpacks 	= 4; /// just some backpacks fit the trunk by default
		transportSoldier 		= 4; /// number of cargo except driver
		

		wheelDamageRadiusCoef 	= 0.9; 			/// for precision tweaking of damaged wheel size
		wheelDestroyRadiusCoef 	= 0.4;			/// for tweaking of rims size to fit ground
		maxFordingDepth 		= 0.5;			/// how high water would damage the engine of the car
		waterResistance 		= 1;			/// if the depth of water is bigger than maxFordingDepth it starts to damage the engine after this time
		crewCrashProtection		= 0.1;			/// multiplier of damage to crew of the vehicle => low number means better protection

		class TransportItems /// some first aid kits in trunk according to safety regulations
		{
			//item_xx(FirstAidKit,4);
		};

		class Turrets{}; /// doesn't have any gunner nor commander
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel	{armor=0.125; passThrough=0;}; /// it is easier to destroy wheels than hull of the vehicle
			class HitLF2Wheel: HitLF2Wheel	{armor=0.125; passThrough=0;};

			class HitRFWheel: HitRFWheel	{armor=0.125; passThrough=0;};
			class HitRF2Wheel: HitRF2Wheel 	{armor=0.125; passThrough=0;};

			class HitFuel 			{armor=0.50; material=-1; name="FuelTank"; visual=""; passThrough=0.2;}; /// correct points for fuel tank, some of the damage is aFRLied to the whole
			class HitEngine 		{armor=0.50; material=-1; name="Engine"; visual=""; passThrough=0.2;};
			class HitBody: HitBody 	{name = "body"; visual="camo1"; passThrough=1;}; /// all damage to the hull is aFRLied to total damage

		};

		driverAction 		= "driver_offroad01"; /// what action is going the driver take inside the vehicle. Non-existent action makes the vehicle inaccessible
		cargoAction[] 		= {"passenger_low01", "passenger_generic01_leanleft", "passenger_generic01_foldhands"}; /// the same of all the crew
		getInAction 		= "GetInLow"; 		/// how does driver look while getting in
		getOutAction 		= "GetOutLow"; 		/// and out
		cargoGetInAction[] 	= {"GetInLow"}; 	/// and the same for the rest, if the array has fewer members than the count of crew, the last one is used for the rest
		cargoGetOutAction[] = {"GetOutLow"}; 	/// that means all use the same in this case

		#include "sounds.hpp"	/// sounds are in a separate file to make this one simple
		#include "physx.hpp"	/// PhysX settings are in a separate file to make this one simple

		class PlayerSteeringCoefficients /// steering sensitivity configuration
		{
			 turnIncreaseConst 	= 0.3; // basic sensitivity value, higher value = faster steering
			 turnIncreaseLinear = 1.0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			 turnIncreaseTime 	= 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle

			 turnDecreaseConst 	= 5.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
			 turnDecreaseLinear = 3.0; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
			 turnDecreaseTime 	= 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position

			 maxTurnHundred 	= 0.7; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};

		/// memory points where do tracks of the wheel appear
		// front left track, left offset
		memoryPointTrackFLL = "TrackFLL";
		// front left track, right offset
		memoryPointTrackFLR = "TrackFLR";
		// back left track, left offset
		memoryPointTrackBLL = "TrackBLL";
		// back left track, right offset
		memoryPointTrackBLR = "TrackBLR";
		// front right track, left offset
		memoryPointTrackFRL = "TrackFRL";
		// front right track, right offset
		memoryPointTrackFRR = "TrackFRR";
		// back right track, left offset
		memoryPointTrackBRL = "TrackBRL";
		// back right track, right offset
		memoryPointTrackBRR = "TrackBRR";

		class Damage /// damage changes material in specific places (visual in hitPoint)
		{
			tex[]={};
			mat[]=
			{
				"A3\data_f\glass_veh_int.rvmat", 		/// material mapped in model
				"A3\data_f\Glass_veh_damage.rvmat", 	/// changes to this one once damage of the part reaches 0.5
				"A3\data_f\Glass_veh_damage.rvmat",		/// changes to this one once damage of the part reaches 1

				"A3\data_f\glass_veh.rvmat",			/// another material
				"A3\data_f\Glass_veh_damage.rvmat",		/// changes into different ones
				"A3\data_f\Glass_veh_damage.rvmat"
			};
		};

		class Exhausts /// specific exhaust effects for the car
		{
			class Exhaust1 /// the car has two exhausts - each on one side
			{
				position 	= "exhaust1_pos";  		/// name of initial memory point
				direction 	= "exhaust1_dir";	/// name of memory point for exhaust direction
				effect 		= "ExhaustsEffect";	/// what particle effect is it going to use
			};

		};

		class Reflectors	/// only front lights are considered to be reflectors to save CPU
		{
			class LightCarHeadL01 	/// lights on each side consist of two bulbs with different flares
			{
				color[] 		= {1900, 1800, 1700};		/// approximate colour of standard lights
				ambient[]		= {5, 5, 5};				/// nearly a white one
				position 		= "LightCarHeadL01";		/// memory point for start of the light and flare
				direction 		= "LightCarHeadL01_end";	/// memory point for the light direction
				hitpoint 		= "Light_L";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection 		= "Light_L";				/// selection for artificial glow around the bulb, not much used any more
				size 			= 1;						/// size of the light point seen from distance
				innerAngle 		= 100;						/// angle of full light
				outerAngle 		= 179;						/// angle of some light
				coneFadeCoef 	= 10;						/// attenuation of light between the above angles
				intensity 		= 1;						/// strength of the light
				useFlare 		= 1;						/// does the light use flare?
				dayLight 		= 0;					/// switching light off during day saves CPU a lot
				flareSize 		= 1.0;						/// how big is the flare

				class Attenuation
				{
					start 			= 1.0;
					constant 		= 0;
					linear 			= 0;
					quadratic 		= 0.25;
					hardLimitStart 	= 30;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 	= 60;		/// this allows adding more lights into scene
				};
			};

			class LightCarHeadL02: LightCarHeadL01
			{
				position 	= "LightCarHeadL02";
				direction 	= "LightCarHeadL02_end";
				FlareSize 	= 0.5;						/// side bulbs aren't that strong
			};

			class LightCarHeadR01: LightCarHeadL01
			{
				position 	= "LightCarHeadR01";
				direction 	= "LightCarHeadR01_end";
				hitpoint 	= "Light_R";
				selection 	= "Light_R";
			};

			class LightCarHeadR02: LightCarHeadR01
			{
				position 	= "LightCarHeadR02";
				direction 	= "LightCarHeadR02_end";
				FlareSize 	= 0.5;
			};
		};

		aggregateReflectors[] = {{"LightCarHeadL01", "LightCarHeadL02"}, {"LightCarHeadR01", "LightCarHeadR02"}}; /// aggregating reflectors helps the engine a lot
		/// it might be even good to aggregate all lights into one source as it is done for most of the cars


		// Must be kept as fail-safe in case of issue with the function
		hiddenSelections[] = {"Camo1"}; ///we want to allow changing the color of this selection
		hiddenSelectionsTextures[]={"x\12thMEU\addons\dingo\data\textures\standard\Chassis_co.paa"};	 /// we could use any texture to cover the car

		// Definition of texture sources (skins), used for the VhC (Vehicle customization)
		// Also, because the Garage uses the VhC, it will make them available from the garage
		class textureSources
		{
			class Dingo_Camo_standard // Source class
			{
				displayName="Red"; // name displayed, among other, from the garage
				author="SamanthaNix"; // Author of the skin
				textures[]=// List of textures, in the same order as the hiddenSelections definition
				{
					"x\12thMEU\addons\dingo\data\textures\standard\Chassis_co.paa" // This is procedural texture, can be useful to set placeholder
				};

			};
			class Dingo_Camo_winter
			{
				displayName="Winter";
				author="SamanthaNix";
				textures[]=
				{
					"#(rgb,8,8,3)color(1,1,1,1)"
				};

			};
			class Dingo_Camo_forest
			{
				displayName="Forest";
				author="SamanthaNix";
				textures[]=
				{
					"#(rgb,8,8,3)color(0,1,0,1)"
				};

			};
		};
		// [_textureSourceClass1, _probability1, _textureSourceClass2, _probability2, ...]
		// Default behavior of the VhC is to select one of these sources, with a weighted random

	};
	class DingoCargo: DingoHull
	{
		forceInGarage=1;
		displayName="Dingo C";
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= "CIV_F";		/// and with civilian faction
				textureList[]=
		{
			"Dingo_Camo_standard", 1,
			"Dingo_Camo_winter",1,
			"Dingo_Camo_forest",1
		};
	};

	class Land_Basketball_01_F;
	class Dingo_Prop: Land_Basketball_01_F
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory ="12th_Assets";
		editorSubcategory="Misc_Props";
		destrType="DestructNo";
		displayname = "Dingo";
		model = "x\12thMEU\addons\Dingo\Data\Dingo.p3d";
		description = "Test";
		editorPreview = "x\12thMEU\addons\Dingo\Data\preview.paa";
	};
};
