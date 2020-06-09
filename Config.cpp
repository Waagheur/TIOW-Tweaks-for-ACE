class CBA_Extended_EventHandlers_base;
class CfgPatches
{
	class TIOW_Tau_Air_Caste
	{
		units[]=
		{
			"TIOW_Air_Caste_Pilot_B",
			"TIOW_Air_Caste_Pilot_O",
			"TIOW_Air_Caste_Pilot_I",
			"TIOW_Tau_Crew",
			"TIOW_Tau_Crew_DY",
			"TIOW_Tau_Crew_SC",
			"TIOW_Tau_Crew_VL",
			"TIOW_Tau_Crew_FE",
			"TIOW_Tau_Crew_I",
			"TIOW_Tau_Crew_DY_I",
			"TIOW_Tau_Crew_VL_I",
			"TIOW_Tau_Crew_SC_I",
			"TIOW_Tau_Crew_FE_I",
			"TIOW_Tau_Crew_O",
			"TIOW_Tau_Crew_DY_O",
			"TIOW_Tau_Crew_VL_O",
			"TIOW_Tau_Crew_SC_O",
			"TIOW_Tau_Crew_FE_O"
		};
		weapons[]=
		{
			"U_TIOW_Air_Caste_Pilot",
			"U_TIOW_Tau_Crew",
			"U_TIOW_Tau_Crew_DY",
			"U_TIOW_Tau_Crew_SC",
			"U_TIOW_Tau_Crew_VL",
			"U_TIOW_Tau_Crew_FE",
			"U_TIOW_Air_Caste_Pilot_I",
			"U_TIOW_Tau_Crew_I",
			"U_TIOW_Tau_Crew_DY_I",
			"U_TIOW_Tau_Crew_SC_I",
			"U_TIOW_Tau_Crew_VL_I",
			"U_TIOW_Tau_Crew_FE_I",
			"U_TIOW_Air_Caste_Pilot_O",
			"U_TIOW_Tau_Crew_O",
			"U_TIOW_Tau_Crew_DY_O",
			"U_TIOW_Tau_Crew_SC_O",
			"U_TIOW_Tau_Crew_VL_O",
			"U_TIOW_Tau_Crew_FE_O"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class cfgVehicles
{
	class B_Soldier_base_F;
	class TIOW_Air_Caste_Pilot_B: B_Soldier_base_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		identityTypes[]=
		{
			"Tau",
			"LanguageENGB_F"
		};
		model="\40k_tau\Air_Caste_Pilot\Air_Caste_Pilot.p3d";
		uniformClass="U_TIOW_Air_Caste_Pilot";
		nakedUniform="U_BasicBody";
		icon="iconManEngineer";
		picture="pictureRepair";
		glassesEnabled=0;
		camouflage=1;
		side=1;
		faction="Tau_B";
		editorSubcategory="EdSubCat_TIOW_Tau_AirCaste";
		displayName="Tau Air Caste Pilot";
		backpack="";
		vest="";
		weapons[]=
		{
			"TIOW_pulse_pistol_VL",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"TIOW_pulse_pistol_VL",
			"Throw",
			"Put"
		};
		Items[]=
		{
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit"
		};
		magazines[]=
		{
			"TIOW_pulse_pistol_mag",
			"TIOW_pulse_pistol_mag"
		};
		respawnMagazines[]=
		{
			"TIOW_pulse_pistol_mag",
			"TIOW_pulse_pistol_mag"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		class UniformInfo
		{
			class SlotsInfo
			{
				class UniformSlotInfo;
				class NVG: UniformSlotInfo
				{
					slotType="NVG_SLOT";
				};
				class Scuba: UniformSlotInfo
				{
					slotType="SCUBA_SLOT";
				};
				class Googles: UniformSlotInfo
				{
					slotType="GOGGLE_SLOT";
				};
				class Headgear: UniformSlotInfo
				{
					slotType="HEADGEAR_SLOT";
				};
			};
		};
		class HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.1;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=20;
				material=-1;
				name="neck";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=20;
				material=-1;
				name="head";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor=50;
				material=-1;
				name="pelvis";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitAbdomen: HitPelvis
			{
				armor=50;
				material=-1;
				name="spine1";
				passThrough=0.1;
				radius=0.15000001;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=50;
				material=-1;
				name="spine2";
				passThrough=0.1;
				radius=0.15000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=200;
				material=-1;
				name="spine3";
				passThrough=0.1;
				radius=0.15000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=100;
				material=-1;
				name="body";
				passThrough=0.1;
				radius=0.16;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor=100;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitHands: HitArms
			{
				armor=50;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs
			{
				armor=100;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.12;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
		};
		armor=2;
		armorStructural=0.40000001;
		explosionShielding=0.039999999;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_bottom_CA.paa",
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_top_CA.paa"
		};
	};
	class TIOW_Air_Caste_Pilot_I: TIOW_Air_Caste_Pilot_B
	{
		side=2;
		faction="Tau_I";
		uniformClass="U_TIOW_Air_Caste_Pilot_I";
	};
	class TIOW_Air_Caste_Pilot_O: TIOW_Air_Caste_Pilot_B
	{
		side=0;
		faction="Tau_O";
		uniformClass="U_TIOW_Air_Caste_Pilot_O";
	};
	class TIOW_Tau_Crew: TIOW_Air_Caste_Pilot_B
	{
		uniformClass="U_TIOW_Tau_Crew";
		displayName="Tau Vehicle Crew";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_bottom_TA_CA.paa",
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_top_TA_CA.paa"
		};
	};
	class TIOW_Tau_Crew_DY: TIOW_Air_Caste_Pilot_B
	{
		uniformClass="U_TIOW_Tau_Crew_DY";
		displayName="Tau Vehicle Crew (Dal'Yth)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_bottom_DY_CA.paa",
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_top_DY_CA.paa"
		};
	};
	class TIOW_Tau_Crew_SC: TIOW_Air_Caste_Pilot_B
	{
		uniformClass="U_TIOW_Tau_Crew_SC";
		displayName="Tau Vehicle Crew (Sa'Cea)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_bottom_SC_CA.paa",
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_top_SC_CA.paa"
		};
	};
	class TIOW_Tau_Crew_VL: TIOW_Air_Caste_Pilot_B
	{
		uniformClass="U_TIOW_Tau_Crew_VL";
		displayName="Tau Vehicle Crew (Vior'La)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_bottom_CA.paa",
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_top_VL_CA.paa"
		};
	};
	class TIOW_Tau_Crew_FE: TIOW_Air_Caste_Pilot_B
	{
		uniformClass="U_TIOW_Tau_Crew_FE";
		displayName="Tau Vehicle Crew (Farsight Enclaves)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_bottom_FE_CA.paa",
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_top_FE_CA.paa"
		};
	};
	class TIOW_Tau_Crew_I: TIOW_Tau_Crew
	{
		side=2;
		faction="Tau_I";
		uniformClass="U_TIOW_Tau_Crew_I";
	};
	class TIOW_Tau_Crew_DY_I: TIOW_Tau_Crew_DY
	{
		side=2;
		faction="Tau_I";
		uniformClass="U_TIOW_Tau_Crew_DY_I";
	};
	class TIOW_Tau_Crew_VL_I: TIOW_Tau_Crew_VL
	{
		side=2;
		faction="Tau_I";
		uniformClass="U_TIOW_Tau_Crew_VL_I";
	};
	class TIOW_Tau_Crew_SC_I: TIOW_Tau_Crew_SC
	{
		side=2;
		faction="Tau_I";
		uniformClass="U_TIOW_Tau_Crew_SC_I";
	};
	class TIOW_Tau_Crew_FE_I: TIOW_Tau_Crew_FE
	{
		side=2;
		faction="Tau_I";
		uniformClass="U_TIOW_Tau_Crew_FE_I";
	};
	class TIOW_Tau_Crew_O: TIOW_Tau_Crew
	{
		side=0;
		faction="Tau_O";
		uniformClass="U_TIOW_Tau_Crew_O";
	};
	class TIOW_Tau_Crew_DY_O: TIOW_Tau_Crew_DY
	{
		side=0;
		faction="Tau_O";
		uniformClass="U_TIOW_Tau_Crew_DY_O";
	};
	class TIOW_Tau_Crew_VL_O: TIOW_Tau_Crew_VL
	{
		side=0;
		faction="Tau_O";
		uniformClass="U_TIOW_Tau_Crew_VL_O";
	};
	class TIOW_Tau_Crew_SC_O: TIOW_Tau_Crew_SC
	{
		side=0;
		faction="Tau_O";
		uniformClass="U_TIOW_Tau_Crew_SC_O";
	};
	class TIOW_Tau_Crew_FE_O: TIOW_Tau_Crew_FE
	{
		side=0;
		faction="Tau_O";
		uniformClass="U_TIOW_Tau_Crew_FE_O";
	};
};
class CfgEditorSubCategories
{
	class EdSubCat_TIOW_Tau_AirCaste
	{
		author="[TIOW]Sokolonko";
		displayName="Tau Crew";
	};
};
class cfgWeapons
{
	class ItemCore;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class U_TIOW_Air_Caste_Pilot: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="Tau Air Caste Pilot";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		picture="\40k_tau\Weapons\Definitions\UI\Uniform.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_bottom_CA.paa",
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_top_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Air_Caste_Pilot_B";
			uniformModel="-";
			containerClass="Supply200";
			mass=150;
		};
	};
	class U_TIOW_Tau_Crew: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="Tau Crew Uniform";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		picture="\40k_tau\Weapons\Definitions\UI\Uniform.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_bottom_TA_CA.paa",
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_top_TA_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Tau_Crew";
			uniformModel="-";
			containerClass="Supply200";
			mass=150;
		};
	};
	class U_TIOW_Tau_Crew_DY: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="Tau Crew Uniform (Dal'Yth)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		picture="\40k_tau\Weapons\Definitions\UI\Uniform.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_bottom_DY_CA.paa",
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_top_DY_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Tau_Crew_DY";
			uniformModel="-";
			containerClass="Supply200";
			mass=150;
		};
	};
	class U_TIOW_Tau_Crew_SC: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="Tau Crew Uniform (Sa'Cea)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		picture="\40k_tau\Weapons\Definitions\UI\Uniform.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_bottom_SC_CA.paa",
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_top_SC_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Tau_Crew_SC";
			uniformModel="-";
			containerClass="Supply200";
			mass=150;
		};
	};
	class U_TIOW_Tau_Crew_VL: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="Tau Crew Uniform (Vior'La)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		picture="\40k_tau\Weapons\Definitions\UI\Uniform.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_bottom_CA.paa",
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_top_VL_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Tau_Crew_VL";
			uniformModel="-";
			containerClass="Supply200";
			mass=150;
		};
	};
	class U_TIOW_Tau_Crew_FE: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="Tau Crew Uniform (Farsight Enclaves)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		picture="\40k_tau\Weapons\Definitions\UI\Uniform.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_bottom_FE_CA.paa",
			"\40k_tau\Air_Caste_Pilot\data\Air_caste_uniform_top_FE_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Tau_Crew_FE";
			uniformModel="-";
			containerClass="Supply200";
			mass=150;
		};
	};
	class U_TIOW_Air_Caste_Pilot_I: U_TIOW_Air_Caste_Pilot
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Air_Caste_Pilot_I";
		};
	};
	class U_TIOW_Tau_Crew_I: U_TIOW_Tau_Crew
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Tau_Crew_I";
		};
	};
	class U_TIOW_Tau_Crew_DY_I: U_TIOW_Tau_Crew_DY
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Tau_Crew_DY_I";
		};
	};
	class U_TIOW_Tau_Crew_SC_I: U_TIOW_Tau_Crew_SC
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Tau_Crew_SC_I";
		};
	};
	class U_TIOW_Tau_Crew_VL_I: U_TIOW_Tau_Crew_VL
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Tau_Crew_VL_I";
		};
	};
	class U_TIOW_Tau_Crew_FE_I: U_TIOW_Tau_Crew_FE
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Tau_Crew_FE_I";
		};
	};
	class U_TIOW_Air_Caste_Pilot_O: U_TIOW_Air_Caste_Pilot
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Air_Caste_Pilot_O";
		};
	};
	class U_TIOW_Tau_Crew_O: U_TIOW_Tau_Crew
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Tau_Crew_O";
		};
	};
	class U_TIOW_Tau_Crew_DY_O: U_TIOW_Tau_Crew_DY
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Tau_Crew_DY_O";
		};
	};
	class U_TIOW_Tau_Crew_SC_O: U_TIOW_Tau_Crew_SC
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Tau_Crew_SC_O";
		};
	};
	class U_TIOW_Tau_Crew_VL_O: U_TIOW_Tau_Crew_VL
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Tau_Crew_VL_O";
		};
	};
	class U_TIOW_Tau_Crew_FE_O: U_TIOW_Tau_Crew_FE
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Tau_Crew_FE_O";
		};
	};
};
