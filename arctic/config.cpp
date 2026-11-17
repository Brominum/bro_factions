#define FACTION_CLASS "bro_arctic"
#define FACTION_SIDE 0
#include "\bro_factions\macros.hpp"
#define ARCTIC_ICON "\bro_factions\icon_ca.paa"
#define ARCTIC_PISTOL "rhsusf_weap_glock17g4"
// Pistol magazine and chemlight that all Arctic units have.
#define ARCTIC_COMMON_MAGS "rhsusf_mag_17Rnd_9x19_FMJ","Chemlight_red"
#define ARCTIC_SMG_MAGS MAG_5("30Rnd_9x21_Mag_SMG_02_Tracer_Red")
class CfgPatches {
	class bro_factions_arctic {
		name = "[Bro] Arctic OPFOR";
		addonRootClass = "bro_factions";
		requiredAddons[] = {"A3_Data_F_Warlords_Loadorder","rhsusf_main_loadorder","bro_factions"};
		requiredVersion = 0.1;
	};
};
class CfgFactionClasses {
	class bro_arctic {
		displayName = "[Bro] Arctic";
		priority = 0;
		side = FACTION_SIDE;
		icon = "";
	};
};
class CfgVehicles {
	// Infantry. All units inherit from the rifleman and change only what is different.
	class O_R_Gorka_base_F;
	class Bro_O_Arctic_Rifleman: O_R_Gorka_base_F {
		scope = 2;
		scopeCurator = 2;
		author = "Bromine";
		faction = FACTION_CLASS;
		picture = ARCTIC_ICON;
		editorPreview = "";
		identityTypes[] = {"LanguageENG_F","Head_Russian","Head_NATO","Head_Enoch","Head_Asian","NoGlasses"};
		displayName = "Rifleman (M4)";
		role = "Rifleman";
		camouflage = 1;
		uniformClass = "Bro_U_Gorka_Arctic";
		hiddenSelectionsTextures[] = {
			"Bro_Factions\Arctic\Gorka_co.paa"
		};
		// Headgear that is not in use: "H_Watchcap_blk", "G_Balaclava_TI_blk_F"
		linkedItems[] = {"Bro_V_Smersh_Black",ITEMS_BASIC};
		weapons[] = {"Bro_M4_Snow",ARCTIC_PISTOL,THROW_PUT};
		magazines[] = {MAG_5("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),ARCTIC_COMMON_MAGS};
	};
	class Bro_O_Arctic_Rifleman_MP5: Bro_O_Arctic_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (MP5)";
		weapons[] = {"Bro_MP5_Snow",ARCTIC_PISTOL,THROW_PUT};
		magazines[] = {ARCTIC_SMG_MAGS,ARCTIC_COMMON_MAGS};
	};
	class Bro_O_Arctic_Rifleman_MP7: Bro_O_Arctic_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (MP7)";
		weapons[] = {"Bro_MP7_Snow",ARCTIC_PISTOL,THROW_PUT};
		magazines[] = {MAG_5("rhsusf_mag_40Rnd_46x30_FMJ"),ARCTIC_COMMON_MAGS};
	};
	class Bro_O_Arctic_Rifleman_EVO: Bro_O_Arctic_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (EVO 9mm)";
		weapons[] = {"Bro_Scorpion_Snow",ARCTIC_PISTOL,THROW_PUT};
		magazines[] = {ARCTIC_SMG_MAGS,ARCTIC_COMMON_MAGS};
	};
	class Bro_O_Arctic_Rifleman_M590: Bro_O_Arctic_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Shotgun)";
		weapons[] = {"rhs_weap_M590_8RD",ARCTIC_PISTOL,THROW_PUT};
		magazines[] = {MAG_5("rhsusf_8Rnd_00Buck"),ARCTIC_COMMON_MAGS};
	};
	class Bro_O_Arctic_Autorifleman: Bro_O_Arctic_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Machinegunner";
		role = "MachineGunner";
		linkedItems[] = {"Bro_V_Smersh_Black","rhsusf_protech_helmet","rhsusf_oakley_goggles_clr",ITEMS_BASIC};
		magazines[] = {MAG_3("150Rnd_556x45_Drum_Mag_Tracer_F"),"SmokeShell",ARCTIC_COMMON_MAGS};
	};
	class Bro_O_Arctic_Teamleader: Bro_O_Arctic_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		linkedItems[] = {"Bro_V_Smersh_Black","H_PASGT_basic_white_F","rhsusf_oakley_goggles_clr",ITEMS_BASIC};
		magazines[] = {MAG_4("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),"SmokeShell",ARCTIC_COMMON_MAGS};
	};
	// Vehicles
	// The class textureSources has no parent class. This removes the vanilla sources, thus the vehicle cannot get a random color.
	class I_C_Offroad_02_LMG_F;
	class I_C_Offroad_02_AT_F;
	class I_C_Offroad_02_unarmed_F;
	class Bro_Arctic_Jeep_Unarmed: I_C_Offroad_02_unarmed_F {
		DLC = "";
		side = FACTION_SIDE;
		scope = 2;
		scopeCurator = 2;
		faction = FACTION_CLASS;
		crew = "Bro_O_Arctic_Rifleman";
		class textureSources {
			class Bro_jeep_arctic {
				displayName = "[Bro] Arctic";
				author = "Bromine";
				textures[] = {
					"a3\soft_f_exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
					"a3\soft_f_exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
					"a3\soft_f_exp\Offroad_02\Data\offroad_02_int_red_co.paa",
					"a3\soft_f_exp\Offroad_02\Data\offroad_02_int_red_co.paa"
				};
				materials[] = {
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[] = {""};
			};
		};
		textureList[] = {"Bro_jeep_arctic",1};
		typicalCargo[] = {"Bro_O_Arctic_Rifleman"};
		animationList[] = {
			"hideLeftDoor",1,
			"hideRightDoor",1,
			"hideRearDoor",1,
			"hideBullbar",0,
			"hideFenders",1,
			"hideHeadSupportFront",1,
			"hideHeadSupportRear",1,
			"hideRollcage",1,
			"hideSpareWheel",1,
			"hideSeatsRear",0
		};
	};
/* No armed vics temporarily
	class Bro_Arctic_Jeep_LMG: I_C_Offroad_02_LMG_F {
		DLC = "";
		side = 0;
		scope = 2;
		scopeCurator = 2;
		faction = "bro_arctic";
		crew = "Bro_O_Arctic_Rifleman";
		class textureSources {
			class Bro_jeep_arctic {
				displayName = "[Bro] Arctic";
				author = "Bromine";
				textures[] = {
					"bro_factions\arctic\jeep_co.paa",
					"bro_factions\arctic\jeep_co.paa",
					"a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa",
					"a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa"
				};
				materials[] = {
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[] = {""};
			};
		};
		textureList[] = {"Bro_jeep_arctic",1};
		typicalCargo[] = {
			"Bro_O_Arctic_Rifleman"
		};
		animationList[] = {
			"hideLeftDoor",
			1,
			"hideRightDoor",
			1,
			"hideRearDoor",
			1,
			"hideBullbar",
			0,
			"hideFenders",
			1,
			"hideHeadSupportFront",
			1,
			"hideHeadSupportRear",
			1,
			"hideRollcage",
			0,
			"hideSpareWheel",
			1,
			"hideSeatsRear",
			1
		};
	};
	class Bro_Arctic_Jeep_AT: I_C_Offroad_02_AT_F {
		DLC = "";
		side = 0;
		scope = 2;
		scopeCurator = 2;
		faction = "bro_arctic";
		crew = "Bro_O_Arctic_Rifleman";
		class textureSources {
			class Bro_jeep_arctic {
				displayName = "[Bro] Arctic";
				author = "Bromine";
				textures[] = {
					"bro_factions\arctic\jeep_co.paa",
					"bro_factions\arctic\jeep_co.paa",
					"a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa",
					"a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa"
				};
				materials[] = {
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[] = {""};
			};
		};
		textureList[] = {"Bro_jeep_arctic",1};
		typicalCargo[] = {
			"Bro_O_Arctic_Rifleman"
		};
		animationList[] = {
			"hideLeftDoor",
			1,
			"hideRightDoor",
			1,
			"hideRearDoor",
			1,
			"hideBullbar",
			0,
			"hideFenders",
			1,
			"hideHeadSupportFront",
			1,
			"hideHeadSupportRear",
			1,
			"hideRollcage",
			0,
			"hideSpareWheel",
			1,
			"hideSeatsRear",
			1
		};
	};
*/
};
class CfgWeapons {
	// Weapons
	// REMOVE AFTER USE: rhsusf_weap_MP7A2_winter, rhs_weap_m4
	class rhsusf_weap_MP7A2_winter;
	class rhs_weap_m4;
	class SMG_02_F;
	class SMG_05_F;
	WEAPON_PRESET(Bro_MP7_Snow,rhsusf_weap_MP7A2_winter,"rhsusf_acc_eotech_xps3","acc_flashlight");
	WEAPON_PRESET(Bro_Scorpion_Snow,SMG_02_F,"rhsusf_acc_T1_high","acc_flashlight");
	WEAPON_PRESET(Bro_MP5_Snow,SMG_05_F,"optic_Holosight_smg_blk_F","acc_flashlight");
	class Bro_M4_Snow: rhs_weap_m4 {
		scope = 1;
		hiddenSelectionsTextures[] = {
			"\bro_factions\arctic\m4a1_co.paa"
		};
		class LinkedItems {
			LINKED_OPTIC("rhsusf_acc_T1_high")
			LINKED_POINTER("acc_flashlight")
		};
	};
	// Uniform
	class UniformItem;
	class U_O_R_Gorka_01_F;
	class Bro_U_Gorka_Arctic: U_O_R_Gorka_01_F {
		author = "Bromine";
		scope = 2;
		icon = "Bro_Factions\icon_ca.paa";
		picture = "\Bro_Factions\icon_ca.paa";
		displayName = "[Bro] Gorka (Arctic)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {
			"Bro_Factions\Arctic\Gorka_co.paa"
		};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "Bro_O_Arctic_Rifleman";
			containerClass = "Supply40";
			mass = 40;
		};
	};
};
class CfgGroups {
	class East {
		class bro_arctic {
			name = "[Bro] Arctic";
			class Infantry {
				name = "Infantry";
				class bro_arctic_Fireteam {
					GROUP_INFO("Fireteam",ICON_O_INF)
					GROUP_UNIT(0,0,"Bro_O_Arctic_Teamleader");
					GROUP_UNIT(1,2.5,"Bro_O_Arctic_Rifleman_MP5");
					GROUP_UNIT(2,5,"Bro_O_Arctic_Rifleman");
					GROUP_UNIT(3,7.5,"Bro_O_Arctic_Rifleman_M590");
				};
				class bro_arctic_Squad {
					GROUP_INFO("Squad",ICON_O_INF)
					GROUP_UNIT(0,0,"Bro_O_Arctic_Teamleader");
					GROUP_UNIT(1,2.5,"Bro_O_Arctic_Autorifleman");
					GROUP_UNIT(2,5,"Bro_O_Arctic_Rifleman_MP5");
					GROUP_UNIT(3,7.5,"Bro_O_Arctic_Rifleman_MP7");
					GROUP_UNIT(4,10,"Bro_O_Arctic_Rifleman");
					GROUP_UNIT(5,-2.5,"Bro_O_Arctic_Rifleman_EVO");
					GROUP_UNIT(6,-5,"Bro_O_Arctic_Rifleman_M590");
					GROUP_UNIT(7,-7.5,"Bro_O_Arctic_Teamleader");
					GROUP_UNIT(8,-10,"Bro_O_Arctic_Autorifleman");
				};
			};
/* No vehicle groups temporarily
			class Vehicle {
				name = "Vehicles";
				class bro_arctic_2_lmg {
					faction = "bro_arctic";
					icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "2x LMG";
					side = 0;
					class unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "Bro_Arctic_Jeep_LMG";
					};
					class unit1: unit0 {
						position[] = {0,-7,0};
						vehicle = "Bro_Arctic_Jeep_LMG";
					};
				};
				class bro_arctic_2_at {
					faction = "bro_arctic";
					icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "2x AT";
					side = 0;
					class unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "Bro_Arctic_Jeep_AT";
					};
					class unit1: unit0 {
						position[] = {0,-7,0};
						vehicle = "Bro_Arctic_Jeep_AT";
						};
					};
			};
*/
		};
	};
};
