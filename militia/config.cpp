#define FACTION_CLASS "bro_militia"
#define FACTION_SIDE 0
#include "\bro_factions\macros.hpp"
#define MILITIA_1911_MAGS MAG_2("rhsusf_mag_7x45acp_MHP")
#define MILITIA_P07_MAGS MAG_2("10Rnd_9x21_Mag")
#define MILITIA_SHOTGUN_WEAPONS "rhs_weap_M590_5RD","rhsusf_weap_m1911a1",THROW_PUT
#define MILITIA_MP5_WEAPONS "SMG_05_F","hgun_Pistol_01_F",THROW_PUT
#define MILITIA_AKS_WEAPONS "arifle_AKS_F","rhsusf_weap_m1911a1",THROW_PUT
#define MILITIA_MP5_MAG "30Rnd_9x21_Mag_SMG_02_Tracer_Green"
#define MILITIA_M4_MAG "rhs_mag_30Rnd_556x45_M855_Stanag"
class CfgPatches {
	class bro_factions_militia {
		name = "[Bro] Militia OPFOR";
		addonRootClass = "bro_factions";
		requiredAddons[] = {
			"A3_Data_F_Warlords_Loadorder",
			"rhsusf_c_weapons",
			"bro_factions",
			"bro_factions_arctic"
		};
		requiredVersion = 1.6;
	};
};
class CfgFactionClasses {
	class bro_militia {
		displayName = "[Bro] Militia";
		flag = "\a3\data_f\flags\flag_red_co.paa";
		icon = "\a3\data_f\cfgfactionclasses_opf_ca.paa";
		priority = 0;
		side = FACTION_SIDE;
	};
};
class CfgVehicles {
	class O_Soldier_F;
	class Bro_Arctic_Jeep_Unarmed;
	// Infantry. All units inherit from the first class and change only what is different.
	// The init event handler gives each unit a random civilian uniform.
	// It also gives random eyewear and headgear to the units that have none in linkedItems.
	class Bro_O_CMT_Shotgun_1: O_Soldier_F {
		author = "Bromine";
		faction = FACTION_CLASS;
		scope = 2;
		scopeCurator = 2;
		side = FACTION_SIDE;
		modelSides[] = {0,1,2,3,4,5,6,7};
		fsmDanger = "-";
		identityTypes[] = {"LanguageCZ","Head_Greek","NoGlasses"};
		fsmFormation = "Formation";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Bandit_8_F.jpg";
		editorSubcategory = "EdSubcat_Personnel";
		icon = "iconMan";
		role = "Rifleman";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformClass = "U_OG_Guerilla2_3";
		class EventHandlers {
			init = "if (local (_this select 0)) then {[(_this select 0),true,true] call bro_fnc_randomizeMilitia;};";
		};
		displayName = "Militia Shotgun (A)";
		linkedItems[] = {"rhs_vest_commander",ITEMS_BASIC};
		weapons[] = {MILITIA_SHOTGUN_WEAPONS};
		magazines[] = {MILITIA_1911_MAGS,MAG_7("rhsusf_5Rnd_00Buck")};
	};
	class Bro_O_CMT_Shotgun_2: Bro_O_CMT_Shotgun_1 {
		scope = 2;
		scopeCurator = 2;
		displayName = "Militia Shotgun (B)";
		linkedItems[] = {"V_BandollierB_blk",ITEMS_BASIC};
	};
	class Bro_O_CMT_MP5_1: Bro_O_CMT_Shotgun_1 {
		scope = 2;
		scopeCurator = 2;
		displayName = "Militia MP5 (A)";
		linkedItems[] = {"V_BandollierB_blk",ITEMS_BASIC};
		weapons[] = {MILITIA_MP5_WEAPONS};
		magazines[] = {MAG_4(MILITIA_MP5_MAG),MILITIA_P07_MAGS};
	};
	class Bro_O_CMT_MP5_2: Bro_O_CMT_MP5_1 {
		scope = 2;
		scopeCurator = 2;
		displayName = "Militia MP5 (B)";
		linkedItems[] = {"V_BandollierB_blk","rhs_beanie_green","rhs_scarf",ITEMS_BASIC};
	};
	class Bro_O_CMT_MP5_3: Bro_O_CMT_MP5_1 {
		scope = 2;
		scopeCurator = 2;
		displayName = "Militia MP5 (C)";
		linkedItems[] = {"V_BandollierB_blk","rhs_balaclava",ITEMS_BASIC};
	};
	class Bro_O_CMT_MP5_4: Bro_O_CMT_MP5_1 {
		scope = 2;
		scopeCurator = 2;
		displayName = "Militia MP5 (D)";
		linkedItems[] = {"V_BandollierB_blk","rhs_fieldcap_m88_woodland","rhsusf_shemagh2_grn",ITEMS_BASIC};
		magazines[] = {MAG_3(MILITIA_MP5_MAG),MILITIA_P07_MAGS};
	};
	class Bro_O_CMT_M4_1: Bro_O_CMT_Shotgun_1 {
		scope = 2;
		scopeCurator = 2;
		displayName = "Militia M4A1 (A)";
		linkedItems[] = {"V_BandollierB_blk",ITEMS_BASIC};
		weapons[] = {"rhs_weap_m4_mstock","rhsusf_weap_m1911a1",THROW_PUT};
		magazines[] = {MILITIA_1911_MAGS,MAG_9(MILITIA_M4_MAG)};
	};
	class Bro_O_CMT_M4_2: Bro_O_CMT_M4_1 {
		scope = 2;
		scopeCurator = 2;
		displayName = "Militia M4A1 (B)";
		weapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m1911a1",THROW_PUT};
		magazines[] = {MILITIA_1911_MAGS,MAG_3(MILITIA_M4_MAG)};
	};
	class Bro_O_CMT_AKS_1: Bro_O_CMT_Shotgun_1 {
		scope = 2;
		scopeCurator = 2;
		displayName = "Militia AKS74U (A)";
		weapons[] = {MILITIA_AKS_WEAPONS};
		magazines[] = {MILITIA_1911_MAGS,MAG_5("30Rnd_545x39_Mag_F")};
	};
	class Bro_O_CMT_AKS_2: Bro_O_CMT_AKS_1 {
		scope = 2;
		scopeCurator = 2;
		displayName = "Militia AKS74U (B)";
		linkedItems[] = {"rhs_vest_commander","H_Hat_grey",ITEMS_BASIC};
	};
	// Vehicles
	class Bro_CMT_Jeep_Unarmed: Bro_Arctic_Jeep_Unarmed {
		scope = 2;
		scopeCurator = 2;
		faction = FACTION_CLASS;
		crew = "Bro_O_CMT_AKS_1";
		textureList[] = {
			"Black",0.33,
			"Olive",0.33,
			"Brown",0.33
		};
		typicalCargo[] = {"Bro_O_CMT_AKS_1"};
		animationList[] = {
			"hideLeftDoor",1,
			"hideRightDoor",1,
			"hideRearDoor",1,
			"hideBullbar",1,
			"hideFenders",0,
			"hideHeadSupportFront",0,
			"hideHeadSupportRear",0,
			"hideRollcage",1,
			"hideSpareWheel",1,
			"hideSeatsRear",0
		};
	};
};
class CfgGroups {
	class East {
		class bro_groups_CMT {
			name = "[Bro] Militia";
			class Bro_CMT_Group_Infantry {
				name = "Militia";
				class bro_CMT_Fireteam_Good {
					GROUP_INFO("Team (AK + M4)",ICON_O_INF)
					GROUP_UNIT(0,0,"Bro_O_CMT_M4_1");
					GROUP_UNIT(1,2.5,"Bro_O_CMT_M4_2");
					GROUP_UNIT(2,5,"Bro_O_CMT_AKS_1");
					GROUP_UNIT(3,7.5,"Bro_O_CMT_AKS_2");
				};
				class bro_CMT_Fireteam_Bad {
					GROUP_INFO("Team (MP5 + Shotgun)",ICON_O_INF)
					GROUP_UNIT(0,0,"Bro_O_CMT_MP5_1");
					GROUP_UNIT(1,2.5,"Bro_O_CMT_Shotgun_1");
					GROUP_UNIT(2,5,"Bro_O_CMT_MP5_3");
					GROUP_UNIT(3,7.5,"Bro_O_CMT_Shotgun_2");
				};
				class bro_CMT_Squad {
					GROUP_INFO("Squad (Mixed weapons)",ICON_O_INF)
					GROUP_UNIT(0,0,"Bro_O_CMT_M4_2");
					GROUP_UNIT(1,2.5,"Bro_O_CMT_MP5_3");
					GROUP_UNIT(2,5,"Bro_O_CMT_AKS_2");
					GROUP_UNIT(3,7.5,"Bro_O_CMT_Shotgun_2");
					GROUP_UNIT(4,10,"Bro_O_CMT_M4_1");
					GROUP_UNIT(5,-2.5,"Bro_O_CMT_MP5_4");
					GROUP_UNIT(6,-5,"Bro_O_CMT_AKS_1");
					GROUP_UNIT(7,-7.5,"Bro_O_CMT_Shotgun_1");
					GROUP_UNIT(8,-10,"Bro_O_CMT_AKS_2");
				};
			};
		};
	};
};
