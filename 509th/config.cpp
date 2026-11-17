#define FACTION_CLASS "bro_509th"
#define FACTION_SIDE 0
#include "\bro_factions\macros.hpp"
#define B509_PISTOL "rhsusf_weap_glock17g4"
#define B509_RIFLE_MAG "rhs_mag_30Rnd_556x45_m855a1_epm"
#define B509_PISTOL_MAG "rhsusf_mag_17Rnd_9x19_FMJ"
#define B509_SMOKES MAG_2("SmokeShellBlue"),"SmokeShell"
#define B509_RIFLEMAN_MAGS MAG_7(B509_RIFLE_MAG),MAG_2(B509_PISTOL_MAG),B509_SMOKES
#define B509_GRENADIER_MAGS MAG_7(B509_RIFLE_MAG),MAG_2(B509_PISTOL_MAG),MAG_8("rhs_mag_m433_hedp"),MAG_4("UGL_FlareRed_F"),MAG_2("SmokeShellBlue")
#define B509_AUTORIFLEMAN_MAGS MAG_2("rhsusf_100rnd_556x45_mixed_soft_pouch_coyote"),MAG_2("rhsusf_200rnd_556x45_mixed_soft_pouch_ucp"),MAG_2(B509_PISTOL_MAG),B509_SMOKES
#define B509_ITEMS "V_SmershVest_01_radio_F","H_Booniehat_oli",ITEMS_BASIC
#define B509_TRUCK_TEXTURE "bro_factions\509th\509th_truck_co.paa"
// Settings that the two offroad classes share.
// textureList and animationList are applied by the vanilla postinit event handler (BIS_fnc_initVehicle).
#define B509_OFFROAD_SETUP \
	scope = 2; \
	scopeCurator = 2; \
	faction = FACTION_CLASS; \
	vehicleClass = "bro_vehicles"; \
	crew = "bro_509th_SF_Rifleman"; \
	hiddenSelectionsTextures[] = {B509_TRUCK_TEXTURE,B509_TRUCK_TEXTURE}; \
	textureList[] = {"bro_509th",1}; \
	animationList[] = { \
		"HideDoor1",1, \
		"HideDoor2",1, \
		"HideDoor3",1, \
		"HideBackpacks",0, \
		"HideBumper1",0, \
		"HideBumper2",1, \
		"HideConstruction",0, \
		"hidePolice",1, \
		"HideServices",1, \
		"BeaconsStart",0, \
		"BeaconsServicesStart",0 \
	}; \
	class TextureSources { \
		class bro_509th { \
			displayName = "509th"; \
			author = "Bromine"; \
			textures[] = {B509_TRUCK_TEXTURE,B509_TRUCK_TEXTURE}; \
			factions[] = {}; \
		}; \
	};
