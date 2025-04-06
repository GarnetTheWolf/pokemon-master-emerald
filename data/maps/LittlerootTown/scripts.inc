# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 3 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 4
# 4 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 5 "data/maps/LittlerootTown/scripts.pory"

# 6 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 7 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 8 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 9 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 10 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 11 "data/maps/LittlerootTown/scripts.pory"

# 12 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 13 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 14 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 17 "data/maps/LittlerootTown/scripts.pory"

# 18 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 19 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 23 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 24 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 26 "data/maps/LittlerootTown/scripts.pory"

# 27 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 28 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 29 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 30 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 31 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 34 "data/maps/LittlerootTown/scripts.pory"

# 35 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 36 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 37 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 40 "data/maps/LittlerootTown/scripts.pory"

# 41 "data/maps/LittlerootTown/scripts.pory"

# 42 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 43 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 44 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 45 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 46 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 51 "data/maps/LittlerootTown/scripts.pory"
	end
# 52 "data/maps/LittlerootTown/scripts.pory"

# 53 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 54 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 55 "data/maps/LittlerootTown/scripts.pory"
	return
# 56 "data/maps/LittlerootTown/scripts.pory"

# 57 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 58 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 59 "data/maps/LittlerootTown/scripts.pory"
	return
# 60 "data/maps/LittlerootTown/scripts.pory"

# 61 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 62 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 63 "data/maps/LittlerootTown/scripts.pory"
	return
# 64 "data/maps/LittlerootTown/scripts.pory"

# 65 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 66 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 67 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 68 "data/maps/LittlerootTown/scripts.pory"
	return
# 69 "data/maps/LittlerootTown/scripts.pory"

# 70 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 71 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 72 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 73 "data/maps/LittlerootTown/scripts.pory"
	return
# 74 "data/maps/LittlerootTown/scripts.pory"

# 75 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 76 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 77 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 78 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 79 "data/maps/LittlerootTown/scripts.pory"
	return
# 80 "data/maps/LittlerootTown/scripts.pory"

# 81 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 82 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 83 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 84 "data/maps/LittlerootTown/scripts.pory"
	return
# 85 "data/maps/LittlerootTown/scripts.pory"

# 86 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 87 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 88 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 89 "data/maps/LittlerootTown/scripts.pory"

# 90 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 91 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 92 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 93 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 94 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 95 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 96 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 97 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 98 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 99 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 100 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 101 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 102 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 103 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 104 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 105 "data/maps/LittlerootTown/scripts.pory"
	end
# 106 "data/maps/LittlerootTown/scripts.pory"

# 107 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 108 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 109 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 110 "data/maps/LittlerootTown/scripts.pory"

# 111 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 112 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 113 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 114 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 115 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 116 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 117 "data/maps/LittlerootTown/scripts.pory"
	end
# 118 "data/maps/LittlerootTown/scripts.pory"

# 119 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 120 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 121 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 122 "data/maps/LittlerootTown/scripts.pory"
	end
# 123 "data/maps/LittlerootTown/scripts.pory"

# 124 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 125 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 126 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 127 "data/maps/LittlerootTown/scripts.pory"
	end
# 128 "data/maps/LittlerootTown/scripts.pory"

# 129 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 130 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 131 "data/maps/LittlerootTown/scripts.pory"
	end
# 132 "data/maps/LittlerootTown/scripts.pory"

# 133 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 134 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 135 "data/maps/LittlerootTown/scripts.pory"
	end
# 136 "data/maps/LittlerootTown/scripts.pory"

# 137 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 138 "data/maps/LittlerootTown/scripts.pory"
	lock
# 139 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 140 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 141 "data/maps/LittlerootTown/scripts.pory"
	release
# 142 "data/maps/LittlerootTown/scripts.pory"
	end
# 143 "data/maps/LittlerootTown/scripts.pory"

# 144 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 145 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 146 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 147 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 148 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 149 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 150 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 151 "data/maps/LittlerootTown/scripts.pory"
	release
# 152 "data/maps/LittlerootTown/scripts.pory"
	end
# 153 "data/maps/LittlerootTown/scripts.pory"

# 154 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 155 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 156 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 157 "data/maps/LittlerootTown/scripts.pory"
	release
# 158 "data/maps/LittlerootTown/scripts.pory"
	end
# 159 "data/maps/LittlerootTown/scripts.pory"

# 160 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 161 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 162 "data/maps/LittlerootTown/scripts.pory"
	release
# 163 "data/maps/LittlerootTown/scripts.pory"
	end
# 164 "data/maps/LittlerootTown/scripts.pory"

