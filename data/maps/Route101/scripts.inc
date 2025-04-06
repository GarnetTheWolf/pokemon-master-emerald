# 1 "data/maps/Route101/scripts.pory"

# 2 "data/maps/Route101/scripts.pory"
.set LOCALID_BIRCH, 2
# 3 "data/maps/Route101/scripts.pory"
.set LOCALID_RIVAL, 4
# 4 "data/maps/Route101/scripts.pory"

# 5 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 6 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 7 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 8 "data/maps/Route101/scripts.pory"
	.byte 0
# 9 "data/maps/Route101/scripts.pory"

# 10 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 11 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 12 "data/maps/Route101/scripts.pory"
	end
# 13 "data/maps/Route101/scripts.pory"

# 14 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 15 "data/maps/Route101/scripts.pory"
	.2byte 0
# 16 "data/maps/Route101/scripts.pory"

# 17 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 18 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 19 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 20 "data/maps/Route101/scripts.pory"
	end
# 21 "data/maps/Route101/scripts.pory"

# 22 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 23 "data/maps/Route101/scripts.pory"
	lockall
# 24 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 25 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_FacePlayer
# 26 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 27 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 29 "data/maps/Route101/scripts.pory"
	closemessage
# 30 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 31 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 33 "data/maps/Route101/scripts.pory"
	closemessage
# 34 "data/maps/Route101/scripts.pory"

# 35 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 36 "data/maps/Route101/scripts.pory"
	releaseall
# 37 "data/maps/Route101/scripts.pory"
	end
# 38 "data/maps/Route101/scripts.pory"

# 39 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 40 "data/maps/Route101/scripts.pory"
	lockall
# 41 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 42 "data/maps/Route101/scripts.pory"
	closemessage
# 43 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 44 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route101/scripts.pory"
	releaseall
# 46 "data/maps/Route101/scripts.pory"
	end
# 47 "data/maps/Route101/scripts.pory"

# 48 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 49 "data/maps/Route101/scripts.pory"
	lockall
# 50 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 51 "data/maps/Route101/scripts.pory"
	closemessage
# 52 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 53 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route101/scripts.pory"
	releaseall
# 55 "data/maps/Route101/scripts.pory"
	end
# 56 "data/maps/Route101/scripts.pory"

# 57 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 58 "data/maps/Route101/scripts.pory"
	lockall
# 59 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 60 "data/maps/Route101/scripts.pory"
	closemessage
# 61 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 62 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route101/scripts.pory"
	releaseall
# 64 "data/maps/Route101/scripts.pory"
	end
# 65 "data/maps/Route101/scripts.pory"

# 66 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 67 "data/maps/Route101/scripts.pory"
	walk_up
# 68 "data/maps/Route101/scripts.pory"
	step_end
# 69 "data/maps/Route101/scripts.pory"

# 70 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 71 "data/maps/Route101/scripts.pory"
	walk_right
# 72 "data/maps/Route101/scripts.pory"
	step_end
# 73 "data/maps/Route101/scripts.pory"

# 74 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 75 "data/maps/Route101/scripts.pory"
	walk_down
# 76 "data/maps/Route101/scripts.pory"
	step_end
# 77 "data/maps/Route101/scripts.pory"

# 78 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 79 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 80 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 81 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 82 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 83 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 84 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 85 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 86 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 87 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 88 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 89 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 90 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 91 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 92 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 93 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 94 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 95 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 99 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 100 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 101 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 102 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 103 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 104 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 105 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 109 "data/maps/Route101/scripts.pory"
	step_end
# 110 "data/maps/Route101/scripts.pory"

# 111 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 114 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 118 "data/maps/Route101/scripts.pory"
	step_end
# 119 "data/maps/Route101/scripts.pory"

# 120 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 121 "data/maps/Route101/scripts.pory"
	step_end
# 122 "data/maps/Route101/scripts.pory"

# 123 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 124 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 125 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 126 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 127 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 128 "data/maps/Route101/scripts.pory"
	step_end
# 129 "data/maps/Route101/scripts.pory"

