#include "../../../ORG_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Saber)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,TX,130),
			MACRO_NEW_VEHICLE(Land,TX,130_GL),
			MACRO_NEW_VEHICLE(Land,TX,130_Recon),
			MACRO_NEW_VEHICLE(Land,TX,130_Super),
        };
		weapons[] = {};
	};
};

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver : DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver : DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander : DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander : DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner : DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner : DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class CfgVehicles
 {
	class NewTurret;
	class LandVehicle;
	class Tank : LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class ACE_SelfActions;
	};
	class Tank_F : Tank
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class Components;
		class AnimationSources;
		class ViewPilot;
		class CargoTurret;
		class ViewOptics;
		class ViewGunner;
		class ViewCargo;
		class HeadLimits;
		class ACE_SelfActions : ACE_SelfActions
		{
		};
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Sounds : Sounds
		{
			class Engine;
			class Movement;
		};
	};

	class 3as_saber_01_Base : Tank_F
	{
		class Turrets : Turrets
		{
			class MainTurret_bottom : NewTurret
			{

			};
			class Mainturret_top : MainTurret_bottom
			{

			};
			class CargoTurret_01 : CargoTurret
			{

			};
			class CargoTurret_02 : CargoTurret_01
			{

			};
			class CargoTurret_03 : CargoTurret_02
			{

			};
			class CargoTurret_04 : CargoTurret_01
			{

			};
		};
	};

	class 3as_saber_Base : 3as_saber_01_Base
	{
		class HitPoints;

		class Turrets : Turrets
		{
			class MainTurret_bottom : MainTurret_bottom
			{

			};
			class Mainturret_top : Mainturret_top
			{

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};
	};

	class 3as_saber_m1 : 3as_saber_Base
	{
		class Hitpoints : Hitpoints
		{
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLTrack;
			class HitRTrack;
		};

		class Turrets : Turrets
		{
			class MainTurret_bottom : MainTurret_bottom
			{

			};
			class Mainturret_top : Mainturret_top
			{

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};
	};

	class 3as_saber_super_base : 3as_saber_01_Base
	{
		class Turrets : Turrets
		{
			class Mainturret_super : Mainturret_top
			{

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};

		class Hitpoints;
	};

	class 3as_saber_super : 3as_saber_super_base
	{
		class Turrets : Turrets
		{
			class Mainturret_super : Mainturret_super
			{

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};

		class Hitpoints : Hitpoints
		{
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLTrack;
			class HitRTrack;
		};
	};

	class 3as_saber_02_Base : 3as_saber_01_Base
	{
		class Turrets : Turrets
		{
			class MainTurret_bottom : MainTurret_bottom
			{

			};
			class Mainturret_top : Mainturret_top
			{

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};

		class Hitpoints;
	};

	class 3as_saber_m1G : 3as_saber_02_Base
	{
		class Turrets : Turrets
		{
			class MainTurret_bottom : MainTurret_bottom
			{

			};
			class Mainturret_top : Mainturret_top
			{

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};

		class Hitpoints : Hitpoints
		{
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLTrack;
			class HitRTrack;
		};
	};

	class 3as_saber_03_Base : 3as_saber_01_Base
	{
		class Turrets : Turrets
		{
			class MainTurret_bottom : MainTurret_bottom
			{

			};
			class Mainturret_top : Mainturret_top
			{

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};

		class Hitpoints;
	};

	class 3as_saber_m1Recon : 3as_saber_03_Base
	{
		class Turrets : Turrets
		{
			class MainTurret_bottom : MainTurret_bottom
			{

			};
			class Mainturret_top : Mainturret_top
			{

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};

		class Hitpoints : Hitpoints
		{
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLTrack;
			class HitRTrack;
		};
	};
	
	class MACRO_NEW_VEHICLE(Land,TX,130): 3as_saber_m1
	{
	    displayName = "TX-130 Saber";
	    scope = 2;
		scopeCurator = 2;
		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_TANK";
		crew = "ORG_aux_infantry_unit_trooper";

		armor = 500;
		armorStructural = 6;

		TFAR_hasIntercom = 1;
		IntercomMacro

		hiddenSelectionsTextures[] = 
		{ 
			"ORG_vehicles\_textures\land\Saber\ORG_Vic_Test_Saber_Hull.paa",
			"ORG_vehicles\_textures\land\Saber\ORG_Vic_Test_Saber_Weapons.paa" 
		};

		class Turrets : Turrets
		{
			class MainTurret_bottom : MainTurret_bottom
			{
				turretInfoType="RscOptics_MBT_01_gunner";
				memoryPointGun[]=
				{
					"z_gunL_muzzle",
					"z_gunR_muzzle"
				};
				stabilizedInAxes = 3;
				weapons[] =
				{
					MACRO_NEW_WEAPON(Saber_High),
					MACRO_NEW_WEAPON(Saber_low)
				};
				magazines[] =
				{
					MACRO_NEW_MAG(Saber_AP,25),
					MACRO_NEW_MAG(Saber_AP,25),
					MACRO_NEW_MAG(Saber_AP,25),
					MACRO_NEW_MAG(Saber_AP,25),
					MACRO_NEW_MAG(MassDriver_HE,15),
					MACRO_NEW_MAG(MassDriver_HE,15),
					MACRO_NEW_MAG(Saber_Low,500),
					MACRO_NEW_MAG(Saber_Low,500),
					MACRO_NEW_MAG(Saber_Low,500),
					MACRO_NEW_MAG(Saber_Low,500),
					MACRO_NEW_MAG(Saber_Low,500)
				};
			};
			class Mainturret_top : Mainturret_top
			{
				stabilizedInAxes = 3;
				outGunnerMayFire=1;
				ingunnerMayFire=1;

				weapons[] =
				{
					MACRO_NEW_WEAPON(Heavy_Hmg)
				};
				magazines[] =
				{
					MACRO_NEW_MAG(Heavy_HMG,150),
					MACRO_NEW_MAG(Heavy_HMG,150),
					MACRO_NEW_MAG(Heavy_HMG,150),
					MACRO_NEW_MAG(Heavy_HMG,150),
					MACRO_NEW_MAG(Heavy_HMG,150),
					MACRO_NEW_MAG(Heavy_HMG,150),
					MACRO_NEW_MAG(Heavy_HMG,150),
					MACRO_NEW_MAG(Heavy_HMG,150),
					MACRO_NEW_MAG(Heavy_HMG,150),
					MACRO_NEW_MAG(Heavy_HMG,150),
					MACRO_NEW_MAG(Heavy_HMG,150),
					MACRO_NEW_MAG(Heavy_HMG,150)
				};

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};

		class Hitpoints : Hitpoints
		{
			class HitEngine : HitEngine
			{

			};
			class HitFuel : HitFuel
			{

			};
			class HitHull : HitHull
			{

			};
			class HitLTrack : HitLTrack
			{
				armor = 500;
			};
			class HitRTrack : HitRTrack
			{
				armor = 500;
			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,TX,130_GL) : 3as_saber_m1G
	{
		displayName = "TX-130 GL";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_TANK";
		crew = "ORG_aux_infantry_unit_trooper";

		armor = 500;
		armorStructural = 6;

		TFAR_hasIntercom = 1;
		IntercomMacro

		hiddenSelectionsTextures[] = 
		{ 
			"ORG_vehicles\_textures\land\Saber\ORG_Vic_Test_Saber_Hull.paa",
			"ORG_vehicles\_textures\land\Saber\ORG_Vic_Test_Saber_Weapons.paa"
		};

		class Turrets : Turrets
		{
		    
			class MainTurret_bottom : MainTurret_bottom
			{

			turretInfoType="RscOptics_MBT_01_gunner";
			  memoryPointGun[]=
				{
					"z_gunL_muzzle",
					"z_gunR_muzzle"
				};
			  stabilizedInAxes = 3;
			  weapons[] =
			  {
			    MACRO_NEW_WEAPON(Saber_High),
				MACRO_NEW_WEAPON(Saber_low)
			  };
			  magazines[] =
			  {
			    MACRO_NEW_MAG(Saber_AP,25),
				MACRO_NEW_MAG(Saber_AP,25),
				MACRO_NEW_MAG(Saber_AP,25),
				MACRO_NEW_MAG(Saber_AP,25),
			    MACRO_NEW_MAG(MassDriver_HE,15),
				MACRO_NEW_MAG(MassDriver_HE,15),
				MACRO_NEW_MAG(Saber_Low,500),
				MACRO_NEW_MAG(Saber_Low,500),
				MACRO_NEW_MAG(Saber_Low,500),
                MACRO_NEW_MAG(Saber_Low,500),
				MACRO_NEW_MAG(Saber_Low,500)
			  };

			};
			class Mainturret_top : Mainturret_top
			{
				stabilizedInAxes = 3;
				outGunnerMayFire=1;
				ingunnerMayFire=1;
				weapons[] =
				{
					MACRO_NEW_WEAPON(BeamLaser_Full)
				};
				magazines[] =
				{
					MACRO_NEW_MAG(LaserBeamFull,2000),
					MACRO_NEW_MAG(LaserBeamFull,2000)
				};

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};

		class Hitpoints : Hitpoints
		{
			class HitEngine : HitEngine
			{

			};
			class HitFuel : HitFuel
			{

			};
			class HitHull : HitHull
			{

			};
			class HitLTrack : HitLTrack
			{
				armor = 500;
			};
			class HitRTrack : HitRTrack
			{
				armor = 500;
			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,TX,130_Recon) : 3as_saber_m1Recon
	{
		displayName = "TX-130 Recon";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_TANK";
		crew = "ORG_aux_infantry_unit_trooper";

		armor = 500;
		armorStructural = 6;

		TFAR_hasIntercom = 1;
		IntercomMacro

		hiddenSelectionsTextures[] = 
		{ 
			"ORG_vehicles\_textures\land\Saber\ORG_Vic_Test_Saber_Hull.paa",
			"ORG_vehicles\_textures\land\Saber\ORG_Vic_Test_Saber_WeaponsScout.paa"
		};

		class Turrets : Turrets
		{
			class MainTurret_bottom : MainTurret_bottom
			{
				turretInfoType = "RscOptics_MBT_01_gunner";
				stabilizedInAxes = 3;
				weapons[] =
				{
					MACRO_NEW_WEAPON(Saber_20mm)
				};
				magazines[] =
				{
					 MACRO_NEW_MAG(20mmAP,1200),
					 MACRO_NEW_MAG(20mmAP,1200),
					 MACRO_NEW_MAG(20mmAP,1200),
					 MACRO_NEW_MAG(20mmAP,1200),
					 MACRO_NEW_MAG(20mmAP,1200),
					 MACRO_NEW_MAG(20mmAP,1200)
				};
			};
			class Mainturret_top : Mainturret_top
			{
				stabilizedInAxes = 3;
			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};

		class Hitpoints : Hitpoints
		{
			class HitEngine : HitEngine
			{

			};
			class HitFuel : HitFuel
			{

			};
			class HitHull : HitHull
			{

			};
			class HitLTrack : HitLTrack
			{
				armor = 500;
			};
			class HitRTrack : HitRTrack
			{
				armor = 500;
			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,TX,130_Super) : 3as_saber_super
	{
		displayName = "TX-130 Super";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_TANK";
		crew = "ORG_aux_infantry_unit_ORG_trooper";

		armor = 500;
		armorStructural = 6;

		TFAR_hasIntercom = 1;
		IntercomMacro

		hiddenSelectionsTextures[] =
		{
			"ORG_vehicles\_textures\land\Saber\ORG_Vic_Test_Saber_Hull.paa",
			"ORG_vehicles\_textures\land\Saber\ORG_Vic_Test_Saber_Weapons.paa"
		};

		class Turrets : Turrets
		{
			class Mainturret_super : Mainturret_super
			{
				turretInfoType = "RscOptics_MBT_01_gunner";
				stabilizedInAxes = 3;
				weapons[] =
				{
					MACRO_NEW_WEAPON(SuperSaber_40mm),
					MACRO_NEW_WEAPON(SuperSaber_High)
				};
				magazines[] =
				{
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_AP,2),
					 MACRO_NEW_MAG(SuperSaber_40mm,140),
					 MACRO_NEW_MAG(SuperSaber_40mm,140)
				};
			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};

		class Hitpoints : Hitpoints
		{
			class HitEngine : HitEngine
			{

			};
			class HitFuel : HitFuel
			{

			};
			class HitHull : HitHull
			{

			};
			class HitLTrack : HitLTrack
			{
				armor = 500;
			};
			class HitRTrack : HitRTrack
			{
				armor = 500;
			};
		};
	};
};