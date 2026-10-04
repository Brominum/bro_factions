class CfgPatches {
	class bro_factions {
		author = "Bromine";
		name = "[Bro] Factions";
		requiredAddons[] = {"A3_Data_F_Warlords_Loadorder","rhsusf_main_loadorder"};
		requiredVersion = 0.1;
	};
};
class CfgFunctions  {
	class bro  {
		class factions_fpl {
			file = "\bro_factions\functions";
			class randomizeMilitia {};
		};
	};
};
class CfgFactionClasses {
	class bro_arctic {
		displayName = "[Bro] Arctic";
		priority = 0;
		side = 1;
		icon = "";
	};
	class bro_PMC {
		displayName = "[Bro] PMC";
		priority = 0;
		side = 1;
		icon = "";
	};
	class bro_509th {
		displayName="[Bro] 509th OPFOR";
		priority=0;
		side=0;
		icon="";
	};
	class bro_militia {
		displayName = "[Bro] Militia";
		flag = "\a3\data_f\flags\flag_red_co.paa";
		icon = "\a3\data_f\cfgfactionclasses_opf_ca.paa";
		priority = 0;
		side = 0;
	};
};
class CfgVehicleClasses {
	class bro_men {
		displayName = "Infantry";
	};
	class bro_special {
		displayName = "Special Forces";
	};
	class bro_vehicles {
		displayName = "Vehicles";
	};
	class bro_drones {
		displayName="Drones";
	};
};
class CfgVehicles {
// Backpack
	class B_CivilianBackpack_01_Everyday_Black_F;
	class Bro_EDBackpack_Black: B_CivilianBackpack_01_Everyday_Black_F {
		scope = 2;
		icon = "Bro_Factions\icon_ca.paa";
		picture = "\Bro_Factions\icon_ca.paa";
		editorPreview = "";
		displayname = "[Bro] PMC Backpack (Black)";
		hiddenSelectionsTextures[] = {
			"Bro_Factions\PMC\pmc_backpack_co.paa"
		};
	};

// VEST
	class Vest_V_SmershVest_01_F;
	class Vest_V_Press_F;
	class Bro_V_V_Smersh_Black: Vest_V_SmershVest_01_F {
		scope = 2;
		scopeCurator = 2;
		icon = "\bro_factions\icon_ca.paa";
		picture = "\bro_factions\icon_ca.paa";
		displayName = "Kipchak Vest (Black)";
		class TransportItems {
			class Bro_V_Smersh_Black {
				name = "Bro_V_Smersh_Black";
				count = 1;
			};
		};
	};
	class Bro_V_V_PMC_Black: Vest_V_Press_F {
		scope = 2;
		scopeCurator = 2;
		icon = "\bro_factions\icon_ca.paa";
		picture = "\bro_factions\icon_ca.paa";
		displayName = "Armored Vest (Black)";
		class TransportItems {
			class Bro_V_Smersh_Black {
				name = "Bro_V_PMC_Black";
				count = 1;
			};
		};
	};
};
class CfgWeapons {
// WEAPONS
	class SMG_01_F;
	class Bro_Vector_PMC: SMG_01_F {
		scope = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Holosight_smg_blk_F";
			};
			class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_flashlight_smg_01";
			};
		};
	};

	class arifle_SPAR_01_blk_F;
	class Bro_416_PMC: arifle_SPAR_01_blk_F {
		scope = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Holosight_blk_F";
			};
			class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};

	class arifle_SPAR_03_blk_F;
	class Bro_417_PMC: arifle_SPAR_03_blk_F {
		scope = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_DMS_weathered_Kir_F";
			};
			class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
		};
	};

	class arifle_Katiba_C_F;
	class Bro_Katiba_lightreflex: arifle_Katiba_C_F {
		scope = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};

	class arifle_Katiba_GL_F;
	class Bro_Katiba_GR_lightreflex: arifle_Katiba_GL_F {
		scope = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};

	class LMG_Mk200_black_F;
	class Bro_Mk200_lightreflex: LMG_Mk200_black_F {
		scope = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Arco_blk_F";
			};
			class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};

	class rhsusf_weap_MP7A2_winter;	// REMOVE AFTER USE
	class Bro_MP7_Snow: rhsusf_weap_MP7A2_winter {
		scope = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "rhsusf_acc_eotech_xps3";
			};
			class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};

	class SMG_02_F;
	class Bro_Scorpion_Snow: SMG_02_F {
		scope = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "rhsusf_acc_T1_high";
			};
			class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};

	class rhs_weap_m4;	// REMOVE AFTER USE
	class Bro_M4_Snow: rhs_weap_m4 {
		scope = 1;
		hiddenSelectionsTextures[] = {
			"\bro_factions\arctic\m4a1_co.paa"
		};
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "rhsusf_acc_T1_high";
			};
			class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};

	class SMG_05_F;
	class Bro_MP5_Snow: SMG_05_F {
		scope = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Holosight_smg_blk_F";
			};
			class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};