# 130 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 131 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 132 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 133 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 134 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 135 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 136 "data/maps/Route101/scripts.pory"
	step_end
# 137 "data/maps/Route101/scripts.pory"

# 138 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 139 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 140 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 142 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 145 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 146 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 147 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 148 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 154 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 162 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 164 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 169 "data/maps/Route101/scripts.pory"
	step_end
# 170 "data/maps/Route101/scripts.pory"

# 171 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 178 "data/maps/Route101/scripts.pory"
	step_end
# 179 "data/maps/Route101/scripts.pory"

# 180 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 181 "data/maps/Route101/scripts.pory"
	step_end
# 182 "data/maps/Route101/scripts.pory"

# 183 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 184 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 185 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 186 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 187 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 188 "data/maps/Route101/scripts.pory"
	step_end
# 189 "data/maps/Route101/scripts.pory"

# 190 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 191 "data/maps/Route101/scripts.pory"
	walk_up
# 192 "data/maps/Route101/scripts.pory"
	walk_up
# 193 "data/maps/Route101/scripts.pory"
	step_end
# 194 "data/maps/Route101/scripts.pory"

# 195 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 196 "data/maps/Route101/scripts.pory"
	walk_up
# 197 "data/maps/Route101/scripts.pory"
	walk_left
# 198 "data/maps/Route101/scripts.pory"
	walk_up
# 199 "data/maps/Route101/scripts.pory"
	step_end
# 200 "data/maps/Route101/scripts.pory"

# 201 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 202 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 203 "data/maps/Route101/scripts.pory"
	end
# 204 "data/maps/Route101/scripts.pory"

# 205 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 206 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 207 "data/maps/Route101/scripts.pory"
	end
# 208 "data/maps/Route101/scripts.pory"

# 209 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 210 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 211 "data/maps/Route101/scripts.pory"
	end
# 212 "data/maps/Route101/scripts.pory"

# 213 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 214 "data/maps/Route101/scripts.pory"
	return
# 215 "data/maps/Route101/scripts.pory"

# 216 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 217 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 218 "data/maps/Route101/scripts.pory"
	return
# 219 "data/maps/Route101/scripts.pory"

# 220 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 221 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 222 "data/maps/Route101/scripts.pory"
	return
# 223 "data/maps/Route101/scripts.pory"

# 224 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 225 "data/maps/Route101/scripts.pory"
	walk_right
# 226 "data/maps/Route101/scripts.pory"
	step_end
# 227 "data/maps/Route101/scripts.pory"

# 228 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 229 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 230 "data/maps/Route101/scripts.pory"

# 231 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 232 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 233 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 234 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 235 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 236 "data/maps/Route101/scripts.pory"

# 237 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 238 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 239 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 240 "data/maps/Route101/scripts.pory"

# 241 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 242 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 243 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 244 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 245 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 246 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 247 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 248 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 249 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 250 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 251 "data/maps/Route101/scripts.pory"

# 252 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 253 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 254 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 255 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 256 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 257 "data/maps/Route101/scripts.pory"

# 258 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 259 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 260 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 261 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 262 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 263 "data/maps/Route101/scripts.pory"

# 264 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 265 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 266 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"

DarkwingHolt_EventScript_StartChooseStarter::
# 271 "data/maps/Route101/scripts.pory"
	lockall
# 272 "data/maps/Route101/scripts.pory"
	playbgm MUS_RG_OAK, TRUE
# 273 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 274 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 275 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 276 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceUp
# 277 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 278 "data/maps/Route101/scripts.pory"
	msgbox DarkwingHolt_Text_SakuraMeetsPlayer, MSGBOX_DEFAULT
# 279 "data/maps/Route101/scripts.pory"
	closemessage
# 280 "data/maps/Route101/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
# 281 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 282 "data/maps/Route101/scripts.pory"
	msgbox DarkwingHolt_Text_GivePokedex, MSGBOX_DEFAULT
# 283 "data/maps/Route101/scripts.pory"
	closemessage
