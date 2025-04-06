# 1 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_MapScripts::
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_1F_OnLoad
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_1F_OnTransition
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_OnFrame
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.byte 0
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad:
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition:
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame:
# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.2byte 0
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 36 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 37 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 48 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy::
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadedefaultbgm
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 204 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 210 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 211 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 227 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 230 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 256 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 257 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 258 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 259 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 261 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 262 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 263 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 264 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 265 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 268 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 269 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 270 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 274 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_OhYoureTheNewNeighbor:
# 275 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, hello. And you are?\p"
# 276 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\n"
# 277 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\p"
# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}, our new next-door\n"
# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "neighbor! Hi!\p"
# 280 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "We have a {STR_VAR_1} about the same\n"
# 281 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "age as you.\p"
# 282 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} was excited about making\n"
# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a new friend.\p"
# 284 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} is upstairs, I think.$"
# 285 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 286 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_TooBusyToNoticeVisit:
# 287 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "That {RIVAL}!\p"
# 288 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I guess our child is too busy with\n"
# 289 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "POKéMON to notice that you came\l"
# 290 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to visit, {PLAYER}{KUN}.$"
# 291 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 292 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_WentOutToRoute103:
# 293 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, {RIVAL} went out to ROUTE 103\n"
# 294 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "just a little while ago.\p"
# 295 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like father, like child.\n"
# 296 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{RIVAL} can't stay quietly at home.$"
# 297 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 298 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften:
# 299 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I think it's wonderful for people to\n"
# 300 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "travel with POKéMON.\p"
# 301 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "But you should go home every so often\n"
# 302 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to let your mother know you're okay.\p"
# 303 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "She might not say it, but I'm sure she\n"
# 304 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "worries about you, {PLAYER}{KUN}.$"
# 305 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 306 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_MayWhoAreYou:
# 307 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh?\n"
# 308 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who… Who are you?\p"
# 309 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\n"
# 310 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\p"
# 311 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 312 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So your move was today.\p"
# 313 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Um… I'm MAY.\n"
# 314 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Glad to meet you!\p"
# 315 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I…\n"
# 316 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 317 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "with POKéMON all over the world.\p"
# 318 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 319 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "my dad, PROF. BIRCH.\p"
# 320 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 321 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 322 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 323 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 324 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Eheheh…\p"
# 325 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 326 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 327 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild POKéMON!\p"
# 328 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 329 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 330 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_BrendanWhoAreYou:
# 331 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hey!\n"
# 332 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "You…\p"
# 333 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who are you?\p"
# 334 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 335 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Moved in next door, right?\p"
# 336 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 337 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Dad, PROF. BIRCH, said that our new\n"
# 338 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "next-door neighbor is a GYM LEADER's\l"
# 339 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 340 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My name's BRENDAN.\n"
# 341 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So, hi, neighbor!\p"
# 342 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 343 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a POKéMON?\p"
# 344 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 345 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 346 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 347 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild POKéMON.\p"
# 348 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Some other time, okay?$"
# 349 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 350 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon:
# 351 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hi, neighbor!\p"
# 352 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you already have your\n"
# 353 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "own POKéMON?$"

RivalsHouse_1F_EventScript_RivalMom::
# 357 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 358 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 359 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalMom_2
# 363 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
RivalsHouse_1F_EventScript_RivalMom_1:
# 365 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
	return

RivalsHouse_1F_EventScript_RivalMom_2:
# 361 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomHealsParty
	goto RivalsHouse_1F_EventScript_RivalMom_1


PlayersHouse_1F_EventScript_DownstairsLeft::
# 369 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 370 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceUp
# 371 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 372 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 373 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_ExclamationMark
# 374 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 375 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_DownstairsLeft_Text_0, MSGBOX_DEFAULT
# 376 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 377 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_1F_Movement_MomToStairsLeft
# 378 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 379 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call PlayersHouse_1F_EventScript_GoodMorning
# 380 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_1F_Movement_MomLeave
# 381 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 382 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 383 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 0
# 384 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
# 385 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_MOM
# 386 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 387 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 388 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BIRCH
# 389 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 390 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


PlayersHouse_1F_EventScript_DownstairsRight::
# 394 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 395 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceUp
# 396 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 397 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 398 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_ExclamationMark
# 399 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 400 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_DownstairsLeft_Text_0, MSGBOX_DEFAULT
# 401 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 402 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_1F_Movement_MomToStairsRight
# 403 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 404 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call PlayersHouse_1F_EventScript_GoodMorning
# 405 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_1F_Movement_MomLeave
# 406 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 407 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 408 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 0
# 409 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
# 410 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_MOM
# 411 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 412 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 413 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BIRCH
# 414 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 415 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