# 165 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 166 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 167 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 168 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 169 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 170 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 171 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 172 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 173 "data/maps/LittlerootTown/scripts.pory"
	end
# 174 "data/maps/LittlerootTown/scripts.pory"

# 175 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 176 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 177 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 178 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 179 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 180 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 181 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 182 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 183 "data/maps/LittlerootTown/scripts.pory"
	return
# 184 "data/maps/LittlerootTown/scripts.pory"

# 185 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 186 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 187 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 188 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 189 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 190 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 191 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 192 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 193 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 194 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 195 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 196 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 197 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 198 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 199 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 200 "data/maps/LittlerootTown/scripts.pory"

# 201 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 202 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 203 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 204 "data/maps/LittlerootTown/scripts.pory"

# 205 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 206 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 207 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 208 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 209 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 210 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 211 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 212 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 213 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 214 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 215 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 216 "data/maps/LittlerootTown/scripts.pory"

# 217 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 218 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 219 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 220 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 221 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 222 "data/maps/LittlerootTown/scripts.pory"

# 223 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 224 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 225 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 226 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 227 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 228 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 229 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 230 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 231 "data/maps/LittlerootTown/scripts.pory"
	end
# 232 "data/maps/LittlerootTown/scripts.pory"

# 233 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 234 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 235 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 236 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 237 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 238 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 239 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 240 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 241 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 242 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 243 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 244 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 245 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 246 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 247 "data/maps/LittlerootTown/scripts.pory"

# 248 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 249 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 250 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 251 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 252 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 253 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 254 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 255 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 256 "data/maps/LittlerootTown/scripts.pory"

# 257 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 258 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 259 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 260 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 261 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 262 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 263 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 264 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 265 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 266 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 267 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 268 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 269 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 270 "data/maps/LittlerootTown/scripts.pory"
	end
# 271 "data/maps/LittlerootTown/scripts.pory"

# 272 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 273 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 274 "data/maps/LittlerootTown/scripts.pory"
	return
# 275 "data/maps/LittlerootTown/scripts.pory"

# 276 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 277 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 278 "data/maps/LittlerootTown/scripts.pory"
	return
# 279 "data/maps/LittlerootTown/scripts.pory"

# 280 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 281 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 282 "data/maps/LittlerootTown/scripts.pory"
	return
# 283 "data/maps/LittlerootTown/scripts.pory"

# 284 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 285 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 286 "data/maps/LittlerootTown/scripts.pory"
	return
# 287 "data/maps/LittlerootTown/scripts.pory"

# 288 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 289 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 290 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 291 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 292 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 293 "data/maps/LittlerootTown/scripts.pory"
	end
# 294 "data/maps/LittlerootTown/scripts.pory"

# 295 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 296 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 297 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 298 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 299 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 300 "data/maps/LittlerootTown/scripts.pory"
	end
# 301 "data/maps/LittlerootTown/scripts.pory"

# 302 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 303 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 304 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 305 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 306 "data/maps/LittlerootTown/scripts.pory"
	end
# 307 "data/maps/LittlerootTown/scripts.pory"

# 308 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 309 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 310 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 311 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 312 "data/maps/LittlerootTown/scripts.pory"
	end
# 313 "data/maps/LittlerootTown/scripts.pory"

# 314 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 315 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 316 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 317 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 318 "data/maps/LittlerootTown/scripts.pory"
	end
# 319 "data/maps/LittlerootTown/scripts.pory"

# 320 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 321 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 322 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 323 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 324 "data/maps/LittlerootTown/scripts.pory"
	end
# 325 "data/maps/LittlerootTown/scripts.pory"

# 326 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 327 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 328 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 329 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 330 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 331 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 332 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 333 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 334 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 335 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 336 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 337 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 338 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 339 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 340 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 341 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 342 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 343 "data/maps/LittlerootTown/scripts.pory"
	end
# 344 "data/maps/LittlerootTown/scripts.pory"

# 345 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 346 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 347 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 348 "data/maps/LittlerootTown/scripts.pory"
	return
# 349 "data/maps/LittlerootTown/scripts.pory"

# 350 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 351 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 352 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 353 "data/maps/LittlerootTown/scripts.pory"
	return
# 354 "data/maps/LittlerootTown/scripts.pory"

# 355 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 356 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 357 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 358 "data/maps/LittlerootTown/scripts.pory"
	return
# 359 "data/maps/LittlerootTown/scripts.pory"

# 360 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 361 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 362 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 363 "data/maps/LittlerootTown/scripts.pory"
	return
# 364 "data/maps/LittlerootTown/scripts.pory"