# 284 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceLeft
# 285 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 286 "data/maps/Route101/scripts.pory"
	delay 16
# 287 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceRight
# 288 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 289 "data/maps/Route101/scripts.pory"
	delay 16
# 290 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_FacePlayer
# 291 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 292 "data/maps/Route101/scripts.pory"
	msgbox DarkwingHolt_EventScript_StartChooseStarter_Text_0, MSGBOX_DEFAULT
# 293 "data/maps/Route101/scripts.pory"
	closemessage
# 294 "data/maps/Route101/scripts.pory"
	call DarkwingHolt_EventScript_ChooseStarter
# 295 "data/maps/Route101/scripts.pory"
	giveitem ITEM_POKE_BALL, 20
# 296 "data/maps/Route101/scripts.pory"
	msgbox DarkwingHolt_Text_GavePokeballs, MSGBOX_DEFAULT
# 297 "data/maps/Route101/scripts.pory"
	closemessage
# 298 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, DarkwingHolt_Movement_LeaveStarterChoice
# 299 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 300 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 301 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 302 "data/maps/Route101/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 303 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 304 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH
# 305 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_BIRCH
# 306 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 307 "data/maps/Route101/scripts.pory"
	releaseall
	return


DarkwingHolt_EventScript_ChooseStarter::
DarkwingHolt_EventScript_ChooseStarter_1:
# 313 "data/maps/Route101/scripts.pory"
	message DarkwingHolt_Text_ChooseStarter
# 315 "data/maps/Route101/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, DarkwingHolt_EventScript_ChooseStarter_Text_0, DarkwingHolt_EventScript_ChooseStarter_Text_1, DarkwingHolt_EventScript_ChooseStarter_Text_2, DarkwingHolt_EventScript_ChooseStarter_Text_3, DarkwingHolt_EventScript_ChooseStarter_Text_4, DarkwingHolt_EventScript_ChooseStarter_Text_5, DarkwingHolt_EventScript_ChooseStarter_Text_6, DarkwingHolt_EventScript_ChooseStarter_Text_7, DarkwingHolt_EventScript_ChooseStarter_Text_8, DarkwingHolt_EventScript_ChooseStarter_Text_9, DarkwingHolt_EventScript_ChooseStarter_Text_10, DarkwingHolt_EventScript_ChooseStarter_Text_11, DarkwingHolt_EventScript_ChooseStarter_Text_12, DarkwingHolt_EventScript_ChooseStarter_Text_13, DarkwingHolt_EventScript_ChooseStarter_Text_14, DarkwingHolt_EventScript_ChooseStarter_Text_15, DarkwingHolt_EventScript_ChooseStarter_Text_16, DarkwingHolt_EventScript_ChooseStarter_Text_17, DarkwingHolt_EventScript_ChooseStarter_Text_18, DarkwingHolt_EventScript_ChooseStarter_Text_19, DarkwingHolt_EventScript_ChooseStarter_Text_20, DarkwingHolt_EventScript_ChooseStarter_Text_21, DarkwingHolt_EventScript_ChooseStarter_Text_22, DarkwingHolt_EventScript_ChooseStarter_Text_23, DarkwingHolt_EventScript_ChooseStarter_Text_24, DarkwingHolt_EventScript_ChooseStarter_Text_25, DarkwingHolt_EventScript_ChooseStarter_Text_26
# 327 "data/maps/Route101/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 328 "data/maps/Route101/scripts.pory"
	copyvar VAR_TEMP_2, SPECIES_NONE
# 330 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_4
# 332 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_5
# 334 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_6
# 336 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_7
# 338 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_8
# 340 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_9
# 342 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_10
# 344 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_11
# 346 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_12
# 348 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_13
# 350 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 10
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_14
# 352 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 11
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_15
# 354 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 12
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_16
# 356 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_17
# 358 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_18
# 360 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 15
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_19
# 362 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_20
# 364 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_21
# 366 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_22
# 368 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 19
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_23
# 370 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 20
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_24
# 372 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 21
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_25
# 374 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 22
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_26
# 376 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 23
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_27
# 378 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 24
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_28
# 380 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 25
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_29
# 382 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 26
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_30
DarkwingHolt_EventScript_ChooseStarter_3:
# 387 "data/maps/Route101/scripts.pory"
	showmonpic VAR_TEMP_2, 10, 3