// VESTS
	class V_SmershVest_01_base_F;
	class V_SmershVest_01_F: V_SmershVest_01_base_F {
		class ItemInfo;
	};
	class Bro_V_Smersh_Black: V_SmershVest_01_F {
		author = "Bromine";
		scope = 2;
		icon = "\bro_factions\icon_ca.paa";
		picture = "\bro_factions\icon_ca.paa";
		displayName = "Kipchak Vest (Black)";
		hiddenSelectionsTextures[] = {
			"Bro_Factions\Common\smersh_co.paa",
			"Bro_Factions\Common\smersh_miscellaneous_co.paa"
		};
		class ItemInfo: ItemInfo {
			containerClass = "Supply300";
		};
	};

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

// UNIFORMS
	class UniformItem;
	class U_O_R_Gorka_01_F;
	class Bro_U_PMC_Polo_Pants: U_O_R_Gorka_01_F {
		author = "Bromine";
		scope = 2;
		icon = "Bro_Factions\icon_ca.paa";
		picture = "\Bro_Factions\icon_ca.paa";
		displayName = "[Bro] PMC Uniform (Polo)";
		hiddenSelections[] = {
			"camo",
			"camoB"
		};
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

	class Bro_U_Gorka_Arctic: U_O_R_Gorka_01_F {
		author = "Bromine";
		scope = 2;
		icon = "Bro_Factions\icon_ca.paa";
		picture = "\Bro_Factions\icon_ca.paa";
		displayName = "[Bro] Gorka (Arctic)";
		hiddenSelections[]  = {
			"camo"
		};
		hiddenSelectionsTextures[]  = {
			"Bro_Factions\Arctic\Gorka_co.paa"
		};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "Bro_O_Arctic_Rifleman";
			containerClass = "Supply40";
			mass = 40;
		};
	};

// HEADWEAR
	class H_Cap_red;
	class H_Cap_blk: H_Cap_red {
		class ItemInfo;
	};
	class Bro_Hat_Black: H_Cap_blk {
		scope = 2;
		icon = "Bro_Factions\icon_ca.paa";
		picture = "\Bro_Factions\icon_ca.paa";
		displayName = "[Bro] Hat, Black";
		hiddenSelectionsTextures[] = {
			"Bro_Factions\PMC\pmc_hat_black_co.paa"
		};
	};
	class Bro_Hat_Black_Headset: H_Cap_blk {
		scope = 2;
		icon = "Bro_Factions\icon_ca.paa";
		picture = "\Bro_Factions\icon_ca.paa";
		displayName = "[Bro] Hat, Black, Headset";
		model = "Bro_Factions\PMC\Bro_Hat_Black_Headset.p3d";
		hiddenSelections[] = {
			"camo",
			"camoB"
		};
		hiddenSelectionsTextures[] = {
			"Bro_Factions\PMC\pmc_hat_black_co.paa",
			"a3\characters_f_orange\Headgear\Data\H_Construction_Black_CO.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel = "Bro_Factions\PMC\Bro_Hat_Black_Headset.p3d";
		};
	};
};