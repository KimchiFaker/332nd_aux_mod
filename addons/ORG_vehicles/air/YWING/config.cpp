#include "../../../ORG_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(YWING)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(air_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(air_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(air,Y,WING),
        };
		weapons[] = {};
	};
};


class CfgVehicles
{

	class NewTurret;
	class Plane_Fighter_03_base_F;

	class Plane_Fighter_03_dynamicLoadout_base_F : Plane_Fighter_03_base_F
	{
		class Turrets;
	};

	class BTL_Base : Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Turrets : Turrets
		{
			class BubbleGun;
		};

		class Components;
		class ACE_SelfActions;
	};

	class MACRO_NEW_VEHICLE(air,Y,WING) : BTL_Base
	{
		displayName = "Y-Wing *WIP*";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_PLANE";

		weapons[] = {
		  MACRO_NEW_WEAPON(YWing_30mm),
		  MACRO_NEW_WEAPON(PlasmaBomb_Pylon),
		  "CMFlareLauncher",
		  "Laserdesignator_pilotCamera"
		  };
		  magazines[] = {
		MACRO_NEW_MAG(Ywing_30mm,1200),
		MACRO_NEW_MAG(Ywing_Plasma,20),
		  "120Rnd_CMFlare_Chaff_Magazine",
		  "Laserbatteries",
		  "120Rnd_CMFlare_Chaff_Magazine",
		  "120Rnd_CMFlare_Chaff_Magazine",
		  "120Rnd_CMFlare_Chaff_Magazine",
		  "120Rnd_CMFlare_Chaff_Magazine" };

		crew = "ORG_aux_infantry_unit_trooper";


		hiddenselectionstextures[] = 
		{ 
			"ORG_vehicles\_textures\air\YWING\Chasis_RedLeader_CO_CW.paa",
			"3as\3as_btlb\data\detail_co.paa",
			"ORG_vehicles\_textures\air\YWING\Interior_CO_CW.paa" 
		};


		 acceleration = 2000;
		 class EjectionSystem
		 {
			 EjectionSeatEnabled = 0;										//enable advanced ejection system								
		 };
		   armor = 400;
		   VTOLPitchInfluence = 10;
		   VTOLRollInfluence = 10;
		   VTOLYawInfluence = 12;
		   htMin = 60;
		   htMax = 1800;
		   afMax = 200;
		   mfMax = 100;
		   mFact = 0;
		   tBody = 0;
		   radartype = 4;
		   lockdetectionsystem = "2 + 8 + 4";
		   incommingmissliedetectionsystem = 16;
		   maxSpeed = 1200;
		   landingAoa = 6 * 3.1415 / 180; // landing angle of attack in radians, for AI
		   landingSpeed = 215;			   // for AI to approach the runawy, the plane should be stable at this speed
		   stallSpeed = 190;
		   stallWarningTreshold = 0.1;
		   armorStructured = 1;
		   envelope[] = {0,0.01,0.2,4,6,7.6,8.4,9.2,9.4,9.6,9.7,9.8,8,1};
		   draconicForceXCoef = 4.5;
		   draconicForceYCoef = 3;
		   draconicForceZCoef = 6;
		   draconicTorqueXCoef = 2.0999999;
		   draconicTorqueYCoef = -0.3;
		   angleOfIndicence = 0;
		   airFriction0[] = {100, 50, 12};
		   airFriction1[] = {100, 50, 12};
		   airFriction2[] = {100, 50, 12};
		   altNoForce = 20000;
		   altFullForce = 20000;
		   //air physics
		   elevatorCoef[] = {1};
		   elevatorSensitivity = 1;
		   elevatorControlsSensitivityCoef = 4;
		   aileronCoef[] = {2};
		   aileronSensitivity = 1;
		   aileronControlsSensitivityCoef = 5;
		   rudderCoef[] = {3.5};
		   rudderInfluence = 0.9;
		   rudderControlsSensitivityCoef = 6;
		   thrustCoef[] = {2,2.17,2.15,3.14,3.13,3.12,3.1,3.07,2.99,2.2,2,2};
		   irScanRangeMin = 10;
		   irScanRangeMax = 10000;
		   irScanToEyeFactor = 8;
		   fuelCapacity = 2000;
		   wheelSteeringSensitivity = 1.5;
		   maxOmega = 2000;
		   airBrake = 1;
		   airBrakeFrictionCoef = 50;
		   flaps = 0;
		   flapsFrictionCoef = 0.32;
		   gearsUpFrictionCoef = 0.6;
		   airFrictionCoefs0[] = {0.0, 0.0, 0.0};
		   airFrictionCoefs1[] = {0.1, 0.5, 0.0066};
		   airFrictionCoefs2[] = {0.001, 0.005, 0.000068};


		class Turrets : Turrets
		{
			class BubbleGun : BubbleGun
			{
				stabilizedInAxes = 3;
			    weapons[] = {
					MACRO_NEW_WEAPON(Y_wing_Turret)
				  };
				  magazines[] = {

						MACRO_NEW_MAG(Z95_30mm,1000),
						MACRO_NEW_MAG(Z95_30mm,1000),
						MACRO_NEW_MAG(Z95_30mm,1000),
						MACRO_NEW_MAG(Z95_30mm,1000),
						MACRO_NEW_MAG(Z95_30mm,1000),
						MACRO_NEW_MAG(Z95_30mm,1000),
						MACRO_NEW_MAG(Z95_30mm,1000)
					};
			};
		};

		class Components : Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "3as\3as_arc170\data\plane_arc_pylon_ca.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] =
						{
							"ORG_C_Pylon"
						};
						attachment="ORG_aux_magazine_Pylon_AA_Med_x3";
						priority = 10;
						maxweight = 2500;
						UIposition[] = { 0.5,0.25 };
					};
					class pylons2 : pylons1
					{
						UIposition[] = { 0.15000001,0.25 };
						mirroredMissilePos = 1;
					};
					class pylons3 : pylons1
					{
					    hardpoints[] =
						{
							"ORG_B_Pylon"
						};
						attachment = "ORG_aux_magazine_Pylon_ProtonTorpedo_x1";
						priority = 9;
						maxweight = 2500;
						UIposition[] = { 0.55000001,0.34999999 };
					};
					class pylons4 : pylons3
					{
						UIposition[] = { 0.1,0.34999999 };
						mirroredMissilePos = 3;
					};
					class pylons5 : pylons1
					{
						hardpoints[] =
						{
							"ORG_B_Pylon"
						};
						attachment = "ORG_aux_magazine_Pylon_ProtonTorpedo_x1";
						priority = 7;
						maxweight = 5000;
						UIposition[] = { 0.60000002,0.44999999 };
					};
					class pylons6 : pylons5
					{
						UIposition[] = { 0.050000001,0.44999999 };
						mirroredMissilePos = 5;
					};
					class pylons7 : pylons1
					{
					    hardpoints[] =
						{
							"ORG_B_Pylon"
						};
						attachment = "ORG_aux_magazine_Pylon_ProtonTorpedo_x1";
						priority = 9;
						maxweight = 2500;
						UIposition[] = { 0.44999999,0.40000001 };
					};
					class pylons8 : pylons7
					{
						UIposition[] = { 0.2,0.40000001 };
						mirroredMissilePos = 7;
					};
				};
				class presets
				{
					class empty
					{
						displayName = "$STR_empty";
						attachment[] = {};
					};
				};
			};
		};

		class ACE_SelfActions :ACE_SelfActions
		{

			class ORG_aux_HUD_Changer
			{
				displayName = "Change HUD Color :)";
				exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				showDisabled = 0;
				priority = 2.5;
				icon = MACRO_HUD_CHANGER_ICONS\colorWheel.paa;
				class ORG_aux_Red_HUD
				{
					displayName = "Red HUD Color";
					exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
					condition = "!(isNull objectParent player)";
					statement = [1,0,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
					showDisabled = 0;
					runOnHover = 1;
					priority = 2.5;
					icon = MACRO_HUD_CHANGER_ICONS\red.paa;
				};

				class ORG_aux_Orange_HUD :ORG_aux_Red_HUD
				{
					displayName = "Orange HUD Color";
					statement = [1,.05,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
					icon = MACRO_HUD_CHANGER_ICONS\orange.paa;

				};

				class ORG_aux_Yellow_HUD :ORG_aux_Red_HUD
				{
					displayName = "Yellow HUD Color";
					statement = [1,1,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
					icon = MACRO_HUD_CHANGER_ICONS\yellow.paa;

				};

				class ORG_aux_Green_HUD :ORG_aux_Red_HUD
				{
					displayName = "Green HUD Color";
				//condition = "true";
				statement = [0,1,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
				icon = MACRO_HUD_CHANGER_ICONS\green.paa;
				// showDisabled = 0;
				// priority = 2.5;
				};

				class ORG_aux_Cyan_HUD :ORG_aux_Red_HUD
				 {
				displayName = "Cyan HUD Color";
				statement = [0,1,1,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
				icon = MACRO_HUD_CHANGER_ICONS\cyan.paa;

			};

				class ORG_aux_Blue_HUD :ORG_aux_Red_HUD
				{
				displayName = "Blue HUD Color";
				statement = [0,0,1,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
				icon = MACRO_HUD_CHANGER_ICONS\blue.paa;

			};

				class ORG_aux_Purple_HUD :ORG_aux_Red_HUD
				{
				displayName = "Purple HUD Color";
				statement = [.5,0,.5,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
				icon = MACRO_HUD_CHANGER_ICONS\purple.paa;

			};

				class ORG_aux_White_HUD :ORG_aux_Red_HUD
				{
				displayName = "White HUD Color";
				statement = [1,1,1,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
				icon = MACRO_HUD_CHANGER_ICONS\white.paa;

			};

				class ORG_aux_Black_HUD :ORG_aux_Red_HUD
				{
				displayName = "Black HUD Color";
				statement = [0,0,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
				icon = MACRO_HUD_CHANGER_ICONS\black.paa;

			};

				class ORG_aux_Clear_HUD :ORG_aux_Red_HUD
				{
				displayName = "No HUD Color";
				statement = [1,1,1,0,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
				icon = MACRO_HUD_CHANGER_ICONS\noHud.paa;

			};
			};

			IntercomMacroAIR
		};
	};
};