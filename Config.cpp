class CBA_Extended_EventHandlers_base;
class CfgPatches
{
	class TIOW_ACE_MOD {
		author = "Waagheur";
		name = "TIOW Tweaks for ACE";
		requiredAddons[] = {
			"TIOW_40k_Tau",
			"A3_Characters_F",
			"CadFoot",
			"TIOW_Valhallans"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		worlds[] = {};
	};
};

#define ADD_ACE_HITPOINTS(arm_armor,leg_armor)
     class HitLeftArm {
         armor = arm_armor;
         material = -1;
         name = "hand_l";
         passThrough = 1;
         radius = 0.08;
         explosionShielding = 1;
         visual = "injury_hands";
         minimalHit = 0;
     };
     class HitRightArm: HitLeftArm {
         name = "hand_r";
     };
     class HitLeftLeg {
         armor = leg_armor;
         material = -1;
         name = "leg_l";
         passThrough = 1;
         radius = 0.1;
         explosionShielding = 1;
         visual = "injury_legs";
         minimalHit = 0;
     };
     class HitRightLeg: HitLeftLeg {
         name = "leg_r";
     };
     class ACE_HDBracket {
         armor = 1;
         material = -1;
         name = "head";
         passThrough = 0;
         radius = 1;
         explosionShielding = 1;
         visual = "";
         minimalHit = 0;
         depends = "HitHead";
     };

class cfgVehicles
{
	class CadTroopBase;
	class TIOWACE_Fire_Warrior: CadTroopBase
	{
		uniformClass = "U_TIOW_Fire_Warrior";
		model="\40k_tau\Fire_Warrior\Fire_Warrior.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_CA",
			"\40k_tau\Fire_Warrior\data\FW_Cloth_CA"
		};
	};
	
