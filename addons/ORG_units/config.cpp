#include "../ORG_main/macros/main.hpp" // my config macro lib
#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_15(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a
class CfgPatches
{
	class MACRO_PATCH_NAME(units)
	{
		author = "Namenai";
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(main)
		};
		requiredVersion = 0.1;
		units[] = {
			MACRO_NEW_UNIT(infantry,base),
			MACRO_NEW_UNIT(aviation,base),
			"EmptyBox_ORG",
			"MedicalBox_ORG",
			"AmmoBox_ORG",

		};
		weapons[] = {
		 	MACRO_NEW_UNIFORM(infantry,base),
			MACRO_NEW_UNIFORM(aviation,base),
		};
	};
};
class CfgFactionClasses
{
	class EdCat_ORG
	{
		displayName = "Outer Rim Garrison";
		side = 1;
		priority = 2;
	};

	class EdCat_ORGCIS
	{
		displayName = "ORG CIS";
		side = 0;
		priority = 2;
	};
};
class CfgEditorCategories
{
	class EdCat_ORG_Props
	{
		displayName = "Outer Rim Garrison Supplies";
	};
};
class CfgEditorSubcategories
{
	class EdSubcat_ORG_AA
	{
		displayName = "Anti-Air";
		priority = 1;
	};
	class EdSubcat_ORG_APCS
	{
		displayName = "APCs";
		priority = 2;
	};
	class EdSubcat_ORG_ART
	{
		displayName = "Artillery";
		priority = 3;
	};
	class EdSubcat_ORG_PACKS
	{
		displayName = "Backpacks";
		priority = 4;
	};
	class EdSubcat_ORG_BOAT
	{
		displayName = "Boats";
		priority = 4;
	};
	class EdSubcat_ORG_CAR
	{
		displayName = "Cars";
		priority = 5;
	};
	class EdSubcat_ORG_DRONE
	{
		displayName = "Drones";
		priority = 6;
	};
	class EdSubcat_ORG_HELICOPTERS
	{
		displayName = "Helicopters";
		priority = 7;
	};
	class EdSubcat_ORG_MEN
	{
		displayName = "Men";
		priority = 8;
	};
	class EdSubcat_ORG_B1
	{
		displayName = "B1";
		priority = 8;
	};
	class EdSubcat_ORG_BX
	{
		displayName = "BX";
		priority = 9;
	};
	class EdSubcat_ORG_HEAVY
	{
		displayName = "Heavy Droids";
		priority = 10;
	};
	class EdSubcat_ORG_IFV
	{
		displayName = "IFVs";
		priority = 11;
	};
	class EdSubcat_ORG_PLANE
	{
		displayName = "Planes";
		priority = 12;
	};
	class EdSubcat_ORG_RESUPPLY
	{
		displayName = "Resupply";
		priority = 1;
	};
	class EdSubcat_ORG_TANK
	{
		displayName = "Tanks";
		priority = 14;
	};
	class EdSubcat_ORG_TRUCK
	{
		displayName = "Trucks";
		priority = 15;
	};
	class EdSubcat_ORG_TURR
	{
		displayName = "Turrets";
		priority = 16;
	};
};
class CfgMarkers
{
	class mil_dot;
	class Marker_ORG : mil_dot {
		name = "ORG";
		icon = "ORG_units\images\ORG_Logo.paa";
		shadow = false;
		scope = 2;
		color[] = { 1, 1, 1, 1 };
	};
};
class CfgWeapons
{
 	// ---- blufor Uniforms ----

    class U_I_CombatUniform;
	class Uniform_Base;
	class ls_gar_phase2_uniform : U_I_CombatUniform
	{
		class ItemInfo;
	};
	class JLTS_CloneArmorMC : U_I_CombatUniform
	{
		class ItemInfo;
	};
	class 3AS_U_Rep_Katarn_Armor : Uniform_Base
	{
		class ItemInfo;
	};

