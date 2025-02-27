#include "../../ORG_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(Shotguns)
	{
		author = "ORG Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			"A3_Data_F",
		    "A3_Weapons_F",
			"JLTS_weapons_DP23",
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(DP_23)
		};
	};
};


class CfgFunctions
{
	class AuxORG
	{
		class DP_23Sounds
		{
			file = "\ORG_weapons\DP-23";
			class Fired_DP23_Sound
			{
			};
		};
	};
};

class CfgSounds
{
	sounds[] = {};
	class DP23_Bolt_Sound
	{
		name = "DP23-Bolt-Sound";
		sound[] = { "\sounds\DP-23Bolt.ogg", db + 250, 1.0, 20 };
	};
};


class Mode_SemiAuto;
class Mode_FullAuto;
class BaseSoundModeType;
class cfgWeapons
{
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    }
    class JLTS_DP23: arifle_MX_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {

            class PointerSlot;
        }
    }
	class JLTS_stun_muzzle;
    class MACRO_NEW_WEAPON(DP_23): JLTS_DP23
    {
		scope=2;
	    displayName=MACRO_WEAPON_DISPLAYNAME(DP-23 Shotgun [Rifleman])
		reloadTime=0.20;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_smg_03";
		recoilprone="recoil_smg_03";
		cursor="ORG_DOT";
        cursoraim="ORG_Shotgun";
		canShootInWater=1;
		baseweapon="";
		handling="2";
		modes[]=  {
		    "Single"
		};
		
        modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};

		magazines[] = {
			MACRO_NEW_MAG(DP23,12),
			MACRO_NEW_MAG(DP23,12Wide)
		};
	
		class ORGStun: JLTS_stun_muzzle
		{
	       magazines[]=
		   {
		  	MACRO_NEW_MAG(Stun,10)
		   };
		   magazineWell[]={};
		   cursoraim="ORG_Stun";
		   cursor="ORG_DOT"
		};
		muzzles[]=
		{
			"this",
			"ORGStun"
		};

        class OpticsModes
        {
            class sight
            {
                opticsID=2;
                useModelOptics=0;
                opticsPPEffects[]=
                {
                    "OpticsCHAbera5",
                    "OpticsBlur5"
                };
                opticsDisablePeripherialVision=0.67000002;
                opticsZoomMin=0.375;
                opticsZoomMax=0.9; //1.1
                opticsZoomInit=0.600;
                discreteInitIndex=0;
                distanceZoomMin=100;
                distanceZoomMax=700;
                discreteDistance[]={100,200,300,400,500,600,700};
                discreteDistanceInitIndex=0;
                memoryPointCamera="eye";
                visionMode[]={};
                opticsFlare="true";
                cameraDir="";
            };
        };

		// magazines[]=
		// {
		// 	"ORG_Shotgun_blue"
		// };

        class Single: Mode_SemiAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ORG_DP23_Shot_SoundSet","ORG_Sniper_Tail_SoundSet"};
			};
			sounds[] = {"StandardSound"};
			reloadTime=0.7;
			dispersion=0.00000000000000000000045;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=1;
			aiRateOfFireDistance=25;
		};


        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
		};

		class EventHandlers
		{
			fired = "[_this select 0, _this select 1, _this select 1, _this select 2] spawn AuxORG_fnc_Fired_DP23_Sound;";
		};
				
	};
}

class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;

	
	class MACRO_NEW_MAG(DP23,12): 30rnd_762x39_AK12_Mag_F //DP-23
	{
		scope=2;
		displayName=MACRO_AMMO_DISPLAYNAME(DP23 Charge Tight Spread,15)
		ammo=MACRO_NEW_AMMO(DP23_Shell);
		count=15;
		mass=10;
		initspeed=1300;
	};

	class MACRO_NEW_MAG(DP23,12Wide): 30rnd_762x39_AK12_Mag_F //DP-23
	{
		scope=2;
		displayName=MACRO_AMMO_DISPLAYNAME(DP23 Charge Wide Spread,15)
		ammo=MACRO_NEW_AMMO(DP23_Shell_Wide);
		count=15;
		mass=10;
		initspeed=1300;
	};
}

class CfgAmmo
{
	//ls_ammo_shotgun_blue
	class B_12Gauge_Pellets_Submunition;
	class B_12Gauge_Pellets_Submunition_Deploy;

	//Have fun reading :)
	//https://community.bistudio.com/wiki/Arma_3:_Weapon_Config_Guidelines#Ammo_changes_on_fly_and_on_hit
	class MACRO_NEW_AMMO(DP23_Shell): B_12Gauge_Pellets_Submunition
	{
		submunitionAmmo = MACRO_NEW_AMMO(DP23_Pellet);
		submunitionConeAngle = 0.3;
		submunitionConeType[] = {"poissondisc",12};

		model = "ls_weapons_core\Effects\laser_blue.p3d";
		effectfly = "ORG_mainRound_effects";
		ExplosionEffects = "ls_plasma_impact";

		indirectHit = 0;
		indirectHitRange = 0;

		explosive = 0;
		fuseDistance = 0;
		grenadeBurningSound[] = {};
		grenadeFireSound[] = {};
		hit = 30;
		caliber = 1;