# 388 "data/maps/Route101/scripts.pory"
	playmoncry VAR_TEMP_2, CRY_MODE_ENCOUNTER
# 389 "data/maps/Route101/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_2
# 390 "data/maps/Route101/scripts.pory"
	msgbox DarkwingHolt_EventScript_ChooseStarter_Text_27, MSGBOX_YESNO
# 391 "data/maps/Route101/scripts.pory"
	hidemonpic
# 394 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_58
	goto DarkwingHolt_EventScript_ChooseStarter_1

DarkwingHolt_EventScript_ChooseStarter_4:
# 331 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_BULBASAUR
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_5:
# 333 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHARMANDER
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_6:
# 335 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SQUIRTLE
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_7:
# 337 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHIKORITA
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_8:
# 339 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CYNDAQUIL
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_9:
# 341 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TOTODILE
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_10:
# 343 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TREECKO
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_11:
# 345 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TORCHIC
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_12:
# 347 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_MUDKIP
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_13:
# 349 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TURTWIG
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_14:
# 351 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHIMCHAR
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_15:
# 353 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_PIPLUP
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_16:
# 355 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SNIVY
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_17:
# 357 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TEPIG
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_18:
# 359 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_OSHAWOTT
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_19:
# 361 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHESPIN
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_20:
# 363 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FENNEKIN
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_21:
# 365 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FROAKIE
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_22:
# 367 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_ROWLET
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_23:
# 369 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_LITTEN
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_24:
# 371 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_POPPLIO
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_25:
# 373 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_GROOKEY
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_26:
# 375 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SCORBUNNY
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_27:
# 377 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SOBBLE
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_28:
# 379 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SPRIGATITO
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_29:
# 381 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FUECOCO
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_30:
# 383 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_QUAXLY
	goto DarkwingHolt_EventScript_ChooseStarter_3

DarkwingHolt_EventScript_ChooseStarter_58:
# 395 "data/maps/Route101/scripts.pory"
	givemon VAR_TEMP_2, 5, ITEM_ORAN_BERRY, ITEM_CHERISH_BALL
# 396 "data/maps/Route101/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 397 "data/maps/Route101/scripts.pory"
	message DarkwingHolt_Text_ReceivedStarter
# 398 "data/maps/Route101/scripts.pory"
	waitmessage
# 399 "data/maps/Route101/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 400 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DarkwingHolt_EventScript_ChooseStarter_61
DarkwingHolt_EventScript_ChooseStarter_60:
# 404 "data/maps/Route101/scripts.pory"
	bufferpartymonnick STR_VAR_1, 0
# 405 "data/maps/Route101/scripts.pory"
	msgbox DarkwingHolt_Text_TakeCareOfPokemon, MSGBOX_DEFAULT
# 406 "data/maps/Route101/scripts.pory"
	closemessage
	return

DarkwingHolt_EventScript_ChooseStarter_61:
# 401 "data/maps/Route101/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 402 "data/maps/Route101/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto DarkwingHolt_EventScript_ChooseStarter_60


DarkwingHolt_EventScript_RivalMeetsPlayer::
# 413 "data/maps/Route101/scripts.pory"
	lockall
# 414 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 415 "data/maps/Route101/scripts.pory"
	addobject LOCALID_RIVAL
# 416 "data/maps/Route101/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_DEOXYS, TRUE
# 417 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 418 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 419 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 420 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 421 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_RIVAL, DarkwingHolt_Movement_RivalApproachPlayer
# 422 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 423 "data/maps/Route101/scripts.pory"
	msgbox DarkwingHolt_Text_IntroduceRival, MSGBOX_DEFAULT
