#define FACTION_CLASS "bro_PMC"
#define FACTION_SIDE 0
#include "\bro_factions\macros.hpp"
#define PMC_ICON "\Bro_Factions\icon_ca.paa"
#define PMC_RIFLE_MAGS MAG_6("30Rnd_556x45_Stanag_Tracer_Yellow")
// Pistol magazines, smoke and chemlights that all PMC units have.
#define PMC_COMMON_MAGS MAG_2("16Rnd_9x21_yellow_Mag"),"SmokeShell",MAG_2("Chemlight_red")
class CfgPatches {
	class bro_factions_PMC {
		name = "[Bro] PMC OPFOR";
		addonRootClass = "bro_factions";
		requiredAddons[] = {"A3_Data_F_Warlords_Loadorder","bro_factions"};
		requiredVersion = 0.1;
	};
};
class CfgFactionClasses {
	class bro_PMC {
		displayName = "[Bro] PMC";
		priority = 0;
		side = FACTION_SIDE;
		icon = "";
	};
};
class CfgVehicles {
	// Backpack
	class B_CivilianBackpack_01_Everyday_Black_F;
	class Bro_EDBackpack_Black: B_CivilianBackpack_01_Everyday_Black_F {
		scope = 2;
		scopeCurator = 2;
		icon = "Bro_Factions\icon_ca.paa";
		picture = PMC_ICON;
		editorPreview = "";
		displayName = "[Bro] PMC Backpack (Black)";
		hiddenSelectionsTextures[] = {
			"Bro_Factions\PMC\pmc_backpack_co.paa"
		};
	};
	// Ground holder for the vest.
	class Vest_V_Press_F;
	class Bro_V_V_PMC_Black: Vest_V_Press_F {
		scope = 2;
		scopeCurator = 2;
		icon = "\bro_factions\icon_ca.paa";
		picture = "\bro_factions\icon_ca.paa";
		displayName = "Armored Vest (Black)";
		class TransportItems {
			class Bro_V_PMC_Black {
				name = "Bro_V_PMC_Black";
				count = 1;
			};
		};
	};
	// Infantry. All units inherit from the rifleman and change only what is different.
	class O_R_Gorka_base_F;
	class Bro_O_PMC_Rifleman: O_R_Gorka_base_F {
		scope = 2;
		scopeCurator = 2;
		picture = PMC_ICON;
		editorPreview = "";
		author = "Bromine";
		faction = FACTION_CLASS;
		identityTypes[] = {"LanguageENG_F","Head_Russian","Head_NATO","Head_Enoch","Head_Asian","NoGlasses"};
		displayName = "Rifleman (416)";
		role = "Rifleman";
		camouflage = 1;
		uniformClass = "Bro_U_PMC_Polo_Pants";
		model = "Bro_Factions\PMC\bro_polo_pants.p3d";
		hiddenSelections[] = {"camo","camoB"};
		hiddenSelectionsTextures[] = {
			"Bro_Factions\PMC\pmc_polo_co.paa",
			"Bro_Factions\PMC\pmc_pants_co.paa"
		};
		backpack = "Bro_EDBackpack_Black";
		linkedItems[] = {"Bro_V_PMC_Black","Bro_Hat_Black_Headset",ITEMS_BASIC};
		weapons[] = {"Bro_416_PMC","hgun_Rook40_F",THROW_PUT};
		magazines[] = {PMC_RIFLE_MAGS,PMC_COMMON_MAGS};
	};
	class Bro_O_PMC_Rifleman_SMG: Bro_O_PMC_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Vector)";
		weapons[] = {"Bro_Vector_PMC","hgun_Rook40_F",THROW_PUT};
		magazines[] = {MAG_5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),PMC_COMMON_MAGS};
	};
	class Bro_O_PMC_Marksman: Bro_O_PMC_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Marksman";
		weapons[] = {"Bro_417_PMC","hgun_Rook40_F",THROW_PUT};
		magazines[] = {MAG_5("20Rnd_762x51_Mag"),PMC_COMMON_MAGS};
	};
	class Bro_O_PMC_Teamleader: Bro_O_PMC_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		linkedItems[] = {"Bro_V_PMC_Black","H_PASGT_basic_black_F",ITEMS_BASIC};
	};
	class Bro_O_PMC_DroneOp_darter: Bro_O_PMC_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Drone Operator (Darter)";
		role = "SpecialOperative";
		backpack = "O_UAV_01_backpack_F";
		linkedItems[] = {"Bro_V_PMC_Black","Bro_Hat_Black_Headset","O_UavTerminal",ITEMS_BASIC};
	};
	class Bro_O_PMC_DroneOp_pelican: Bro_O_PMC_DroneOp_darter {
		scope = 2;
		scopeCurator = 2;
		displayName = "Drone Operator (Pelican)";
		backpack = "O_UAV_06_backpack_F";
	};
	// Vehicles
	// Each class TextureSources has no parent class. This removes the vanilla sources, thus the vehicle cannot get a random color.
	class B_Heli_Light_01_F;
	class Bro_O_PMC_Helicopter: B_Heli_Light_01_F {
		scope = 2;
		scopeCurator = 2;
		picture = PMC_ICON;
		faction = FACTION_CLASS;
		side = FACTION_SIDE;
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\Heli_Light_01_ext_ION_CO.paa"};
		crew = "Bro_O_PMC_Rifleman_SMG";
		typicalCargo[] = {"Bro_O_PMC_Rifleman_SMG"};
	};
	class B_CTRG_LSV_01_light_F;
	class Bro_O_PMC_LSV: B_CTRG_LSV_01_light_F {
		scope = 2;
		scopeCurator = 2;
		picture = PMC_ICON;
		faction = FACTION_CLASS;
		side = FACTION_SIDE;
		crew = "Bro_O_PMC_Teamleader";
		typicalCargo[] = {"Bro_O_PMC_Rifleman_SMG"};
		// The vanilla parent has "Dazzle" here. That source does not exist in this class.
		textureList[] = {"Black",1};
		hiddenSelectionsTextures[] = {
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa",
			"\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa",
			"\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa"
		};
		class TextureSources {
			class Black {
				author = "Bohemia Interactive";
				displayName = "Black";
				factions[] = {""};
				textures[] = {
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa",
					"\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa",
					"\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa"
				};
			};
		};
	};
	class I_C_Offroad_02_LMG_F;
	class Bro_O_PMC_Jeep_LMG: I_C_Offroad_02_LMG_F {
		scope = 2;
		scopeCurator = 2;
		picture = PMC_ICON;
		faction = FACTION_CLASS;
		side = FACTION_SIDE;
		crew = "Bro_O_PMC_Teamleader";
		typicalCargo[] = {"Bro_O_PMC_Rifleman_SMG"};
		// The vanilla parent has "Brown" and "Olive" here. Those sources do not exist in this class.
		textureList[] = {"Black",1};
		hiddenSelectionsMaterials[] = {
			"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_2_metal.rvmat",
			"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
			"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
			"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
			"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
			"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa",
			"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"
		};
		class TextureSources {
			class Black {
				author = "Bohemia Interactive";
				displayName = "Black";
				factions[] = {""};
				materials[] = {
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_2_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				textures[] = {
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"
				};
			};
		};
	};
};
class CfgWeapons {
	// Weapons
	class SMG_01_F;
	class arifle_SPAR_01_blk_F;
	class arifle_SPAR_03_blk_F;
	WEAPON_PRESET(Bro_Vector_PMC,SMG_01_F,"optic_Holosight_smg_blk_F","acc_flashlight_smg_01");
	WEAPON_PRESET(Bro_416_PMC,arifle_SPAR_01_blk_F,"optic_Holosight_blk_F","acc_flashlight");
	class Bro_417_PMC: arifle_SPAR_03_blk_F {
		scope = 1;
		class LinkedItems {
			LINKED_OPTIC("optic_DMS_weathered_Kir_F")
			LINKED_POINTER("acc_pointer_IR")
			LINKED_BIPOD("bipod_01_F_blk")
		};
	};
	// Vest
	class V_Press_F;
	class Bro_V_PMC_Black: V_Press_F {
		author = "Bromine";
		scope = 2;
		icon = "\bro_factions\icon_ca.paa";
		picture = "\bro_factions\icon_ca.paa";
		displayName = "Armored Vest (Black)";
		hiddenSelectionsTextures[] = {
			"Bro_Factions\PMC\pmc_vest_black_co.paa"
		};
	};
	// Uniform
	class UniformItem;
	class U_O_R_Gorka_01_F;
	class Bro_U_PMC_Polo_Pants: U_O_R_Gorka_01_F {
		author = "Bromine";
		scope = 2;
		icon = "Bro_Factions\icon_ca.paa";
		picture = PMC_ICON;
		displayName = "[Bro] PMC Uniform (Polo)";
		hiddenSelections[] = {"camo","camoB"};
		hiddenSelectionsTextures[] = {
			"Bro_Factions\PMC\pmc_polo_co.paa",
			"Bro_Factions\PMC\pmc_pants_co.paa"
		};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "Bro_O_PMC_Rifleman";
			containerClass = "Supply80";
			mass = 40;
		};
	};
	// Headgear
	class H_Cap_red;
	class H_Cap_blk: H_Cap_red {
		class ItemInfo;
	};
	class Bro_Hat_Black: H_Cap_blk {
		scope = 2;
		icon = "Bro_Factions\icon_ca.paa";
		picture = PMC_ICON;
		displayName = "[Bro] Hat, Black";
		hiddenSelectionsTextures[] = {
			"Bro_Factions\PMC\pmc_hat_black_co.paa"
		};
	};
	class Bro_Hat_Black_Headset: H_Cap_blk {
		scope = 2;
		icon = "Bro_Factions\icon_ca.paa";
		picture = PMC_ICON;
		displayName = "[Bro] Hat, Black, Headset";
		model = "Bro_Factions\PMC\Bro_Hat_Black_Headset.p3d";
		hiddenSelections[] = {"camo","camoB"};
		hiddenSelectionsTextures[] = {
			"Bro_Factions\PMC\pmc_hat_black_co.paa",
			"a3\characters_f_orange\Headgear\Data\H_Construction_Black_CO.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel = "Bro_Factions\PMC\Bro_Hat_Black_Headset.p3d";
			hiddenSelections[] = {"camo","camoB"};
		};
	};
};
class CfgGroups {
	class East {
		class bro_PMC {
			name = "[Bro] PMC";
			class Infantry {
				name = "Infantry";
				class bro_PMC_Fireteam {
					GROUP_INFO("Fireteam",ICON_O_INF)
					GROUP_UNIT(0,0,"Bro_O_PMC_Teamleader");
					GROUP_UNIT(1,2.5,"Bro_O_PMC_Rifleman");
					GROUP_UNIT(2,5,"Bro_O_PMC_Rifleman_SMG");
					GROUP_UNIT(3,7.5,"Bro_O_PMC_Marksman");
				};
				class bro_PMC_Squad {
					GROUP_INFO("Squad",ICON_O_INF)
					GROUP_UNIT(0,0,"Bro_O_PMC_Teamleader");
					GROUP_UNIT(1,2.5,"Bro_O_PMC_Rifleman");
					GROUP_UNIT(2,5,"Bro_O_PMC_Rifleman_SMG");
					GROUP_UNIT(3,7.5,"Bro_O_PMC_Rifleman_SMG");
					GROUP_UNIT(4,10,"Bro_O_PMC_Rifleman");
					GROUP_UNIT(5,-2.5,"Bro_O_PMC_Rifleman_SMG");
					GROUP_UNIT(6,-5,"Bro_O_PMC_Rifleman_SMG");
					GROUP_UNIT(7,-7.5,"Bro_O_PMC_Teamleader");
					GROUP_UNIT(8,-10,"Bro_O_PMC_Teamleader");
				};
			};
		};
	};
};