	//Recruit
	class MACRO_NEW_UNIFORM(recruit,base) : ls_gar_phase2_uniform
	{
		displayName = "[ORG] Recruit Uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(recruit,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	//Infantry
    class MACRO_NEW_UNIFORM(infantry,base): ls_gar_phase2_uniform
	{
		displayName = "[ORG] Infantry Uniform ('base')";
        scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo: ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(infantry,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(airborne,base) : ls_gar_phase2_uniform
	{
		displayName = "[ORG] Airborne Uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(airborne,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	//RTO
    class MACRO_NEW_UNIFORM(rto,base): ls_gar_phase2_uniform
	{
		displayName = "[ORG] RTO Uniform ('base')";
        scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo: ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(rto,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	//Medic
    class MACRO_NEW_UNIFORM(medic,base): ls_gar_phase2_uniform
	{
		displayName = "[ORG] Medic Uniform ('base')";
        scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo: ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(medic,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(aviation,base): ls_gar_phase2_uniform
	{
		displayName = "[ORG] Aviation Uniform ('base')";
        scope = 0;							
		class ItemInfo: ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(aviation,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(cwo,base): ls_gar_phase2_uniform
	{
		displayName = "[ORG] Clone Warrant Officer Uniform ('base')";
        scope = 0;							
		class ItemInfo: ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cwo,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(arfbase,base) : ls_gar_phase2_uniform
	{
		displayName = "[ORG] ARF Base Uniform ('base')";
		scope = 0;
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(arfbase,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(arfdes,base) : ls_gar_phase2_uniform
	{
		displayName = "[ORG] ARF Desert Uniform ('base')";
		scope = 0;
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(arfdes, base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(arfjung,base) : ls_gar_phase2_uniform
	{
		displayName = "[ORG] ARF Jungle Uniform ('base')";
		scope = 0;
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(arfjung,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(arfsnow,base) : ls_gar_phase2_uniform
	{
		displayName = "[ORG] ARF Snow Uniform ('base')";
		scope = 0;
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(arfsnow,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(arfurb,base) : ls_gar_phase2_uniform
	{
		displayName = "[ORG] ARF Urban Uniform ('base')";
		scope = 0;
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(arfurb,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(arfwood,base) : ls_gar_phase2_uniform
	{
		displayName = "[ORG] ARF Woodland Uniform ('base')";
		scope = 0;
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(arfwood,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(mech,base) : ls_gar_phase2_uniform
	{
		displayName = "[ORG] Mechanized Uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(mech,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(scenario,base) : ls_gar_phase2_uniform
	{
		displayName = "[ORG] Scenario Uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(scenario,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(captain,base) : JLTS_CloneArmorMC
	{
		displayName = "[ORG] Captain Uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		model="\MRC\JLTS\characters\CloneArmor\CloneArmorMC.p3d";
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(captain,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(assault,base) : 3AS_U_Rep_Katarn_Armor
	{
		displayName = "[ORG] Assault Uniform ('base')";
		scope = 0;							
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(assault,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	
	// ---- End blufor Uniforms ----

	// ---- Opfor Uniforms ----

	//B1
	
	class JLTS_DroidB1 : U_I_CombatUniform
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Rocket : JLTS_DroidB1
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Crew : JLTS_DroidB1
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Commander : JLTS_DroidB1
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Marine : JLTS_DroidB1
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Security : JLTS_DroidB1
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Pilot : JLTS_DroidB1
	{
		class ItemInfo;
	};

	//BX
	class ls_redforUniform_base;
	class ls_redforUniform_inherit;
	class lsd_cis_bxDroid_uniform : ls_redforUniform_base
	{
		class ItemInfo;
	};
	class lsd_cis_bxSecurityDroid_uniform : ls_redforUniform_inherit
	{
		class ItemInfo;
	};
	class lsd_cis_bxDiplomatDroid_uniform : ls_redforUniform_inherit
	{
		class ItemInfo;
	};
	class lsd_cis_bxCaptainDroid_uniform : ls_redforUniform_inherit
	{
		class ItemInfo;
	};
	class lsd_cis_b2Droid_uniform : ls_redforUniform_base
	{
		class ItemInfo;
	};


	//CIS B-1
	class MACRO_NEW_UNIFORM(cisb1,base) : JLTS_DroidB1
	{
		displayName = "[ORG] Battle droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisb1,base);
			containerClass = "Supply140";
		};
	};
	class MACRO_NEW_UNIFORM(cisb1jumppack,base) : JLTS_DroidB1_Rocket
	{
		displayName = "[ORG] Jumppack Battle droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisb1jumppack,base);
			containerClass = "Supply140";
		};
	};
	class MACRO_NEW_UNIFORM(cisb1crew,base) : JLTS_DroidB1_Crew
	{
		displayName = "[ORG] Crew Battle droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisb1crew,base);
			containerClass = "Supply140";
		};
	};
	class MACRO_NEW_UNIFORM(cisb1comm,base) : JLTS_DroidB1_Commander
	{
		displayName = "[ORG] Commander Battle droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisb1comm,base);
			containerClass = "Supply140";
		};
	};
	class MACRO_NEW_UNIFORM(cisb1marine,base) : JLTS_DroidB1_Marine
	{
		displayName = "[ORG] Marine Battle droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisb1marine,base);
			containerClass = "Supply140";
		};
	};
	class MACRO_NEW_UNIFORM(cisb1sec,base) : JLTS_DroidB1_Security
	{
		displayName = "[ORG] Security Battle droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisb1sec,base);
			containerClass = "Supply140";
		};
	};
	class MACRO_NEW_UNIFORM(cisb1pilot,base) : JLTS_DroidB1_Pilot
	{
		displayName = "[ORG] Pilot Battle droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisb1pilot,base);
			containerClass = "Supply140";
		};
	};

	//CIS BX
	class MACRO_NEW_UNIFORM(cisbx,base) : lsd_cis_bxDroid_uniform
	{
		displayName = "[ORG] BX droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisbx,base);
			containerClass = "Supply140";
		};
	};
	class MACRO_NEW_UNIFORM(cisbxsec,base) : lsd_cis_bxSecurityDroid_uniform
	{
		displayName = "[ORG] BX Security droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisbxsec,base);
			containerClass = "Supply140";
		};
	};
	class MACRO_NEW_UNIFORM(cisbxdiplo,base) : lsd_cis_bxDiplomatDroid_uniform
	{
		displayName = "[ORG] BX Diplomat droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisbxdiplo,base);
			containerClass = "Supply140";
		};
	};
	class MACRO_NEW_UNIFORM(cisbxcapt,base) : lsd_cis_bxCaptainDroid_uniform
	{
		displayName = "[ORG] BX Captain droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisbxcapt,base);
			containerClass = "Supply140";
		};
	};

	//CIS B2
	class MACRO_NEW_UNIFORM(cisb2,base) : lsd_cis_b2Droid_uniform
	{
		displayName = "[ORG] B2 droid uniform ('base')";
		scope = 0;					

		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisb2,base);
			containerClass = "Supply140";
		};
	};

};
class CfgSounds
{
	sounds[] = {};
	class B1_Death_Sound_1
	{
		name = "B1-Death-Sound-1";
		sound[] = {"\opfor\DeathSounds\B1-Death-Sound-1.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_2
	{
		name = "B1-Death-Sound-2";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-2.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_3
	{
		name = "B1-Death-Sound-3";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-3.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_4
	{
		name = "B1-Death-Sound-4";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-4.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_5
	{
		name = "B1-Death-Sound-5";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-5.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_6
	{
		name = "B1-Death-Sound-6";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-6.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_7
	{
		name = "B1-Death-Sound-7";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-7.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_8
	{
		name = "B1-Death-Sound-8";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-8.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_9
	{
		name = "B1-Death-Sound-9";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-9.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_10
	{
		name = "B1-Death-Sound-10";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-10.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_11
	{
		name = "B1-Death-Sound-11";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-11.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_12
	{
		name = "B1-Death-Sound-12";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-12.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_13
	{
		name = "B1-Death-Sound-13";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-13.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_14
	{
		name = "B1-Death-Sound-14";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-14.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_15
	{
		name = "B1-Death-Sound-15";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-15.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_16
	{
		name = "B1-Death-Sound-16";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-16.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_17
	{
		name = "B1-Death-Sound-17";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-17.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_18
	{
		name = "B1-Death-Sound-18";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-18.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_19
	{
		name = "B1-Death-Sound-19";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-19.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_20
	{
		name = "B1-Death-Sound-20";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-20.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_21
	{
		name = "B1-Death-Sound-21";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-21.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_22
	{
		name = "B1-Death-Sound-22";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-22.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};
	class B1_Death_Sound_23
	{
		name = "B1-Death-Sound-23";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-23.ogg", db + 250, 1.0, 125 };
		titles[] = {};
	};


	
	//Redefine Webknights Sounds to be louder
	class B1_shooting_1_ORG
	{
		name = "B1_shooting_1_ORG";
		sound[] = { "WebKnightsRobotics\sounds\B1_shooting_1.ogg", 10, 1, 150 };
		titles[] = {};
	};
	class B1_shooting_2_ORG
	{
		name = "B1_shooting_2_ORG";
		sound[] = { "WebKnightsRobotics\sounds\B1_shooting_2.ogg", 10, 1, 150 };
		titles[] = {};
	};
	class B1_shooting_3_ORG
	{
		name = "B1_shooting_3_ORG";
		sound[] = { "WebKnightsRobotics\sounds\B1_shooting_3.ogg", 10, 1, 150 };
		titles[] = {};
	};
	class B1_shooting_4_ORG
	{
		name = "B1_shooting_4_ORG";
		sound[] = { "WebKnightsRobotics\sounds\B1_shooting_4.ogg", 10, 1, 150 };
		titles[] = {};
	};
	class B1_EnemyKilled_1_ORG
	{
		name = "B1_EnemyKilled_1_ORG";
		sound[] = { "WebKnightsRobotics\sounds\B1_EnemyKilled_1.ogg", 10, 1, 150 };
		titles[] = {};
	};
	class B1_EnemyKilled_2_ORG
	{
		name = "B1_EnemyKilled_2_ORG";
		sound[] = { "WebKnightsRobotics\sounds\B1_EnemyKilled_2.ogg", 10, 1, 150 };
		titles[] = {};
	};
	class B1_incGrenade_1_ORG
	{
		name = "B1_incGrenade_1_ORG";
		sound[] = { "WebKnightsRobotics\sounds\B1_incGrenade_1.ogg", 10, 1, 150 };
		titles[] = {};
	};
	class B1_incGrenade_2_ORG
	{
		name = "B1_incGrenade_2_ORG";
		sound[] = { "WebKnightsRobotics\sounds\B1_incGrenade_2.ogg", 10, 1, 150 };
		titles[] = {};
	};
	class B1_incGrenade_3_ORG
	{
		name = "B1_incGrenade_3_ORG";
		sound[] = { "WebKnightsRobotics\sounds\B1_incGrenade_3.ogg", 10, 1, 150 };
		titles[] = {};
	};
	class B1_incGrenade_4_ORG
	{
		name = "B1_incGrenade_4_ORG";
		sound[] = { "WebKnightsRobotics\sounds\B1_incGrenade_4.ogg", 10, 1, 150 };
		titles[] = {};
	};
	class WBK_b2_dying_ORG
	{
		name = "WBK_b2_dying_ORG";
		sound[] = { "WebKnightsRobotics\sounds\WBK_b2_dying_2.ogg",  10, 1, 150 };
		titles[] = {};
	};
	class WBK_b2_firing_1_ORG
	{
		name = "WBK_b2_firing_1_ORG";
		sound[] = { "WebKnightsRobotics\sounds\WBK_b2_firing_1.ogg", 10, 1, 150 };
		titles[] = {};
	};
	class WBK_b2_firing_2_ORG
	{
		name = "WBK_b2_firing_2_ORG";
		sound[] = { "WebKnightsRobotics\sounds\WBK_b2_firing_2.ogg", 10, 1, 150 };
		titles[] = {};
	};
	class WBK_b2_firing_3_ORG
	{
		name = "WBK_b2_firing_3_ORG";
		sound[] = { "WebKnightsRobotics\sounds\WBK_b2_firing_3.ogg", 10, 1, 150 };
		titles[] = {};
	};
	class WBK_b2_firing_4_ORG
	{
		name = "WBK_b2_firing_4_ORG";
		sound[] = { "WebKnightsRobotics\sounds\WBK_b2_firing_4.ogg", 10, 1, 150 };
		titles[] = {};
	};
	class WBK_b2_firing_5_ORG
	{
		name = "WBK_b2_firing_5_ORG";
		sound[] = { "WebKnightsRobotics\sounds\WBK_b2_firing_5.ogg", 10, 1, 150 };
		titles[] = {};
	};
	class WBK_b2_incGrenade_1_ORG
	{
		name = "WBK_b2_incGrenade_1_ORG";
		sound[] = { "WebKnightsRobotics\sounds\WBK_b2_incGrenade_1.ogg", 10, 1, 150 };
		titles[] = {};
	};
	class WBK_b2_incGrenade_2_ORG
	{
		name = "WBK_b2_incGrenade_2_ORG";
		sound[] = { "WebKnightsRobotics\sounds\WBK_b2_incGrenade_2.ogg",  10, 1, 150 };
		titles[] = {};
	};
	class BX_EnemyDown_1_ORG
	{
		name = "EnemyDown_1_ORG";
		sound[] = { "\ORG_units\opfor\VoiceSounds\EnemyDown_02.ogg",  db + 250, 1, 150 };
		titles[] = {};
	};
	class BX_EnemyDown_2_ORG
	{
		name = "EnemyDown_2_ORG";
		sound[] = { "\ORG_units\opfor\VoiceSounds\EnemyDown_08.ogg", db + 250, 1, 150 };
		titles[] = {};
	};
	class BX_EnemyDown_3_ORG
	{
		name = "EnemyDown_3_ORG";
		sound[] = { "\ORG_units\opfor\VoiceSounds\EnemyDown_09.ogg", db + 250, 1, 150 };
		titles[] = {};
	};
	class BX_EnemyDown_4_ORG
	{
		name = "EnemyDown_4_ORG";
		sound[] = { "\ORG_units\opfor\VoiceSounds\EnemyDown_25.ogg", db + 250, 1, 150 };
		titles[] = {};
	};
	class BX_EnemyHit_1_ORG
	{
		name = "EnemyDown_4_ORG";
		sound[] = { "\ORG_units\opfor\VoiceSounds\EnemyHit_02.ogg",  db + 250, 1, 150 };
		titles[] = {};
	};
	class BX_EnemyHit_2_ORG
	{
		name = "EnemyDown_4_ORG";
		sound[] = { "\ORG_units\opfor\VoiceSounds\EnemyHit_03.ogg", db + 250, 1, 150 };
		titles[] = {};
	};
	class BX_EnemyHit_3_ORG
	{
		name = "EnemyDown_4_ORG";
		sound[] = { "\ORG_units\opfor\VoiceSounds\EnemyHit_20.ogg",  db + 250, 1, 150 };
		titles[] = {};
	};
	class BX_EnemyHit_4_ORG
	{
		name = "EnemyDown_4_ORG";
		sound[] = { "\ORG_units\opfor\VoiceSounds\EnemyHit_24.ogg",  db + 250, 1, 150 };
		titles[] = {};
	};
	class BX_FriendlyDown_1_ORG
	{
		name = "BX_FriendlyDown_1_ORG";
		sound[] = { "\ORG_units\opfor\VoiceSounds\FriendlyDown_03.ogg", db + 250, 1, 150 };
		titles[] = {};
	};
	class BX_FriendlyDown_2_ORG
	{
		name = "BX_FriendlyDown_2_ORG";
		sound[] = { "\ORG_units\opfor\VoiceSounds\FriendlyDown_05.ogg",  db + 250, 1, 150 };
		titles[] = {};
	};
	class BX_FriendlyDown_3_ORG
	{
		name = "BX_FriendlyDown_3_ORG";
		sound[] = { "\ORG_units\opfor\VoiceSounds\FriendlyDown_06.ogg", db + 250, 1, 150 };
		titles[] = {};
	};
	class BX_FriendlyDown_4_ORG
	{
		name = "BX_FriendlyDown_4_ORG";
		sound[] = { "\ORG_units\opfor\VoiceSounds\FriendlyDown_21.ogg",  db + 250, 1, 150 };
		titles[] = {};
	};
	class BX_ThrowingGrenade_1_ORG
	{
		name = "BX_ThrowingGrenade_1_ORG";
		sound[] = { "\ORG_units\opfor\VoiceSounds\ThrowingGrenade_03.ogg", db + 250, 1, 150 };
		titles[] = {};
	};
	class BX_ThrowingGrenade_2_ORG
	{
		name = "BX_ThrowingGrenade_2_ORG";
		sound[] = { "\ORG_units\opfor\VoiceSounds\ThrowingGrenade_05.ogg", db + 250, 1, 150 };
		titles[] = {};
	};
	class BX_ThrowingGrenade_3_ORG
	{
		name = "BX_ThrowingGrenade_3_ORG";
		sound[] = { "\ORG_units\opfor\VoiceSounds\ThrowingGrenade_06.ogg", db + 250, 1, 150 };
		titles[] = {};
	};
};
class CfgFunctions
{
	class Resupply
	{
		class myCategory
		{
			class SetCratesToCarryable
			{
				file = "ORG_units\fnc_carryResupplyCrates.sqf";
			};
		};
	};

	class AuxORG
	{
		class DeathSounds
		{
			file = "\ORG_units\opfor";
			class Killed
			{
			};
			class Killed_BX
			{
			};
			class Killed_Heavy
			{
			};
			class Killed_Heavy_B2
			{
			};
		};

		class FiredSounds
		{
			file = "\ORG_units\opfor";
			class Fired_B2
			{
			};
		};

		class Jumppack
		{
			class Jumppack
			{
				file = "\ORG_units\opfor\fn_Jumppack.sqf";
			};
		};

		class Droideka
		{
			file = "\ORG_units\opfor";
			class initDroideka_Move
			{
			};
			class initDroideka
			{
			};
			class initSniperDroideka_Move
			{
			};
			class initSniperDroideka
			{
			};
			class init_DroidekaShield
			{
			};
			class init_SniperDroidekaShield
			{
			};
		};

		class Inits
		{
			file = "\ORG_units\opfor";
			class init_B1
			{
			};
			class init_BX
			{
			};
			class init_B2
			{
			};
		};

		class MuzSwap
		{
			file = "\ORG_units";
			class init_MuzSwap
			{
			};
		};
	};
};
class CfgVehicles
{

	// ---- Supply Crates ----

	class JLTS_Ammobox_support_GAR;
	class JLTS_Ammobox_weapons_GAR;
	class JLTS_Ammobox_grenades_GAR;

	class EmptyBox_ORG : JLTS_Ammobox_weapons_GAR
	{
		author = MACRO_AUTHOR;
		scope = 2;
		scopeCurator = 2;
		displayName = "[ORG] Empty Ammo Box";
		maximumLoad = 5000;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_RESUPPLY";

		class TransportWeapons
		{

		};
	};

	class MedicalBox_ORG : JLTS_Ammobox_support_GAR
	{
		author = MACRO_AUTHOR;
		scope = 2;
		scopeCurator = 2;
		displayName = "[ORG] Medical Resupply Box";
		maximumLoad = 5000;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_RESUPPLY";

		class TransportItems
		{
			
			class BactaSprayx25_ORG
			{
				name = "ORG_aux_medical_BactaSpray_x25";
				count = 4;
			};

			class PlastiBandagex25_ORG
			{
				name = "ORG_aux_medical_PlastiBandage_x25";
				count = 4;
			};

			class MedPatchx25_ORG
			{
				name = "ORG_aux_medical_MedPatch_x25";
				count = 4;
			};

			class BactaSprayx10_ORG
			{
				name = "ORG_aux_medical_BactaSpray_x10";
				count = 10;
			};

			class PlastiBandagex10_ORG
			{
				name = "ORG_aux_medical_PlastiBandage_x10";
				count = 10;
			};

			class MedPatchx10_ORG
			{
				name = "ORG_aux_medical_MedPatch_x10";
				count = 10;
			};

			class BactaSprayx5_ORG
			{
				name = "ORG_aux_medical_BactaSpray_x5";
				count = 10;
			};

			class PlastiBandagex5_ORG
			{
				name = "ORG_aux_medical_PlastiBandage_x5";
				count = 10;
			};

			class MedPatchx5_ORG
			{
				name = "ORG_aux_medical_MedPatch_x5";
				count = 10;
			};

			class MediKit_ORG
			{
				name = "ORG_aux_medical_MediKit";
				count = 10;
			};

			class BactaSpray_ORG
			{
				name = "ORG_aux_medical_BactaSpray";
				count = 50;
			};

			class PlastiBandage_ORG
			{
				name = "ORG_aux_medical_PlastiBandage";
				count = 50;
			};

			class MedPatch_ORG
			{
				name = "ORG_aux_medical_MedPatch";
				count = 50;
			};

			class Painkillers_ORG
			{
				name = "ORG_aux_medical_PainKiller";
				count = 40;
			};

			class Adrenaline_ORG
			{
				name = "ORG_aux_medical_Adrenaline";
				count = 40;
			};

			class CombatStim_ORG
			{
				name = "ORG_aux_medical_Combat";
				count = 40;
			};

			class Blood_ORG
			{
				name = "ORG_aux_medical_Blood";
				count = 75;
			};

			class Bacta_ORG
			{
				name = "ORG_aux_medical_Bacta";
				count = 25;
			};

			class Kolto_ORG
			{
				name = "ORG_aux_medical_Kolto";
				count = 25;
			};

			class BactaInj_ORG
			{
				name = "ORG_aux_medical_Bacta_Inj";
				count = 25;
			};

			class KoltoInj_ORG
			{
				name = "ORG_aux_medical_Kolto_Inj";
				count = 25;
			};

			class DefibStrips_ORG
			{
				name = "ORG_aux_medical_AdhesiveDefibStrip";
				count = 100;
			};

			class PressureCuff_ORG
			{
				name = "ORG_aux_medical_PressureCuff";
				count = 30;
			};

			class Geltab_ORG
			{
				name = "ORG_aux_medical_Geltabs";
				count = 5;
			};
		};

		class TransportWeapons
		{

		};

		class TransportMagazines 
		{

			class Dm17HeartStarter_ORG
			{
				magazine = "ORG_aux_magazine_DM_17_HeartStarter_x1";
				count = 50;
			};

			class Dm17Bacta_ORG
			{
				magazine = "ORG_aux_magazine_DM_17_Bacta_x1";
				count = 25;
			};

			class Dm17Kolto_ORG
			{
				magazine = "ORG_aux_magazine_DM_17_Kolto_x1";
				count = 25;
			};
			
			class Dm17CombatStim_ORG
			{
				magazine = "ORG_aux_magazine_DM_17_CombatStim_x1";
				count = 50;
			};
		};

		class EventHandlers
		{
			init = "[_this] spawn Resupply_fnc_SetCratesToCarryable;";
		};
	};

	class AmmoBox_ORG : JLTS_Ammobox_weapons_GAR
	{
		author = MACRO_AUTHOR;
		scope = 2;
		scopeCurator = 2;
		displayName = "[ORG] Ammo Resupply Box";
		maximumLoad = 5000;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_RESUPPLY";


		class TransportWeapons
		{
			class DC15A_Weps_ORG
			{
				weapon = "ORG_aux_weapon_DC_15a";
				count = 10;
			};

			class DC15S_Weps_ORG
			{
				weapon = "ORG_aux_weapon_DC_15s";
				count = 10;
			};

			class DC15C_Weps_ORG
			{
				weapon = "ORG_aux_weapon_DC_15c";
				count = 10;
			};

			class DP23_Weps_ORG
			{
				weapon = "ORG_aux_weapon_DP_23";
				count = 10;
			};

			class DW32S_Weps_ORG
			{
				weapon = "ORG_aux_weapon_DW_32S";
				count = 10;
			};

			class Valken38x_Weps_ORG
			{
				weapon = "ORG_aux_weapon_Valken38x";
				count = 10;
			};

			class Z6_Weps_ORG
			{
				weapon = "ORG_aux_weapon_Z6";
				count = 10;
			};

			class DC15B_Weps_ORG
			{
				weapon = "ORG_aux_weapon_DC_15b";
				count = 10;
			};

			class RPS1_Weps_ORG
			{
				weapon = "ORG_aux_weapon_RPS_1";
				count = 5;
			};
		};

		class TransportMagazines
		{
			class DC15A_low_ORG
			{
				magazine = "ORG_aux_magazine_DC_15a_Low_x60";
				count = 300;
			};

			class DC15A_medium_ORG
			{
				magazine = "ORG_aux_magazine_DC_15a_Medium_x30";
				count = 300;
			};

			class DC15A_High_ORG
			{
				magazine = "ORG_aux_magazine_DC_15a_High_x10";
				count = 50;
			};

			class ORG_Stun_ORG
			{
				magazine = "ORG_aux_magazine_Stun_x10";
				count = 100;
			};

			class DC15A_UGLAP_ORG
			{
				magazine = "ORG_aux_magazine_DC_15_UGL_AP_x2";
				count = 50;
			};

			class DC15A_UGLHE_ORG
			{
				magazine = "ORG_aux_magazine_DC_15_UGL_HE_x4";
				count = 50;
			};

			class DC15s_ORG
			{
				magazine = "ORG_aux_magazine_DC_15s_x60";
				count = 300;
			};

			class DC15c_ORG
			{
				magazine = "ORG_aux_magazine_DC_15c_Medium_x45";
				count = 300;
			};

			class DC15b_ORG
			{
				magazine = "ORG_aux_magazine_DC_15b_x60";
				count = 200;
			};

			class DC17_ORG
			{
				magazine = "ORG_aux_magazine_DC_17_x15";
				count = 50;
			};

			class SA35_ORG
			{
				magazine = "ORG_aux_magazine_35sa_low_x30";
				count = 50;
			};

			class DC15L_ORG
			{
				magazine = "ORG_aux_magazine_DC_15L_x200";
				count = 100;
			};

			class DC15L_T_ORG
			{
				magazine = "ORG_aux_magazine_DC_15L_T_x200";
				count = 100;
			};

			class DC17M_Rifle_ORG
			{
				magazine = "ORG_aux_magazine_DC_17m_rifle_x42";
				count = 300;
			};

			class DC17M_Marks_ORG
			{
				magazine = "ORG_aux_magazine_DC_17m_marks_x10";
				count = 300;
			};

			class DC17M_Grend_ORG
			{
				magazine = "ORG_aux_magazine_DC_17m_grend_x1";
				count = 50;
			};

			class DC_44h_ORG
			{
				magazine = "ORG_aux_magazine_DC_44h_x6";
				count = 300;
			};

			class DC_15k_ORG
			{
				magazine = "ORG_aux_magazine_DC_15k_x15";
				count = 300;
			};

			class MPS_HE_ORG
			{
				magazine = "ORG_aux_magazine_MPS_HE_x1";
				count = 15;
			};

			class MPS_Smoke_ORG
			{
				magazine = "ORG_aux_magazine_MPS_Smoke_x1";
				count = 15;
			};

			class MPS_Smoke_Red_ORG
			{
				magazine = "ORG_aux_magazine_MPS_Smoke_Red_x1";
				count = 15;
			};

			class MPS_Flare_ORG
			{
				magazine = "ORG_aux_magazine_MPS_Flare_x1";
				count = 15;
			};

			class DP_23_ORG
			{
				magazine = "ORG_aux_magazine_DP23_x12";
				count = 100;
			};

			class DP_23Wide_ORG
			{
				magazine = "ORG_aux_magazine_DP23_x12Wide";
				count = 100;
			};
			
			class DW_32_HIGH_ORG
			{
				magazine = "ORG_aux_magazine_DW32_High_x5";
				count = 50;
			};

			class DW_32_HIGH_T_ORG
			{
				magazine = "ORG_aux_magazine_DW32_High_T_x5";
				count = 50;
			};
			
			class DW_32_CONCMED_ORG
			{
				magazine = "ORG_aux_magazine_DW32_Med_x20";
				count = 100;
			};

			class DW_32_CONCMED_T_ORG
			{
				magazine = "ORG_aux_magazine_DW32_Med_T_x20";
				count = 100;
			};

			class Valken_38x_REFMED_ORG
			{
				magazine = "ORG_aux_magazine_Valken38x_x15";
				count = 100;
			};

			class Valken_38x_REFMED_T_ORG
			{
				magazine = "ORG_aux_magazine_Valken38x_T_x15";
				count = 100;
			};
			 
			class Firepuncher_high_T_ORG
			{
				magazine = "ORG_aux_magazine_Firepuncher_T_x8";
				count = 100;
			};

			class Firepuncher_high_ORG
			{
				magazine = "ORG_aux_magazine_Firepuncher_x8";
				count = 100;
			};
			
			class Westar_m5_40rnd
			{
				magazine = "ORG_aux_magazine_Westar_M5_x40";
				count = 300;
			};

			class Z6_ORG
			{
				magazine = "ORG_aux_magazine_Z6_x200";
				count = 200;
			};

			class Z6_Super_ORG
            {
                magazine = "ORG_aux_magazine_Z6_Supercharge_x1";
                count = 250;
            };

			class Z6_ALT_ORG
			{
				magazine = "ORG_aux_magazine_Z6_x125";
				count = 200;
			};

			class Flash_ORG
			{
				magazine = "ORG_aux_magazine_ORG_FLASH_x1";
				count = 30;
			};

			class ATCharge_ORG
			{
				magazine = "ORG_aux_magazine_ORG_INCENDIARY_x1";
				count = 30;
			};

			class HEDPImpact_ORG
			{
				magazine = "ORG_aux_magazine_ORG_HEDP_x1";
				count = 30;
			};

			class WhiteImpact_ORG
			{
				magazine = "ORG_aux_magazine_ORG_SMOKE_IMPACT_WHITE_x1";
				count = 30;
			};

			class BlueImpact_ORG
			{
				magazine = "ORG_aux_magazine_ORG_SMOKE_IMPACT_BLUE_x1";
				count = 30;
			};

			class GreenImpact_ORG
			{
				magazine = "ORG_aux_magazine_ORG_SMOKE_IMPACT_GREEN_x1";
				count = 30;
			};

			class RedImpact_ORG
			{
				magazine = "ORG_aux_magazine_ORG_SMOKE_IMPACT_RED_x1";
				count = 30;
			};

			class PurpleImpact_ORG
			{
				magazine = "ORG_aux_magazine_ORG_SMOKE_IMPACT_PURPLE_x1";
				count = 30;
			};

			class YellowImpact_ORG
			{
				magazine = "ORG_aux_magazine_ORG_SMOKE_IMPACT_YELLOW_x1";
				count = 30;
			};

			class OrangeImpact_ORG
			{
				magazine = "ORG_aux_magazine_ORG_SMOKE_IMPACT_ORANGE_x1";
				count = 30;
			};

			class SquadShield_ORG
			{
				magazine = "ORG_aux_magazine_ORG_SquadShield_x1";
				count = 5;
			};

			class ThermalDet_ORG
			{
				magazine = "ORG_aux_magazine_ORG_FRAG_x1";
				count = 30;
			};

			class PLXAA_ORG
			{
				magazine = "ORG_aux_magazine_PLX1_AAMag_x2";
				count = 10;
			};

			class PLXAT_ORG
			{
				magazine = "ORG_aux_magazine_PLX1_ATMag_x2";
				count = 10;
			};

			class PLXHE_ORG
			{
				magazine = "ORG_aux_magazine_PLX1_HEMag_x2";
				count = 10;
			};

			class RPS6AT_ORG
			{
				magazine = "ORG_aux_magazine_RPS6_ATMag_x1";
				count = 20;
			};

			class RPS6AA_ORG
			{
				magazine = "ORG_aux_magazine_RPS6_AAMag_x1";
				count = 20;
			};

			class RPS4AT_ORG
			{
				magazine = "ORG_aux_magazine_RPS4_AT_x1";
				count = 20;
			};

			class RPS4HE_ORG
			{
				magazine = "ORG_aux_magazine_RPS4_HE_x1";
				count = 20;
			};

			class DC15xATR_ORG
			{
				magazine = "ORG_aux_magazine_DC_15x_x2";
				count = 20;
			};
		};

		class EventHandlers
		{
			init = "[_this] spawn Resupply_fnc_SetCratesToCarryable;";
		};
	};

	class VehicleBox_ORG : JLTS_Ammobox_grenades_GAR
	{
		author = MACRO_AUTHOR;
		scope = 2;
		scopeCurator = 2;
		displayName = "[ORG] Vehicle Resupply Box";
		maximumLoad = 5000;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_RESUPPLY";

		ace_cargo_size = 5;

		attendant = true;
		ace_rearm_defaultSupply = 300000;
		ace_refuel_fuelCargo = 3000;
		ace_repair_canRepair = 1;
		ace_refuel_fuelCapacity = 1400;
		ace_refuel_flowRate = 4;
		ace_refuel_canReceive = 1;

		class EventHandlers
		{
			init = "[_this] spawn Resupply_fnc_SetCratesToCarryable;";
		};
	};

	// ---- End Supply Crates ----

	// ---- Blufor Units for Uniforms ----

	class B_Soldier_f;
	class JLTS_Clone_P2_DC15A : B_Soldier_f
	{
		class HitPoints;
	};
	class lsd_blueforClone_base;
    class lsd_gar_phase2_base : lsd_blueforClone_base
    {
        class HitPoints;
    };
	class 3AS_Rep_Commando_base_F : B_Soldier_f
	{
		class HitPoints;
	};

	//recruit
	class MACRO_NEW_UNIT(recruit,base) : lsd_gar_phase2_base
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] Clone Base";

		uniformClass = MACRO_NEW_UNIFORM(recruit,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_MEN";

		linkedItems[] = {"ORG_aux_infantry_helmet_recruit","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG"};
		respawnLinkedItems[] = {"ORG_aux_infantry_helmet_recruit","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		weapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "U_BasicBody";
		backpack = "ORG_aux_blufor_backpack_ORG_rifleman_pack";
		magazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long)
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		Player_Hitpoints

		// define stuff like
		// armor, items, unit name

	};

	//infantry
    class MACRO_NEW_UNIT(infantry,base): lsd_gar_phase2_base
    {
        author = MACRO_AUTHOR;
        scope = 0;
        displayName = "[ORG] Clone Base";

		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_MEN";

        uniformClass = MACRO_NEW_UNIFORM(infantry,base);
        hiddenSelections[] = {"camo1","camo2","insignia"};
       
        linkedItems[] = {"ORG_aux_infantry_helmet_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG"};
		respawnLinkedItems[] = {"ORG_aux_infantry_helmet_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG"};
		weapons[] = {"ORG_aux_weapon_DC_15a","Throw","Put"};
		respawnWeapons[] = {"ORG_aux_weapon_DC_15a","Throw","Put"};
		nakedUniform = "U_BasicBody";
		backpack = "ORG_aux_blufor_backpack_ORG_rifleman_pack";
		magazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long)
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		Player_Hitpoints

        // define stuff like
        // armor, items, unit name

    };

	//infantry
	class MACRO_NEW_UNIT(airborne,base) : lsd_gar_phase2_base
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] Airborne Clone Base";

		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_MEN";

		uniformClass = MACRO_NEW_UNIFORM(airborne,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		linkedItems[] = { "ORG_aux_infantry_helmet_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = { "ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		weapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "U_BasicBody";
		backpack = "ORG_aux_blufor_backpack_ORG_rifleman_pack";
		magazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(ORG_aux_magazine_ORG_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(ORG_aux_magazine_ORG_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		Player_Hitpoints

		// define stuff like
		// armor, items, unit name

	};

	class MACRO_NEW_UNIT(arfbase,base) : lsd_gar_phase2_base
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] Clone ARF Base";

		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_MEN";

		uniformClass = MACRO_NEW_UNIFORM(arfbase,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		camouflage = 0.6;

		linkedItems[] = { "ORG_aux_infantry_helmet_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = { "ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		weapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "U_BasicBody";
		backpack = "ORG_aux_blufor_backpack_ORG_rifleman_pack";
		magazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long)
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		Player_Hitpoints

		// define stuff like
		// armor, items, unit name

	};

	class MACRO_NEW_UNIT(arfdes,base) : lsd_gar_phase2_base
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] Clone ARF Desert Base";

		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_MEN";

		uniformClass = MACRO_NEW_UNIFORM(arfdes,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		camouflage = 0.6;

		linkedItems[] = { "ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = { "ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		weapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "U_BasicBody";
		backpack = "ORG_aux_blufor_backpack_ORG_rifleman_pack";
		magazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long)
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		Player_Hitpoints

		// define stuff like
		// armor, items, unit name

	};

	class MACRO_NEW_UNIT(arfjung,base) : lsd_gar_phase2_base
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] Clone ARF Jungle Base";

		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_MEN";

		uniformClass = MACRO_NEW_UNIFORM(arfjung,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		camouflage = 0.6;

		linkedItems[] = { "ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = { "ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		weapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "U_BasicBody";
		backpack = "ORG_aux_blufor_backpack_ORG_rifleman_pack";
		magazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long)
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		Player_Hitpoints

		// define stuff like
		// armor, items, unit name

	};

	class MACRO_NEW_UNIT(arfsnow,base) : lsd_gar_phase2_base
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] Clone ARF Snow Base";

		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_MEN";

		uniformClass = MACRO_NEW_UNIFORM(arfsnow,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		camouflage = 0.6;

		linkedItems[] = { "ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = { "ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		weapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "U_BasicBody";
		backpack = "ORG_aux_blufor_backpack_ORG_rifleman_pack";
		magazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long)
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		Player_Hitpoints

		// define stuff like
		// armor, items, unit name

	};

	class MACRO_NEW_UNIT(arfurb,base) : lsd_gar_phase2_base
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] Clone ARF Urban Base";

		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_MEN";

		uniformClass = MACRO_NEW_UNIFORM(arfurb,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		camouflage = 0.6;

		linkedItems[] = { "ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = { "ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		weapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "U_BasicBody";
		backpack = "ORG_aux_blufor_backpack_ORG_rifleman_pack";
		magazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long)
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		Player_Hitpoints

		// define stuff like
		// armor, items, unit name

	};

	class MACRO_NEW_UNIT(arfwood,base) : lsd_gar_phase2_base
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] Clone ARF Woodland Base";

		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_MEN";

		uniformClass = MACRO_NEW_UNIFORM(arfwood,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		camouflage = 0.6;

		linkedItems[] = { "ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = { "ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		weapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "U_BasicBody";
		backpack = "ORG_aux_blufor_backpack_ORG_rifleman_pack";
		magazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long)
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		Player_Hitpoints

		// define stuff like
		// armor, items, unit name

	};

	class MACRO_NEW_UNIT(mech,base) : lsd_gar_phase2_base
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] Clone Mechanized Base";

		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_MEN";

		uniformClass = MACRO_NEW_UNIFORM(mech,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		linkedItems[] = { "ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = { "ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		weapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "U_BasicBody";
		backpack = "ORG_aux_blufor_backpack_ORG_rifleman_pack";
		magazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long)
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		Player_Hitpoints

		// define stuff like
		// armor, items, unit name

	};

	class MACRO_NEW_UNIT(rto,base) : MACRO_NEW_UNIT(infantry,base)
	{
		displayName = "[ORG] Clone RTO Base";

		uniformClass = MACRO_NEW_UNIFORM(rto, base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		backpack = "ORG_aux_blufor_backpack_ORG_RTO_base";
	};

	class MACRO_NEW_UNIT(medic,base) : MACRO_NEW_UNIT(infantry,base)
	{
		displayName = "[ORG] Clone Medic Base";

		uniformClass = MACRO_NEW_UNIFORM(medic, base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		backpack = "ORG_aux_blufor_backpack_ORG_medic";
	};

	class MACRO_NEW_UNIT(aviation,base): lsd_gar_phase2_base
    {
        author = MACRO_AUTHOR;
        scope = 0;
        displayName = "[ORG] Clone Aviation Base";

		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_MEN";

        uniformClass = MACRO_NEW_UNIFORM(aviation,base);
        hiddenSelections[] = {"camo1","camo2","insignia"};
       
		linkedItems[] = {"ORG_aux_seniorensign_vest_ORG_FlightSeniorEnsign_Vest", "ORG_aux_aviation_helmet_ORG_pilot","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = { "ORG_aux_seniorensign_vest_ORG_FlightSeniorEnsign_Vest", "ORG_aux_aviation_helmet_ORG_pilot","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
		weapons[] = { "ORG_aux_weapon_DC_15s","Throw","Put" };
		respawnWeapons[] = { "ORG_aux_weapon_DC_15s","Throw","Put" };
		nakedUniform = "U_BasicBody";
		backpack = "ORG_aux_blufor_backpack_ORG_Pilot_Pack";
		magazines[] =
		{
			mag_15(ORG_aux_magazine_DC_15s_x60),
			mag_2(JLTS_stun_mag_long)
		};
		respawnMagazines[] =
		{
			mag_15(ORG_aux_magazine_DC_15s_x60),
			mag_2(JLTS_stun_mag_long)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		Player_Hitpoints

        // define stuff like
        // armor, items, unit name

    };

	class MACRO_NEW_UNIT(cwo,base): lsd_gar_phase2_base
    {
        author = MACRO_AUTHOR;
        scope = 0;
        displayName = "[ORG] Clone Warrant Officer Base";

		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_MEN";

        uniformClass = MACRO_NEW_UNIFORM(cwo,base);
        hiddenSelections[] = {"camo1","camo2","insignia"};
       
		linkedItems[] = {"ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_infantry_vest_ORG_officer","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = {"ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_infantry_vest_ORG_officer","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		weapons[] = { "ORG_aux_weapon_DC_15s","Throw","Put" };
		respawnWeapons[] = { "ORG_aux_weapon_DC_15s","Throw","Put" };
		nakedUniform = "U_BasicBody";
		backpack = "ORG_aux_blufor_backpack_ORG_Leadership";
		magazines[] =
		{
			mag_15(ORG_aux_magazine_DC_15s_x60),
			mag_2(JLTS_stun_mag_long)
		};
		respawnMagazines[] =
		{
			mag_15(ORG_aux_magazine_DC_15s_x60),
			mag_2(JLTS_stun_mag_long)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		Player_Hitpoints

    };

	class MACRO_NEW_UNIT(scenario,base) : JLTS_Clone_P2_DC15A
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] Clone Scenario Base";

		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_MEN";

		uniformClass = MACRO_NEW_UNIFORM(scenario,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		linkedItems[] = { "ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = { "ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		weapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "U_BasicBody";
		backpack = "ORG_aux_blufor_backpack_ORG_rifleman_pack";
		magazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(ORG_aux_magazine_ORG_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(ORG_aux_magazine_ORG_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		
		Player_Hitpoints

	};

	class MACRO_NEW_UNIT(captain,base) : lsd_gar_phase2_base
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] Clone Captain Base";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmorMC.p3d";
		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_MEN";

		uniformClass = MACRO_NEW_UNIFORM(captain,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		linkedItems[] = { "ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = { "ORG_aux_infantry_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" };
		weapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "ORG_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "U_BasicBody";
		backpack = "ORG_aux_blufor_backpack_ORG_rifleman_pack";
		magazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(ORG_aux_magazine_ORG_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_DC_15a_Low_x60),
			mag_5(ORG_aux_magazine_DC_15a_Medium_x30),
			mag_2(ORG_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(ORG_aux_magazine_ORG_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		Player_Hitpoints

	};

	class MACRO_NEW_UNIT(assault,base) : 3AS_Rep_Commando_base_F
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] Assault Clone Base";

		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_MEN";

		uniformClass = MACRO_NEW_UNIFORM(assault,base);

		linkedItems[] = { "ORG_aux_assault_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch" };
		respawnLinkedItems[] = { "ORG_aux_assault_helmet_ORG_trooper","ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch" };
		weapons[] = { "ORG_aux_weapon_DC_17m","Throw","Put" };
		respawnWeapons[] = { "ORG_aux_weapon_DC_17m","Throw","Put" };
		nakedUniform = "JLTS_CloneNaked_uniform";
		backpack = "ORG_aux_blufor_backpack_ORG_rifleman_pack";
		magazines[] =
		{
			mag_8(ORG_aux_magazine_DC_17m_rifle_x42),
			mag_2(JLTS_stun_mag_long),
			mag_2(ORG_aux_magazine_ORG_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_DC_17m_rifle_x42),
			mag_2(JLTS_stun_mag_long),
			mag_2(ORG_aux_magazine_ORG_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		Player_Hitpoints
	};
	// ---- End Blufor Units for Uniforms ----

	// ---- Opfor Units for Uniforms ----
	class O_Soldier_F;
	class O_soldier_AR_F;
	class O_Soldier_LAT_f;
	class O_Sniper_f;
	class O_Crew_f;
	class O_Officer_f;
	class O_Soldier_AT_F;
	class O_Helipilot_F;
	class lsd_cis_bxDroid_base;
	class O_Soldier_base_F;
	class lsd_cis_b2Droid_base;

	class JLTS_Droid_B1_E5 :O_Soldier_F
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_Rocket :JLTS_Droid_B1_E5
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_SBB3 :JLTS_Droid_B1_E5
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_AR : O_soldier_AR_F
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_AT : O_Soldier_LAT_f
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_Sniper : O_Sniper_f
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_Crew : O_Crew_f
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_Commander : O_Officer_f
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_Marine : O_Soldier_AT_F
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_Security : JLTS_Droid_B1_E5
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_Pilot : O_Helipilot_F
	{
		class HitPoints;
	};
	class lsd_cis_bxdroid_specops : lsd_cis_bxDroid_base
	{
		class HitPoints;
	};
	class lsd_cis_bxCaptain_specops : lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class lsd_cis_bxAssassin_specops : lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class lsd_cis_bxSecurity_specops : lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class lsd_cis_bxDiplomat_specops : lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class O_soldier_Melee : O_Soldier_base_F
	{
		class HitPoints;
	};
	class O_soldier_Melee_RUSH : O_Soldier_base_F
	{
		class HitPoints;
	};
	class WBK_BX_Assasin_1 : lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class WBK_BX_Assasin_Commander : WBK_BX_Assasin_1
	{
		class HitPoints;
	};
	class lsd_cis_b2_standard : lsd_cis_b2Droid_base
	{
		class HitPoints;
	};

	//B1
	class MACRO_NEW_UNIT(cisb1,base) : JLTS_Droid_B1_E5
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] B1 Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1,base);

		identityTypes[] = { "lsd_voice_b1Droid" };

		weapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };

		magazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"SmokeShellGreen",
			"SmokeShell"
		};

		B1_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisb1jumppack,base) : JLTS_Droid_B1_Rocket
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] B1 Jumppack Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1jumppack,base);

		identityTypes[] = { "lsd_voice_b1Droid" };

		weapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };

		magazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"SmokeShellGreen",
			"SmokeShell"
		};

		B1_Hitpoints

		class Eventhandlers
		{
			init = "[_this] spawn AuxORG_fnc_Jumppack";
		};

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisb1breach,base) : JLTS_Droid_B1_SBB3
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] B1 Breacher Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1,base);

		identityTypes[] = { "lsd_voice_b1Droid" };

		magazines[] =
		{
			mag_10(JLTS_SBB3_mag),
			mag_2(JLTS_RG4D_mag),
			"ORG_aux_magazine_ORG_FRAG_x1",
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(JLTS_SBB3_mag),
			mag_2(JLTS_RG4D_mag),
			"ORG_aux_magazine_ORG_FRAG_x1",
			"SmokeShellGreen",
			"SmokeShell"
		};
		

		B1_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisb1ar,base) : JLTS_Droid_B1_AR
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] B1 Support Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1,base);

		identityTypes[] = { "lsd_voice_b1Droid" };

		weapons[] = { MACRO_NEW_WEAPON(E5c),"JLTS_RG4D","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5c),"JLTS_RG4D","Throw","Put" };

		magazines[] =
		{
			mag_10(ORG_aux_magazine_E5cLow_x300),
			mag_2(JLTS_RG4D_mag),
			"ORG_aux_magazine_ORG_FRAG_x1",
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(ORG_aux_magazine_E5cLow_x300),
			mag_2(JLTS_RG4D_mag),
			"ORG_aux_magazine_ORG_FRAG_x1",
			"SmokeShellGreen",
			"SmokeShell"
		};

		B1_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisb1at,base) : JLTS_Droid_B1_AT
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] B1 Anti-Tank Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1,base);

		identityTypes[] = { "lsd_voice_b1Droid" };

		backpack = MACRO_NEW_BACKPACK(opfor,ORG_b1_at_bp);

		weapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","JLTS_RPS6","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","JLTS_RPS6","Throw","Put" };

		magazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"JLTS_RPS6_mag",
			"JLTS_RPS6_mag",
			"ORG_aux_magazine_ORG_FRAG_x1",
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"JLTS_RPS6_mag",
			"JLTS_RPS6_mag",
			"ORG_aux_magazine_ORG_FRAG_x1",
			"SmokeShellGreen",
			"SmokeShell"
		};

		B1_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisb1aa,base) : JLTS_Droid_B1_AT
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] B1 Anti-Tank Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1, base);

		identityTypes[] = { "lsd_voice_b1Droid" };

		backpack = MACRO_NEW_BACKPACK(opfor,ORG_b1_aa_bp);

		weapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D",MACRO_NEW_WEAPON(E60R_AA),"Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D",MACRO_NEW_WEAPON(E60R_AA),"Throw","Put" };

		magazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"ORG_aux_magazine_E60R_AAMag_x1",
			"ORG_aux_magazine_ORG_FRAG_x1",
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"ORG_aux_magazine_E60R_AAMag_x1",
			"ORG_aux_magazine_ORG_FRAG_x1",
			"SmokeShellGreen",
			"SmokeShell"
		};

		B1_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisb1sniper,base) : JLTS_Droid_B1_Sniper
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] B1 Sniper Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1,base);

		identityTypes[] = { "lsd_voice_b1Droid" };

		weapons[] = { MACRO_NEW_WEAPON(E5S_B1),"JLTS_RG4D","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5S_B1),"JLTS_RG4D","Throw","Put" };

		magazines[] =
		{
			mag_10(ORG_aux_magazine_E5S_Mag_x5),
			mag_2(JLTS_RG4D_mag),
		};
		respawnMagazines[] =
		{
			mag_10(ORG_aux_magazine_E5S_Mag_x5),
			mag_2(JLTS_RG4D_mag),
		};

		B1_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisb1crew,base) : JLTS_Droid_B1_Crew
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] B1 Crew Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1crew,base);

		identityTypes[] = { "lsd_voice_b1Droid" };

		weapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };

		magazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"SmokeShellGreen",
			"SmokeShell"
		};

		B1_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisb1comm,base) : JLTS_Droid_B1_Commander
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] B1 Commander Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1comm,base);

		identityTypes[] = { "lsd_voice_b1Droid" };

		weapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };

		magazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"SmokeShellGreen",
			"SmokeShell"
		};

		B1_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisb1marine,base) : JLTS_Droid_B1_Marine
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] B1 Marine Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1marine,base);

		identityTypes[] = { "lsd_voice_b1Droid" };

		weapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","JLTS_E60R_AT","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","JLTS_E60R_AT","Throw","Put" };

		magazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"ORG_aux_magazine_ORG_FRAG_x1",
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"ORG_aux_magazine_ORG_FRAG_x1",
			"SmokeShellGreen",
			"SmokeShell"
		};

		B1_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisb1sec,base) : JLTS_Droid_B1_Security
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] B1 Security Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1sec,base);

