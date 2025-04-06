# 1 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts::
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.byte 0
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 4
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 9, 8
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The mover's POKéMON do all the work\n"
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This is so convenient!\p"
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD bought you a new clock to mark\n"
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "our move here.\l"
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't forget to set it!$"
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, {PLAYER}?\p"
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "very own room?$"
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Maybe DAD will be on!$"
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh… It's over.\p"
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think DAD was on, but we missed him.\n"
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Too bad.$"
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "One of DAD's friends lives in town.\p"
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH is his name.\p"
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He lives right next door, so you should\n"
# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "go over and introduce yourself.$"
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See you, honey!$"
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH?$"
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dad: Hey there, {PLAYER}!\n"
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You seem pretty beat.\p"
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Why don't you rest a bit?$"
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dad: Go get 'em, {PLAYER}!$"
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A POKéNAV?\n"
# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered MOM\n"
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "report from in front of PETALBURG GYM.$"
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "RUNNING SHOES.\p"
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the road running!”$"
# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "POKéMON in flight.\p"
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this POKéMON is\n"
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown POKéMON.$"

PlayersHouse_1F_EventScript_LockedDoor::
# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lock
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_LockedDoor_Text_0, MSGBOX_SIGN
# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	return


PlayersHouse_1F_EventScript_Picture::
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lock
# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Picture_Text_0, MSGBOX_SIGN
# 426 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 427 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	return


PlayersHouse_1F_EventScript_TV::
# 431 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lock
# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_TV_Text_0, MSGBOX_SIGN
# 433 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 434 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	return


PlayersHouse_1F_EventScript_LockedDoor_Text_0:
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's Mom's room.\nBetter not enter!$"

PlayersHouse_1F_EventScript_Picture_Text_0:
# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The Slumbering Weald, painted\nthrough rich watercolor.\pPretty!$"

PlayersHouse_1F_EventScript_TV_Text_0:
# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's a TV.\pA meteorologist is talking about a\nrecent string of unexplained weather\lphenomena in Rika.$"

PlayersHouse_1F_Text_IsntItNiceInHere::
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Go to Darkwing Holt, {PLAYER}.\p"
	.string "Prof. Sakura is waiting for you!$"
