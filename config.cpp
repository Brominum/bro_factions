// Root addon. It contains only the content that more than one faction uses.
// Each faction has its own folder and its own config.cpp.
// To add a faction, copy temp\_template and obey the instructions in its config.cpp.
class CfgPatches {
	class bro_factions {
		author = "Bromine";
		name = "[Bro] Factions";
		requiredAddons[] = {"A3_Data_F_Warlords_Loadorder","rhsusf_main_loadorder"};
		requiredVersion = 0.1;
	};
};
class CfgFunctions {
	class bro {
		class factions_fpl {
			file = "\bro_factions\functions";
			class randomizeMilitia {};
		};
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
		displayName = "Drones";
	};
};
class CfgVehicles {
	// Ground holder for the shared vest.
	class Vest_V_SmershVest_01_F;
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
};
class CfgWeapons {
	// Shared vest.
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
};