# 365 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 366 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 367 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 368 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 369 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 370 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 371 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 372 "data/maps/LittlerootTown/scripts.pory"
	return
# 373 "data/maps/LittlerootTown/scripts.pory"

# 374 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 375 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 376 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 377 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 378 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 379 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 380 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 381 "data/maps/LittlerootTown/scripts.pory"
	return
# 382 "data/maps/LittlerootTown/scripts.pory"

# 383 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 384 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 385 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 386 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 387 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 388 "data/maps/LittlerootTown/scripts.pory"
	return
# 389 "data/maps/LittlerootTown/scripts.pory"

# 390 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 391 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 392 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 393 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 394 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 395 "data/maps/LittlerootTown/scripts.pory"
	return
# 396 "data/maps/LittlerootTown/scripts.pory"

# 397 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 398 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 399 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 400 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 401 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 402 "data/maps/LittlerootTown/scripts.pory"
	return
# 403 "data/maps/LittlerootTown/scripts.pory"

# 404 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 405 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 406 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 407 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 408 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 409 "data/maps/LittlerootTown/scripts.pory"
	return
# 410 "data/maps/LittlerootTown/scripts.pory"

# 411 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 412 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 413 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 414 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 415 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 416 "data/maps/LittlerootTown/scripts.pory"
	return
# 417 "data/maps/LittlerootTown/scripts.pory"

# 418 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 419 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 420 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 421 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 422 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 423 "data/maps/LittlerootTown/scripts.pory"
	return
# 424 "data/maps/LittlerootTown/scripts.pory"

# 425 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 426 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 427 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 428 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 429 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 430 "data/maps/LittlerootTown/scripts.pory"
	return
# 431 "data/maps/LittlerootTown/scripts.pory"

# 432 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 433 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 434 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 435 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 436 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 437 "data/maps/LittlerootTown/scripts.pory"
	return
# 438 "data/maps/LittlerootTown/scripts.pory"

# 439 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 440 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 441 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 442 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 443 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 444 "data/maps/LittlerootTown/scripts.pory"
	return
# 445 "data/maps/LittlerootTown/scripts.pory"

# 446 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 447 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 448 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 449 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 450 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 451 "data/maps/LittlerootTown/scripts.pory"
	return
# 452 "data/maps/LittlerootTown/scripts.pory"

# 453 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 454 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 455 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 456 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 457 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 458 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 459 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 460 "data/maps/LittlerootTown/scripts.pory"
	return
# 461 "data/maps/LittlerootTown/scripts.pory"

# 462 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 463 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 464 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 465 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 466 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 467 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 468 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 469 "data/maps/LittlerootTown/scripts.pory"
	return
# 470 "data/maps/LittlerootTown/scripts.pory"

# 471 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 472 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 473 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 474 "data/maps/LittlerootTown/scripts.pory"
	return
# 475 "data/maps/LittlerootTown/scripts.pory"

# 476 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 477 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 478 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 479 "data/maps/LittlerootTown/scripts.pory"
	return
# 480 "data/maps/LittlerootTown/scripts.pory"

# 481 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 482 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 483 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 484 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 485 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 486 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 487 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 488 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 489 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 490 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 491 "data/maps/LittlerootTown/scripts.pory"
	return
# 492 "data/maps/LittlerootTown/scripts.pory"

# 493 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 494 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 495 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 496 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 497 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 498 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 499 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 500 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 501 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 502 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 503 "data/maps/LittlerootTown/scripts.pory"
	return
# 504 "data/maps/LittlerootTown/scripts.pory"

# 505 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 506 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 507 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 508 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 509 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 510 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 511 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 512 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 513 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 514 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 515 "data/maps/LittlerootTown/scripts.pory"
	return
# 516 "data/maps/LittlerootTown/scripts.pory"

# 517 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 518 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 519 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 520 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 521 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 522 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 523 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 524 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 525 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 526 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 527 "data/maps/LittlerootTown/scripts.pory"
	return
# 528 "data/maps/LittlerootTown/scripts.pory"

# 529 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 530 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 531 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 532 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 533 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 534 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 535 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 536 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 537 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 538 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 539 "data/maps/LittlerootTown/scripts.pory"
	return
# 540 "data/maps/LittlerootTown/scripts.pory"

# 541 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 542 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 543 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 544 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 545 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 546 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 547 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 548 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 549 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 550 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 551 "data/maps/LittlerootTown/scripts.pory"
	return
# 552 "data/maps/LittlerootTown/scripts.pory"

# 553 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 554 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 555 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 556 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 557 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 558 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 559 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 560 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 561 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 562 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 563 "data/maps/LittlerootTown/scripts.pory"
	return