class CfgPatches {
	class bro_factions_509th {
		author = "Bromine";
		name = "[Bro] 509th OPFOR";
		addonRootClass = "bro_factions";
		requiredAddons[] = {
			"A3_Data_F_Warlords_Loadorder",
			"rhsusf_c_weapons",
			"rhsusf_c_m11xx",
			"rhsusf_c_fmtv",
			"bro_factions"
		};
		requiredVersion = 1.6;
	};
};
class CfgFactionClasses {
	class bro_509th {
		displayName = "[Bro] 509th OPFOR";
		priority = 0;
		side = FACTION_SIDE;
		icon = "";
	};
};
class CfgVehicles {
	// Infantry. All units inherit from the rifleman and change only what is different.
	class rhsusf_socom_uniform_base;
	class bro_509th_Base: rhsusf_socom_uniform_base {
		side = FACTION_SIDE;
		scope = 1;
		dlc = "";
		faction = FACTION_CLASS;
		vehicleClass = "bro_men";
		editorSubcategory = "EdSubcat_Personnel";
		genericNames = "NATOMen";
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_IRAN_Default"};
		author = "Bromine";
		displayName = "Rifleman";
		role = "Rifleman";
		camouflage = 1;
		hiddenSelectionsTextures[] = {
			"rhsusf\addons\rhsusf_infantry2\Data\gen3_rgr_co.paa",
			"rhsusf\addons\rhsusf_infantry2\data\merrells_blk_co.paa",
			"rhsusf\addons\rhsusf_infantry2\data\mechanix_green_co.paa",
			"bro_factions\509th\patch_509th_co.paa"
		};
		uniformClass = "bro_509th_U_G3_rgr";
		backpack = "B_AssaultPack_rgr";
		Items[] = {"FirstAidKit"};
	};
	class bro_509th_Rifleman: bro_509th_Base {
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"bro_509th_M4_Standard",B509_PISTOL,THROW_PUT};
		magazines[] = {B509_RIFLEMAN_MAGS};
		linkedItems[] = {B509_ITEMS};
	};
	class bro_509th_Grenadier: bro_509th_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Grenadier";
		role = "Grenadier";
		weapons[] = {"bro_509th_M4_Grenadier",B509_PISTOL,THROW_PUT};
		magazines[] = {B509_GRENADIER_MAGS};
	};
	class bro_509th_Autorifleman: bro_509th_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Autorifleman";
		role = "MachineGunner";
		weapons[] = {"bro_509th_SAW_Standard",B509_PISTOL,THROW_PUT};
		magazines[] = {B509_AUTORIFLEMAN_MAGS};
	};
	class bro_509th_Teamleader: bro_509th_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Teamleader";
	};
	class bro_509th_Rifleman_AT: bro_509th_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (AT)";
		role = "MissileSpecialist";
		backpack = "bro_509th_backpack_rpg_green";
		weapons[] = {"bro_509th_M4_Standard",B509_PISTOL,"launch_RPG7_F",THROW_PUT};
		magazines[] = {MAG_7(B509_RIFLE_MAG),B509_SMOKES,"RPG7_F"};
	};
	class bro_509th_Officer: bro_509th_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Officer";
		magazines[] = {MAG_3(B509_RIFLE_MAG),MAG_4(B509_PISTOL_MAG),B509_SMOKES};
		linkedItems[] = {"V_SmershVest_01_radio_F","H_beret_blk","O_UavTerminal",ITEMS_BASIC};
	};
	class bro_509th_Marksman: bro_509th_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Marksman";
		role = "Marksman";
		weapons[] = {"bro_509th_M4_Marksman",B509_PISTOL,THROW_PUT};
	};
	class bro_509th_DroneOp_darter: bro_509th_Marksman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Drone Operator (Darter)";
		role = "SpecialOperative";
		backpack = "O_UAV_01_backpack_F";
		linkedItems[] = {B509_ITEMS,"O_UavTerminal"};
	};
	class bro_509th_DroneOp_pelican: bro_509th_DroneOp_darter {
		scope = 2;
		scopeCurator = 2;
		displayName = "Drone Operator (Pelican)";
		backpack = "O_UAV_06_backpack_F";
	};
	// Special forces. All units inherit from the SF rifleman.
	class bro_509th_SF_Rifleman: bro_509th_Rifleman {
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "bro_special";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		hiddenSelectionsTextures[] = {
			"bro_factions\509th\gen3_mcb_co.paa",
			"rhsusf\addons\rhsusf_infantry2\data\merrells_blk_co.paa",
			"rhsusf\addons\rhsusf_infantry2\data\mechanix_black_co.paa",
			"bro_factions\509th\patch_509th_co.paa"
		};
		uniformClass = "bro_509th_U_G3_mcb";
		backpack = "B_AssaultPack_blk";
		linkedItems[] = {"V_TacVestIR_blk","rhsusf_opscore_bk_pelt","G_Bandanna_blk",ITEMS_BASIC,"rhsusf_ANPVS_14"};
	};
	class bro_509th_SF_Grenadier: bro_509th_SF_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Grenadier";
		role = "Grenadier";
		weapons[] = {"bro_509th_M4_Grenadier",B509_PISTOL,THROW_PUT};
		magazines[] = {B509_GRENADIER_MAGS};
	};
	class bro_509th_SF_Autorifleman: bro_509th_SF_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Autorifleman";
		role = "MachineGunner";
		weapons[] = {"bro_509th_SAW_Standard",B509_PISTOL,THROW_PUT};
		magazines[] = {B509_AUTORIFLEMAN_MAGS};
	};
	class bro_509th_SF_Teamleader: bro_509th_SF_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Teamleader";
	};
	class bro_509th_SF_Rifleman_AT: bro_509th_SF_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (AT)";
		role = "MissileSpecialist";
		backpack = "bro_509th_backpack_rpg_blk";
		weapons[] = {"bro_509th_M4_Standard","launch_RPG7_F",B509_PISTOL,THROW_PUT};
		magazines[] = {B509_RIFLEMAN_MAGS,MAG_3("RPG7_F")};
	};
	class bro_509th_SF_Rifleman_AA: bro_509th_SF_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (AA)";
		role = "MissileSpecialist";
		backpack = "bro_509th_backpack_fim92_blk";
		weapons[] = {"bro_509th_M4_Standard","rhs_weap_fim92",B509_PISTOL,THROW_PUT};
		magazines[] = {B509_RIFLEMAN_MAGS,MAG_3("rhs_fim92_mag")};
	};
	class bro_509th_SF_Marksman: bro_509th_SF_Rifleman {
		scope = 2;
		scopeCurator = 2;
		displayName = "Marksman";
		role = "Marksman";
		weapons[] = {"bro_509th_M4_Marksman",B509_PISTOL,THROW_PUT};
	};
	// Vehicles
	class rhsusf_M1078A1P2_WD_fmtv_usarmy;
	class rhsusf_m1151_m2_v1_usarmy_wd;
	class bro_509th_bigtruck: rhsusf_M1078A1P2_WD_fmtv_usarmy {
		scope = 2;
		scopeCurator = 2;
		side = FACTION_SIDE;
		displayName = "M1078 Truck";
		dlc = "";
		faction = FACTION_CLASS;
		editorSubcategory = "EdSubcat_Cars";
		vehicleClass = "bro_vehicles";
		crew = "bro_509th_SF_Rifleman";
		typicalCargo[] = {"bro_509th_SF_Rifleman"};
		animationList[] = {
			"hide_cover",1,
			"hide_scaffold",1,
			"hide_spare",1
		};
	};
	class bro_509th_humvee_m2: rhsusf_m1151_m2_v1_usarmy_wd {
		scope = 2;
		scopeCurator = 2;
		side = FACTION_SIDE;
		faction = FACTION_CLASS;
		vehicleClass = "bro_vehicles";
		crew = "bro_509th_SF_Rifleman";
		hiddenSelectionsTextures[] = {
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
		animationList[] = {
			"DUKE_Hide",1,
			"hide_rhino",1,
			"door_LF",0,
			"door_LB",0,
			"door_RF",0,
			"door_RB",0,
			"door_trunk",0,
			"iff_hide",1,
			"dwf_kit_Hide",1,
			"snorkel_lower",1,
			"BFT_Hide",1,
			"Antennas_Hide",1,
			"hide_spare",1
		};
		class TextureSources {
			class bro_509th {
				displayName = "509th";
				author = "Bromine";
				textures[] = {"bro_factions\509th\humvee_509th_co.paa"};
				factions[] = {};
			};
		};
	};
	class O_G_Offroad_01_armed_F;
	class O_G_Offroad_01_F;
	class bro_509th_offroad_m2: O_G_Offroad_01_armed_F {
		B509_OFFROAD_SETUP
	};
	class bro_509th_offroad: O_G_Offroad_01_F {
		B509_OFFROAD_SETUP
	};
	// Drones
	class B_UAV_01_F;
	class B_UAV_06_F;
	class bro_509th_drone_darter: B_UAV_01_F {
		scope = 2;
		scopeCurator = 2;
		side = FACTION_SIDE;
		faction = FACTION_CLASS;
		vehicleClass = "bro_drones";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		hiddenSelectionsTextures[] = {"a3\air_f_enoch\uav_01\data\uav_01_eaf_co.paa"};
	};
	class bro_509th_drone_pelican: B_UAV_06_F {
		scope = 2;
		scopeCurator = 2;
		side = FACTION_SIDE;
		faction = FACTION_CLASS;
		vehicleClass = "bro_drones";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		hiddenSelectionsTextures[] = {"a3\air_f_enoch\uav_06\data\i_e_uav_06_co.paa"};
	};
	// Static weapons
	class RHS_Stinger_AA_pod_WD;
	class RHS_M2StaticMG_WD;
	class RHS_M2StaticMG_MiniTripod_WD;
	class bro_509th_stingerpod: RHS_Stinger_AA_pod_WD {
		scope = 2;
		scopeCurator = 2;
		side = FACTION_SIDE;
		faction = FACTION_CLASS;
		crew = "bro_509th_SF_Rifleman";
		typicalCargo[] = {"bro_509th_SF_Rifleman"};
	};
	class bro_509th_m2_high: RHS_M2StaticMG_WD {
		scope = 2;
		scopeCurator = 2;
		side = FACTION_SIDE;
		faction = FACTION_CLASS;
		crew = "bro_509th_Rifleman";
		typicalCargo[] = {"bro_509th_Rifleman"};
	};
	class bro_509th_m2_low: RHS_M2StaticMG_MiniTripod_WD {
		scope = 2;
		scopeCurator = 2;
		side = FACTION_SIDE;
		faction = FACTION_CLASS;
		crew = "bro_509th_Rifleman";
		typicalCargo[] = {"bro_509th_Rifleman"};
	};
	// Backpacks with launcher ammunition
	class B_Carryall_blk;
	class B_Carryall_green_F;
	class bro_509th_backpack_rpg_green: B_Carryall_green_F {
		scope = 1;
		class TransportMagazines {
			class _xx_RPG7_F {
				magazine = "RPG7_F";
				count = 3;
			};
		};
	};
	class bro_509th_backpack_rpg_blk: B_Carryall_blk {
		scope = 1;
		class TransportMagazines {
			class _xx_RPG7_F {
				magazine = "RPG7_F";
				count = 3;
			};
		};
	};
	class bro_509th_backpack_fim92_blk: B_Carryall_blk {
		scope = 1;
		class TransportMagazines {
			class _xx_rhs_fim92_mag {
				magazine = "rhs_fim92_mag";
				count = 2;
			};
		};
	};
};
class CfgWeapons {
	// Weapons
	class rhs_weap_m4_carryhandle_mstock;
	class rhs_weap_m4_m203;
	class rhs_weap_m4a1_blockII_bk;
	class rhs_weap_m249_pip;
	WEAPON_PRESET(bro_509th_M4_Standard,rhs_weap_m4_carryhandle_mstock,"rhsusf_acc_compm4","rhsusf_acc_anpeq15");
	WEAPON_PRESET(bro_509th_M4_Marksman,rhs_weap_m4a1_blockII_bk,"optic_DMS","rhsusf_acc_anpeq15side_bk");
	WEAPON_PRESET(bro_509th_M4_Grenadier,rhs_weap_m4_m203,"rhsusf_acc_compm4","rhsusf_acc_anpeq15side_bk");
	class bro_509th_SAW_Standard: rhs_weap_m249_pip {
		scope = 1;
		class LinkedItems {
			LINKED_OPTIC("rhsusf_acc_ELCAN")
		};
	};
	// Uniforms
	// Each uniform item points to a 509th unit. Thus a uniform that a player takes from a body keeps the 509th textures.
	class UniformItem;
	class rhs_uniform_g3_rgr;
	class rhs_uniform_g3_blk;
	class bro_509th_U_G3_rgr: rhs_uniform_g3_rgr {
		author = "Bromine";
		scope = 2;
		displayName = "[Bro] 509th G3 (Ranger Green)";
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "bro_509th_Rifleman";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class bro_509th_U_G3_mcb: rhs_uniform_g3_blk {
		author = "Bromine";
		scope = 2;
		displayName = "[Bro] 509th G3 (Multicam Black)";
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "bro_509th_SF_Rifleman";
			containerClass = "Supply40";
			mass = 40;
		};
	};
};
class CfgGroups {
	class East {
		class bro_509th {
			name = "[Bro] 509th OPFOR";
			class Infantry {
				name = "Infantry";
				class bro_509th_Fireteam {
					GROUP_INFO("Fireteam",ICON_O_INF)
					GROUP_UNIT(0,0,"bro_509th_Teamleader");
					GROUP_UNIT(1,2.5,"bro_509th_Autorifleman");
					GROUP_UNIT(2,5,"bro_509th_Grenadier");
					GROUP_UNIT(3,7.5,"bro_509th_Rifleman_AT");
				};
				class bro_509th_Squad {
					GROUP_INFO("Squad",ICON_O_INF)
					GROUP_UNIT(0,0,"bro_509th_Teamleader");
					GROUP_UNIT(1,2.5,"bro_509th_Teamleader");
					GROUP_UNIT(2,10,"bro_509th_Autorifleman");
					GROUP_UNIT(3,7.5,"bro_509th_Grenadier");
					GROUP_UNIT(4,5,"bro_509th_Rifleman_AT");
					GROUP_UNIT(5,-2.5,"bro_509th_Teamleader");
					GROUP_UNIT(6,-10,"bro_509th_Autorifleman");
					GROUP_UNIT(7,-7.5,"bro_509th_Grenadier");
					GROUP_UNIT(8,-5,"bro_509th_Rifleman_AT");
				};
			};
			class Infantry_SF {
				name = "Special Forces";
				class bro_509th_SF_Fireteam {
					GROUP_INFO("SF Fireteam",ICON_O_SIGNAL)
					GROUP_UNIT(0,0,"bro_509th_SF_Teamleader");
					GROUP_UNIT(1,2.5,"bro_509th_SF_Autorifleman");
					GROUP_UNIT(2,5,"bro_509th_SF_Grenadier");
					GROUP_UNIT(3,7.5,"bro_509th_SF_Rifleman_AT");
				};
				class bro_509th_SF_Squad {
					GROUP_INFO("SF Squad",ICON_O_SIGNAL)
					GROUP_UNIT(0,0,"bro_509th_SF_Teamleader");
					GROUP_UNIT(1,2.5,"bro_509th_SF_Teamleader");
					GROUP_UNIT(2,10,"bro_509th_SF_Autorifleman");
					GROUP_UNIT(3,7.5,"bro_509th_SF_Grenadier");
					GROUP_UNIT(4,5,"bro_509th_SF_Rifleman_AT");
					GROUP_UNIT(5,-2.5,"bro_509th_SF_Teamleader");
					GROUP_UNIT(6,-10,"bro_509th_SF_Autorifleman");
					GROUP_UNIT(7,-7.5,"bro_509th_SF_Grenadier");
					GROUP_UNIT(8,-5,"bro_509th_SF_Rifleman_AT");
				};
			};
			class Vehicle {
				name = "Vehicles (Special Forces)";
				class bro_509th_2_HMMWV {
					GROUP_INFO("2x HMMWVs",ICON_O_INF)
					GROUP_VEHICLE(0,0,"bro_509th_humvee_m2");
					GROUP_VEHICLE(1,-7,"bro_509th_humvee_m2");
				};
				class bro_509th_2_Offroad {
					GROUP_INFO("1x Truck (M2), 1x Truck",ICON_O_INF)
					GROUP_VEHICLE(0,0,"bro_509th_offroad_m2");
					GROUP_VEHICLE(1,-7,"bro_509th_offroad");
				};
			};
		};
	};
};
