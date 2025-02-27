#include "../ORG_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(helmets)
	{
		author = "Namenai";
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(main)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

	class JLTS_CloneHelmetP2;
    class ls_gar_phase1_helmet;
	class ls_gar_phase2_helmet;
	class JLTS_CloneHelmetARC;

	class CloneHelmetScenario_Base : JLTS_CloneHelmetP2
	{
		scopeArsenal = 0;
		class ItemInfo;
	};

	class CloneHelmetP1_Base : ls_gar_phase1_helmet
	{
		scopeArsenal = 0;
		class ItemInfo;
	};

	class CloneHelmetP2_Base : ls_gar_phase2_helmet
	{
		scopeArsenal = 0;
		class ItemInfo;
	};

	class CloneHelmetARC_Base : JLTS_CloneHelmetARC
	{
		scopeArsenal = 0;
		class ItemInfo;
	};

	//Base infantry helmet
    class MACRO_NEW_HELMET(infantry,base): CloneHelmetP1_Base
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Infantry Helmet ('base')";
        subItems[] = {"G_B_Diving"};

		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 16;
					passThrough = 0.5;
				};
			};
		};
    }

	class MACRO_NEW_HELMET(infantry_P2,base) : CloneHelmetP2_Base
	{
		scopeArsenal = 0;
		scope = 0;
		author = MACRO_AUTHOR;
		displayName = "[ORG] Infantry Helmet ('base')";
		subItems[] = { "G_B_Diving" };

		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 16;
					passThrough = 0.5;
				};
			};
		};
	}

	//Base Airborne Helmet
	class MACRO_NEW_HELMET(airborne,base) : CloneHelmetP1_Base
	{
		scopeArsenal = 0;
		scope = 0;
		author = MACRO_AUTHOR;
		displayName = "[ORG] Airborne Helmet ('base')";
		subItems[] = { "G_B_Diving" };

		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 16;
					passThrough = 0.5;
				};
			};
		};
	}

	class MACRO_NEW_HELMET(airborne_P2,base) : CloneHelmetP2_Base
	{
		scopeArsenal = 0;
		scope = 0;
		author = MACRO_AUTHOR;
		displayName = "[ORG] Airborne Helmet ('base')";
		subItems[] = { "G_B_Diving" };

		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 16;
					passThrough = 0.5;
				};
			};
		};
	}

	class MACRO_NEW_HELMET(arc,base) : CloneHelmetARC_Base
	{
		scopeArsenal = 0;
		scope = 0;
		author = MACRO_AUTHOR;
		displayName = "[ORG] Arc Helmet ('base')";
		subItems[] = { "G_B_Diving" };

		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 16;
					passThrough = 0.5;
				};
			};
		};
	}

	class 3as_P2_Pilot_helmet;

	class CloneHelmetPilot_Base : 3as_P2_Pilot_helmet
	{
		scopeArsenal = 0;
		class ItemInfo;
	};

	//Base aviation helmet
	class MACRO_NEW_HELMET(aviation,base): CloneHelmetPilot_Base
	{
		scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Aviation Helmet ('base')";
        subItems[] = {"Integrated_NVG_TI_1_F"};

		ace_hearing_lowerVolume = 0.60000002;
		ace_hearing_protection = 0.85000002;

		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 16;
					passThrough = 0.5;
					explosionShielding = 0.75;
				};
			};
		};
	}

	//ARF helmet

	class 3AS_ARF_Helmet;

	class CloneARFHelmet_Base :3AS_ARF_Helmet
	{
		scopeArsenal = 0;
		class ItemInfo;
	};

	class MACRO_NEW_HELMET(arf,base): CloneARFHelmet_Base
	{
		scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] ARF Helmet ('base')";
        subItems[] = {"Integrated_NVG_TI_1_F"};

		ace_hearing_lowerVolume = 0.60000002;
		ace_hearing_protection = 0.85000002;

		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 16;
					passThrough = 0.5;
				};
			};
		};
	}

	class MACRO_NEW_HELMET(arfcustom,base) : CloneARFHelmet_Base
	{
		scopeArsenal = 0;
		scope = 0;
		author = MACRO_AUTHOR;
		displayName = "[ORG] ARF Custom Helmet ('base')";
		subItems[] = { "Integrated_NVG_TI_1_F" };

		ace_hearing_lowerVolume = 0.60000002;
		ace_hearing_protection = 0.85000002;

		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 16;
					passThrough = 0.5;
				};
			};
		};
	}

	class JLTS_CloneHelmetBARC;

	class CloneBARCHelmet_Base :JLTS_CloneHelmetBARC
	{
		scopeArsenal = 0;
		class ItemInfo;
	};

	class MACRO_NEW_HELMET(barc,base): CloneBARCHelmet_Base
	{
		scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] barc Helmet ('base')";

		ace_hearing_lowerVolume = 0.60000002;
		ace_hearing_protection = 0.85000002;

		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 16;
					passThrough = 0.5;
				};
			};
		};
	}

	//Base Engineer helmet
	class MACRO_NEW_HELMET(engineer,base): CloneHelmetP1_Base
	{
		scopeArsenal = 0;
		scope = 0;
		author = MACRO_AUTHOR;
		displayName = "[ORG] Engineer Helmet ('base')";
		subItems[] = { "G_B_Diving" };

		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 16;
					passThrough = 0.5;
				};
			};
		};
	}

	class MACRO_NEW_HELMET(scenario,base) : CloneHelmetScenario_Base
	{
		scopeArsenal = 0;
		scope = 0;
		author = MACRO_AUTHOR;
		displayName = "[ORG] Scenario Helmet ('base')";
		subItems[] = { "G_B_Diving" };

		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 16;
					passThrough = 0.5;
				};
			};
		};
	}

	class 3AS_H_Katarn_Helmet;
	class AssaultHelmet_Base : 3AS_H_Katarn_Helmet
	{
		scopeArsenal = 0;
		class ItemInfo;
	};

	class MACRO_NEW_HELMET(assault,base) : AssaultHelmet_Base
	{
		scopeArsenal = 0;
		scope = 0;
		author = MACRO_AUTHOR;
		displayName = "[ORG] Assault Helmet ('base')";
		subItems[] = { "G_B_Diving" };

		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 16;
					passThrough = 0.5;
				};
			};
		};
	}
}