PlayersHouse_1F_EventScript_GoodMorning::
# 419 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_GoodMorning_Text_0, MSGBOX_DEFAULT
# 420 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 421 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 422 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 423 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_GoodMorning_Text_1, MSGBOX_DEFAULT
# 424 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 425 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 426 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 427 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_GoodMorning_Text_2, MSGBOX_DEFAULT
# 428 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 429 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	giveitem ITEM_MEGA_RING
# 430 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	giveitem ITEM_Z_POWER_RING
# 431 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	giveitem ITEM_DYNAMAX_BAND
# 432 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	giveitem ITEM_TERA_ORB
# 433 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 434 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_EXP_SHARE_ALL
# 435 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_GoodMorning_Text_3, MSGBOX_DEFAULT
# 436 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
	return


RivalsHouse_1F_EventScript_Leonard::
# 440 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 441 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 442 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RivalsHouse_1F_EventScript_Leonard_2
# 445 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RivalsHouse_1F_EventScript_Leonard_3
# 453 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox DarkwingGrove_LeonardsHouse_Text_WantSomethingCool, MSGBOX_DEFAULT
# 454 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
RivalsHouse_1F_EventScript_Leonard_1:
# 456 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
	return

RivalsHouse_1F_EventScript_Leonard_2:
# 443 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox DarkwingGrove_LeonardsHouse_Text_ExplainPokeTools, MSGBOX_DEFAULT
# 444 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
	goto RivalsHouse_1F_EventScript_Leonard_1

RivalsHouse_1F_EventScript_Leonard_3:
# 446 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox DarkwingGrove_LeonardsHouse_Text_1stBadgeEarned, MSGBOX_DEFAULT
# 447 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 448 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 449 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 450 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox DarkwingGrove_LeonardsHouse_Text_ExplainPokeTools, MSGBOX_DEFAULT
# 451 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
	goto RivalsHouse_1F_EventScript_Leonard_1


# 459 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
PlayersHouse_1F_Movement_MomToStairsLeft:
# 460 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 461 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 461 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 461 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 461 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 461 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 462 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 465 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
PlayersHouse_1F_Movement_MomToStairsRight:
# 466 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 467 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 467 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 467 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 467 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 467 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 467 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 468 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 471 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
PlayersHouse_1F_Movement_MomLeave:
# 472 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 472 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 472 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 472 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 472 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 472 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 472 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
	step_end

PlayersHouse_1F_EventScript_DownstairsLeft_Text_0:
# 375 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}!$"

PlayersHouse_1F_EventScript_GoodMorning_Text_0:
# 419 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Mom: Good morning! How did\nyou sleep, {PLAYER}?\pToday's the big day!\pJust think! The next time we see\neach other, you'll be walking\linto my Gym to challenge me!$"

PlayersHouse_1F_EventScript_GoodMorning_Text_1:
# 423 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Not that you'll defeat me…$"

PlayersHouse_1F_EventScript_GoodMorning_Text_2:
# 427 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Mom: Oh, yes!\p{PLAYER}, you're going to need all\nof these!$"

PlayersHouse_1F_EventScript_GoodMorning_Text_3:
# 435 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Mom: You'd have no business\nchallenging the Rika League Gyms\lwithout the proper gear.\pTrust me!\pI'm off for work, okay?\pHead out to Darkwing Holt, {PLAYER}.\pMake sure you pick a good one!$"

RivalsHouse_1F_Text_LikeChildLikeFather::
# 475 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Dad: Good morning, {PLAYER}!\n"
	.string "First Pokémon today, yes?\p"
	.string "No time to rest, then! Go!\p"
	.string "I can't wait to see it.$"

DarkwingGrove_LeonardsHouse_Text_1stBadgeEarned::
# 479 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Leonard: No way! You got the Somber\n"
	.string "Badge?\p"
	.string "Okay, a deal's a deal.\p"
	.string "One of those Cipher guys gave me a\n"
	.string "sneak peek at their latest tech. I just\l"
	.string "pretended I was a hardcore Trainer and\l"
	.string "they believed me. Talk about lucky!\p"
	.string "Only thing is, this tech they gave me is\n"
	.string "meant for Pokémon. Like, it's\l"
	.string "specifically designed for them.\p"
	.string "I don't really have a use for it, but it\n"
	.string "seems like you might. So, here you go!$"

DarkwingGrove_LeonardsHouse_Text_ExplainPokeTools::
# 487 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Leonard: The PokéTools let your\n"
	.string "Pokémon do cool stuff outside of\l"
	.string "battle.\p"
	.string "That set I just gave you should grant\n"
	.string "any Pokémon the ability to cut down a\l"
	.string "tree!\p"
	.string "Aren't Cipher's inventions so cool?$"

DarkwingGrove_LeonardsHouse_Text_WantSomethingCool::
# 493 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Leonard: Hi. Want something super\n"
	.string "awesome?\p"
	.string "…On second thought, you don't seem like\n"
	.string "you'd get much use out of it.\p"
	.string "{PLAYER}, come back when you've got a\n"
	.string "Gym Badge. Okay?$"