# 424 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, DarkwingHolt_Text_RivalDefeated
# 425 "data/maps/Route101/scripts.pory"
	msgbox DarkwingHolt_Text_AfterRivalFight, MSGBOX_DEFAULT
# 426 "data/maps/Route101/scripts.pory"
	closemessage
# 427 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_RIVAL, DarkwingHolt_Movement_RivalShovesPlayer
# 428 "data/maps/Route101/scripts.pory"
	playse SE_WALL_HIT
# 429 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DarkwingHolt_Movement_PlayerGetsShoved
# 430 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 431 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkRight
# 432 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 433 "data/maps/Route101/scripts.pory"
	opendoor 19, 3
# 434 "data/maps/Route101/scripts.pory"
	waitdooranim
# 435 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkUp
# 436 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 437 "data/maps/Route101/scripts.pory"
	playse SE_EXIT
# 438 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 439 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 440 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_RIVAL
# 441 "data/maps/Route101/scripts.pory"
	closedoor 19, 3
# 442 "data/maps/Route101/scripts.pory"
	waitdooranim
# 443 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 444 "data/maps/Route101/scripts.pory"
	releaseall
	return


# 447 "data/maps/Route101/scripts.pory"
DarkwingHolt_Movement_LeaveStarterChoice:
# 448 "data/maps/Route101/scripts.pory"
	walk_down
# 448 "data/maps/Route101/scripts.pory"
	walk_down
# 448 "data/maps/Route101/scripts.pory"
	walk_down
# 449 "data/maps/Route101/scripts.pory"
	walk_right
# 449 "data/maps/Route101/scripts.pory"
	walk_right
# 450 "data/maps/Route101/scripts.pory"
	walk_down
# 450 "data/maps/Route101/scripts.pory"
	walk_down
# 450 "data/maps/Route101/scripts.pory"
	walk_down
# 450 "data/maps/Route101/scripts.pory"
	walk_down
# 450 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 453 "data/maps/Route101/scripts.pory"
DarkwingHolt_Movement_RivalApproachPlayer:
# 454 "data/maps/Route101/scripts.pory"
	walk_right
# 454 "data/maps/Route101/scripts.pory"
	walk_right
# 454 "data/maps/Route101/scripts.pory"
	walk_right
# 454 "data/maps/Route101/scripts.pory"
	walk_right
# 454 "data/maps/Route101/scripts.pory"
	walk_right
# 454 "data/maps/Route101/scripts.pory"
	walk_right
# 454 "data/maps/Route101/scripts.pory"
	walk_right
# 455 "data/maps/Route101/scripts.pory"
	walk_down
# 456 "data/maps/Route101/scripts.pory"
	walk_right
# 457 "data/maps/Route101/scripts.pory"
	walk_in_place_right
	step_end

# 460 "data/maps/Route101/scripts.pory"
DarkwingHolt_Movement_RivalShovesPlayer:
# 461 "data/maps/Route101/scripts.pory"
	walk_in_place_right
	step_end

# 464 "data/maps/Route101/scripts.pory"
DarkwingHolt_Movement_PlayerGetsShoved:
# 465 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 466 "data/maps/Route101/scripts.pory"
	lock_facing_direction
# 467 "data/maps/Route101/scripts.pory"
	jump_right
# 468 "data/maps/Route101/scripts.pory"
	unlock_facing_direction
	step_end

# 471 "data/maps/Route101/scripts.pory"
Littleroottown_Movement_RivalLeavesPlayer:
# 472 "data/maps/Route101/scripts.pory"
	walk_down
# 472 "data/maps/Route101/scripts.pory"
	walk_down
# 472 "data/maps/Route101/scripts.pory"
	walk_down
# 472 "data/maps/Route101/scripts.pory"
	walk_down
# 472 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

DarkwingHolt_EventScript_StartChooseStarter_Text_0:
# 292 "data/maps/Route101/scripts.pory"
	.string "Sakura: Okay! Enough delaying!$"

DarkwingHolt_EventScript_ChooseStarter_Text_0:
# 316 "data/maps/Route101/scripts.pory"
	.string "Bulbasaur$"