		identityTypes[] = { "lsd_voice_b1Droid" };

		weapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };

		magazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"ORG_aux_magazine_ORG_FRAG_x1",
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"ORG_aux_magazine_ORG_FRAG_x1",
			"SmokeShellGreen",
			"SmokeShell"
		};

		B1_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisb1pilot,base) : JLTS_Droid_B1_Pilot
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] B1 Pilot Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1pilot,base);

		identityTypes[] = { "lsd_voice_b1Droid" };

		weapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };

		magazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"SmokeShellGreen",
			"SmokeShell"
		};

		B1_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};


	//BX
	class MACRO_NEW_UNIT(cisbx,base) : lsd_cis_bxdroid_specops
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] BX Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbx,base);

		identityTypes[] = { "LanguageENG_F","Head_NATO" };

		weapons[] = { MACRO_NEW_WEAPON(E5X),"Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5X),"Throw","Put" };

		magazines[] =
		{
			mag_8(ORG_aux_magazine_E5X_Mag_x51),
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_E5X_Mag_x51),
		};

		BX_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisbxar,base) : lsd_cis_bxdroid_specops
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] BX Support Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbx,base);

		identityTypes[] = { "LanguageENG_F","Head_NATO" };

		weapons[] = { MACRO_NEW_WEAPON(E5c),"JLTS_RG4D","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5c),"JLTS_RG4D","Throw","Put" };

		magazines[] =
		{
			mag_10(ORG_aux_magazine_E5cLow_x300),
			mag_2(JLTS_RG4D_mag),
			"ORG_aux_magazine_ORG_FRAG_x1",
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(ORG_aux_magazine_E5cLow_x300),
			mag_2(JLTS_RG4D_mag),
			"ORG_aux_magazine_ORG_FRAG_x1",
			"SmokeShellGreen",
			"SmokeShell"
		};

		BX_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisbxat,base) : lsd_cis_bxdroid_specops
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] BX Anti-Tank Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbx,base);
		backpack = "JLTS_B1_backpack_at_predef";

		identityTypes[] = { "LanguageENG_F","Head_NATO" };

		weapons[] = { MACRO_NEW_WEAPON(E5X),"JLTS_RPS6", "Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5X),"JLTS_RPS6","Throw","Put" };

		magazines[] =
		{
			mag_8(ORG_aux_magazine_E5X_Mag_x51),
			"JLTS_RPS6_mag",
			"JLTS_RPS6_mag"
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_E5X_Mag_x51),
			"JLTS_RPS6_mag",
			"JLTS_RPS6_mag"
		};

		BX_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisbxbreach,base) : lsd_cis_bxdroid_specops
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] BX Breacher Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbx,base);

		identityTypes[] = { "LanguageENG_F","Head_NATO" };

		weapons[] = { "JLTS_SBB3","Throw","Put" };
		respawnWeapons[] = { "JLTS_SBB3","Throw","Put" };

		magazines[] =
		{
			mag_8(JLTS_SBB3_mag),
		};
		respawnMagazines[] =
		{
			mag_8(JLTS_SBB3_mag),
		};

		BX_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisbxcapt,base) : lsd_cis_bxCaptain_specops
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] BX Captain Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbxcapt,base);

		identityTypes[] = { "LanguageENG_F","Head_NATO" };

		weapons[] = { MACRO_NEW_WEAPON(E5X),"Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5X),"Throw","Put" };

		magazines[] =
		{
			mag_8(ORG_aux_magazine_E5X_Mag_x51),
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_E5X_Mag_x51),
		};

		BX_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisbxsec,base) : lsd_cis_bxSecurity_specops
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] BX Security Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbxsec,base);

		identityTypes[] = { "LanguageENG_F","Head_NATO" };

		weapons[] = { MACRO_NEW_WEAPON(E5X),"Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5X),"Throw","Put" };

		magazines[] =
		{
			mag_8(ORG_aux_magazine_E5X_Mag_x51),
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_E5X_Mag_x51),
		};

		BX_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisbxdiplo,base) : lsd_cis_bxDiplomat_specops
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] BX Security Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbxdiplo,base);

		identityTypes[] = { "LanguageENG_F","Head_NATO" };

		weapons[] = { MACRO_NEW_WEAPON(E5X),"Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5X),"Throw","Put" };

		magazines[] =
		{
			mag_8(ORG_aux_magazine_E5X_Mag_x51),
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_E5X_Mag_x51),
		};

		BX_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisbxassassin,base) : lsd_cis_bxAssassin_specops
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] BX Assassin Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbx,base);

		identityTypes[] = { "LanguageENG_F","Head_NATO" };

		weapons[] = { MACRO_NEW_WEAPON(E5S_BX),"JLTS_RG4D","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5S_BX),"JLTS_RG4D","Throw","Put" };

		magazines[] =
		{
			mag_10(ORG_aux_magazine_E5S_Mag_x5),
			mag_2(JLTS_RG4D_mag),
		};
		respawnMagazines[] =
		{
			mag_10(ORG_aux_magazine_E5S_Mag_x5),
			mag_2(JLTS_RG4D_mag),
		};

		BX_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisbxmelee,base) : O_soldier_Melee
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] BX Melee Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbx,base);
		nakedUniform = "lsd_cis_bxDroid_uniform";

		identityTypes[] = { "LanguageENG_F", "Head_LSD_BX" };

		linkedItems[] = { "ItemMap","SWLB_comlink_droid","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg" };
		respawnLinkedItems[] = { "ItemMap","SWLB_comlink_droid","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg" };
		weapons[] = { "WBK_Dutch_Vibro","Throw","Put" };
		respawnWeapons[] = { "WBK_Dutch_Vibro","Throw","Put" };

		BX_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisbxmeleerush,base) : O_soldier_Melee_RUSH
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] BX Melee Rush Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbx,base);
		nakedUniform = "lsd_cis_bxDroid_uniform";

		identityTypes[] = { "LanguageENG_F", "Head_LSD_BX" };

		linkedItems[] = { "ItemMap","SWLB_comlink_droid","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg" };
		respawnLinkedItems[] = { "ItemMap","SWLB_comlink_droid","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg" };
		weapons[] = { "WBK_Dutch_Vibro","Throw","Put" };
		respawnWeapons[] = { "WBK_Dutch_Vibro","Throw","Put" };

		BX_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisbxhybridcomm,base) : WBK_BX_Assasin_Commander
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] BX Melee Rush Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbxcapt,base);
		nakedUniform = "lsd_cis_bxDroid_uniform";

		identityTypes[] = { "LanguageENG_F", "Head_LSD_BX" };

		linkedItems[] = { "ItemMap","SWLB_comlink_droid","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg" };
		respawnLinkedItems[] = { "ItemMap","SWLB_comlink_droid","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg" };
		weapons[] = { MACRO_NEW_WEAPON(E5X),"WBK_Dutch_Vibro","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5X),"WBK_Dutch_Vibro","Throw","Put" };

		magazines[] =
		{
			mag_8(ORG_aux_magazine_E5X_Mag_x51),
			"WBK_Cybercrystal",
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_E5X_Mag_x51),
			"WBK_Cybercrystal",
		};

		BX_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};

	class MACRO_NEW_UNIT(cisbxhybrid,base) : WBK_BX_Assasin_1
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] BX Melee Rush Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbx,base);
		nakedUniform = "lsd_cis_bxDroid_uniform";

		identityTypes[] = { "LanguageENG_F", "Head_LSD_BX" };

		linkedItems[] = { "ItemMap","SWLB_comlink_droid","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg" };
		respawnLinkedItems[] = { "ItemMap","SWLB_comlink_droid","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg" };
		weapons[] = { MACRO_NEW_WEAPON(E5X),"WBK_Dutch_Vibro","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5X),"WBK_Dutch_Vibro","Throw","Put" };

		magazines[] =
		{
			mag_8(ORG_aux_magazine_E5X_Mag_x51),
			"WBK_Cybercrystal",
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_E5X_Mag_x51),
			"WBK_Cybercrystal",
		};

		BX_Hitpoints

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};

	};


	//Heavy Droids
	class Full_Shield;

	class Droideka_Shield : Full_Shield
	{
		displayName = "ORG Droideka Shield";

		scope = 1;
		scopecurator = 1;

		armor = 50;

		armorStructural = 1;

		class EventHandlers {
			init = "[_this] spawn AuxORG_fnc_init_DroidekaShield;";
		};
	};

	class Droideka_Sniper_Shield : Full_Shield
	{
		displayName = "ORG Droideka Sniper Shield";

		scope = 1;
		scopecurator = 1;

		armor = 50;

		armorStructural = 1;

		class EventHandlers {
			init = "[_this] spawn AuxORG_fnc_init_SniperDroidekaShield;";
		};
	};

	class StaticWeapon;
	class StaticMGWeapon : StaticWeapon
	{
		class Turrets;
	};

	class k_CIS_Droideka : StaticMGWeapon
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};

	class 3AS_Deka_Static_Base;

	class 3as_Deka_Static_Sniper_Base : 3AS_Deka_Static_Base
	{
		class Turrets;
	};

	class 3as_Deka_Static_Sniper : 3as_Deka_Static_Sniper_Base
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};

	class MACRO_NEW_UNIT(cisdroideka,base) : k_CIS_Droideka
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] Droideka Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_HEAVY";

		armor = 275;

		damageEffect = "";

		class EventHandlers {
			init = "[_this] spawn AuxORG_fnc_initDroideka;";
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] =
				{
					MACRO_NEW_WEAPON(338_Deka)
				};
				magazines[] = {
					MACRO_NEW_MAG(Deka_MAG,30),
					MACRO_NEW_MAG(Deka_MAG,30),
					MACRO_NEW_MAG(Deka_MAG,30),
					MACRO_NEW_MAG(Deka_MAG,30),
					MACRO_NEW_MAG(Deka_MAG,30)
				};
			};
		};

		class DestructionEffects
		{
			class Dust
			{
				simulation = "particles";
				type = "HousePartDust";
				position = "destructionEffect2";
				intensity = 1;
				interval = 1;
				lifeTime = 0.0099999998;
			};
			class UAVCrashSmoke
			{
				simulation = "particles";
				type = "UAVCrashSmoke";
				position = "destructionEffect2";
				intensity = 0.15000001;
				interval = 1;
				lifeTime = 0.012;
			};
			class sparks1
			{
				simulation = "particles";
				type = "ObjectDestructionSparks";
				position = "destructionEffect2";
				intensity = 0;
				interval = 1;
				lifeTime = 0;
			};
		};
	};

	class MACRO_NEW_UNIT(cissniperdroideka,base) : 3as_Deka_Static_Sniper
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] Sniper Droideka Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_HEAVY";

		armor = 150;
		armorStructural = 1;

		class EventHandlers {
			init = "[_this] spawn AuxORG_fnc_initSniperDroideka;";
		};

		class HitPoints
		{
			class HitGun
			{
				armor = 0.89999998;
				material = -1;
				name = "gun";
				visual = "autonomous_unhide";
				passThrough = 0;
				radius = 0.2;
			};
			class HitTurret : HitGun
			{
				armor = 0.30000001;
			};
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] =
				{
					MACRO_NEW_WEAPON(20mm_SniperDeka)
				};
				magazines[] = {
					MACRO_NEW_MAG(SniperDeka_MAG,10),
					MACRO_NEW_MAG(SniperDeka_MAG,10),
					MACRO_NEW_MAG(SniperDeka_MAG,10),
					MACRO_NEW_MAG(SniperDeka_MAG,10),
					MACRO_NEW_MAG(SniperDeka_MAG,10)
				};
			};
		};

		class DestructionEffects
		{
			class Dust
			{
				simulation = "particles";
				type = "HousePartDust";
				position = "destructionEffect2";
				intensity = 1;
				interval = 1;
				lifeTime = 0.0099999998;
			};
			class UAVCrashSmoke
			{
				simulation = "particles";
				type = "UAVCrashSmoke";
				position = "destructionEffect2";
				intensity = 0.15000001;
				interval = 1;
				lifeTime = 0.012;
			};
			class sparks1
			{
				simulation = "particles";
				type = "ObjectDestructionSparks";
				position = "destructionEffect2";
				intensity = 0;
				interval = 1;
				lifeTime = 0;
			};
		};
	};

	class MACRO_NEW_UNIT(cisdroidekamoveable,base) : k_CIS_Droideka
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] Droideka Moveable Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_HEAVY";

		armor = 275;

		damageEffect = "";

		class EventHandlers {
			init = "[_this] spawn AuxORG_fnc_initDroideka_Move;";
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] =
				{
					MACRO_NEW_WEAPON(338_Deka)
				};
				magazines[] = {
					MACRO_NEW_MAG(Deka_MAG,30),
					MACRO_NEW_MAG(Deka_MAG,30),
					MACRO_NEW_MAG(Deka_MAG,30),
					MACRO_NEW_MAG(Deka_MAG,30),
					MACRO_NEW_MAG(Deka_MAG,30)
				};
			};
		};

		class DestructionEffects
		{
			class Dust
			{
				simulation = "particles";
				type = "HousePartDust";
				position = "destructionEffect2";
				intensity = 1;
				interval = 1;
				lifeTime = 0.0099999998;
			};
			class UAVCrashSmoke
			{
				simulation = "particles";
				type = "UAVCrashSmoke";
				position = "destructionEffect2";
				intensity = 0.15000001;
				interval = 1;
				lifeTime = 0.012;
			};
			class sparks1
			{
				simulation = "particles";
				type = "ObjectDestructionSparks";
				position = "destructionEffect2";
				intensity = 0;
				interval = 1;
				lifeTime = 0;
			};
		};
	};

	class MACRO_NEW_UNIT(cissniperdroidekamoveable,base) : 3as_Deka_Static_Sniper
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] Sniper Droideka Moveable Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_HEAVY";

		armor = 150;
		armorStructural = 1;

		class EventHandlers {
			init = "[_this] spawn AuxORG_fnc_initSniperDroideka_Move;";
		};

		class HitPoints
		{
			class HitGun
			{
				armor = 0.89999998;
				material = -1;
				name = "gun";
				visual = "autonomous_unhide";
				passThrough = 0;
				radius = 0.2;
			};
			class HitTurret : HitGun
			{
				armor = 0.30000001;
			};
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] =
				{
					MACRO_NEW_WEAPON(20mm_SniperDeka)
				};
				magazines[] = {
					MACRO_NEW_MAG(SniperDeka_MAG,10),
					MACRO_NEW_MAG(SniperDeka_MAG,10),
					MACRO_NEW_MAG(SniperDeka_MAG,10),
					MACRO_NEW_MAG(SniperDeka_MAG,10),
					MACRO_NEW_MAG(SniperDeka_MAG,10)
				};
			};
		};

		class DestructionEffects
		{
			class Dust
			{
				simulation = "particles";
				type = "HousePartDust";
				position = "destructionEffect2";
				intensity = 1;
				interval = 1;
				lifeTime = 0.0099999998;
			};
			class UAVCrashSmoke
			{
				simulation = "particles";
				type = "UAVCrashSmoke";
				position = "destructionEffect2";
				intensity = 0.15000001;
				interval = 1;
				lifeTime = 0.012;
			};
			class sparks1
			{
				simulation = "particles";
				type = "ObjectDestructionSparks";
				position = "destructionEffect2";
				intensity = 0;
				interval = 1;
				lifeTime = 0;
			};
		};
	};

	class MACRO_NEW_UNIT(cisb2,base) : lsd_cis_b2_standard
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] *WIP* B2 Battle Droid Base";

		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_HEAVY";
		uniformClass = MACRO_NEW_UNIFORM(cisb2,base);
		nakedUniform = "lsd_cis_b2_standard";

		identityTypes[] = { "LanguageENG_F", "Head_NATO" };

		linkedItems[] = { "ItemMap","SWLB_comlink_droid","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg" };
		respawnLinkedItems[] = { "ItemMap","SWLB_comlink_droid","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg" };
		weapons[] = { MACRO_NEW_WEAPON(B2_Handcannon),"Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(B2_Handcannon),"Throw","Put" };

		magazines[] =
		{
			mag_8(ORG_aux_magazine_B2Low_x1000),
		};
		respawnMagazines[] =
		{
			mag_8(ORG_aux_magazine_B2Low_x1000),
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 32;
				material = -1;
				name = "face_hub";
				passThrough = 0.90000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 32;
				material = -1;
				name = "neck";
				passThrough = 0.90000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 32;
				material = -1;
				name = "head";
				passThrough = 0.90000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 50;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 30;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 30;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 50;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 30;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 30;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 30;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 30;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 30;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {
			generic[] = {
			 {"walk", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
			 {"sprint", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}},
			 {"sprint", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
			 {"sprint", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}}
			};
		};
		class SoundEquipment {
			soldier[] = {
			 {"walk", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
			 {"sprint", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}},
			 {"sprint", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
			 {"sprint", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};


		JLTS_hasStunProtection = 1;
	};

	// ---- Start Haxion Cartel Units ----

	class MACRO_NEW_UNIT(Haxion_SL,base) : O_Soldier_F
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[ORG] Haxion Squad Leader Base";

		faction = "EdCat_ORG_Haxion";
		editorSubcategory = "EdSubcat_ORG_MEN";
		uniformClass = MACRO_NEW_UNIFORM(Haxion_SL,base);

		identityTypes[] = { "ls_zabrak_male1t2_base", "Male03PER"};

		linkedItems[] = { "V_BandollierB_cbr","ItemMap","TFAR_anprc148jem","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_1" };
		respawnLinkedItems[] = { "V_BandollierB_cbr","ItemMap","TFAR_anprc148jem","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_1" };
		weapons[] = { "SWLW_ZH73","Throw","Put" };
		respawnWeapons[] = { "SWLW_ZH73","Throw","Put" };
		backpack = "ls_orsf_trooperLR_backpack";

		magazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(ORG_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			"SmokeShellGreen",
			"SmokeShell"
		};
	}
};

class Extended_Reloaded_EventHandlers
{
	//DM-17M
	class CAManBase
	{
		AuxORG_DC17M_MuzSwap = "if((_this select 1) == 'ORG_aux_weapon_DC_17m') then{[_this select 0, _this select 1, _this select 2, _this select 3, _this select 4] call AuxORG_fnc_init_MuzSwap;};";
	};
};