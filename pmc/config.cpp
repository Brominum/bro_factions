class CfgPatches {
	class bro_factions_PMC {
		name = "[Bro] PMC OPFOR";
		addonRootClass = "bro_factions";
		requiredAddons[] = {"A3_Data_F_Warlords_Loadorder"};
		requiredVersion = 0.1;
	};
};
class CfgFactionClasses {
	class bro_PMC {
		displayName = "[Bro] PMC";
		priority = 0;
		side = 1;
		icon = "";
	};
};
class CfgVehicles {
// Infantry
	class O_R_Gorka_base_F;
	class Bro_O_PMC_Rifleman: O_R_Gorka_base_F {
		scope = 2;
		scopeCurator = 2;
		picture = "Bro_Factions\icon_ca.paa";
		editorPreview = "";
		author = "Bromine";
		faction = "bro_PMC";
		identityTypes[] = {"LanguageENG_F","Head_Russian","Head_NATO","Head_Enoch","Head_Asian","NoGlasses"};
		displayName = "Rifleman (416)";
		role = "Rifleman";
		uniformClass = "Bro_U_PMC_Polo_Pants";
		model = "Bro_Factions\PMC\bro_polo_pants.p3d";
		hiddenSelections[] = {
			"camo",
			"camoB"
		};
		hiddenSelectionsTextures[] = {
			"Bro_Factions\PMC\pmc_polo_co.paa",
			"Bro_Factions\PMC\pmc_pants_co.paa"
		};
		backpack = "Bro_EDBackpack_Black";
		linkedItems[] = {
			"Bro_V_PMC_Black",
			"Bro_Hat_Black_Headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[] = {
			"Bro_416_PMC",
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		magazines[] = {
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"16Rnd_9x21_yellow_Mag",
			"16Rnd_9x21_yellow_Mag",
			"SmokeShell",
			"Chemlight_red",
			"Chemlight_red"
		};
		camouflage = 1;
	};
	class Bro_O_PMC_Rifleman_SMG: Bro_O_PMC_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Vector)";
		weapons[] = {
			"Bro_Vector_PMC",
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		magazines[] = {
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"16Rnd_9x21_yellow_Mag",
			"16Rnd_9x21_yellow_Mag",
			"SmokeShell",
			"Chemlight_red",
			"Chemlight_red"
		};
	};
	class Bro_O_PMC_Marksman: Bro_O_PMC_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Marksman";
		weapons[] = {
			"Bro_417_PMC",
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		magazines[] = {
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"16Rnd_9x21_yellow_Mag",
			"16Rnd_9x21_yellow_Mag",
			"SmokeShell",
			"Chemlight_red",
			"Chemlight_red"
		};
	};
	class Bro_O_PMC_Teamleader: Bro_O_PMC_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		linkedItems[] = {
			"Bro_V_PMC_Black",
			"H_PASGT_basic_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class Bro_O_PMC_DroneOp_darter: Bro_O_PMC_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Drone Operator (Darter)";
		role = "SpecialOperative";
		backpack = "O_UAV_01_backpack_F";
		weapons[] = {
			"Bro_416_PMC",
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		magazines[] = {
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"16Rnd_9x21_yellow_Mag",
			"16Rnd_9x21_yellow_Mag",
			"SmokeShell",
			"Chemlight_red",
			"Chemlight_red"
		};
		linkedItems[] = {
			"Bro_V_PMC_Black",
			"Bro_Hat_Black_Headset",
			"ItemMap",
			"O_T_Soldier_UAV_F",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		camouflage = 1;
	};
	class Bro_O_PMC_DroneOp_pelican: Bro_O_PMC_DroneOp_darter {
		scope = 2;
		scopeCurator = 2;
		displayName = "Drone Operator (Pelican)";
		backpack = "O_UAV_06_backpack_F";
	};

// Vehicles
	class B_Heli_Light_01_F;
	class Bro_O_PMC_Helicopter: B_Heli_Light_01_F {
		scope = 2;
		scopeCurator = 2;
		picture = "Bro_Factions\icon_ca.paa";
		faction = "bro_PMC";
		side = 0;
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\Heli_Light_01_ext_ION_CO.paa"};
		crew = "Bro_O_PMC_Rifleman_SMG";
		typicalCargo[] = {"Bro_O_PMC_Rifleman_SMG"};
	};
	
	class B_CTRG_LSV_01_light_F;
	class Bro_O_PMC_LSV: B_CTRG_LSV_01_light_F {
		scope = 2;
		scopeCurator = 2;
		picture = "Bro_Factions\icon_ca.paa";
		faction = "bro_PMC";
		side = 0;
		crew = "Bro_O_PMC_Teamleader";
		typicalCargo[] = {"Bro_O_PMC_Rifleman_SMG"};
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
		picture = "Bro_Factions\icon_ca.paa";
		faction = "bro_PMC";
		side = 0;
		crew = "Bro_O_PMC_Teamleader";
		typicalCargo[] = {"Bro_O_PMC_Rifleman_SMG"};
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
class CfgGroups {
	class East {
		class bro_PMC {
			name = "[Bro] PMC";
			class Infantry {
				name = "Infantry";
				class bro_PMC_Fireteam {
					faction = "bro_PMC";
					icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Fireteam";
					side = 0;
					class unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "Bro_O_PMC_Teamleader";
					};
					class unit1: unit0 {
						position[] = {2.5,0,0};
						vehicle = "Bro_O_PMC_Rifleman";
					};
					class unit2: unit0 {
						position[] = {5,0,0};
						vehicle = "Bro_O_PMC_Rifleman_SMG";
					};
					class unit3: unit0 {
						position[] = {7.5,0,0};
						vehicle = "Bro_O_PMC_Marksman";
					};
				};
				class bro_PMC_Squad {
					faction = "bro_PMC";
					icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Squad";
					side = 0;
					class unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "Bro_O_PMC_Teamleader";
					};
					class unit1: unit0 {
						position[] = {2.5,0,0};
						vehicle = "Bro_O_PMC_Rifleman";
					};
					class unit2: unit0 {
						position[] = {5,0,0};
						vehicle = "Bro_O_PMC_Rifleman_SMG";
					};
					class unit3: unit0 {
						position[] = {7.5,0,0};
						vehicle = "Bro_O_PMC_Rifleman_SMG";
					};
					class unit4: unit0 {
						position[] = {10,0,0};
						vehicle = "Bro_O_PMC_Rifleman";
					};
					class unit5: unit0 {
						position[] = {-2.5,0,0};
						vehicle = "Bro_O_PMC_Rifleman_SMG";
					};
					class unit6: unit0 {
						position[] = {-5,0,0};
						vehicle = "Bro_O_PMC_Rifleman_SMG";
					};
					class unit7: unit0 {
						position[] = {-7.5,0,0};
						vehicle = "Bro_O_PMC_Teamleader";
					};
					class unit8: unit0 {
						position[] = {-10,0,0};
						vehicle = "Bro_O_PMC_Teamleader";
					};
				};
			};
		};
	};
};