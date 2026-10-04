private ["_unit","_yesEyewear","_yesHats"];
_unit = param [0, objNull, [objNull]];
_yesEyewear = param [1,false];
_yesHats = param [2,false];
_unit setSpeaker "NoVoice";
removeGoggles _unit;
removeHeadgear _unit;
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
	"U_Marshal_grey",
	"U_I_C_Soldier_Bandit_2_F",
	"U_I_L_Uniform_01_tshirt_skull_F",
	"U_I_L_Uniform_01_tshirt_olive_F",
	"U_C_Man_casual_4_F",
	"U_C_Poloshirt_blue"
];
private _eyewearArray = [
	"G_Spectacles",
	"G_Squares",
	"G_Squares_Tinted",
	"G_Spectacles_Tinted"
];
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
];
// Always randomize uniform:
private _randomizedUniform = selectRandom _civUniArray;
_unit forceAddUniform _randomizedUniform;
// 25% chance to get eyewear:
if (_yesEyewear == true && random 1 >= 0.75) then {
	private _randomizedEyewear = selectRandom _eyewearArray;
	_unit addGoggles _randomizedEyewear;
};
// 50% chance to get a hat:
if (_yesHats == true && random 1 >= 0.5) then {
	private _randomizedHat = selectRandom _hatsArray;
	_unit addHeadgear _randomizedHat;
};