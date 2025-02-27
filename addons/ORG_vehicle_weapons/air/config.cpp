#include "..\..\ORG_main\macros\main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(air_weapons)
	{
		author = "Namenai";
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgAmmo
{   
    class ls_50mm_laat_he;
	class MACRO_NEW_AMMO(ARCLow): ls_50mm_laat_he
	{
		model="SWLW_main\Effects\laser_green.p3d";
		effectfly="ORG_aux_effects_green_tracer_AVI";
		 soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",5,2,1000};
		flaresize=10;
		caliber=8;
		tracersEvery = 1;
		hit = 640;
		indirectHit = 25;
		mass=1;
		indirectHitRange = 1.5;
		tracerscale=2;
	};
	
	class ls_50mm_laat_apfsds;
	class MACRO_NEW_AMMO(LAAT_40mm): ls_50mm_laat_apfsds
	{
		model="SWLW_main\Effects\laser_green.p3d";
		effectfly="ORG_aux_effects_green_tracer_AVI";
		soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",5,2,500};
		flaresize=10;
		caliber=8;
		explosionEffects = "ATRocketExplosion";
		tracersEvery = 1;
		hit = 640;
		indirectHit = 12;
		mass=2;
		indirectHitRange = 4;
		tracerscale=2;
	};
	
	class MACRO_NEW_AMMO(ARCHigh): ls_50mm_laat_he
	{
		flaresize=20;
		class CamShakeFire
		{
			power = 30;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 10;
			duration = 0.3;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 100;
			duration = 1;
			frequency = 20;
		};
		ExplosionEffects = "ATRocketExplosion";
		soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",10,0.95,2000}; //Volume,Pitch,Distance
		hit=12000;
		caliber=15;
		mass=1;
		tracerScale = 15;
		indirectHit = 4500;
		indirectHitRange = 5;
	};
	
	class M_Titan_AT_long;
	class MACRO_NEW_AMMO(RX_200_ATGM): M_Titan_AT_long
	{
		soundFly[]=
			{
				"swlw_rework\sounds\launcher\E60R_fly.wss",
				5,
				5,
				1000
			};
		manualcontrol=1;
		caliber=5;
		effectsMissile = "ORG_aux_effects_missile_plx_blue";
		hit=200;
		thrusttime = 12;
		indirectHit = 35;
		indirectHitRange = 3;
	};
	class ls_50mm_apfsds;
	class MACRO_NEW_AMMO(Nu_20mm): ls_50mm_laat_he
	{
		model="SWLW_main\Effects\laser_blue.p3d";
		soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",0,1,1};
		flaresize=4;
		effectfly="ORG_aux_effects_blue_tracer_AVI";
		caliber=3;
		tracersEvery = 1;
		hit=230;
		explosionEffects = "ImpactPlasmaExpBlue";
		indirectHit =6;
		mass=2;
		indirectHitRange = 0.5;
		tracerscale=2;
	};
	class MACRO_NEW_AMMO(Air_25mm): ls_50mm_laat_he
	{
		model="SWLW_main\Effects\laser_blue.p3d";
		soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",0,1,1};
		flaresize=4;
		effectfly="ORG_aux_effects_blue_tracer_AVI";
		caliber=8;
		tracersEvery = 1;
		hit=275;
		explosionEffects = "ImpactPlasmaExpBlue";
		indirectHit =12;
		mass=1;
		indirectHitRange = 1.5;
		tracerscale=2;
	};
	class MACRO_NEW_AMMO(Vulture_30mm): ls_50mm_laat_he
	{
		model="SWLW_main\Effects\laser_red.p3d";
		soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",0,1,1};
		flaresize=4;
		caliber=3;
		maxLeadSpeed = 2000;
		allowAgainstInfantry=1;
		tracersEvery = 1;
		cost = 30;
		hit=120;
		explosionEffects = "ATRocketExplosion";
		indirectHit =6;
		mass=2;
		indirectHitRange = 0.1;
		tracerscale=2;
	};
	class MACRO_NEW_AMMO(LE_30mm): ls_50mm_laat_he
	{
		model="SWLW_main\Effects\laser_green.p3d";
		soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",0,1,1};
		flaresize=4;
		effectfly="ORG_aux_effects_green_tracer_AVI";
		caliber=5;
		tracersEvery = 1;
		hit=750;
		explosionEffects = "ImpactPlasmaExpgreen";
		indirectHit =50;
		mass=2;
		indirectHitRange = 4;
		tracerscale=2;
	};
	class MACRO_NEW_AMMO(Z95_30mm): ls_50mm_laat_he
	{
		model="SWLW_main\Effects\laser_blue.p3d";
		soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",0,1,1};
		flaresize=4;
		effectfly="ORG_aux_effects_blue_tracer_AVI";
		caliber=8;
		tracersEvery = 1;
		hit=650;
		explosionEffects = "ImpactPlasmaExpBlue";
		indirectHit =25;
		mass=2;
		indirectHitRange = 2.5;
		tracerscale=2;
	};
	class MACRO_NEW_AMMO(Ywing_30mm): ls_50mm_laat_he
	{
		model="SWLW_main\Effects\laser_blue.p3d";
		soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",0,1,1};
		flaresize=4;
		caliber=8;
		tracersEvery = 1;
		hit=1000;
		explosionEffects = "ATRocketExplosion";
		indirectHit =40;
		mass=2;
		indirectHitRange =3;
		tracerscale=2;
	};
	class MACRO_NEW_AMMO(Nu_75mm_he): ls_50mm_laat_he
	{
		model="SWLW_main\Effects\laser_green.p3d";
		effectfly="ORG_aux_effects_RPS4_green";
		soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",2,1,500};
		flaresize=10;
		caliber = 10;
		tracersEvery = 1;
		hit = 650;
		explosionEffects = "ATRocketExplosion";
		indirectHit = 26;
		mass=2;
		indirectHitRange = 4.2;
		tracerscale=2;
	};
	class Rocket_03_HE_F;
    class MACRO_NEW_AMMO(Shrieker_Rocket): Rocket_03_HE_F
    {
		caliber = 2;
		hit = 610;
		indirectHit = 55;
		indirectHitRange = 15;
		flaresize=10;
		proxyShape = "";
		thrustTime = 5;
		soundfly[]=
		{	
			"ORG_weapons\sounds\weapons\flight\RocketEngine.wss",
			1,
			1.5,
			200
		};
		manualcontrol=0;
		effectsMissile = "ORG_aux_effects_missile_Rocket_Purple";
    };
	class CMflareAmmo;
	class MACRO_NEW_AMMO(CM_FLARE): CMflareAmmo
    {
		flaresize=5;
    };

	class 3AS_Vulture_Rocket_HEAP;
	class MACRO_NEW_AMMO(Vulture_Rocket) : 3AS_Vulture_Rocket_HEAP
	{
		cost = 50;
		hit = 15;
		indirectHit = 5;
		indirectHitRange = 10;
	};
};
	



class CfgMagazines
{
	class 1000Rnd_25mm_shells;
	class MACRO_NEW_MAG(ARC170_High,16): 1000Rnd_25mm_shells
	{
		displayName="ARC-170 High Cannon";
		ammo=MACRO_NEW_AMMO(ARCHigh)
		initSpeed = 800;
		tracersEvery = 1;
		count=16;
	};
	class MACRO_NEW_MAG(ARC170_Low,600): 1000Rnd_25mm_shells
	{
		displayName=MACRO_AMMO_DISPLAYNAME(ARC LOW)
		descriptionshort="ARC High Energy";
		initSpeed = 600;
		displayNameShort="High Energy";
		ammo=MACRO_NEW_AMMO(ARCLow)
		tracersEvery = 1;
		count=600;
	}
	class MACRO_NEW_MAG(LAAT_40mm,600): 1000Rnd_25mm_shells
	{
		displayName=MACRO_AMMO_DISPLAYNAME(ARC LOW)
		descriptionshort="ARC High Energy";
		initSpeed = 1000;
		displayNameShort="LAAT Nose Gun";
		ammo=MACRO_NEW_AMMO(LAAT_40mm)
		tracersEvery = 1;
		count=600;
	}
	class MACRO_NEW_MAG(Vulture_30mm,1000): 1000Rnd_25mm_shells
	{
		displayName=MACRO_AMMO_DISPLAYNAME(ARC LOW)
		descriptionshort="Vulture main cannon";
		initSpeed = 800;
		displayNameShort="High Energy";
		ammo=MACRO_NEW_AMMO(Vulture_30mm)
		tracersEvery = 1;
		count=1000;
	}
	class MACRO_NEW_MAG(Nu_20mm,2400): 1000Rnd_25mm_shells
	{
		displayName=MACRO_AMMO_DISPLAYNAME(Nu 20mm)
		descriptionshort="20mm";
		initSpeed = 1500;
		displayNameShort="20mm test";
		ammo=MACRO_NEW_AMMO(Nu_20mm)
		tracersEvery = 1;
		count=2400;
	};
	class MACRO_NEW_MAG(V19_25mm,1600): 1000Rnd_25mm_shells
	{
		displayName=MACRO_AMMO_DISPLAYNAME(Nu 20mm)
		descriptionshort="25mm";
		initSpeed = 500;
		displayNameShort="25mm Autocannon";
		ammo=MACRO_NEW_AMMO(Air_25mm)
		tracersEvery = 1;
		count=1600;
	};
	class MACRO_NEW_MAG(Z95_30mm,1000): 1000Rnd_25mm_shells
	{
		displayName="Z-95 30mm";
		descriptionshort="30mm";
		initSpeed = 1100;
		displayNameShort="30mm Nose";
		ammo=MACRO_NEW_AMMO(Z95_30mm)
		tracersEvery = 1;
		count=1200;
	};
	class MACRO_NEW_MAG(Ywing_30mm,1200): 1000Rnd_25mm_shells
	{
		displayName="YWing 30mm";
		descriptionshort="30mm";
		initSpeed = 800;
		displayNameShort="30mm Nose";
		ammo=MACRO_NEW_AMMO(Ywing_30mm)
		tracersEvery = 1;
		count=1000;
	};

	class MACRO_NEW_MAG(LE_30mm,600): 1000Rnd_25mm_shells
	{
		displayName=MACRO_AMMO_DISPLAYNAME(Nu 20mm)
		descriptionshort="20mm";
		initSpeed = 1000;
		displayNameShort="20mm test";
		ammo=MACRO_NEW_AMMO(LE_30mm)
		tracersEvery = 1;
		count=600;
	};
	class MACRO_NEW_MAG(Nu_75mm,80): 1000Rnd_25mm_shells
	{
		displayName=MACRO_AMMO_DISPLAYNAME(ARC LOW)
		descriptionshort="75mm";
		initSpeed = 1000;
		displayNameShort="75mm test";
		ammo=MACRO_NEW_AMMO(Nu_75mm_he)
		tracersEvery = 1;
		count=80;
	};
	class MACRO_NEW_MAG(DC_15L,125);
	class MACRO_NEW_MAG(15L,500): MACRO_NEW_MAG(DC_15L,125)
	{
		displayName=MACRO_AMMO_DISPLAYNAME(Direct Energy HEDP,100)
		descriptionshort="Concentrated Medium";
		initSpeed = 1500;
		scope=1;
		count=500;
	};
	class 2Rnd_GAT_missiles_O;
	class MACRO_NEW_MAG(ATGM,2): 2Rnd_GAT_missiles_O
	{
		displayName=MACRO_AMMO_DISPLAYNAME(Concussion AT Missile,2)
		ammo = MACRO_NEW_AMMO(RX_200_ATGM)
		descriptionshort="Concussion AT Missile";
		displayNameShort="Concussion Missile";
		scope=1;
		count=2;
	};
	class 24Rnd_missiles;
	class MACRO_NEW_MAG(Air_Dumb_rocket,24): 24Rnd_missiles
	{
		displayName=MACRO_AMMO_DISPLAYNAME(Shrieker 24rnd);
		ammo="ORG_aux_ammo_Shrieker_Rocket";
		descriptionshort="Shrieker";
		displayNameShort="Shrieker";
		scope=1;
		count=24;
	};
	class magazine_Bomb_GBU12_x1;
	class MACRO_NEW_MAG(Ywing_Plasma,20): magazine_Bomb_GBU12_x1
	{
		displayName=MACRO_AMMO_DISPLAYNAME(Plasma Bomb)
		ammo=MACRO_NEW_AMMO(Plasma_Bomb)
		descriptionshort="Plasma Bomb";
		displayNameShort="Plasma Bomb";
		scope=1;
		count=20;
	};
	class 120Rnd_CMFlare_Chaff_Magazine;
	class MACRO_NEW_MAG(ORG_CM_Flare,120): 120Rnd_CMFlare_Chaff_Magazine
	{
		ammo=MACRO_NEW_AMMO(CM_FLARE)
		scope=1;
		count=120;
	};

	class 3AS_PylonRack_Vulture_12Rnd_Rocket_HEAP;
	class MACRO_NEW_MAG(Vulture_Rocket_Pylon,12) : 3AS_PylonRack_Vulture_12Rnd_Rocket_HEAP
	{
		ammo = MACRO_NEW_AMMO(Vulture_Rocket)
		scope = 1;
		pylonWeapon = "ORG_aux_weapon_Vulture_Rocket";
	};
	class MACRO_NEW_MAG(Vulture_Rocket,12) : 3AS_PylonRack_Vulture_12Rnd_Rocket_HEAP
	{
		ammo = MACRO_NEW_AMMO(Vulture_Rocket)
		scope = 1;
	};
};

class LowROF;
class player;
class manual;
class CfgWeapons
{
	class Cannon_30mm_Plane_CAS_02_F;
	class MACRO_NEW_WEAPON(ARC_Low): Cannon_30mm_Plane_CAS_02_F
	{
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(ARC170_Low,600)
		};
		ballisticsComputer = 4;	
		modes[] = {"manual"};
		displayName = "Cannon Low Energy";
		class manual: LowROF
		{
			displayname="Full";
			burst=1;
			magazineReloadTime=4;
			autoReload=1;
			reloadTime=0.12;
			dispersion=0.00005;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"swlg_clones_tanks\tx130\data\sounds\Saber_heavy_shot.wss",
					2,
					3,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};
	class MACRO_NEW_WEAPON(ARC_High): Cannon_30mm_Plane_CAS_02_F
	{
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(ARC170_High,16)
		};
		modes[] = {"manual"};
		displayName = "Cannon High Energy";
		class manual: LowROF
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"swlg_clones_tanks\tx130\data\sounds\Saber_heavy_shot.wss",
					5,
					1.2,
					6000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			burst=1;
			multiplier=1;
			soundContinuous=0;
			reloadTime=0.5;
			magazineReloadTime=6;
			autoReload=1;
			autoFire=0;
			dispersion=0.00056999997;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
	};
	class MGun;
	class ls_laat_gun;
	class MACRO_NEW_WEAPON(LAAT_40mm): ls_laat_gun
	{
	   	magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(LAAT_40mm,600)
		};
		ballisticsComputer = 1;
		FCSMaxLeadSpeed = 100.5556;
		FCSZeroingDelay = 0.2;
		displayName = "LAAT 40mm";
		modes[] = {"FullAuto","Burst","close","short","medium"};
		class GunParticles
		{
		};
		class FullAuto:  MGun
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"ORG_vehicle_weapons\air\sounds\LAAT_Nose.wss",
					1,
					1,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.1375;
			dispersion=0;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.050000001;
		};
		class Burst:  FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"ORG_vehicle_weapons\air\sounds\LAAT_Nose.wss",
					1,
					1,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			textureType="fastAuto";
			reloadTime=0.02;
			dispersion=0;
			Burst=10;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.050000001;
			
		};
		class close: FullAuto
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};
		



	class MACRO_NEW_WEAPON(Nu_20mm): Cannon_30mm_Plane_CAS_02_F
	{
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(Nu_20mm,2400)
		};
		modes[] = {"manual"};
		ballisticsComputer = 1;
		displayName = "Nu Point defence";
		class manual: LowROF
		{
			displayname="Full";
			burst=1;
			magazineReloadTime=6;
			autoReload=1;
			reloadTime=0.05;
			dispersion=0.002;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"swlg_clones_tanks\tx130\data\sounds\Saber_heavy_shot.wss",
					1,
					3,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};

	class MACRO_NEW_WEAPON(V19_25mm): Cannon_30mm_Plane_CAS_02_F
	{
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(V19_25mm,1600)
		};
		modes[] = {"manual","close","short","medium"};
		ballisticsComputer = 1;	
		displayName = "V19 Main Lasers";
		class manual: LowROF
		{
			displayname="Full";
			burst=1;
			magazineReloadTime=6;
			autoReload=1;
			reloadTime=0.08;
			dispersion=0.002;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"ORG_vehicle_weapons\air\sounds\Z-95_Cannon.wss",
					1.5,
					1,
					6000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};

	class MACRO_NEW_WEAPON(Vulture_cannon): Cannon_30mm_Plane_CAS_02_F
	{
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(Vulture_30mm,1000)
		};
		modes[] = {"manual","close","short","medium"};
		ballisticsComputer = 1;
		displayName = "Vulture Main Cannon";
		class manual: LowROF
		{
			displayname="Full";
			burst=1;
			magazineReloadTime=6;
			autoReload=1;
			reloadTime=0.1;
			dispersion=0.002;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"ORG_vehicle_weapons\air\sounds\Vulture_Cannon.wss",
					1.5,
					0.95,
					6000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class close: manual
		{
		    aiDispersionCoefX=2.0
			aiDispersionCoefY=2.0
			burst=50;
			aiRateOfFire=0.1;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
		    aiDispersionCoefX=2.0
			aiDispersionCoefY=2.0
			burst=30;
			aiRateOfFire=0.1;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
		    aiDispersionCoefX=2.0
			aiDispersionCoefY=2.0
			burst=30;
			aiRateOfFire=0.1;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=2000;
			maxRangeProbab=0.1;
		};
	};

	class MACRO_NEW_WEAPON(LE_30mm): Cannon_30mm_Plane_CAS_02_F
	{
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(LE_30mm,600)
		};
		modes[] = {"manual"};
		ballisticsComputer = 1;
		displayName = "LE 30mm cannon";
		class manual: LowROF
		{
			displayname="Full";
			burst=1;
			magazineReloadTime=6;
			autoReload=1;
			reloadTime=0.25;
			dispersion=0.0002;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"ORG_vehicle_weapons\air\sounds\30mm.wss",
					1,
					1,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};

	class MACRO_NEW_WEAPON(Z95_30mm): Cannon_30mm_Plane_CAS_02_F
	{
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(Z95_30mm,1000)
		};
		modes[] = {"manual"};
		ballisticsComputer = 4;	
		displayName = "Z95 30mm cannon";
		class manual: LowROF
		{
			displayname="Full";
			burst=1;
			magazineReloadTime=6;
			autoReload=1;
			reloadTime=0.08;
			dispersion=0.00002;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"ORG_vehicle_weapons\air\sounds\Z-95_Cannon.wss",
					2,
					0.95,
					6000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};

	class MACRO_NEW_WEAPON(Y_wing_Turret): Cannon_30mm_Plane_CAS_02_F
	{
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(Z95_30mm,1000)
		};
		modes[] = {"manual"};
		ballisticsComputer = 4;	
		displayName = "Z95 30mm cannon";
		class manual: LowROF
		{
			displayname="Full";
			burst=1;
			magazineReloadTime=6;
			autoReload=1;
			reloadTime=0.06;
			dispersion=0.00002;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"ORG_vehicle_weapons\air\sounds\Z-95_Cannon.wss",
					2,
					0.7,
					6000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};

	class MACRO_NEW_WEAPON(YWing_30mm): Cannon_30mm_Plane_CAS_02_F
	{
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(Ywing_30mm,1200)
		};
		modes[] = {"manual"};
		ballisticsComputer = 4;	
		displayName = "Z95 30mm cannon";
		class manual: LowROF
		{
			displayname="Full";
			burst=5;
			magazineReloadTime=6;
			autoReload=1;
			reloadTime=0.025;
			dispersion=0.02;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"ORG_vehicle_weapons\air\sounds\Z-95_Cannon.wss",
					2,
					0.95,
					6000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class close: manual
		{
			burst=50;
			aiRateOfFire=0.06;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=0.06;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=10;
			aiRateOfFire=0.06;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};

	class MACRO_NEW_WEAPON(Nu_75mm): Cannon_30mm_Plane_CAS_02_F
	{
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(Nu_75mm,80)
		};
		modes[] = {"manual"};
		ballisticsComputer="1";
		displayName = "Cannon Low Energy";
		canLock = 2; // Always locks
		class manual: LowROF
		{
			magazineReloadTime = 2;
			displayname="Full";
			burst=1;
			magazineReloadTime=6;
			autoReload=1;
			reloadTime=0.25;
			dispersion=0.00005;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"ORG_vehicle_weapons\air\sounds\ARC_170Cannon.wss",
					2,
					1,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};
	
	class MissileLauncher;
	class missiles_DAR;
	class Burst;
	class MACRO_NEW_WEAPON(air_dumb_rocketpod): missiles_DAR
	{
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(Air_Dumb_rocket,24)
		};
		modes[] = {"Far_AI","Medium_AI","Burst"};
		displayName = "Shrieker Dumb-Fire";
		class Burst: Burst
		{
			magazineReloadTime = 2;
			displayname="Full";
			burst=1;
			magazineReloadTime=6;
			autoReload=1;
			reloadTime=0.35;
			dispersion=0.00005;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"ORG_vehicle_weapons\air\sounds\Dumb_Rocket.wss",
					2,
					1,
					4000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};
	class CMFlareLauncher;
	class MACRO_NEW_WEAPON(CM_Flare): CMFlareLauncher
	{
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(ORG_CM_Flare,120)
		};
		displayName = "CM Flares";
	};

    class LMG_coax_ext;
	class MACRO_NEW_WEAPON(RX200_15L): LMG_coax_ext
	{
		muzzles[] = {"this"};
		magazineWell[] = {};
		magazines[] = {
             MACRO_NEW_MAG(15L,500)
		};
		displayName = "15L Coaxial";
		class manual: manual
		{
			magazineReloadTime = 2;
			displayname="Full";
			reloadTime=0.10;
			dispersion=0.00005;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"MRC\JLTS\weapons\DC15X\sounds\dc15x_fire",
					8,
					1.35,
					2500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};
	class missiles_titan;
	class MACRO_NEW_WEAPON(RX200_ATGM): missiles_titan
	{
		muzzles[] = {"this"};
		magazineWell[] = {};
		magazines[] = {
            MACRO_NEW_MAG(ATGM,2)
		};
		displayName = "Concussion Missiles";
		class player: player
		{
			magazineReloadTime = 10;
			displayname="Full";
			reloadTime=0.10;
			dispersion=0.00005;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"swlw_rework\sounds\launcher\PLX_shot.wss",
					10,
					2,
					500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};

	class 3AS_Vulture_Rocket_HEAP_F;

	class MACRO_NEW_WEAPON(Vulture_Rocket) : 3AS_Vulture_Rocket_HEAP_F
	{
		magazineWell[] = {};
		magazines[] = 
		{
			MACRO_NEW_MAG(Vulture_Rocket,12),
			MACRO_NEW_MAG(Vulture_Rocket_Pylon,12)
		};
	};
};