DarkwingHolt_EventScript_ChooseStarter_Text_1:
# 316 "data/maps/Route101/scripts.pory"
	.string "Charmander$"

DarkwingHolt_EventScript_ChooseStarter_Text_2:
# 316 "data/maps/Route101/scripts.pory"
	.string "Squirtle$"

DarkwingHolt_EventScript_ChooseStarter_Text_3:
# 317 "data/maps/Route101/scripts.pory"
	.string "Chikorita$"

DarkwingHolt_EventScript_ChooseStarter_Text_4:
# 317 "data/maps/Route101/scripts.pory"
	.string "Cyndaquil$"

DarkwingHolt_EventScript_ChooseStarter_Text_5:
# 317 "data/maps/Route101/scripts.pory"
	.string "Totodile$"

DarkwingHolt_EventScript_ChooseStarter_Text_6:
# 318 "data/maps/Route101/scripts.pory"
	.string "Treecko$"

DarkwingHolt_EventScript_ChooseStarter_Text_7:
# 318 "data/maps/Route101/scripts.pory"
	.string "Torchic$"

DarkwingHolt_EventScript_ChooseStarter_Text_8:
# 318 "data/maps/Route101/scripts.pory"
	.string "Mudkip$"

DarkwingHolt_EventScript_ChooseStarter_Text_9:
# 319 "data/maps/Route101/scripts.pory"
	.string "Turtwig$"

DarkwingHolt_EventScript_ChooseStarter_Text_10:
# 319 "data/maps/Route101/scripts.pory"
	.string "Chimchar$"

DarkwingHolt_EventScript_ChooseStarter_Text_11:
# 319 "data/maps/Route101/scripts.pory"
	.string "Piplup$"

DarkwingHolt_EventScript_ChooseStarter_Text_12:
# 320 "data/maps/Route101/scripts.pory"
	.string "Snivy$"

DarkwingHolt_EventScript_ChooseStarter_Text_13:
# 320 "data/maps/Route101/scripts.pory"
	.string "Tepig$"

DarkwingHolt_EventScript_ChooseStarter_Text_14:
# 320 "data/maps/Route101/scripts.pory"
	.string "Oshawott$"

DarkwingHolt_EventScript_ChooseStarter_Text_15:
# 321 "data/maps/Route101/scripts.pory"
	.string "Chespin$"

DarkwingHolt_EventScript_ChooseStarter_Text_16:
# 321 "data/maps/Route101/scripts.pory"
	.string "Fennekin$"

DarkwingHolt_EventScript_ChooseStarter_Text_17:
# 321 "data/maps/Route101/scripts.pory"
	.string "Froakie$"

DarkwingHolt_EventScript_ChooseStarter_Text_18:
# 322 "data/maps/Route101/scripts.pory"
	.string "Rowlet$"

DarkwingHolt_EventScript_ChooseStarter_Text_19:
# 322 "data/maps/Route101/scripts.pory"
	.string "Litten$"

DarkwingHolt_EventScript_ChooseStarter_Text_20:
# 322 "data/maps/Route101/scripts.pory"
	.string "Popplio$"

DarkwingHolt_EventScript_ChooseStarter_Text_21:
# 323 "data/maps/Route101/scripts.pory"
	.string "Grookey$"

DarkwingHolt_EventScript_ChooseStarter_Text_22:
# 323 "data/maps/Route101/scripts.pory"
	.string "Scorbunny$"

DarkwingHolt_EventScript_ChooseStarter_Text_23:
# 323 "data/maps/Route101/scripts.pory"
	.string "Sobble$"

DarkwingHolt_EventScript_ChooseStarter_Text_24:
# 324 "data/maps/Route101/scripts.pory"
	.string "Sprigatito$"

DarkwingHolt_EventScript_ChooseStarter_Text_25:
# 324 "data/maps/Route101/scripts.pory"
	.string "Fuecoco$"

DarkwingHolt_EventScript_ChooseStarter_Text_26:
# 324 "data/maps/Route101/scripts.pory"
	.string "Quaxly$"

