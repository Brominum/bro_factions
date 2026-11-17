// Give a militia unit a random civilian uniform, and optionally random eyewear and headgear.
// Parameters:
// 0: Unit
// 1: Permit random eyewear (default: false)
// 2: Permit random headgear (default: false)
// The function does not remove or replace the eyewear and headgear that the unit config gives.
params [["_unit",objNull,[objNull]],["_yesEyewear",false,[false]],["_yesHats",false,[false]]];
if (isNull _unit) exitWith {};
// setSpeaker has a local effect. Send it to all clients and to the clients that join later.
[_unit,"NoVoice"] remoteExec ["setSpeaker",0,_unit];
private _cfgWeapons = configFile >> "CfgWeapons";
private _cfgGlasses = configFile >> "CfgGlasses";
// Some classes can come from optional mods. Use only the classes that are loaded.
private _civUniArray = [
	"U_C_Poor_1",
	"U_C_Uniform_Farmer_01_F",
	"U_C_Uniform_Farmer_01_F",
	"U_I_C_Soldier_Bandit_3_F",
	"J_FL_B_NG_T_NA",
	"J_FL_B_NG_UT_NA",
	"U_C_Man_casual_6_F",
	"U_C_Man_casual_5_F",
	"U_C_Mechanic_01_F",
	"U_Marshal",
	"U_I_C_Soldier_Bandit_2_F",
	"U_I_L_Uniform_01_tshirt_skull_F",
	"U_I_L_Uniform_01_tshirt_olive_F",
	"U_C_Man_casual_4_F",
	"U_C_Poloshirt_blue"
] select {isClass (_cfgWeapons >> _x)};
private _eyewearArray = [
	"G_Spectacles",
	"G_Squares",
	"G_Squares_Tinted",
	"G_Spectacles_Tinted"
] select {isClass (_cfgGlasses >> _x)};
private _hatsArray = [
	"H_Bandanna_gry",
	"H_Bandanna_blu",
	"H_Cap_Bandanna_F",
	"H_Cap_blk",
	"H_Cap_blu",
	"H_Cap_grn",
	"H_Hat_tan",
	"H_StrawHat_dark",
	"H_Booniehat_mgrn",
	"H_Booniehat_wdl",
	"H_Hat_Safari_olive_F",
	"H_Hat_Safari_sand_F",
	"H_WirelessEarpiece_F"
] select {isClass (_cfgWeapons >> _x)};
// Always randomize the uniform.
if (_civUniArray isNotEqualTo []) then {
	_unit forceAddUniform selectRandom _civUniArray;
};
// 25% chance to get eyewear, if the unit has none.
if (_yesEyewear && {goggles _unit isEqualTo ""} && {_eyewearArray isNotEqualTo []} && {random 1 >= 0.75}) then {
	_unit addGoggles selectRandom _eyewearArray;
};
// 50% chance to get headgear, if the unit has none.
if (_yesHats && {headgear _unit isEqualTo ""} && {_hatsArray isNotEqualTo []} && {random 1 >= 0.5}) then {
	_unit addHeadgear selectRandom _hatsArray;
};
