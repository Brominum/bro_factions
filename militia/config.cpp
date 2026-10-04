#define MILITIA_MACRO	author="Bromine";	\
		faction="bro_militia";	\
		scope=2;	\
		scopeCurator=2;	\
		side=0;	\
		modelSides[]={0,1,2,3,4,5,6,7};	\
		fsmDanger="-";	\
		identityTypes[]={"LanguageCZ","Head_Greek","NoGlasses"};	\
		fsmFormation="Formation";	\
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Bandit_8_F.jpg";	\
		editorSubcategory="EdSubcat_Personnel";	\
		Icon="iconMan";	\
		role="Rifleman";	\

#define ADDSCOPES		scope = 2;	\
		scopeCurator = 2;	\

class CfgPatches {
	class bro_factions_militia {
		name="[Bro] Militia OPFOR";
		addonRootClass="bro_factions";
		requiredAddons[]={
			"A3_Data_F_Warlords_Loadorder",
			"rhsusf_c_weapons",
			"bro_factions_arctic"
		};
		requiredVersion=1.6;
	};
};
class CfgVehicles {
//
//-----MILITIA UNITS-----
//
	class O_Soldier_F;
	class Bro_Arctic_Jeep_Unarmed;

// MILITIAMEN
	class Bro_O_CMT_Shotgun_1: O_Soldier_F {
		MILITIA_MACRO
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformClass = "U_OG_Guerilla2_3";
		class EventHandlers {
			init = "if (local (_this select 0)) then {[(_this select 0),true,true] call bro_fnc_randomizeMilitia;};";
		};
		displayName="Militia Shotgun (A)";
		linkedItems[]= {
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]= {
			"rhs_weap_M590_5RD",
			"rhsusf_weap_m1911a1",
			"Throw",
			"Put"
		};
		magazines[]= {
			"rhsusf_mag_7x45acp_MHP",
			"rhsusf_mag_7x45acp_MHP",
			"rhsusf_5Rnd_00Buck",
			"rhsusf_5Rnd_00Buck",
			"rhsusf_5Rnd_00Buck",
			"rhsusf_5Rnd_00Buck",
			"rhsusf_5Rnd_00Buck",
			"rhsusf_5Rnd_00Buck",
			"rhsusf_5Rnd_00Buck"
		};
	};
	class Bro_O_CMT_Shotgun_2: Bro_O_CMT_Shotgun_1 {
		MILITIA_MACRO
		displayName="Militia Shotgun (B)";
		linkedItems[]= {
			"V_BandollierB_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]= {
			"rhs_weap_M590_5RD",
			"rhsusf_weap_m1911a1",
			"Throw",
			"Put"
		};
		magazines[]= {
			"rhsusf_mag_7x45acp_MHP",
			"rhsusf_mag_7x45acp_MHP",
			"rhsusf_5Rnd_00Buck",
			"rhsusf_5Rnd_00Buck",
			"rhsusf_5Rnd_00Buck",
			"rhsusf_5Rnd_00Buck",
			"rhsusf_5Rnd_00Buck",
			"rhsusf_5Rnd_00Buck",
			"rhsusf_5Rnd_00Buck"
		};
	};
	class Bro_O_CMT_MP5_1: Bro_O_CMT_Shotgun_1 {
		MILITIA_MACRO
		displayName="Militia MP5 (A)";
		linkedItems[]= {
			"V_BandollierB_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]= {
			"SMG_05_F",
			"hgun_Pistol_01_F",
			"Throw",
			"Put"
		};
		magazines[]= {
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag"
		};
	};
	class Bro_O_CMT_MP5_2: Bro_O_CMT_Shotgun_1 {
		MILITIA_MACRO
		displayName="Militia MP5 (B)";
		linkedItems[]= {
			"V_BandollierB_blk",
			"rhs_beanie_green",
			"rhs_scarf",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]= {
			"SMG_05_F",
			"hgun_Pistol_01_F",
			"Throw",
			"Put"
		};
		magazines[]= {
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag"
		};
	};
	class Bro_O_CMT_MP5_3: Bro_O_CMT_Shotgun_1 {
		MILITIA_MACRO
		displayName="Militia MP5 (C)";
		linkedItems[]= {
			"V_BandollierB_blk",
			"rhs_balaclava",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]= {
			"SMG_05_F",
			"hgun_Pistol_01_F",
			"Throw",
			"Put"
		};
		magazines[]= {
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag"
		};
	};
	class Bro_O_CMT_MP5_4: Bro_O_CMT_Shotgun_1 {
		MILITIA_MACRO
		displayName="Militia MP5 (D)";
		linkedItems[]= {
			"V_BandollierB_blk",
			"rhs_fieldcap_m88_woodland",
			"rhsusf_shemagh2_grn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]= {
			"SMG_05_F",
			"hgun_Pistol_01_F",
			"Throw",
			"Put"
		};
		magazines[]= {
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag"
		};
	};
	class Bro_O_CMT_M4_1: Bro_O_CMT_Shotgun_1 {
		MILITIA_MACRO
		displayName="Militia M4A1 (A)";
		linkedItems[]= {
			"V_BandollierB_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]= {
			"rhs_weap_m4_mstock",
			"rhsusf_weap_m1911a1",
			"Throw",
			"Put"
		};
		magazines[]= {
			"rhsusf_mag_7x45acp_MHP",
			"rhsusf_mag_7x45acp_MHP",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag"
		};
	};
	class Bro_O_CMT_M4_2: Bro_O_CMT_Shotgun_1 {
		MILITIA_MACRO
		displayName="Militia M4A1 (B)";
		linkedItems[]= {
			"V_BandollierB_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]= {
			"rhs_weap_m4_carryhandle",
			"rhsusf_weap_m1911a1",
			"Throw",
			"Put"
		};
		magazines[]= {
			"rhsusf_mag_7x45acp_MHP",
			"rhsusf_mag_7x45acp_MHP",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag"
		};
	};
	class Bro_O_CMT_AKS_1: Bro_O_CMT_Shotgun_1 {
		MILITIA_MACRO
		displayName="Militia AKS74U (A)";
		linkedItems[]= {
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]= {
			"arifle_AKS_F",
			"rhsusf_weap_m1911a1",
			"Throw",
			"Put"
		};
		magazines[]= {
			"rhsusf_mag_7x45acp_MHP",
			"rhsusf_mag_7x45acp_MHP",
			"9Rnd_45ACP_Mag",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F"
		};
	};
	class Bro_O_CMT_AKS_2: Bro_O_CMT_Shotgun_1 {
		MILITIA_MACRO
		displayName="Militia AKS74U (B)";
		linkedItems[]= {
			"rhs_vest_commander",
			"H_Hat_grey",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]= {
			"arifle_AKS_F",
			"rhsusf_weap_m1911a1",
			"Throw",
			"Put"
		};
		magazines[]= {
			"rhsusf_mag_7x45acp_MHP",
			"rhsusf_mag_7x45acp_MHP",
			"9Rnd_45ACP_Mag",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F"
		};
	};