DarkwingHolt_EventScript_ChooseStarter_Text_27:
# 390 "data/maps/Route101/scripts.pory"
	.string "Sakura: So, you want {STR_VAR_1}?$"

DarkwingHolt_Text_SakuraMeetsPlayer::
# 475 "data/maps/Route101/scripts.pory"
	.string "Sakura: {PLAYER}! Hello!\p"
	.string "Are you excited? I am!\p"
	.string "I have several Pokémon with me today.\n"
	.string "You can take the one you like the most!\p"
	.string "Oh, and before I forget!$"

DarkwingHolt_Text_GivePokedex::
# 479 "data/maps/Route101/scripts.pory"
	.string "Sakura: That's a Pokédex!\p"
	.string "Just log any Pokémon you catch in\n"
	.string "there. It'll help me a lot, {PLAYER}.\p"
	.string "My lab can never have too much data on\n"
	.string "Pokémon, after all!$"

DarkwingHolt_Text_ComeHere::
# 483 "data/maps/Route101/scripts.pory"
	.string "Sakura: {PLAYER}! Over here!$"

DarkwingHolt_Text_ChooseStarter::
# 487 "data/maps/Route101/scripts.pory"
	.string "Sakura: Which one will it be?$"

DarkwingHolt_Text_ReceivedStarter::
# 491 "data/maps/Route101/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
	.string "from Prof. Sakura!$"

DarkwingHolt_Text_TakeCareOfPokemon::
# 495 "data/maps/Route101/scripts.pory"
	.string "Sakura: Excelent choice! I'm sure you\n"
	.string "and {STR_VAR_1} will get along\l"
	.string "great!\p"
	.string "Remember, {STR_VAR_1} is new to\n"
	.string "having a Trainer.\p"
	.string "It might do you some good to spend some\n"
	.string "time with it.\p"
	.string "Check {STR_VAR_1}'s Summary to\n"
	.string "learn about it. If you're lucky, it might\l"
	.string "even want to come out and walk with\l"
	.string "you!\p"
	.string "Sakura: Good luck, {PLAYER}! I hope\n"
	.string "you become great friends! And…$"

DarkwingHolt_Text_GavePokeballs::
# 502 "data/maps/Route101/scripts.pory"
	.string "Sakura: Those are Pokéballs. You can\n"
	.string "use them to capture new Pokémon!\p"
	.string "If you can, try to catch every species.\n"
	.string "It would really help me with my\l"
	.string "research.\p"
	.string "That's everything. I'd best get back to\n"
	.string "my lab, but it was nice to meet you!\p"
	.string "Take care, {PLAYER}! I'll be in touch!$"

DarkwingHolt_Text_IntroduceRival::
# 509 "data/maps/Route101/scripts.pory"
	.string "???: So, you're Midnite's kid.\p"
	.string "…Huh? You don't know me?\p"
	.string "Well, that makes sense.\p"
	.string "That dumb expression. Stupid clothes.\n"
	.string "You don't look like the type to know\l"
	.string "things.\p"
	.string "My name is Ravynn.\p"
	.string "Ravynn: I'm the strongest Trainer in\n"
	.string "Rika. Nobody else comes close.\p"
	.string "Soon, I'll be the best in the world.\p"
	.string "I crushed the Gym, but I think I'll crush\n"
	.string "you, too.$"

DarkwingHolt_Text_RivalDefeated::
# 520 "data/maps/Route101/scripts.pory"
	.string "Hmm. My Pokémon are still weak from the\n"
	.string "Gym.$"

DarkwingHolt_Text_AfterRivalFight::
# 524 "data/maps/Route101/scripts.pory"
	.string "Ravynn: I swapped teams after beating\n"
	.string "Midnite to let my stronger Pokémon\l"
	.string "rest. Don't count on winning next time.\p"
	.string "From what I just saw, you shouldn't\n"
	.string "bother competing in the Rika League.\p"
	.string "And if you get in my way again…\p"
	.string "Well, don't.$"