	class TIOW_Fire_Warrior_DY: TIOWACE_Fire_Warrior
	{
		uniformClass="U_TIOW_Fire_Warrior_DY";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_DY_CA",
			"\40k_tau\Fire_Warrior\data\FW_Cloth_DY_CA"
		};
	};
	class TIOW_Fire_Warrior_SC: TIOWACE_Fire_Warrior
	{
		uniformClass="U_TIOW_Fire_Warrior_SC";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_SC_CA",
			"\40k_tau\Fire_Warrior\data\FW_Cloth_SC_CA"
		};
	};
	class TIOW_Fire_Warrior_VL: TIOWACE_Fire_Warrior
	{
		uniformClass="U_TIOW_Fire_Warrior_VL";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_VL_CA",
			"\40k_tau\Fire_Warrior\data\FW_Cloth_VL_CA"
		};
	};
	class TIOW_Fire_Warrior_FE: TIOWACE_Fire_Warrior
	{
		uniformClass="U_TIOW_Fire_Warrior_FE";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_FE_CA",
			"\40k_tau\Fire_Warrior\data\FW_Cloth_FE_CA"
		};
	};
	class TIOWACE_Pathfinder: CadTroopBase
	{
		uniformClass="TIOW_Pathfinder";
		model="\40k_tau\Pathfinder\Pathfinder.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_CA",
			"\40k_tau\Pathfinder\data\Pathfinder_Cloth_CA"
		};
	};
	class TIOW_Pathfinder_DY: TIOWACE_Pathfinder
	{
		uniformClass="U_TIOW_Pathfinder_DY";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_DY_CA",
			"\40k_tau\Pathfinder\data\Pathfinder_Cloth_DY_CA"
		};
	};
	class TIOW_Pathfinder_SC: TIOWACE_Pathfinder
	{
		uniformClass="U_TIOW_Pathfinder_SC";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_SC_CA",
			"\40k_tau\Pathfinder\data\Pathfinder_Cloth_SC_CA"
		};
	};
	class TIOW_Pathfinder_VL: TIOWACE_Pathfinder
	{
		uniformClass="U_TIOW_Pathfinder_VL";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_VL_CA",
			"\40k_tau\Pathfinder\data\Pathfinder_Cloth_VL_CA"
		};
	};
	class TIOW_Pathfinder_FE: TIOWACE_Pathfinder
	{
		uniformClass="U_TIOW_Pathfinder_FE";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_FE_CA",
			"\40k_tau\Pathfinder\data\Pathfinder_Cloth_FE_CA"
		};
	};
	class TIOWACE_Air_Caste_Pilot_B: CadTroopBase
	{
		model="\40k_tau\Air_Caste_Pilot\Air_Caste_Pilot.p3d";
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
	class TIOW_Air_Caste_Pilot_I: TIOWACE_Air_Caste_Pilot_B
	{
	};
	class TIOW_Air_Caste_Pilot_O: TIOWACE_Air_Caste_Pilot_B
	{
	};
	class TIOW_Tau_Crew: TIOWACE_Air_Caste_Pilot_B
	{
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
	class TIOW_Tau_Crew_DY: TIOWACE_Air_Caste_Pilot_B
	{
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
	class TIOW_Tau_Crew_SC: TIOWACE_Air_Caste_Pilot_B
	{
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
	class TIOW_Tau_Crew_VL: TIOWACE_Air_Caste_Pilot_B
	{
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
	class TIOW_Tau_Crew_FE: TIOWACE_Air_Caste_Pilot_B
	{
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
	};
	class TIOW_Tau_Crew_DY_I: TIOW_Tau_Crew_DY
	{
	};
	class TIOW_Tau_Crew_VL_I: TIOW_Tau_Crew_VL
	{
	};
	class TIOW_Tau_Crew_SC_I: TIOW_Tau_Crew_SC
	{
	};
	class TIOW_Tau_Crew_FE_I: TIOW_Tau_Crew_FE
	{
	};
	class TIOW_Tau_Crew_O: TIOW_Tau_Crew
	{
	};
	class TIOW_Tau_Crew_DY_O: TIOW_Tau_Crew_DY
	{
	};
	class TIOW_Tau_Crew_VL_O: TIOW_Tau_Crew_VL
	{
	};
	class TIOW_Tau_Crew_SC_O: TIOW_Tau_Crew_SC
	{
	};
	class TIOW_Tau_Crew_FE_O: TIOW_Tau_Crew_FE
	{
	};
	class TIOWACE_Valhallan_Trooper_1_Blu: CadTroopBase
	{
		uniformClass="U_TIOW_Valhallan_Blu";
		model="\TIOW_Valhallans\TIOW_Valhallan_Uniforms\Valhallan_uniform.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_Valhallans\TIOW_Valhallan_Uniforms\data\uniform_CA.paa",
			"\TIOW_Valhallans\TIOW_Valhallan_Uniforms\data\mittens_black_CA.paa"
		};
	};
	class TIOW_Valhallan_Trooper_1_white_Blu: TIOWACE_Valhallan_Trooper_1_Blu
	{
		uniformClass="U_TIOW_Valhallan_white_Blu";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_Valhallans\TIOW_Valhallan_Uniforms\data\uniform_white_CA.paa",
			"\TIOW_Valhallans\TIOW_Valhallan_Uniforms\data\mittens_white_CA.paa"
		};
	};
	class TIOW_Valhallan_Trooper_1_camo_Blu: TIOWACE_Valhallan_Trooper_1_Blu
	{
		uniformClass="U_TIOW_Valhallan_camo_Blu";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_Valhallans\TIOW_Valhallan_Uniforms\data\uniform_camo_CA.paa",
			"\TIOW_Valhallans\TIOW_Valhallan_Uniforms\data\mittens_white_CA.paa"
		};
	};
	class TIOW_Valhallan_Trooper_1_brown_Blu: TIOWACE_Valhallan_Trooper_1_Blu
	{
		uniformClass="U_TIOW_Valhallan_brown_Blu";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_Valhallans\TIOW_Valhallan_Uniforms\data\uniform_brown_CA.paa",
			"\TIOW_Valhallans\TIOW_Valhallan_Uniforms\data\mittens_brown_CA.paa"
		};
	};
};