# 564 "data/maps/LittlerootTown/scripts.pory"

# 565 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 566 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 567 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 568 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 569 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 570 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 571 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 572 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 573 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 574 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 575 "data/maps/LittlerootTown/scripts.pory"
	return
# 576 "data/maps/LittlerootTown/scripts.pory"

# 577 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 578 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 579 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 580 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 581 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 582 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 583 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 584 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 585 "data/maps/LittlerootTown/scripts.pory"

# 586 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 587 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 588 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 589 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 590 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 591 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 592 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 593 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 594 "data/maps/LittlerootTown/scripts.pory"

# 595 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 596 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 597 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 598 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 599 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 600 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 601 "data/maps/LittlerootTown/scripts.pory"

# 602 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 603 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 604 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 605 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 606 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 607 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 608 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 609 "data/maps/LittlerootTown/scripts.pory"

# 610 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 611 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 612 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 613 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 614 "data/maps/LittlerootTown/scripts.pory"

# 615 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 616 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 617 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 618 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 619 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 620 "data/maps/LittlerootTown/scripts.pory"

# 621 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 622 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 623 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 624 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 625 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 626 "data/maps/LittlerootTown/scripts.pory"

# 627 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 628 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 629 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 630 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 631 "data/maps/LittlerootTown/scripts.pory"

# 632 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 633 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 634 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 635 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 636 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 637 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 638 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 639 "data/maps/LittlerootTown/scripts.pory"

# 640 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 641 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 642 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 643 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 644 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 645 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 646 "data/maps/LittlerootTown/scripts.pory"

# 647 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 648 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 649 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 650 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 651 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 652 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 653 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 654 "data/maps/LittlerootTown/scripts.pory"

# 655 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 656 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 657 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 658 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 659 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 660 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 661 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 662 "data/maps/LittlerootTown/scripts.pory"

# 663 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 664 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 665 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 666 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 667 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 668 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 669 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 670 "data/maps/LittlerootTown/scripts.pory"

# 671 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 672 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 673 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 674 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 675 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 676 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 677 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 678 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 679 "data/maps/LittlerootTown/scripts.pory"

# 680 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 681 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 682 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 683 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 684 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 685 "data/maps/LittlerootTown/scripts.pory"

# 686 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 687 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 688 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 689 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 690 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 691 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 692 "data/maps/LittlerootTown/scripts.pory"

# 693 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 694 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 695 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 696 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 697 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 698 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 699 "data/maps/LittlerootTown/scripts.pory"

# 700 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 701 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 702 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 703 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 704 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 705 "data/maps/LittlerootTown/scripts.pory"

# 706 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 707 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 708 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 709 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 710 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 711 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 712 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 713 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 714 "data/maps/LittlerootTown/scripts.pory"

# 715 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 716 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 717 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 718 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 719 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 720 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 721 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 722 "data/maps/LittlerootTown/scripts.pory"

# 723 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 724 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 725 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 726 "data/maps/LittlerootTown/scripts.pory"

# 727 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 728 "data/maps/LittlerootTown/scripts.pory"
	lock
# 729 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 730 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 731 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 732 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 733 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 734 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 735 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 736 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 737 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 738 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 739 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 740 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 741 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 742 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 743 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 744 "data/maps/LittlerootTown/scripts.pory"
	end
# 745 "data/maps/LittlerootTown/scripts.pory"

# 746 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 747 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 748 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 749 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 750 "data/maps/LittlerootTown/scripts.pory"
	release
# 751 "data/maps/LittlerootTown/scripts.pory"
	end
# 752 "data/maps/LittlerootTown/scripts.pory"

# 753 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 754 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 755 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 756 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 757 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 758 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 759 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 760 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 761 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 762 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 763 "data/maps/LittlerootTown/scripts.pory"
	return
# 764 "data/maps/LittlerootTown/scripts.pory"

# 765 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 766 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 767 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 768 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 769 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 770 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 771 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 772 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 773 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 774 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 775 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 776 "data/maps/LittlerootTown/scripts.pory"

# 777 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 778 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 779 "data/maps/LittlerootTown/scripts.pory"

# 780 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 781 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 782 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 783 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 784 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 785 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 786 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 787 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 788 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 789 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 790 "data/maps/LittlerootTown/scripts.pory"

# 791 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 792 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 793 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 794 "data/maps/LittlerootTown/scripts.pory"

# 795 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 796 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 797 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 798 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 799 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 800 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 801 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 802 "data/maps/LittlerootTown/scripts.pory"

# 803 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 804 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 805 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 806 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 807 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 808 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 809 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 810 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 811 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 812 "data/maps/LittlerootTown/scripts.pory"

