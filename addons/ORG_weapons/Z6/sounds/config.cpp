#include "../../../ORG_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Z6_sounds)
	{
		author = "ORG Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
		    
			"A3_Data_F",
		    "A3_Weapons_F",
			MACRO_PATCH_NAME(weapons)
		};
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
	};
};
//"ORG_weapons\DC\15a\sounds\DC15p.wss",

class cfgSoundShaders 
{
	//###################################### SHOTS ######################################
	class ORG_Z6_Closure_SoundShader
	{
		samples[] = {{"ORG_weapons\Z6\sounds\Z6Close.wss",1}}; 
		volume = 0.4466836; 
		range = 5;
	};
	class ORG_Z6_closeShot_SoundShader
	{
		samples[] = {{"ORG_weapons\Z6\sounds\Z6Close.wss",1}};
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class ORG_Z6_midShot_SoundShader
	{
		samples[] = {{"ORG_weapons\Z6\sounds\Z6Distant.wss",1}};
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class ORG_Z6_distShot_SoundShader
	{
		samples[] = {{"ORG_weapons\Z6\sounds\Z6Far.wss",1}};
		volume = 1.0;
		range = 4000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{4000,1}};
	};
	//--------------------------------SUPERCHARGE----------------------------------------
	class ORG_Z6_Supercharge_Closure_SoundShader
	{
		samples[] = {{"ORG_weapons\Z6\sounds\Z6SuperchargeClose.wss",1}}; 
		volume = 0.4466836; 
		range = 5;
	};
	class ORG_Z6_Supercharge_closeShot_SoundShader
	{
		samples[] = {{"ORG_weapons\Z6\sounds\Z6SuperchargeClose.wss",1}};
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class ORG_Z6_Supercharge_midShot_SoundShader
	{
		samples[] = {{"ORG_weapons\Z6\sounds\Z6SuperchargeDistant.wss",1}};
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class ORG_Z6_Supercharge_distShot_SoundShader
	{
		samples[] = {{"ORG_weapons\Z6\sounds\Z6SuperchargeFar.wss",1}};
		volume = 1.0;
		range = 4000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{4000,1}};
	};
	//###################################### TAILS ######################################
	class ORG_Z6_tailInterior_SoundShader
	{
		samples[] = {{"ORG_weapons\Z6\sounds\Z6TailIndoors.wss",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class ORG_Z6_tailTrees_SoundShader
	{
		samples[] = {{"ORG_weapons\Z6\sounds\Z6TailTree.wss",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class ORG_Z6_tailForest_SoundShader
	{
		samples[] = {{"ORG_weapons\Z6\sounds\Z6TailForest.wss",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class ORG_Z6_tailMeadows_SoundShader
	{
		samples[] = {{"ORG_weapons\Z6\sounds\Z6Outdoors.wss",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class ORG_Z6_tailHouses_SoundShader
	{
		samples[] = {{"ORG_weapons\Z6\sounds\Z6TailHouse.wss",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
};

class cfgSoundSets //on more info about soundSets look at the [[Arma_3_Sound:_cfgSoundSets|relevant wiki page]]
{
	class ORG_Z6_Shot_SoundSet
	{
		soundShaders[] = {"ORG_Z6_Closure_SoundShader","ORG_Z6_closeShot_SoundShader","ORG_Z6_midShot_SoundShader","ORG_Z6_distShot_SoundShader","ORG_DC15a_tailInterior_SoundShader"};
		volumeFactor = 1;
		frequencyRandomizer = 0.75;
		frequencyRandomizermin = 0.25;
		volumeCurve = "ORG_weapons_basic_volumecurve";
		sound3DProcessingType = "ORG_weapons_3dprocessor";
		distanceFilter = "ORG_weapons_lowpass_filter";
		occlusionFactor=0.25;
        obstructionFactor=0.30000001;
		spatial = 1;
		doppler = 0;
	
		loop = 0;
	};
	class ORG_Z6_Supercharge_Shot_SoundSet
	{
		soundShaders[] = {"ORG_Z6_Supercharge_Closure_SoundShader","ORG_Z6_Supercharge_closeShot_SoundShader","ORG_Z6_Supercharge_midShot_SoundShader","ORG_Z6_Supercharge_distShot_SoundShader","ORG_DC15a_tailInterior_SoundShader"};
		volumeFactor = 1.3;
		frequencyRandomizer = 1;
		frequencyRandomizermin = 0.4;
		volumeCurve = "ORG_weapons_basic_volumecurve";
		sound3DProcessingType = "ORG_weapons_3dprocessor";
		distanceFilter = "ORG_weapons_lowpass_filter";
		occlusionFactor=0.25;
        obstructionFactor=0.30000001;
		spatial = 1;
		doppler = 0;
	
		loop = 0;
	};
};