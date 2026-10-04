class CfgPatches {
	class bro_factions_509th {
		author="Bromine";
		name="[Bro] 509th OPFOR";
		requiredAddons[]= {
			"A3_Data_F_Warlords_Loadorder",
			"rhsusf_c_weapons",
			"rhsusf_c_m11xx",
			"rhsusf_c_fmtv"
		};
		requiredVersion=1.6;
	};
};
class CfgVehicles {
	class rhsusf_socom_uniform_base;
	class bro_509th_Base: rhsusf_socom_uniform_base {
		side=0;
		scope=1;
		dlc="";
		faction="bro_509th";
		vehicleClass="bro_men";
		editorSubcategory="EdSubcat_Personnel";
		genericNames="NATOMen";
		identityTypes[]= {
			"LanguageENG_F",
			"Head_NATO",
			"G_IRAN_Default"
		};
		author="Bromine";
		displayName="Rifleman";
		role="Rifleman";
		camouflage=1;
		hiddenSelectionsTextures[]= {
			"rhsusf\addons\rhsusf_infantry2\Data\gen3_rgr_co.paa",
			"rhsusf\addons\rhsusf_infantry2\data\merrells_blk_co.paa",
			"rhsusf\addons\rhsusf_infantry2\data\mechanix_green_co.paa",
			"bro_factions\509th\patch_509th_co.paa"
		};
		uniformClass="rhs_uniform_g3_rgr";
		backpack="B_AssaultPack_rgr";
		Items[]= {
			"FirstAidKit"
		};
	};
	class bro_509th_Rifleman: bro_509th_Base {
		scope=2;
		displayName="Rifleman";
		role="Rifleman";
		weapons[]= {
			"bro_509th_M4_Standard",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
		magazines[]= {
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShell"
		};
		linkedItems[]= {
			"V_SmershVest_01_radio_F",
			"H_Booniehat_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class bro_509th_Grenadier: bro_509th_Rifleman {
		scope=2;
		displayName="Grenadier";
		role="Grenadier";
		weapons[]= {
			"bro_509th_M4_Grenadier",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
		magazines[]= {
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhs_mag_m433_hedp",
			"rhs_mag_m433_hedp",
			"rhs_mag_m433_hedp",
			"rhs_mag_m433_hedp",
			"rhs_mag_m433_hedp",
			"rhs_mag_m433_hedp",
			"rhs_mag_m433_hedp",
			"rhs_mag_m433_hedp",
			"UGL_FlareRed_F",
			"UGL_FlareRed_F",
			"UGL_FlareRed_F",
			"UGL_FlareRed_F",
			"SmokeShellBlue",
			"SmokeShellBlue"
		};
		linkedItems[]= {
			"V_SmershVest_01_radio_F",
			"H_Booniehat_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class bro_509th_Autorifleman: bro_509th_Rifleman {
		scope=2;
		displayName="Autorifleman";
		role="MachineGunner";
		weapons[]= {
			"bro_509th_SAW_Standard",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
		magazines[]= {
			"rhsusf_100rnd_556x45_mixed_soft_pouch_coyote",
			"rhsusf_100rnd_556x45_mixed_soft_pouch_coyote",
			"rhsusf_200rnd_556x45_mixed_soft_pouch_ucp",
			"rhsusf_200rnd_556x45_mixed_soft_pouch_ucp",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShell"
		};
		linkedItems[]= {
			"V_SmershVest_01_radio_F",
			"H_Booniehat_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class bro_509th_Teamleader: bro_509th_Rifleman {
		scope=2;
		displayName="Teamleader";
	};
	class bro_509th_Rifleman_AT: bro_509th_Rifleman {
		scope=2;
		displayName="Rifleman (AT)";
		role="MissileSpecialist";
		backpack="bro_509th_backpack_rpg_green";
		weapons[]= {
			"bro_509th_M4_Standard",
			"rhsusf_weap_glock17g4",
			"launch_RPG7_F",
			"Throw",
			"Put"
		};
		magazines[]= {
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShell",
			"RPG7_F"
		};
	};
	class bro_509th_Officer: bro_509th_Rifleman {
		scope=2;
		displayName="Officer";
		role="Rifleman";
		weapons[]= {
			"bro_509th_M4_Standard",
			"rhsusf_weap_glock17g4",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
		magazines[]= {
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShell"
		};
		linkedItems[]= {
			"V_SmershVest_01_radio_F",
			"H_beret_blk",
			"ItemMap",
			"O_UavTerminal",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class bro_509th_Marksman: bro_509th_Rifleman {
		scope=2;
		displayName="Marksman";
		role="Marksman";
		weapons[]= {
			"bro_509th_M4_Marksman",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
		linkedItems[]= {
			"V_SmershVest_01_radio_F",
			"H_Booniehat_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class bro_509th_DroneOp_darter: bro_509th_Rifleman {
		scope=2;
		displayName="Drone Operator (Darter)";
		role="SpecialOperative";
		backpack="O_UAV_01_backpack_F";
		weapons[]= {
			"bro_509th_M4_Marksman",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
		linkedItems[]= {
			"V_SmershVest_01_radio_F",
			"H_Booniehat_oli",
			"ItemMap",
			"O_T_Soldier_UAV_F",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class bro_509th_DroneOp_pelican: bro_509th_DroneOp_darter {
		scope=2;
		displayName="Drone Operator (Pelican)";
		backpack="O_UAV_06_backpack_F";
	};
	class bro_509th_SF_Rifleman: bro_509th_Rifleman {
		scope=2;
		vehicleClass="bro_special";
		editorSubcategory="EdSubcat_Personnel_SpecialForces";
		hiddenSelectionsTextures[]= {
			"bro_factions\509th\gen3_mcb_co.paa",
			"rhsusf\addons\rhsusf_infantry2\data\merrells_blk_co.paa",
			"rhsusf\addons\rhsusf_infantry2\data\mechanix_black_co.paa",
			"bro_factions\509th\patch_509th_co.paa"
		};
		uniformClass="rhs_uniform_g3_blk";
		backpack="B_AssaultPack_blk";
		linkedItems[]= {
			"V_TacVestIR_blk",
			"rhsusf_opscore_bk_pelt",
			"G_Bandanna_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"rhsusf_ANPVS_14"
		};
	};
	class bro_509th_SF_Grenadier: bro_509th_SF_Rifleman {
		scope=2;
		displayName="Grenadier";
		role="Grenadier";
		weapons[]= {
			"bro_509th_M4_Grenadier",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
		magazines[]= {
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhs_mag_m433_hedp",
			"rhs_mag_m433_hedp",
			"rhs_mag_m433_hedp",
			"rhs_mag_m433_hedp",
			"rhs_mag_m433_hedp",
			"rhs_mag_m433_hedp",
			"rhs_mag_m433_hedp",
			"rhs_mag_m433_hedp",
			"UGL_FlareRed_F",
			"UGL_FlareRed_F",
			"UGL_FlareRed_F",
			"UGL_FlareRed_F",
			"SmokeShellBlue",
			"SmokeShellBlue"
		};
	};
	class bro_509th_SF_Autorifleman: bro_509th_SF_Rifleman {
		scope=2;
		displayName="Autorifleman";
		role="MachineGunner";
		weapons[]= {
			"bro_509th_SAW_Standard",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
		magazines[]= {
			"rhsusf_100rnd_556x45_mixed_soft_pouch_coyote",
			"rhsusf_100rnd_556x45_mixed_soft_pouch_coyote",
			"rhsusf_200rnd_556x45_mixed_soft_pouch_ucp",
			"rhsusf_200rnd_556x45_mixed_soft_pouch_ucp",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShell"
		};
	};
	class bro_509th_SF_Teamleader: bro_509th_SF_Rifleman {
		scope=2;
		displayName="Teamleader";
	};
	class bro_509th_SF_Rifleman_AT: bro_509th_SF_Rifleman {
		scope=2;
		displayName="Rifleman (AT)";
		role="MissileSpecialist";
		backpack="bro_509th_backpack_rpg_blk";
		weapons[]= {
			"bro_509th_M4_Standard",
			"launch_RPG7_F",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
		magazines[]= {
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShell",
			"RPG7_F",
			"RPG7_F",
			"RPG7_F"
		};
	};
	class bro_509th_SF_Rifleman_AA: bro_509th_SF_Rifleman {
		scope=2;
		displayName="Rifleman (AA)";
		role="MissileSpecialist";
		backpack="bro_509th_backpack_fim92_blk";
		weapons[]= {
			"bro_509th_M4_Standard",
			"rhs_weap_fim92",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
		magazines[]= {
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhs_mag_30Rnd_556x45_m855a1_epm",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShell",
			"rhs_fim92_mag",
			"rhs_fim92_mag",
			"rhs_fim92_mag"
		};
	};
	class bro_509th_SF_Marksman: bro_509th_SF_Rifleman {
		scope=2;
		displayName="Marksman";
		role="Marksman";
		weapons[]= {
			"bro_509th_M4_Marksman",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
	};

	class rhsusf_M1078A1P2_WD_fmtv_usarmy;
	class rhsusf_m1151_m2_v1_usarmy_wd;
	class bro_509th_bigtruck: rhsusf_M1078A1P2_WD_fmtv_usarmy {
		scope=2;
		side=0;
		displayName="M1078 Truck";
		dlc="";
		faction="bro_509th";
		editorSubcategory="EdSubcat_Cars";
		vehicleClass="bro_vehicles";
		crew="bro_509th_SF_Rifleman";
		typicalCargo[]= {
			"bro_509th_SF_Rifleman"
		};
		animationList[]= {
			"hide_cover",
			1,
			"hide_scaffold",
			1,
			"hide_spare",
			1
		};
	};
	class bro_509th_humvee_m2: rhsusf_m1151_m2_v1_usarmy_wd {
		scope=2;
		side=0;
		faction="bro_509th";
		vehicleClass="bro_509th_vehicles";
		crew="bro_509th_SF_Rifleman";
		hiddenSelectionsTextures[]= {
			"bro_factions\509th\humvee_509th_co.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_wd_CO.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
		};
		animationList[]= {
			"DUKE_Hide",
			1,
			"hide_rhino",
			1,
			"door_LF",
			0,
			"door_LB",
			0,
			"door_RF",
			0,
			"door_RB",
			0,
			"door_trunk",
			0,
			"iff_hide",
			1,
			"dwf_kit_Hide",
			1,
			"snorkel_lower",
			1,
			"BFT_Hide",
			1,
			"Antennas_Hide",
			1,
			"hide_spare",
			1
		};
		class TextureSources {
			class bro_509th {
				displayName="509th";
				author="Bromine";
				textures[]= {
					"bro_factions\509th\humvee_509th_co.paa"
				};
				faction[]={};
			};
		};
	};

	class Offroad_01_armed_base_F;
	class Offroad_01_military_base_F;
	class Offroad_01_military_comms_base_F;
	class O_G_Offroad_01_armed_F: Offroad_01_armed_base_F {
		class EventHandlers;
	};
	class O_G_Offroad_01_F: Offroad_01_military_base_F {
		class EventHandlers;
	};
	class bro_509th_offroad_m2: O_G_Offroad_01_armed_F {
		scope=2;
		faction="bro_509th";
		vehicleClass="bro_509th_vehicles";
		crew="bro_509th_SF_Rifleman";
		animationList[]= {
			"HideDoor1",
			1,
			"HideDoor2",
			1,
			"HideDoor3",
			1,
			"HideBackpacks",
			0,
			"HideBumper1",
			0,
			"HideBumper2",
			1,
			"HideConstruction",
			0,
			"hidePolice",
			1,
			"HideServices",
			1,
			"BeaconsStart",
			0,
			"BeaconsServicesStart",
			0
		};
		hiddenSelectionsTextures[]= {
			"bro_factions\509th\509th_truck_co.paa",
			"bro_factions\509th\509th_truck_co.paa"
		};
		class EventHandlers: EventHandlers {
			postinit="if (local (_this select 0)) then {[(_this select 0),false,[""HideDoor1"",1,""HideDoor2"",1,""HideDoor3"",1,""HideBackpacks"",0,""HideBumper1"",0,""HideBumper2"",1,""HideConstruction"",0,""hidePolice"",1,""HideServices"",1,""BeaconsStart"",0,""BeaconsServicesStart"",0],true] call bis_fnc_initVehicle;};";
		};
		class TextureSources {
			class bro_509th {
				displayName="509th";
				author="Bromine";
				textures[]= {
					"bro_factions\509th\509th_truck_co.paa",
					"bro_factions\509th\509th_truck_co.paa"
				};
				faction[]={};
			};
		};
	};
	class bro_509th_offroad: O_G_Offroad_01_F {
		scope=2;
		faction="bro_509th";
		vehicleClass="bro_509th_vehicles";
		crew="bro_509th_SF_Rifleman";
		hiddenSelectionsTextures[]= {
			"bro_factions\509th\509th_truck_co.paa",
			"bro_factions\509th\509th_truck_co.paa"
		};
		animationList[]= {
			"HideDoor1",
			1,
			"HideDoor2",
			1,
			"HideDoor3",
			1,
			"HideBackpacks",
			0,
			"HideBumper1",
			0,
			"HideBumper2",
			1,
			"HideConstruction",
			0,
			"hidePolice",
			1,
			"HideServices",
			1,
			"BeaconsStart",
			0,
			"BeaconsServicesStart",
			0
		};
		class EventHandlers: EventHandlers {
			postinit="if (local (_this select 0)) then {[(_this select 0),false,[""HideDoor1"",1,""HideDoor2"",1,""HideDoor3"",1,""HideBackpacks"",0,""HideBumper1"",0,""HideBumper2"",1,""HideConstruction"",0,""hidePolice"",1,""HideServices"",1,""BeaconsStart"",0,""BeaconsServicesStart"",0],true] call bis_fnc_initVehicle;};";
		};
		class TextureSources {
			class bro_509th {
				displayName="509th";
				author="Bromine";
				textures[]= {
					"bro_factions\509th\509th_truck_co.paa",
					"bro_factions\509th\509th_truck_co.paa"
				};
				faction[]={};
			};
		};
	};

	class B_UAV_01_F;
	class B_UAV_06_F;
	class bro_509th_drone_darter: B_UAV_01_F {
		scope=2;
		side=0;
		faction="bro_509th";
		vehicleClass="bro_drones";
		crew="O_UAV_AI";
		typicalCargo[]= {
			"O_UAV_AI"
		};
		hiddenSelectionsTextures[]= {
			"a3\air_f_enoch\uav_01\data\uav_01_eaf_co.paa"
		};
	};
	class bro_509th_drone_pelican: B_UAV_06_F {
		scope=2;
		side=0;
		faction="bro_509th";
		vehicleClass="bro_509th_drones";
		crew="O_UAV_AI";
		typicalCargo[]= {
			"O_UAV_AI"
		};
		hiddenSelectionsTextures[]= {
			"a3\air_f_enoch\uav_06\data\i_e_uav_06_co.paa"
		};
	};

	class RHS_Stinger_AA_pod_WD;
	class RHS_M2StaticMG_WD;
	class RHS_M2StaticMG_MiniTripod_WD;
	class bro_509th_stingerpod: RHS_Stinger_AA_pod_WD {
		scope=2;
		side=0;
		faction="bro_509th";
		crew="bro_509th_SF_Rifleman";
		typicalCargo[]= {
			"bro_509th_SF_Rifleman"
		};
	};
	class bro_509th_m2_high: RHS_M2StaticMG_WD {
		scope=2;
		side=0;
		faction="bro_509th";
		crew="bro_509th_Rifleman";
		typicalCargo[]= {
			"bro_509th_Rifleman"
		};
	};
	class bro_509th_m2_low: RHS_M2StaticMG_MiniTripod_WD {
		scope=2;
		side=0;
		faction="bro_509th";
		crew="bro_509th_Rifleman";
		typicalCargo[]= {
			"bro_509th_Rifleman"
		};
	};

	class B_Carryall_blk;
	class B_Carryall_green_F;
	class bro_509th_backpack_rpg_green: B_Carryall_green_F {
		scope=1;
		class TransportMagazines {
			class _xx_RPG7_F {
				magazine="RPG7_F";
				count=3;
			};
		};
	};
	class bro_509th_backpack_rpg_blk: B_Carryall_blk {
		scope=1;
		class TransportMagazines {
			class _xx_RPG7_F {
				magazine="RPG7_F";
				count=3;
			};
		};
	};
	class bro_509th_backpack_fim92_blk: B_Carryall_blk {
		scope=1;
		class TransportMagazines {
			class _xx_rhs_fim92_mag {
				magazine="rhs_fim92_mag";
				count=2;
			};
		};
	};
};
class CfgWeapons {
	class rhs_weap_m4_carryhandle_mstock;
	class rhs_weap_m4_m203;
	class rhs_weap_m4a1_blockII_bk;
	class rhs_weap_m249_pip;
	class bro_509th_M4_Standard: rhs_weap_m4_carryhandle_mstock {
		scope=1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="rhsusf_acc_compm4";
			};
			class LinkedItemsAcc {
				slot="PointerSlot";
				item="rhsusf_acc_anpeq15";
			};
		};
	};
	class bro_509th_M4_Marksman: rhs_weap_m4a1_blockII_bk {
		scope=1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsAcc {
				slot="PointerSlot";
				item="rhsusf_acc_anpeq15side_bk";
			};
		};
	};
	class bro_509th_M4_Grenadier: rhs_weap_m4_m203 {
		scope=1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="rhsusf_acc_compm4";
			};
			class LinkedItemsAcc {
				slot="PointerSlot";
				item="rhsusf_acc_anpeq15side_bk";
			};
		};
	};
	class bro_509th_SAW_Standard: rhs_weap_m249_pip {
		scope=1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="rhsusf_acc_ELCAN";
			};
		};
	};
};
class CfgGroups {
	class East {
		class bro_509th {
			name="[Bro] 509th OPFOR";
			class Infantry {
				name="Infantry";
				class bro_509th_Fireteam {
					faction="bro_509th";
					icon="\a3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Fireteam";
					side=0;
					class unit0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="bro_509th_Teamleader";
					};
					class unit1: unit0 {
						position[]={2.5,0,0};
						vehicle="bro_509th_Autorifleman";
					};
					class unit2: unit0 {
						position[]={5,0,0};
						vehicle="bro_509th_Grenadier";
					};
					class unit3: unit0 {
						position[]={7.5,0,0};
						vehicle="bro_509th_Rifleman_AT";
					};
				};
				class bro_509th_Squad: bro_509th_Fireteam {
					name="Squad";
					class unit0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="bro_509th_Teamleader";
					};
					class unit1: unit0 {
						position[]={2.5,0,0};
						vehicle="bro_509th_Teamleader";
					};
					class unit2: unit0 {
						position[]={10,0,0};
						vehicle="bro_509th_Autorifleman";
					};
					class unit3: unit0 {
						position[]={7.5,0,0};
						vehicle="bro_509th_Grenadier";
					};
					class unit4: unit0 {
						position[]={5,0,0};
						vehicle="bro_509th_Rifleman_AT";
					};
					class unit5: unit0 {
						position[]={-2.5,0,0};
						vehicle="bro_509th_Teamleader";
					};
					class unit6: unit0 {
						position[]={-10,0,0};
						vehicle="bro_509th_Autorifleman";
					};
					class unit7: unit0 {
						position[]={-7.5,0,0};
						vehicle="bro_509th_Grenadier";
					};
					class unit8: unit0 {
						position[]={-5,0,0};
						vehicle="bro_509th_Rifleman_AT";
					};
				};
			};
			class Infantry_SF {
				name="Special Forces";
				class bro_509th_SF_Fireteam {
					faction="bro_509th";
					icon="\a3\ui_f\data\map\markers\nato\o_signal.paa";
					name="SF Fireteam";
					side=0;
					class unit0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="bro_509th_SF_Teamleader";
					};
					class unit1: unit0 {
						position[]={2.5,0,0};
						vehicle="bro_509th_SF_Autorifleman";
					};
					class unit2: unit0 {
						position[]={5,0,0};
						vehicle="bro_509th_SF_Grenadier";
					};
					class unit3: unit0 {
						position[]={7.5,0,0};
						vehicle="bro_509th_SF_Rifleman_AT";
					};
				};
				class bro_509th_SF_Squad: bro_509th_SF_Fireteam {
					name="SF Squad";
					class unit0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="bro_509th_SF_Teamleader";
					};
					class unit1: unit0 {
						position[]={2.5,0,0};
						vehicle="bro_509th_SF_Teamleader";
					};
					class unit2: unit0 {
						position[]={10,0,0};
						vehicle="bro_509th_SF_Autorifleman";
					};
					class unit3: unit0 {
						position[]={7.5,0,0};
						vehicle="bro_509th_SF_Grenadier";
					};
					class unit4: unit0 {
						position[]={5,0,0};
						vehicle="bro_509th_SF_Rifleman_AT";
					};
					class unit5: unit0 {
						position[]={-2.5,0,0};
						vehicle="bro_509th_SF_Teamleader";
					};
					class unit6: unit0 {
						position[]={-10,0,0};
						vehicle="bro_509th_SF_Autorifleman";
					};
					class unit7: unit0 {
						position[]={-7.5,0,0};
						vehicle="bro_509th_SF_Grenadier";
					};
					class unit8: unit0 {
						position[]={-5,0,0};
						vehicle="bro_509th_SF_Rifleman_AT";
					};
				};
			};
			class Vehicle {
				name="Vehicles (Special Forces)";
				class bro_509th_2_HMMWV {
					faction="bro_509th";
					icon="\a3\ui_f\data\map\markers\nato\o_inf.paa";
					name="2x HMMWVs";
					side=0;
					class unit0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="bro_509th_humvee_m2";
					};
					class unit1: unit0 {
						position[]={0,-7,0};
						vehicle="bro_509th_humvee_m2";
					};
				};
				class bro_509th_2_Offroad {
					faction="bro_509th";
					icon="\a3\ui_f\data\map\markers\nato\o_inf.paa";
					name="1x Truck (M2), 1x Truck";
					side=0;
					class unit0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="bro_509th_offroad_m2";
					};
					class unit1: unit0 {
						position[]={0,-7,0};
						vehicle="bro_509th_offroad";
					};
				};
			};
		};
	};
};
