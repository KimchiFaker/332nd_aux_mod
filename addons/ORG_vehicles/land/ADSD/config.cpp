#include "../../../ORG_main/macros/main.hpp" // my config macro lib
#define MACRO_TX200_TEXTURES MACRO_VEHICLE_TEXTURES_PATH\land\ADSD
class CfgPatches
{
	class MACRO_PATCH_NAME(ADSD)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,CIS,ADSD),
        };
		weapons[] = {};
	};
};

class CfgAmmo
{
	class 3as_ATT_redPlasma_AT;

	class MACRO_NEW_AMMO(ADSD_AP) : 3as_ATT_redPlasma_AT
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128 + 256 + 512";
		model = "swlw_main\Effects\laser_red.p3d";
		tracerscale = 2;

		cost = 50;
		caliber = 34;
		hit = 50;
		indirectHit = 30;
		indirectHitRange = 8;
	};
};

class CfgMagazines
{
	class 3as_24rnd_125mm_ADSD;

	class MACRO_NEW_MAG(ADSD_AP,24) : 3as_24rnd_125mm_ADSD
	{
		displayName = "ADSD AP";
		ammo = MACRO_NEW_AMMO(ADSD_AP)
	};
};

class Mode_SemiAuto;
class CfgWeapons
{
	class 3AS_ADSD_Cannon;

	class MACRO_NEW_WEAPON(ADSD_Cannon) : 3AS_ADSD_Cannon
	{
		magazineWell[] = {};
		magazines[] =
		{
			MACRO_NEW_MAG(ADSD_AP,24)
		};

		modes[] =
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class GunParticles
		{
		};
		class manual : Mode_SemiAuto
		{
			displayName = "ADSD Cannon";
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"swlb_core\data\sounds\vehicles\aat\weapon\aat_main_shot.wss",
					3.1622777,
					1,
					3000
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};

			autofire = 1;
			recoil = "Empty";
			reloadTime = 0.4;
			soundBurst = 0;
			dispersion = 0.0060000001;
			showToPlayer = 1;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 450;
			maxRangeProbab = 0.30000001;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 150;
		};
		class close : manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			soundContinuous = 0;
			aiRateOfFire = 0.4;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.050000001;
			midRange = 100;
			midRangeProbab = 0.57999998;
			maxRange = 300;
			maxRangeProbab = 0.30000001;
		};
		class short : close
		{
			minRange = 150;
			minRangeProbab = 0.2;
			midRange = 500;
			midRangeProbab = 0.69999999;
			maxRange = 1500;
			maxRangeProbab = 0.40000001;
			aiRateOfFire = 0.4;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 2;
		};
		class medium : close
		{
			minRange = 250;
			minRangeProbab = 0.2;
			midRange = 750;
			midRangeProbab = 0.69999999;
			maxRange = 1000;
			maxRangeProbab = 0.40000001;
			aiRateOfFire = 0.4;
			aiRateOfFireDistance = 700;
			aiRateOfFireDispersion = 3;
		};
		class far : close
		{
			minRange = 500;
			minRangeProbab = 0.2;
			midRange = 1200;
			midRangeProbab = 0.69999999;
			maxRange = 2100;
			maxRangeProbab = 0.30000001;
			aiRateOfFire = 0.4;
			aiRateOfFireDistance = 1000;
			aiRateOfFireDispersion = 3;
		};
	};
};