# 813 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 814 "data/maps/LittlerootTown/scripts.pory"
	.string "Sorry, {PLAYER}.\n"
# 815 "data/maps/LittlerootTown/scripts.pory"
	.string "You know the rules.\p"
# 816 "data/maps/LittlerootTown/scripts.pory"
	.string "No entering the Gym without a Pokémon.$"
# 817 "data/maps/LittlerootTown/scripts.pory"

# 818 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 819 "data/maps/LittlerootTown/scripts.pory"
	.string "Phew! I've tried countless times to\n"
# 820 "data/maps/LittlerootTown/scripts.pory"
	.string "defeat Midnite, but she's the real deal!\p"
# 821 "data/maps/LittlerootTown/scripts.pory"
	.string "I wonder…\p"
# 822 "data/maps/LittlerootTown/scripts.pory"
	.string "Where does a person learn to battle\n"
# 823 "data/maps/LittlerootTown/scripts.pory"
	.string "like that?$"
# 824 "data/maps/LittlerootTown/scripts.pory"

# 825 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 826 "data/maps/LittlerootTown/scripts.pory"
	.string "Hey, {PLAYER}!\p"
# 827 "data/maps/LittlerootTown/scripts.pory"
	.string "Did you know that Pokémon can have\n"
# 828 "data/maps/LittlerootTown/scripts.pory"
	.string "different Stats?\p"
# 829 "data/maps/LittlerootTown/scripts.pory"
	.string "I think you can get a Summary of\n"
# 830 "data/maps/LittlerootTown/scripts.pory"
	.string "them somehow.$"
# 831 "data/maps/LittlerootTown/scripts.pory"

# 832 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 833 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 834 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 835 "data/maps/LittlerootTown/scripts.pory"

# 836 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 837 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 838 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 839 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 840 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 841 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 842 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 843 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 844 "data/maps/LittlerootTown/scripts.pory"

# 845 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 846 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 847 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 848 "data/maps/LittlerootTown/scripts.pory"

# 849 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 850 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 851 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 852 "data/maps/LittlerootTown/scripts.pory"

# 853 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 854 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 855 "data/maps/LittlerootTown/scripts.pory"

# 856 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 857 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 858 "data/maps/LittlerootTown/scripts.pory"

# 859 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 860 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 861 "data/maps/LittlerootTown/scripts.pory"

# 862 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 863 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 864 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 865 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 866 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 867 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 868 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 869 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 870 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 871 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"

LittlerootTown_EventScript_BrendansHouseSign::
# 876 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 877 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BrendansHouseSign_Text_0, MSGBOX_SIGN
# 878 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 879 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_MaysHouseSign::
# 883 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 884 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_MaysHouseSign_Text_0
# 885 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 886 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_BirchsLabSign::
# 890 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 891 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BirchsLabSign_Text_0
# 892 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 893 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


DarkwingGrove_EventScript_ShrineSign::
# 897 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 898 "data/maps/LittlerootTown/scripts.pory"
	msgbox DarkwingGrove_EventScript_ShrineSign_Text_0
# 899 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 900 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


DarkwingGrove_EventScript_DarkwingHoltSign::
# 904 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 905 "data/maps/LittlerootTown/scripts.pory"
	msgbox DarkwingGrove_EventScript_DarkwingHoltSign_Text_0
# 906 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 907 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_TownSign::
# 911 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
	end


LittlerootTown_EventScript_BrendansHouseSign_Text_0:
# 877 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s House$"

LittlerootTown_EventScript_MaysHouseSign_Text_0:
# 884 "data/maps/LittlerootTown/scripts.pory"
	.string "Leonard's House$"

LittlerootTown_EventScript_BirchsLabSign_Text_0:
# 891 "data/maps/LittlerootTown/scripts.pory"
	.string "Darkwing Grove Pokémon Gym\nLeader: Midnite\l“Resilience in the darkest hour!”$"

DarkwingGrove_EventScript_ShrineSign_Text_0:
# 898 "data/maps/LittlerootTown/scripts.pory"
	.string "This shrine was once the home of\nthe mythical Pokémon Celebi.\pIt moved on long ago, but the\nshrine defies time.$"

DarkwingGrove_EventScript_DarkwingHoltSign_Text_0:
# 905 "data/maps/LittlerootTown/scripts.pory"
	.string "{UP_ARROW} Darkwing Holt$"

LittlerootTown_Text_TownSign::
# 915 "data/maps/LittlerootTown/scripts.pory"
	.string "Darkwing Grove\n"
	.string "“A shady slice of paradise.”$"