		thrust = 210;
		thrustTime = 1.5;
		timeToLive = 6;
		triggerDistance = 0;
		typicalSpeed = 900;
		class HitEffects
		{
			Hit_Foliage_green = "3AS_ImpactPlasma";
			Hit_Foliage_Dead = "3AS_ImpactPlasma";
			Hit_Foliage_Green_big = "3AS_ImpactPlasma";
			Hit_Foliage_Palm = "3AS_ImpactPlasma";
			Hit_Foliage_Pine = "3AS_ImpactPlasma";
			hitFoliage = "3AS_ImpactPlasma";
			hitGlass = "3AS_ImpactPlasma";
			hitGlassArmored = "3AS_ImpactPlasma";
			hitWood = "3AS_ImpactPlasma";
			hitMetal = "3AS_ImpactPlasma";
			hitMetalPlate = "3AS_ImpactPlasma";
			hitBuilding = "3AS_ImpactPlasma";
			hitPlastic = "3AS_ImpactPlasma";
			hitRubber = "3AS_ImpactPlasma";
			hitTyre = "3AS_ImpactPlasma";
			hitConcrete = "3AS_ImpactPlasma";
			hitMan = "3AS_ImpactPlasma";
			hitGroundSoft = "3AS_ImpactPlasma";
			hitGroundRed = "3AS_ImpactPlasma";
			hitGroundHard = "3AS_ImpactPlasma";
			hitWater = "3AS_ImpactPlasma";
			hitVirtual = "3AS_ImpactPlasma";
			default_mat = "3AS_ImpactPlasma";
		};
	}

	class MACRO_NEW_AMMO(DP23_Shell_Wide): B_12Gauge_Pellets_Submunition
	{
		submunitionAmmo = MACRO_NEW_AMMO(DP23_Pellet);
		submunitionConeAngle = 3;
		submunitionConeAngleHorizontal=40;
		submunitionConeType[] = {"poissondisc",12};
		hit = 15;
		triggerDistance = 0;
		class HitEffects
		{
			Hit_Foliage_green = "3AS_ImpactPlasma";
			Hit_Foliage_Dead = "3AS_ImpactPlasma";
			Hit_Foliage_Green_big = "3AS_ImpactPlasma";
			Hit_Foliage_Palm = "3AS_ImpactPlasma";
			Hit_Foliage_Pine = "3AS_ImpactPlasma";
			hitFoliage = "3AS_ImpactPlasma";
			hitGlass = "3AS_ImpactPlasma";
			hitGlassArmored = "3AS_ImpactPlasma";
			hitWood = "3AS_ImpactPlasma";
			hitMetal = "3AS_ImpactPlasma";
			hitMetalPlate = "3AS_ImpactPlasma";
			hitBuilding = "3AS_ImpactPlasma";
			hitPlastic = "3AS_ImpactPlasma";
			hitRubber = "3AS_ImpactPlasma";
			hitTyre = "3AS_ImpactPlasma";
			hitConcrete = "3AS_ImpactPlasma";
			hitMan = "3AS_ImpactPlasma";
			hitGroundSoft = "3AS_ImpactPlasma";
			hitGroundRed = "3AS_ImpactPlasma";
			hitGroundHard = "3AS_ImpactPlasma";
			hitWater = "3AS_ImpactPlasma";
			hitVirtual = "3AS_ImpactPlasma";
			default_mat = "3AS_ImpactPlasma";
		};
	}

	class MACRO_NEW_AMMO(DP23_Pellet): B_12Gauge_Pellets_Submunition_Deploy
	{
		hit = 15;
		caliber = 1;
		typicalSpeed = 360;
		triggerDistance = 0;
		effectfly = "ORG_mainRound_effects";
		ExplosionEffects = "ls_plasma_impact";
		model = "ls_weapons_core\Effects\laser_blue.p3d";
		class HitEffects
		{
			Hit_Foliage_green = "3AS_ImpactPlasma";
			Hit_Foliage_Dead = "3AS_ImpactPlasma";
			Hit_Foliage_Green_big = "3AS_ImpactPlasma";
			Hit_Foliage_Palm = "3AS_ImpactPlasma";
			Hit_Foliage_Pine = "3AS_ImpactPlasma";
			hitFoliage = "3AS_ImpactPlasma";
			hitGlass = "3AS_ImpactPlasma";
			hitGlassArmored = "3AS_ImpactPlasma";
			hitWood = "3AS_ImpactPlasma";
			hitMetal = "3AS_ImpactPlasma";
			hitMetalPlate = "3AS_ImpactPlasma";
			hitBuilding = "3AS_ImpactPlasma";
			hitPlastic = "3AS_ImpactPlasma";
			hitRubber = "3AS_ImpactPlasma";
			hitTyre = "3AS_ImpactPlasma";
			hitConcrete = "3AS_ImpactPlasma";
			hitMan = "3AS_ImpactPlasma";
			hitGroundSoft = "3AS_ImpactPlasma";
			hitGroundRed = "3AS_ImpactPlasma";
			hitGroundHard = "3AS_ImpactPlasma";
			hitWater = "3AS_ImpactPlasma";
			hitVirtual = "3AS_ImpactPlasma";
			default_mat = "3AS_ImpactPlasma";
		};
	}
}
