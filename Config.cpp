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
			"TIOW_Valhallans",
			"TIOW_Comissar"
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
	class TIOWACE_IG_Captain_667: CadTroopBase
	{
		model="\TIOW_IG_HQ\Captain\IG_Captain.p3d";
		uniformClass="U_TIOW_Captain_667";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_667_CA.paa",
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_667_CA.paa"
		};
	};
	class TIOW_IG_Captain_700: TIOWACE_IG_Captain_667
	{
		uniformClass="U_TIOW_Captain_700";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_700_CA.paa",
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_700_CA.paa"
		};
	};
	class TIOW_IG_Captain_776: TIOWACE_IG_Captain_667
	{
		uniformClass="U_TIOW_Captain_776";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_776_CA.paa",
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_776_CA.paa"
		};
	};
	class TIOW_IG_Captain_836: TIOWACE_IG_Captain_667
	{
		uniformClass="U_TIOW_Captain_836";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_836_CA.paa",
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_836_CA.paa"
		};
	};
	class TIOW_IG_Captain_836_O: TIOW_IG_Captain_836
	{
		side=0;
		faction="TIOW_IG_HQ_O";
		uniformClass="U_TIOW_Captain_836_O";
	};
	class TIOW_IG_Captain_836_I: TIOW_IG_Captain_836
	{
		side=2;
		faction="TIOW_IG_HQ_I";
		uniformClass="U_TIOW_Captain_836_I";
	};
	class TIOW_IG_Captain_776_O: TIOW_IG_Captain_776
	{
		side=0;
		faction="TIOW_IG_HQ_O";
		uniformClass="U_TIOW_Captain_836_O";
	};
	class TIOW_IG_Captain_776_I: TIOW_IG_Captain_776
	{
		side=2;
		faction="TIOW_IG_HQ_I";
		uniformClass="U_TIOW_Captain_836_I";
	};
	class TIOW_IG_Captain_700_O: TIOW_IG_Captain_700
	{
		side=0;
		faction="TIOW_IG_HQ_O";
		uniformClass="U_TIOW_Captain_836_O";
	};
	class TIOW_IG_Captain_700_I: TIOW_IG_Captain_700
	{
		side=2;
		faction="TIOW_IG_HQ_I";
		uniformClass="U_TIOW_Captain_836_I";
	};
	class TIOW_IG_Captain_667_O: TIOWACE_IG_Captain_667
	{
		side=0;
		faction="TIOW_IG_HQ_O";
		uniformClass="U_TIOW_Captain_836_O";
	};
	class TIOW_IG_Captain_667_I: TIOWACE_IG_Captain_667
	{
		side=2;
		faction="TIOW_IG_HQ_I";
		uniformClass="U_TIOW_Captain_836_I";
	};
	class TIOWACE_Comissar: CadTroopBase
	{
		model="\TIOW_IG_HQ\Comissar\Comissar.p3d";
		uniformClass="U_TIOW_Comissar";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_CA.paa"
		};
	};
	class TIOW_Comissar_Krieg: TIOWACE_Comissar
	{
		uniformClass="U_TIOW_Comissar_Krieg";
		model="\TIOW_IG_HQ\Comissar\Krieg_Comissar.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_CA.paa"
		};
	};
	class TIOW_Comissar_Valhallan: TIOWACE_Comissar
	{
		uniformClass="U_TIOW_Comissar_Valhallan";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_Val_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Val_CA.paa"
		};
	};
	class TIOW_Comissar_Winter: TIOWACE_Comissar
	{
		uniformClass="U_TIOW_Comissar_Winter";
		model="\TIOW_IG_HQ\Comissar\Comissar_winter.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_White_CA.paa"
		};
	};
	class TIOW_Comissar_WinterVal: TIOWACE_Comissar
	{
		uniformClass="U_TIOW_Comissar_Winter";
		model="\TIOW_IG_HQ\Comissar\Comissar_winter.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_Val_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_White_CA.paa"
		};
	};
	class TIOW_Comissar_Brown: TIOWACE_Comissar
	{
		uniformClass="U_TIOW_Comissar_Brown";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Brown_CA.paa"
		};
	};
	class TIOW_Comissar_Desert: TIOWACE_Comissar
	{
		uniformClass="U_TIOW_Comissar_Desert";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Desert_CA.paa"
		};
	};
	class TIOW_Comissar_Jungle: TIOWACE_Comissar
	{
		uniformClass="U_TIOW_Comissar_Jungle";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Jung_CA.paa"
		};
	};
	class TIOW_Comissar_Red: TIOWACE_Comissar
	{
		uniformClass="U_TIOW_Comissar_Red";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Red_CA.paa"
		};
	};
	class TIOW_Comissar_Mord: TIOWACE_Comissar
	{
		uniformClass="U_TIOW_Comissar_Mord";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_Mord_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Mord_CA.paa"
		};
	};
	class TIOWACE_Priest: CadTroopBase
	{
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		uniformClass="U_TIOW_Priest";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Priest_Robes_CA.paa"
		};
	};
	class TIOW_Priest1: TIOWACE_Priest
	{
		uniformClass="U_TIOW_Priest_Red";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\priest\red\priestuniform_CA.paa"
		};
	};
	class TIOW_Priest2: TIOWACE_Priest
	{
		uniformClass="U_TIOW_Priest_Grey";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\priest\gray\priestuniform_CA.paa"
		};
	};
	class TIOW_Priest3: TIOWACE_Priest
	{
		uniformClass="U_TIOW_Priest_DarkGrey";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\priest\darkgrey\priestuniform_CA.paa"
		};
	};
	class TIOW_Cultist: TIOWACE_Priest
	{
		uniformClass="U_TIOW_Cultist";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Cultist_Robes_CA.paa"
		};
	};
	class TIOW_Cultist2: TIOWACE_Priest
	{
		uniformClass="U_TIOW_Cultist";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Cultist_Robes_CA.paa"
		};
	};
	class TIOW_Cultist3: TIOWACE_Priest
	{
		uniformClass="U_TIOW_Cultist";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Cultist_Robes_CA.paa"
		};
	};
	class TIOW_Cultist4: TIOWACE_Priest
	{
		uniformClass="U_TIOW_Cultist_brown";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\cultist\brown\cultistuniform_CA.paa"
		};
	};
	class TIOW_Cultist5: TIOWACE_Priest
	{
		uniformClass="U_TIOW_Cultist_green";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\cultist\green\cultistuniform_CA.paa"
		};
	};
	class TIOW_Cultist6: TIOWACE_Priest
	{
		uniformClass="U_TIOW_Cultist";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Cultist_Robes_CA.paa"
		};
	};
	class TIOW_Cultist7: TIOWACE_Priest
	{
		uniformClass="U_TIOW_Cultist_green";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Cultist_Robes_CA.paa"
		};
	};
	class TIOW_Comissar_O: TIOWACE_Comissar
	{
		side=0;
		faction="TIOW_IG_HQ_O";
		uniformClass="U_TIOW_Comissar_O";
	};
	class TIOW_Comissar_Krieg_O: TIOW_Comissar_Krieg
	{
		side=0;
		faction="TIOW_IG_HQ_O";
		uniformClass="U_TIOW_Comissar_Krieg_O";
	};
	class TIOW_Comissar_Valhallan_O: TIOW_Comissar_Valhallan
	{
		side=0;
		faction="TIOW_IG_HQ_O";
		uniformClass="U_TIOW_Comissar_Valhallan_O";
	};
	class TIOW_Comissar_Winter_O: TIOW_Comissar_Winter
	{
		side=0;
		faction="TIOW_IG_HQ_O";
		uniformClass="U_TIOW_Comissar_Winter_O";
	};
	class TIOW_Comissar_WinterVal_O: TIOW_Comissar_WinterVal
	{
		side=0;
		faction="TIOW_IG_HQ_O";
		uniformClass="U_TIOW_Comissar_Winter_O";
	};
	class TIOW_Comissar_Brown_O: TIOW_Comissar_Brown
	{
		side=0;
		faction="TIOW_IG_HQ_O";
		uniformClass="U_TIOW_Comissar_Brown_O";
	};
	class TIOW_Comissar_Desert_O: TIOW_Comissar_Desert
	{
		side=0;
		faction="TIOW_IG_HQ_O";
		uniformClass="U_TIOW_Comissar_Desert_O";
	};
	class TIOW_Comissar_Jungle_O: TIOW_Comissar_Jungle
	{
		side=0;
		faction="TIOW_IG_HQ_O";
		uniformClass="U_TIOW_Comissar_Jungle_O";
	};
	class TIOW_Comissar_Red_O: TIOW_Comissar_Red
	{
		side=0;
		faction="TIOW_IG_HQ_O";
		uniformClass="U_TIOW_Comissar_Red_O";
	};
	class TIOW_Comissar_Mord_O: TIOW_Comissar_Mord
	{
		side=0;
		faction="TIOW_IG_HQ_O";
		uniformClass="U_TIOW_Comissar_Mord_O";
	};
	class TIOW_Priest_O: TIOWACE_Priest
	{
		side=0;
		faction="TIOW_IG_HQ_O";
		uniformClass="U_TIOW_Priest_O";
	};
	class TIOW_Cultist_O: TIOW_Cultist
	{
		side=0;
		faction="TIOW_Chaos_HQ_O";
		uniformClass="U_TIOW_Cultist_O";
	};
	class TIOW_Cultist2_O: TIOW_Cultist2
	{
		side=0;
		faction="TIOW_Chaos_HQ_O";
		uniformClass="U_TIOW_Cultist_O";
	};
	class TIOW_Cultist3_O: TIOW_Cultist3
	{
		side=0;
		faction="TIOW_Chaos_HQ_O";
		uniformClass="U_TIOW_Cultist_O";
	};
	class TIOW_Cultist4_O: TIOW_Cultist4
	{
		side=0;
		faction="TIOW_Chaos_HQ_O";
		uniformClass="U_TIOW_Cultist_Brown_I";
	};
	class TIOW_Cultist5_O: TIOW_Cultist5
	{
		side=0;
		faction="TIOW_Chaos_HQ_O";
		uniformClass="U_TIOW_Cultist_Green_O";
	};
	class TIOW_Cultist6_O: TIOW_Cultist6
	{
		side=0;
		faction="TIOW_Chaos_HQ_O";
		uniformClass="U_TIOW_Cultist_O";
	};
	class TIOW_Cultist7_O: TIOW_Cultist7
	{
		side=0;
		faction="TIOW_Chaos_HQ_O";
		uniformClass="U_TIOW_Cultist_Green_O";
	};
	class TIOW_Priest1_O: TIOW_Priest1
	{
		side=0;
		faction="TIOW_IG_HQ_O";
		uniformClass="U_TIOW_Priest_Red_O";
	};
	class TIOW_Priest2_O: TIOW_Priest2
	{
		side=0;
		faction="TIOW_IG_HQ_O";
		uniformClass="U_TIOW_Priest_Grey_O";
	};
	class TIOW_Priest3_O: TIOW_Priest3
	{
		side=0;
		faction="TIOW_IG_HQ_O";
		uniformClass="U_TIOW_Priest_DarkGrey_O";
	};
	class TIOW_Comissar_I: TIOWACE_Comissar
	{
		side=2;
		faction="TIOW_IG_HQ_I";
		uniformClass="U_TIOW_Comissar_I";
	};
	class TIOW_Comissar_Krieg_I: TIOW_Comissar_Krieg
	{
		side=2;
		faction="TIOW_IG_HQ_I";
		uniformClass="U_TIOW_Comissar_Krieg_I";
	};
	class TIOW_Comissar_Valhallan_I: TIOW_Comissar_Valhallan
	{
		side=2;
		faction="TIOW_IG_HQ_I";
		uniformClass="U_TIOW_Comissar_Valhallan_I";
	};
	class TIOW_Comissar_Winter_I: TIOW_Comissar_Winter
	{
		side=2;
		faction="TIOW_IG_HQ_I";
		uniformClass="U_TIOW_Comissar_Winter_I";
	};
	class TIOW_Comissar_WinterVal_I: TIOW_Comissar_WinterVal
	{
		side=2;
		faction="TIOW_IG_HQ_I";
		uniformClass="U_TIOW_Comissar_Winter_I";
	};
	class TIOW_Comissar_Brown_I: TIOW_Comissar_Brown
	{
		side=2;
		faction="TIOW_IG_HQ_I";
		uniformClass="U_TIOW_Comissar_Brown_I";
	};
	class TIOW_Comissar_Desert_I: TIOW_Comissar_Desert
	{
		side=2;
		faction="TIOW_IG_HQ_I";
		uniformClass="U_TIOW_Comissar_Desert_I";
	};
	class TIOW_Comissar_Jungle_I: TIOW_Comissar_Jungle
	{
		side=2;
		faction="TIOW_IG_HQ_I";
		uniformClass="U_TIOW_Comissar_Jungle_I";
	};
	class TIOW_Comissar_Red_I: TIOW_Comissar_Red
	{
		side=2;
		faction="TIOW_IG_HQ_I";
		uniformClass="U_TIOW_Comissar_Red_I";
	};
	class TIOW_Comissar_Mord_I: TIOW_Comissar_Mord
	{
		side=2;
		faction="TIOW_IG_HQ_I";
		uniformClass="U_TIOW_Comissar_Mord_I";
	};
	class TIOW_Priest_I: TIOWACE_Priest
	{
		side=2;
		faction="TIOW_IG_HQ_I";
		uniformClass="U_TIOW_Priest_I";
	};
	class TIOW_Cultist_I: TIOW_Cultist
	{
		side=2;
		faction="TIOW_Chaos_HQ_I";
		uniformClass="U_TIOW_Cultist_I";
	};
	class TIOW_Cultist2_I: TIOW_Cultist2
	{
		side=2;
		faction="TIOW_Chaos_HQ_I";
		uniformClass="U_TIOW_Cultist_I";
	};
	class TIOW_Cultist3_I: TIOW_Cultist3
	{
		side=2;
		faction="TIOW_Chaos_HQ_I";
		uniformClass="U_TIOW_Cultist_I";
	};
	class TIOW_Cultist4_I: TIOW_Cultist4
	{
		side=2;
		faction="TIOW_Chaos_HQ_I";
		uniformClass="U_TIOW_Cultist_Brown_I";
	};
	class TIOW_Cultist5_I: TIOW_Cultist5
	{
		side=2;
		faction="TIOW_Chaos_HQ_I";
		uniformClass="U_TIOW_Cultist_Green_I";
	};
	class TIOW_Cultist6_I: TIOW_Cultist6
	{
		side=2;
		faction="TIOW_Chaos_HQ_I";
		uniformClass="U_TIOW_Cultist_I";
	};
	class TIOW_Cultist7_I: TIOW_Cultist7
	{
		side=2;
		faction="TIOW_Chaos_HQ_I";
		uniformClass="U_TIOW_Cultist_Green_I";
	};
	class TIOW_Priest1_I: TIOW_Priest1
	{
		side=2;
		faction="TIOW_IG_HQ_I";
		uniformClass="U_TIOW_Priest_Red_I";
	};
	class TIOW_Priest2_I: TIOW_Priest2
	{
		side=2;
		faction="TIOW_IG_HQ_I";
		uniformClass="U_TIOW_Priest_Grey_I";
	};
	class TIOW_Priest3_I: TIOW_Priest3
	{
		side=2;
		faction="TIOW_IG_HQ_I";
		uniformClass="U_TIOW_Priest_DarkGrey_I";
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
	class U_TIOW_Captain_667: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Cadian] Captain Uniform (667th)";
		model="\TIOW_IG_HQ\Captain\IG_Captain.p3d";
		picture="\TIOW_IG_HQ\Captain\data\IG_Captain_icon_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_667_CA.paa",
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_667_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_667_CA.paa",
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_667_CA.paa"
			};
			uniformClass="TIOWACE_IG_Captain_667";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Captain_700: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Cadian] Captain Uniform (700th)";
		model="\TIOW_IG_HQ\Captain\IG_Captain.p3d";
		picture="\TIOW_IG_HQ\Captain\data\IG_Captain_icon_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_700_CA.paa",
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_700_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_700_CA.paa",
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_700_CA.paa"
			};
			uniformClass="TIOW_IG_Captain_700";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Captain_776: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Cadian] Captain Uniform (776th)";
		model="\TIOW_IG_HQ\Captain\IG_Captain.p3d";
		picture="\TIOW_IG_HQ\Captain\data\IG_Captain_icon_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_776_CA.paa",
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_776_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_776_CA.paa",
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_776_CA.paa"
			};
			uniformClass="TIOW_IG_Captain_776";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Captain_836: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Cadian] Captain Uniform (836th)";
		model="\TIOW_IG_HQ\Captain\IG_Captain.p3d";
		picture="\TIOW_IG_HQ\Captain\data\IG_Captain_icon_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_836_CA.paa",
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_836_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_836_CA.paa",
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_836_CA.paa"
			};
			uniformClass="TIOW_IG_Captain_836";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Captain_667_I: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Cadian] Captain Uniform (667th)";
		model="\TIOW_IG_HQ\Captain\IG_Captain.p3d";
		picture="\TIOW_IG_HQ\Captain\data\IG_Captain_icon_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_667_CA.paa",
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_667_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_667_CA.paa",
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_667_CA.paa"
			};
			uniformClass="TIOW_IG_Captain_667_I";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Captain_700_I: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Cadian] Captain Uniform (700th)";
		model="\TIOW_IG_HQ\Captain\IG_Captain.p3d";
		picture="\TIOW_IG_HQ\Captain\data\IG_Captain_icon_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_700_CA.paa",
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_700_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_700_CA.paa",
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_700_CA.paa"
			};
			uniformClass="TIOW_IG_Captain_700_I";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Captain_776_I: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Cadian] Captain Uniform (776th)";
		model="\TIOW_IG_HQ\Captain\IG_Captain.p3d";
		picture="\TIOW_IG_HQ\Captain\data\IG_Captain_icon_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_776_CA.paa",
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_776_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_776_CA.paa",
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_776_CA.paa"
			};
			uniformClass="TIOW_IG_Captain_776_I";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Captain_836_I: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Cadian] Captain Uniform (836th)";
		model="\TIOW_IG_HQ\Captain\IG_Captain.p3d";
		picture="\TIOW_IG_HQ\Captain\data\IG_Captain_icon_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_836_CA.paa",
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_836_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_836_CA.paa",
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_836_CA.paa"
			};
			uniformClass="TIOW_IG_Captain_836_I";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Captain_667_O: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Cadian] Captain Uniform (667th)";
		model="\TIOW_IG_HQ\Captain\IG_Captain.p3d";
		picture="\TIOW_IG_HQ\Captain\data\IG_Captain_icon_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_667_CA.paa",
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_667_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_667_CA.paa",
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_667_CA.paa"
			};
			uniformClass="TIOW_IG_Captain_667_O";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Captain_700_O: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Cadian] Captain Uniform (700th)";
		model="\TIOW_IG_HQ\Captain\IG_Captain.p3d";
		picture="\TIOW_IG_HQ\Captain\data\IG_Captain_icon_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_700_CA.paa",
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_700_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_700_CA.paa",
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_700_CA.paa"
			};
			uniformClass="TIOW_IG_Captain_700_O";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Captain_776_O: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Cadian] Captain Uniform (776th)";
		model="\TIOW_IG_HQ\Captain\IG_Captain.p3d";
		picture="\TIOW_IG_HQ\Captain\data\IG_Captain_icon_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_776_CA.paa",
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_776_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_776_CA.paa",
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_776_CA.paa"
			};
			uniformClass="TIOW_IG_Captain_776_O";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Captain_836_O: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Cadian] Captain Uniform (836th)";
		model="\TIOW_IG_HQ\Captain\IG_Captain.p3d";
		picture="\TIOW_IG_HQ\Captain\data\IG_Captain_icon_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_836_CA.paa",
			"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_836_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_836_CA.paa",
				"\TIOW_IG_HQ\Captain\data\Cadian_officer_detail_836_CA.paa"
			};
			uniformClass="TIOW_IG_Captain_836_O";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Priest: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Imperium] Priest Robes";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Priest_Robes_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\Priest_Robes_CA.paa"
			};
			uniformClass="TIOWACE_Priest";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Priest_Red: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Imperium] Priest Robes (Red)";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Priest\red\Priestuniform_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\Priest\red\Priestuniform_CA.paa"
			};
			uniformClass="TIOW_Priest1";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Priest_Grey: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Imperium] Priest Robes (Grey)";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Priest\gray\Priestuniform_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\Priest\gray\Priestuniform_CA.paa"
			};
			uniformClass="TIOW_Priest2";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Priest_DarkGrey: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Imperium] Priest Robes (Dark Grey)";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Priest\darkgrey\Priestuniform_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\Priest\darkgrey\Priestuniform_CA.paa"
			};
			uniformClass="TIOW_Priest3";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Cultist: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Renegades] Cultist Robes";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Cultist_Robes_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\Cultist_Robes_CA.paa"
			};
			uniformClass="TIOW_Cultist";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Cultist_brown: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Renegades] Cultist Robes (Brown)";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\cultist\brown\cultistuniform_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\cultist\brown\cultistuniform_CA.paa"
			};
			uniformClass="TIOW_Cultist4";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Cultist_green: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Renegades] Cultist Robes (Green)";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\cultist\green\cultistuniform_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\cultist\green\cultistuniform_CA.paa"
			};
			uniformClass="TIOW_Cultist5";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Comissar: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Imperium] Commissar Uniform";
		model="\TIOW_IG_HQ\Comissar\Comissar.p3d";
		picture="\TIOW_IG_HQ\Comissar\Icon\Commissar_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_CA.paa"
			};
			uniformClass="TIOWACE_Comissar";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Comissar_Krieg: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Sokolonko";
		displayName="[Krieg] Commissar Uniform";
		model="\TIOW_IG_HQ\Comissar\Krieg_Comissar.p3d";
		picture="\TIOW_IG_HQ\Comissar\Icon\Commissar_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_CA.paa"
			};
			uniformClass="TIOW_Comissar_Krieg";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Comissar_Valhallan: U_TIOW_Comissar
	{
		displayName="[Imperium] Commissar Uniform (Valhallan)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_Val_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Val_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_Val_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_Val_CA.paa"
			};
			uniformClass="TIOW_Comissar_Valhallan";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_Winter: U_TIOW_Comissar
	{
		displayName="[Imperium] Commissar Uniform (Winter)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_White_CA.paa"
		};
		model="\TIOW_IG_HQ\Comissar\Comissar_winter.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_White_CA.paa"
			};
			uniformClass="TIOW_Comissar_Winter";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_WinterVal: U_TIOW_Comissar
	{
		displayName="[Imperium] Commissar Uniform (Winter Valhallan)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_Val_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_White_CA.paa"
		};
		model="\TIOW_IG_HQ\Comissar\Comissar_winter.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_Val_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_White_CA.paa"
			};
			uniformClass="TIOW_Comissar_WinterVal";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_Brown: U_TIOW_Comissar
	{
		displayName="[Imperium] Commissar Uniform (Brown)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Brown_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_Brown_CA.paa"
			};
			uniformClass="TIOW_Comissar_Brown";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_Desert: U_TIOW_Comissar
	{
		displayName="[Imperium] Commissar Uniform (Desert)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Desert_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_Desert_CA.paa"
			};
			uniformClass="TIOW_Comissar_Desert";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_Jungle: U_TIOW_Comissar
	{
		displayName="[Imperium] Commissar Uniform (Jungle)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Jung_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_Jung_CA.paa"
			};
			uniformClass="TIOW_Comissar_Jungle";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_Red: U_TIOW_Comissar
	{
		displayName="[Imperium] Commissar Uniform (Red)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Red_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_Red_CA.paa"
			};
			uniformClass="TIOW_Comissar_Red";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_Mord: U_TIOW_Comissar
	{
		displayName="[Imperium] Commissar Uniform (Mordian)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_Mord_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Mord_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_Mord_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_Mord_CA.paa"
			};
			uniformClass="TIOW_Comissar_Mord";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_I: U_TIOW_Comissar
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Sokolonko";
		displayName="[Imperium] Commissar Uniform";
		model="\TIOW_IG_HQ\Comissar\Comissar.p3d";
		picture="\TIOW_IG_HQ\Comissar\Icon\Commissar_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_CA.paa"
			};
			uniformClass="TIOW_Comissar_I";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Comissar_Krieg_I: Uniform_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Sokolonko";
		displayName="[Krieg] Commissar Uniform";
		model="\TIOW_IG_HQ\Comissar\Krieg_Comissar.p3d";
		picture="\TIOW_IG_HQ\Comissar\Icon\Commissar_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_CA.paa"
			};
			uniformClass="TIOW_Comissar_Krieg_I";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Comissar_Valhallan_I: U_TIOW_Comissar_I
	{
		displayName="[Imperium] Commissar Uniform (Valhallan)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_Val_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Val_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_Val_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_Val_CA.paa"
			};
			uniformClass="TIOW_Comissar_Valhallan_I";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_Winter_I: U_TIOW_Comissar_I
	{
		displayName="[Imperium] Commissar Uniform (Winter)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_White_CA.paa"
		};
		model="\TIOW_IG_HQ\Comissar\Comissar_winter.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_White_CA.paa"
			};
			uniformClass="TIOW_Comissar_Winter_I";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_WinterVal_I: U_TIOW_Comissar_I
	{
		displayName="[Imperium] Commissar Uniform (Winter Valhallan)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_Val_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_White_CA.paa"
		};
		model="\TIOW_IG_HQ\Comissar\Comissar_winter.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_Val_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_White_CA.paa"
			};
			uniformClass="TIOW_Comissar_WinterVal_I";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_Brown_I: U_TIOW_Comissar_I
	{
		displayName="[Imperium] Commissar Uniform (Brown)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Brown_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_Brown_CA.paa"
			};
			uniformClass="TIOW_Comissar_Brown_I";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_Desert_I: U_TIOW_Comissar_I
	{
		displayName="[Imperium] Commissar Uniform (Desert)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Desert_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_Desert_CA.paa"
			};
			uniformClass="TIOW_Comissar_Desert_I";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_Jungle_I: U_TIOW_Comissar_I
	{
		displayName="[Imperium] Commissar Uniform (Jungle)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Jung_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_Jung_CA.paa"
			};
			uniformClass="TIOW_Comissar_Jungle_I";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_Red_I: U_TIOW_Comissar_I
	{
		displayName="[Imperium] Commissar Uniform (Red)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Red_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_Red_CA.paa"
			};
			uniformClass="TIOW_Comissar_Red_I";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_Mord_I: U_TIOW_Comissar_I
	{
		displayName="[Imperium] Commissar Uniform (Mordian)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_Mord_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Mord_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_Mord_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_Mord_CA.paa"
			};
			uniformClass="TIOW_Comissar_Mord_I";
			uniformModel="-";
		};
	};
	class U_TIOW_Priest_I: Uniform_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Sokolonko";
		displayName="[Imperium] Priest Robes";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Priest_Robes_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\Priest_Robes_CA.paa"
			};
			uniformClass="TIOW_Priest_I";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Cultist_I: Uniform_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Sokolonko";
		displayName="[Renegades] Cultist Robes";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Cultist_Robes_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\Cultist_Robes_CA.paa"
			};
			uniformClass="TIOW_Cultist_I";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Cultist_brown_I: Uniform_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Sokolonko";
		displayName="[Renegades] Cultist Robes (Brown)";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\cultist\brown\cultistuniform_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\cultist\brown\cultistuniform_CA.paa"
			};
			uniformClass="TIOW_Cultist4_I";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Cultist_green_I: Uniform_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Sokolonko";
		displayName="[Renegades] Cultist Robes (Green)";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\cultist\green\cultistuniform_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\cultist\green\cultistuniform_CA.paa"
			};
			uniformClass="TIOW_Cultist5_I";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Priest_Red_I: Uniform_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Sokolonko";
		displayName="[Imperium] Priest Robes (Red)";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Priest\red\Priestuniform_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\Priest\red\Priestuniform_CA.paa"
			};
			uniformClass="TIOW_Priest1_I";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Priest_Grey_I: Uniform_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Sokolonko";
		displayName="[Imperium] Priest Robes (Grey)";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Priest\gray\Priestuniform_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\Priest\gray\Priestuniform_CA.paa"
			};
			uniformClass="TIOW_Priest2_I";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Priest_DarkGrey_I: Uniform_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Sokolonko";
		displayName="[Imperium] Priest Robes (Dark Grey)";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Priest\darkgrey\Priestuniform_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\Priest\darkgrey\Priestuniform_CA.paa"
			};
			uniformClass="TIOW_Priest3_I";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Comissar_O: U_TIOW_Comissar
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Sokolonko";
		displayName="[Imperium] Commissar Uniform";
		model="\TIOW_IG_HQ\Comissar\Comissar.p3d";
		picture="\TIOW_IG_HQ\Comissar\Icon\Commissar_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_CA.paa"
			};
			uniformClass="TIOW_Comissar_O";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Comissar_Krieg_O: Uniform_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Sokolonko";
		displayName="[Krieg] Commissar Uniform";
		model="\TIOW_IG_HQ\Comissar\Krieg_Comissar.p3d";
		picture="\TIOW_IG_HQ\Comissar\Icon\Commissar_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_CA.paa"
			};
			uniformClass="TIOW_Comissar_Krieg_O";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Comissar_Valhallan_O: U_TIOW_Comissar_O
	{
		displayName="[Imperium] Commissar Uniform (Valhallan)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_Val_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Val_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_Val_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_Val_CA.paa"
			};
			uniformClass="TIOW_Comissar_Valhallan_O";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_Winter_O: U_TIOW_Comissar_O
	{
		displayName="[Imperium] Commissar Uniform (Winter)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_White_CA.paa"
		};
		model="\TIOW_IG_HQ\Comissar\Comissar_winter.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_White_CA.paa"
			};
			uniformClass="TIOW_Comissar_Winter_O";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_WinterVal_O: U_TIOW_Comissar_O
	{
		displayName="[Imperium] Commissar Uniform (Winter Valhallan)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_Val_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_White_CA.paa"
		};
		model="\TIOW_IG_HQ\Comissar\Comissar_winter.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_Val_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_White_CA.paa"
			};
			uniformClass="TIOW_Comissar_WinterVal_O";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_Brown_O: U_TIOW_Comissar_O
	{
		displayName="[Imperium] Commissar Uniform (Brown)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Brown_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_Brown_CA.paa"
			};
			uniformClass="TIOW_Comissar_Brown_O";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_Desert_O: U_TIOW_Comissar_O
	{
		displayName="[Imperium] Commissar Uniform (Desert)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Desert_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_Desert_CA.paa"
			};
			uniformClass="TIOW_Comissar_Desert_O";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_Jungle_O: U_TIOW_Comissar_O
	{
		displayName="[Imperium] Commissar Uniform (Jungle)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Jung_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_Jung_CA.paa"
			};
			uniformClass="TIOW_Comissar_Jungle_O";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_Red_O: U_TIOW_Comissar_O
	{
		displayName="[Imperium] Commissar Uniform (Red)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Red_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_Red_CA.paa"
			};
			uniformClass="TIOW_Comissar_Red_O";
			uniformModel="-";
		};
	};
	class U_TIOW_Comissar_Mord_O: U_TIOW_Comissar_O
	{
		displayName="[Imperium] Commissar Uniform (Mordian)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Comissar\data\uniform_Mord_CA.paa",
			"\TIOW_IG_HQ\Comissar\data\coat_Mord_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Comissar\data\uniform_Mord_CA.paa",
				"\TIOW_IG_HQ\Comissar\data\coat_Mord_CA.paa"
			};
			uniformClass="TIOW_Comissar_Mord_O";
			uniformModel="-";
		};
	};
	class U_TIOW_Priest_O: Uniform_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Sokolonko";
		displayName="[Imperium] Priest Robes";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Priest_Robes_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\Priest_Robes_CA.paa"
			};
			uniformClass="TIOW_Priest_O";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Cultist_O: Uniform_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Sokolonko";
		displayName="[Renegades] Cultist Robes";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Cultist_Robes_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\Cultist_Robes_CA.paa"
			};
			uniformClass="TIOW_Cultist_O";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Cultist_brown_O: Uniform_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Sokolonko";
		displayName="[Renegades] Cultist Robes (Brown)";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\cultist\brown\cultistuniform_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\cultist\brown\cultistuniform_CA.paa"
			};
			uniformClass="TIOW_Cultist4_O";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Cultist_green_O: Uniform_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Sokolonko";
		displayName="[Renegades] Cultist Robes (Green)";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\cultist\green\cultistuniform_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\cultist\green\cultistuniform_CA.paa"
			};
			uniformClass="TIOW_Cultist5_O";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Priest_Red_O: Uniform_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Sokolonko";
		displayName="[Imperium] Priest Robes (Red)";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Priest\red\Priestuniform_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\Priest\red\Priestuniform_CA.paa"
			};
			uniformClass="TIOW_Priest1_O";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Priest_Grey_O: Uniform_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Sokolonko";
		displayName="[Imperium] Priest Robes (Grey)";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Priest\gray\Priestuniform_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\Priest\gray\Priestuniform_CA.paa"
			};
			uniformClass="TIOW_Priest2_O";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
	class U_TIOW_Priest_DarkGrey_O: Uniform_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Sokolonko";
		displayName="[Imperium] Priest Robes (Dark Grey)";
		model="\TIOW_IG_HQ\Priest\Priest_robe.p3d";
		picture="\TIOW_IG_HQ\Priest\Icon\Priest_Icon_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IG_HQ\Priest\data\Priest\darkgrey\Priestuniform_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\TIOW_IG_HQ\Priest\data\Priest\darkgrey\Priestuniform_CA.paa"
			};
			uniformClass="TIOW_Priest3_O";
			uniformModel="-";
			containerClass="Supply80";
			mass=50;
		};
	};
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
