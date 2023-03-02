class CfgPatches
{
	class Bro_MELB_Camos
	{
		name="[Bro] RHS Little Bird - Camos";
		units[]= {};
		weapons[]={};
		requiredVersion=1.5599999;
		requiredAddons[]=
		{
			"rhsusf_c_melb"
		};
		author="";
		authors[]=
		{
			""
		};
		version="0.6.0.26";
		versionStr="0.6.0.26";
		versionAr[]={0,6,0,26};
		magazines[]={};
	};
};
class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class EventHandlers;
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class CargoTurret;
		class AnimationSources;
		class ViewOptics;
		class RotorLibHelicopterProperties;
		class Components;
	};
	class RHS_MELB_base: Helicopter_Base_H
	{
		class textureSources
		{
			class Bro_Base
			{
				displayName = "[Bro] Default Black";
				author = "Bromine";
				textures[] = 
				{
					"rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa"
				};
				materials[] =
				{
					"rhsusf\addons\rhsusf_melb\data\melb_ext.rvmat"
				};
				factions[] = {};
			};
			class Bro_Gold1: Bro_Base
			{
				displayName = "[Bro] Gold Vein";
				textures[] = 
				{
					"Bro_MELB_Skins\Gold1\melb_ext_co.paa"
				};
				materials[] =
				{
					"Bro_MELB_Skins\Gold1\melb_ext.rvmat"
				};
			};
			class Bro_Gold2: Bro_Base
			{
				displayName = "[Bro] Solid Gold";
				textures[] = 
				{
					"Bro_MELB_Skins\Gold2\melb_ext_co.paa"
				};
				materials[] =
				{
					"Bro_MELB_Skins\Gold2\melb_ext.rvmat"
				};
			};
			class Bro_Tan: Bro_Base
			{
				displayName = "[Bro] Tan";
				textures[] = 
				{
					"Bro_MELB_Skins\Tan\melb_ext_co.paa"
				};
			};
			class Bro_Green: Bro_Base
			{
				displayName = "[Bro] Green";
				textures[] = 
				{
					"Bro_MELB_Skins\Green\melb_ext_co.paa"
				};
			};
			class Bro_White: Bro_Base
			{
				displayName = "[Bro] White";
				textures[] = 
				{
					"Bro_MELB_Skins\White\melb_ext_co.paa"
				};
			};
			class Bro_LV: Bro_Base
			{
				displayName = "[Bro] LV Pattern";
				textures[] = 
				{
					"Bro_MELB_Skins\LV\melb_ext_co.paa"
				};
			};
			class Bro_MT: Bro_Base
			{
				displayName = "[Bro] Missing Textures";
				textures[] = 
				{
					"Bro_MELB_Skins\MT\melb_ext_co.paa"
				};
			};
			class Bro_Floppa: Bro_Base
			{
				displayName = "[Bro] Floppa Choppa";
				textures[] = 
				{
					"Bro_MELB_Skins\Floppa\melb_ext_co.paa"
				};
			};
		};
	};
};