class CfgVehicles
 {
	class Land;
	class LandVehicle : Land
	{
		class ViewPilot;
		class ViewGunner;
		class NewTurret;
	};
	class Tank : LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F : Tank
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds : Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class 3AS_AAT_base_F : Tank_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
					};
				};
			};
		};
	};
	class 3AS_Advanced_DSD_Base : 3AS_AAT_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{

				};
			};
		};
	};
	class 3AS_Advanced_DSD : 3AS_Advanced_DSD_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{

				};
			};
		};
	};
	
    class MACRO_NEW_VEHICLE(Land,CIS,ADSD): 3AS_Advanced_DSD
    {
        displayName = "ADSD *Test*";
        scope = 2;
		scopeCurator = 2;
		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_TANK";
		crew = "ORG_aux_cisb1crew_unit_ORG_CIS_B1_Crew";

		armor = 1500;
		armorStructural = 6;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] =
				{
				  MACRO_NEW_WEAPON(ADSD_Cannon)
				};
				magazines[] =
				{
				  MACRO_NEW_MAG(ADSD_AP,24),
				  MACRO_NEW_MAG(ADSD_AP,24),
				  MACRO_NEW_MAG(ADSD_AP,24),
				  MACRO_NEW_MAG(ADSD_AP,24),
				  MACRO_NEW_MAG(ADSD_AP,24),
				  MACRO_NEW_MAG(ADSD_AP,24)
				};
				class Turrets : Turrets
				{

				};
			};
		};

		soundGetIn[] =
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234097,
			1
		};
		soundGetOut[] =
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234097,
			1,
			20
		};
		soundDammage[] =
		{
			"",
			0.56234097,
			1
		};
		soundEngineOnInt[] =
		{
			"3as\3as_saber\Sounds\tx130startin.ogg",
			3,
			1
		};
		soundEngineOnExt[] =
		{
			"3as\3as_saber\Sounds\tx130startex.ogg",
			4,
			1,
			200
		};
		soundEngineOffInt[] =
		{
			"3as\3as_saber\Sounds\tx130stopin.ogg",
			3,
			1
		};
		soundEngineOffExt[] =
		{
			"3as\3as_saber\Sounds\tx130stopex.ogg",
			4,
			1,
			200
		};
		buildCrash0[] =
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		buildCrash1[] =
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		buildCrash2[] =
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		buildCrash3[] =
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundBuildingCrash[] =
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[] =
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		WoodCrash1[] =
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		WoodCrash2[] =
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		WoodCrash3[] =
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		WoodCrash4[] =
		{
			"A3\sounds_f\Vehicles\crashes\crash_01",
			1,
			1,
			200
		};
		WoodCrash5[] =
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		soundWoodCrash[] =
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[] =
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		ArmorCrash1[] =
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		ArmorCrash2[] =
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		ArmorCrash3[] =
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundArmorCrash[] =
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idle.ogg",
					1,
					1,
					1750
				};
				frequency = "0.95 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class Engine
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idle.ogg",
					1.1,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_ext
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idle.ogg",
					1.4,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_ext
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idle.ogg",
					1.5,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_ext
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idle.ogg",
					1.5,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_ext
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idle.ogg",
					1.5,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_ext
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idle.ogg",
					1.5,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*camPos*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class IdleThrust
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idle.ogg",
					2.8,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class EngineThrust
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idle.ogg",
					1.5,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idle.ogg",
					1.5,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idle.ogg",
					1.5,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idle.ogg",
					1.5,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idle.ogg",
					1.5,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idle.ogg",
					1.5,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class Idle_int
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idlein.ogg",
					1.5,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class Engine_int
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idlein.ogg",
					1,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_int
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idlein.ogg",
					1,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_int
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idlein.ogg",
					1,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_int
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idlein.ogg",
					1,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_int
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idlein.ogg",
					1.1,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_int
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idlein.ogg",
					1.25,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class IdleThrust_int
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idlein.ogg",
					1.25,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class EngineThrust_int
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idlein.ogg",
					1,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idlein.ogg",
					1,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idlein.ogg",
					1,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idlein.ogg",
					2,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idlein.ogg",
					2.24404,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] =
				{
					"3as\3as_saber\Sounds\tx130idlein.ogg",
					2.5178499,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class NoiseInt
			{
				sound[] =
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					0.50118703,
					1
				};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] =
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					0.89125103,
					1,
					50
				};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] =
				{
					"",
					0.39810699,
					1,
					140
				};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsOutH1
			{
				sound[] =
				{
					"",
					0.446684,
					1,
					160
				};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsOutH2
			{
				sound[] =
				{
					"",
					0.50118703,
					1,
					180
				};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsOutH3
			{
				sound[] =
				{
					"",
					0.56234097,
					1,
					200
				};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsOutH4
			{
				sound[] =
				{
					"",
					0.56234097,
					1,
					220
				};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsOutS0
			{
				sound[] =
				{
					"",
					0.316228,
					1,
					120
				};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsOutS1
			{
				sound[] =
				{
					"",
					0.35481301,
					1,
					140
				};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsOutS2
			{
				sound[] =
				{
					"",
					0.39810699,
					1,
					160
				};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsOutS3
			{
				sound[] =
				{
					"",
					0.446684,
					1,
					180
				};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsOutS4
			{
				sound[] =
				{
					"",
					0.50118703,
					1,
					200
				};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsInH0
			{
				sound[] =
				{
					"",
					0.25118899,
					1
				};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsInH1
			{
				sound[] =
				{
					"",
					0.281838,
					1
				};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsInH2
			{
				sound[] =
				{
					"",
					0.316228,
					1
				};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsInH3
			{
				sound[] =
				{
					"",
					0.35481301,
					1
				};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsInH4
			{
				sound[] =
				{
					"",
					0.39810699,
					1
				};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsInS0
			{
				sound[] =
				{
					"",
					0.316228,
					1
				};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsInS1
			{
				sound[] =
				{
					"",
					0.316228,
					1
				};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsInS2
			{
				sound[] =
				{
					"",
					0.35481301,
					1
				};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsInS3
			{
				sound[] =
				{
					"",
					0.35481301,
					1
				};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsInS4
			{
				sound[] =
				{
					"",
					0.39810699,
					1
				};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
		};
	};
};

class CfgFunctions
{
	class AuxORG_ADSD
	{
		class ADSD_Death
		{
			file = "\ORG_vehicles\land\ADSD";
			class Killed
			{
			};
		};
	};
};

class Extended_Killed_EventHandlers
{
	class MACRO_NEW_VEHICLE(Land,CIS,ADSD)
	{
		AuxORG_NoSim = "[_this select 0, _this select 1, _this select 2, _this select 3] call AuxORG_ADSD_fnc_Killed;";
	};
};