	// Militia
	class Bro_CMT_Jeep_Unarmed: Bro_Arctic_Jeep_Unarmed {
		ADDSCOPES
		faction="bro_militia";
		crew="Bro_O_CMT_AKS_1";
		textureList[]= {
			"Black",
			0.33,
			"Olive",
			0.33,
			"Brown",
			0.33
		};
		typicalCargo[]= {
			"Bro_O_CMT_AKS_1"
		};
		animationList[]= {
			"hideLeftDoor",
			1,
			"hideRightDoor",
			1,
			"hideRearDoor",
			1,
			"hideBullbar",
			1,
			"hideFenders",
			0,
			"hideHeadSupportFront",
			0,
			"hideHeadSupportRear",
			0,
			"hideRollcage",
			1,
			"hideSpareWheel",
			1,
			"hideSeatsRear",
			0
		};
	};
};
class CfgGroups {	class East {		class bro_groups_CMT {			name="[Bro] Militia";
			class Bro_CMT_Group_Infantry {
				name = "Militia";				class bro_CMT_Fireteam_Good {					faction="bro_militia";
					icon="\a3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Team (AK + M4)";
					side=0;
					class unit0 {						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="Bro_O_CMT_M4_1";
					};
					class unit1: unit0 {						position[]={2.5,0,0};
						vehicle="Bro_O_CMT_M4_2";
					};
					class unit2: unit0 {						position[]={5,0,0};
						vehicle="Bro_O_CMT_AKS_1";
					};
					class unit3: unit0 {						position[]={7.5,0,0};
						vehicle="Bro_O_CMT_AKS_2";
					};
				};
				class bro_CMT_Fireteam_Bad {					faction="bro_militia";
					icon="\a3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Team (MP5 + Shotgun)";
					side=0;
					class unit0 {						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="Bro_O_CMT_MP5_1";
					};
					class unit1: unit0 {						position[]={2.5,0,0};
						vehicle="Bro_O_CMT_Shotgun_1";
					};
					class unit2: unit0 {						position[]={5,0,0};
						vehicle="Bro_O_CMT_MP5_3";
					};
					class unit3: unit0 {						position[]={7.5,0,0};
						vehicle="Bro_O_CMT_Shotgun_2";
					};
				};
				class bro_CMT_Squad {					faction="bro_militia";
					icon="\a3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Squad (Mixed weapons)";
					side=0;
					class unit0 {						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="Bro_O_CMT_M4_2";
					};
					class unit1: unit0 {						position[]={2.5,0,0};
						vehicle="Bro_O_CMT_MP5_3";
					};
					class unit2: unit0 {						position[]={5,0,0};
						vehicle="Bro_O_CMT_AKS_2";
					};
					class unit3: unit0 {						position[]={7.5,0,0};
						vehicle="Bro_O_CMT_Shotgun_2";
					};
					class unit4: unit0 {						position[]={10,0,0};
						vehicle="Bro_O_CMT_M4_1";
					};
					class unit5: unit0 {						position[]={-2.5,0,0};
						vehicle="Bro_O_CMT_MP5_4";
					};
					class unit6: unit0 {						position[]={-5,0,0};
						vehicle="Bro_O_CMT_AKS_1";
					};
					class unit7: unit0 {						position[]={-7.5,0,0};
						vehicle="Bro_O_CMT_Shotgun_1";
					};
					class unit8: unit0 {						position[]={-10,0,0};
						vehicle="Bro_O_CMT_AKS_2";
					};
				};
			};
		};
	};
};