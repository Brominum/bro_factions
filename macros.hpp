// Shared macros for all factions in bro_factions.
// Put this line at the top of each faction config.cpp:
// #include "\bro_factions\macros.hpp"
// Each faction config.cpp must define FACTION_CLASS and FACTION_SIDE before it uses the group macros.
// Sides: 0 = OPFOR, 1 = BLUFOR, 2 = Independent, 3 = Civilian.
// Repeat one magazine class. Example: MAG_3("SmokeShell")
#define MAG_2(M) M,M
#define MAG_3(M) M,M,M
#define MAG_4(M) M,M,M,M
#define MAG_5(M) M,M,M,M,M
#define MAG_6(M) M,M,M,M,M,M
#define MAG_7(M) M,M,M,M,M,M,M
#define MAG_8(M) M,M,M,M,M,M,M,M
#define MAG_9(M) M,M,M,M,M,M,M,M,M
// Items that all units have.
#define ITEMS_BASIC "ItemMap","ItemCompass","ItemWatch","ItemRadio"
#define THROW_PUT "Throw","Put"
// Attachments for a weapon preset. Use them in class LinkedItems.
#define LINKED_OPTIC(ITEM) class LinkedItemsOptic {slot = "CowsSlot"; item = ITEM;};
#define LINKED_POINTER(ITEM) class LinkedItemsAcc {slot = "PointerSlot"; item = ITEM;};
#define LINKED_BIPOD(ITEM) class LinkedItemsUnder {slot = "UnderBarrelSlot"; item = ITEM;};
// Hidden weapon with an optic and a rail attachment. Declare PARENT before you use the macro.
// Example: WEAPON_PRESET(Bro_416_PMC,arifle_SPAR_01_blk_F,"optic_Holosight_blk_F","acc_flashlight");
#define WEAPON_PRESET(NAME,PARENT,OPTIC,POINTER) \
	class NAME: PARENT { \
		scope = 1; \
		class LinkedItems { \
			LINKED_OPTIC(OPTIC) \
			LINKED_POINTER(POINTER) \
		}; \
	}
// Map icons for groups.
#define ICON_O_INF "\a3\ui_f\data\map\markers\nato\o_inf.paa"
#define ICON_O_SIGNAL "\a3\ui_f\data\map\markers\nato\o_signal.paa"
// First lines of a group class.
// Example: GROUP_INFO("Fireteam",ICON_O_INF)
#define GROUP_INFO(NAME,ICON) \
	name = NAME; \
	icon = ICON; \
	faction = FACTION_CLASS; \
	side = FACTION_SIDE;
// One infantry unit in a group. N is the unit index. X is the offset to the right in meters.
// Example: GROUP_UNIT(1,2.5,"Bro_O_PMC_Rifleman");
#define GROUP_UNIT(N,X,TYPE) \
	class unit##N { \
		position[] = {X,0,0}; \
		rank = "PRIVATE"; \
		side = FACTION_SIDE; \
		vehicle = TYPE; \
	}
// One vehicle in a group. Y is the offset to the front in meters. Use a negative value to put it behind.
// Example: GROUP_VEHICLE(1,-7,"bro_509th_offroad");
#define GROUP_VEHICLE(N,Y,TYPE) \
	class unit##N { \
		position[] = {0,Y,0}; \
		rank = "PRIVATE"; \
		side = FACTION_SIDE; \
		vehicle = TYPE; \
	}