class cfgWeapons
{
	class ItemCore;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class U_TIOW_Fire_Warrior: Uniform_Base
	{
		scope=2;
		author="Sokolonko";
		displayName="Tau Fire Warrior [T'Au sept]";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		picture="\40k_tau\Weapons\Definitions\UI\Uniform.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_CA",
			"\40k_tau\Fire_Warrior\data\FW_Cloth_CA"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOWACE_Fire_Warrior";
			uniformModel="-";
			containerClass="Supply200";
			mass=150;
		};
	};
	class U_TIOW_Fire_Warrior_DY: U_TIOW_Fire_Warrior
	{
		displayName="Tau Fire Warrior [Dal'Yth sept]";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_DY_CA",
			"\40k_tau\Fire_Warrior\data\FW_Cloth_DY_CA"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Fire_Warrior_DY";
		};
	};
	class U_TIOW_Fire_Warrior_SC: U_TIOW_Fire_Warrior
	{
		displayName="Tau Fire Warrior [Sa'Cea sept]";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_SC_CA",
			"\40k_tau\Fire_Warrior\data\FW_Cloth_SC_CA"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Fire_Warrior_SC";
		};
	};
	class U_TIOW_Fire_Warrior_VL: U_TIOW_Fire_Warrior
	{
		displayName="Tau Fire Warrior [Vior'La sept]";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_VL_CA",
			"\40k_tau\Fire_Warrior\data\FW_Cloth_VL_CA"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Fire_Warrior_VL";
		};
	};
	class U_TIOW_Fire_Warrior_FE: U_TIOW_Fire_Warrior
	{
		displayName="Tau Fire Warrior [Farsight Enclaves]";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_FE_CA",
			"\40k_tau\Fire_Warrior\data\FW_Cloth_FE_CA"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Fire_Warrior_FE";
		};
	};
	class U_TIOW_Pathfinder: Uniform_Base
	{
		scope=2;
		author="Sokolonko";
		displayName="Tau Fire Pathfinder [T'Au sept]";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		picture="\40k_tau\Weapons\Definitions\UI\Uniform.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOWACE_Pathfinder";
			uniformModel="-";
			containerClass="Supply160";
			mass=40;
		};
	};
	class U_TIOW_Pathfinder_DY: U_TIOW_Pathfinder
	{
		displayName="Tau Pathfinder [Dal'Yth sept]";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_DY_CA",
			"\40k_tau\Pathfinder\data\Pathfinder_Cloth_DY_CA"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Pathfinder_DY";
		};
	};
	class U_TIOW_Pathfinder_SC: U_TIOW_Pathfinder
	{
		displayName="Tau Pathfinder [Sa'Cea sept]";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_SC_CA",
			"\40k_tau\Pathfinder\data\Pathfinder_Cloth_SC_CA"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Pathfinder_SC";
		};
	};
	class U_TIOW_Pathfinder_VL: U_TIOW_Pathfinder
	{
		displayName="Tau Pathfinder [Vior'La sept]";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_VL_CA",
			"\40k_tau\Pathfinder\data\Pathfinder_Cloth_VL_CA"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Pathfinder_VL";
		};
	};
	class U_TIOW_Pathfinder_FE: U_TIOW_Pathfinder
	{
		displayName="Tau Pathfinder [Farsight Enclaves]";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\40k_tau\Fire_Warrior\data\FW_Armour_FE_CA",
			"\40k_tau\Pathfinder\data\Pathfinder_Cloth_FE_CA"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Pathfinder_FE";
		};
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
			uniformClass="TIOWACE_Air_Caste_Pilot_B";
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
	class U_TIOW_Valhallan_Blu: Uniform_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Sokolonko";
		displayName="[Valhallan] Uniform";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		picture="\TIOW_Valhallans\Icon\Uniform_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_Valhallans\TIOW_Valhallan_Uniforms\data\uniform_CA.paa",
			"\TIOW_Valhallans\TIOW_Valhallan_Uniforms\data\mittens_black_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOWACE_Valhallan_Trooper_1_Blu";
			uniformModel="-";
			containerClass="Supply80";
			mass=135;
		};
	};
	class U_TIOW_Valhallan_white_Blu: Uniform_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Sokolonko";
		displayName="[Valhallan] Uniform (White)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		picture="\TIOW_Valhallans\Icon\Uniform_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_Valhallans\TIOW_Valhallan_Uniforms\data\uniform_white_CA.paa",
			"\TIOW_Valhallans\TIOW_Valhallan_Uniforms\data\mittens_white_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Valhallan_Trooper_1_white_Blu";
			uniformModel="-";
			containerClass="Supply80";
			mass=135;
		};
	};
	class U_TIOW_Valhallan_camo_Blu: Uniform_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Sokolonko";
		displayName="[Valhallan] Uniform (Camo)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		picture="\TIOW_Valhallans\Icon\Uniform_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_Valhallans\TIOW_Valhallan_Uniforms\data\uniform_camo_CA.paa",
			"\TIOW_Valhallans\TIOW_Valhallan_Uniforms\data\mittens_white_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Valhallan_Trooper_1_camo_Blu";
			uniformModel="-";
			containerClass="Supply80";
			mass=135;
		};
	};
	class U_TIOW_Valhallan_brown_Blu: Uniform_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Sokolonko";
		displayName="[Valhallan] Uniform (Brown)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		picture="\TIOW_Valhallans\Icon\Uniform_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_Valhallans\TIOW_Valhallan_Uniforms\data\uniform_brown_CA.paa",
			"\TIOW_Valhallans\TIOW_Valhallan_Uniforms\data\mittens_brown_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Valhallan_Trooper_1_brown_Blu";
			uniformModel="-";
			containerClass="Supply80";
			mass=135;
		};
	};
};
