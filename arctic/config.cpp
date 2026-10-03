class CfgPatches {
	class bro_factions_arctic {
		name = "[Bro] Arctic OPFOR";
		addonRootClass = "bro_factions";
		requiredAddons[]  = {"A3_Data_F_Warlords_Loadorder"};
		requiredVersion = 0.1;
	};
};
class CfgVehicles {
// INFANTRY
	class O_R_Gorka_base_F;
	class Bro_O_Arctic_Rifleman: O_R_Gorka_base_F {
		scope = 2;
		scopeCurator = 2;
		author = "Bromine";
		faction = "bro_arctic";
		picture = "\bro_factions\icon_ca.paa";
		editorPreview = "";
		identityTypes[] = {"LanguageENG_F","Head_Russian","Head_NATO","Head_Enoch","Head_Asian","NoGlasses"};
		displayName = "Rifleman (M4)";
		role = "Rifleman";
		uniformClass = "Bro_U_Gorka_Arctic";
		hiddenSelectionsTextures[] = {
			"Bro_Factions\Arctic\Gorka_co.paa"
		};
		linkedItems[] = {
			"Bro_V_Smersh_Black",
//			"H_Watchcap_blk",
//			"G_Balaclava_TI_blk_F",	// No baklava for u
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[] = {
			"Bro_M4_Snow",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"Chemlight_red"
		};
		camouflage = 1;
	};
	class Bro_O_Arctic_Rifleman_MP5: Bro_O_Arctic_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (MP5)";
		weapons[] = {
			"Bro_MP5_Snow",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
		magazines[] = {
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"Chemlight_red"
		};
	};
	class Bro_O_Arctic_Rifleman_MP7: Bro_O_Arctic_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (MP7)";
		weapons[] = {
			"Bro_MP7_Snow",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
		magazines[] = {
			"rhsusf_mag_40Rnd_46x30_FMJ",
			"rhsusf_mag_40Rnd_46x30_FMJ",
			"rhsusf_mag_40Rnd_46x30_FMJ",
			"rhsusf_mag_40Rnd_46x30_FMJ",
			"rhsusf_mag_40Rnd_46x30_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"Chemlight_red"
		};
	};
	class Bro_O_Arctic_Rifleman_EVO: Bro_O_Arctic_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (EVO 9mm)";
		weapons[] = {
			"Bro_Scorpion_Snow",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
		magazines[] = {
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"Chemlight_red"
		};
	};
	class Bro_O_Arctic_Rifleman_M590: Bro_O_Arctic_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Shotgun)";
		weapons[] = {
			"rhs_weap_M590_8RD",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
		magazines[] = {
			"rhsusf_8Rnd_00Buck",
			"rhsusf_8Rnd_00Buck",
			"rhsusf_8Rnd_00Buck",
			"rhsusf_8Rnd_00Buck",
			"rhsusf_8Rnd_00Buck",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"Chemlight_red"
		};
	};
	class Bro_O_Arctic_Autorifleman: Bro_O_Arctic_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Machinegunner";
		picture = "\bro_factions\icon_ca.paa";
		editorPreview = "";
		role = "Machinegunner";
		linkedItems[] = {
			"Bro_V_Smersh_Black",
			"rhsusf_protech_helmet",
			"rhsusf_oakley_goggles_clr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[] = {
			"bro_m4_snow",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
		magazines[] = {
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"SmokeShell",
			"Chemlight_red"
		};
	};
	class Bro_O_Arctic_Teamleader: Bro_O_Arctic_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		picture = "\bro_factions\icon_ca.paa";
		role = "Rifleman";
		linkedItems[] = {
			"Bro_V_Smersh_Black",
			"H_PASGT_basic_white_F",
			"rhsusf_oakley_goggles_clr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"SmokeShell",
			"Chemlight_red"
		};
	};

// VEHICLE
	class I_C_Offroad_02_LMG_F;
	class I_C_Offroad_02_AT_F;
	class I_C_Offroad_02_unarmed_F;
	class Bro_Arctic_Jeep_Unarmed: I_C_Offroad_02_unarmed_F {
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
				textures[]  = {
					"a3\soft_f_exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
					"a3\soft_f_exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
					"a3\soft_f_exp\Offroad_02\Data\offroad_02_int_red_co.paa",
					"a3\soft_f_exp\Offroad_02\Data\offroad_02_int_red_co.paa"
				};
				materials[]  = {
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]  = {""};
			};
		};
		textureList[]  = {"Bro_jeep_arctic",1};
		typicalCargo[]  = {
			"Bro_O_Arctic_Rifleman"
		};
		animationList[]  = {
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
			1,
			"hideSpareWheel",
			1,
			"hideSeatsRear",
			0
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
				textures[]  = {
					"bro_factions\arctic\jeep_co.paa",
					"bro_factions\arctic\jeep_co.paa",
					"a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa",
					"a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa"
				};
				materials[]  = {
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]  = {""};
			};
		};
		textureList[]  = {"Bro_jeep_arctic",1};
		typicalCargo[]  = {
			"Bro_O_Arctic_Rifleman"
		};
		animationList[]  = {
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
				textures[]  = {
					"bro_factions\arctic\jeep_co.paa",
					"bro_factions\arctic\jeep_co.paa",
					"a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa",
					"a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa"
				};
				materials[]  = {
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]  = {""};
			};
		};
		textureList[]  = {"Bro_jeep_arctic",1};
		typicalCargo[]  = {
			"Bro_O_Arctic_Rifleman"
		};
		animationList[]  = {
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
class CfgGroups {
	class East {
		class bro_arctic {
			name = "[Bro] Arctic";
			class Infantry {
				name = "Infantry";
				class bro_arctic_Fireteam {
					faction = "bro_arctic";
					icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Fireteam";
					side = 0;
					class unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "Bro_O_Arctic_Teamleader";
					};
					class unit1: unit0 {
						position[] = {2.5,0,0};
						vehicle = "Bro_O_Arctic_Rifleman_MP5";
					};
					class unit2: unit0 {
						position[] = {5,0,0};
						vehicle = "Bro_O_Arctic_Rifleman";
					};
					class unit3: unit0 {
						position[] = {7.5,0,0};
						vehicle = "Bro_O_Arctic_Rifleman_M590";
					};
				};
				class bro_arctic_Squad {
					faction = "bro_arctic";
					icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Squad";
					side = 0;
					class unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "Bro_O_Arctic_Teamleader";
					};
					class unit1: unit0 {
						position[] = {2.5,0,0};
						vehicle = "Bro_O_Arctic_Autorifleman";
					};
					class unit2: unit0 {
						position[] = {5,0,0};
						vehicle = "Bro_O_Arctic_Rifleman_MP5";
					};
					class unit3: unit0 {
						position[] = {7.5,0,0};
						vehicle = "Bro_O_Arctic_Rifleman_MP7";
					};
					class unit4: unit0 {
						position[] = {10,0,0};
						vehicle = "Bro_O_Arctic_Rifleman";
					};
					class unit5: unit0 {
						position[] = {-2.5,0,0};
						vehicle = "Bro_O_Arctic_Rifleman_EVO";
					};
					class unit6: unit0 {
						position[] = {-5,0,0};
						vehicle = "Bro_O_Arctic_Rifleman_M590";
					};
					class unit7: unit0 {
						position[] = {-7.5,0,0};
						vehicle = "Bro_O_Arctic_Teamleader";
					};
					class unit8: unit0 {
						position[] = {-10,0,0};
						vehicle = "Bro_O_Arctic_Autorifleman";
					};
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