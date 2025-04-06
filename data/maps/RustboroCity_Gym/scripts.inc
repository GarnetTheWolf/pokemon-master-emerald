# 1 "data/maps/RustboroCity_Gym/scripts.pory"

# 2 "data/maps/RustboroCity_Gym/scripts.pory"

# 3 "data/maps/RustboroCity_Gym/scripts.pory"
.set LOCALID_GYMGUIDE, 4
# 4 "data/maps/RustboroCity_Gym/scripts.pory"

# 5 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_Gym_On_Transition
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 8 "data/maps/RustboroCity_Gym/scripts.pory"

# 9 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_On_Transition:
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel6
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, DarkwingGrove_EventScript_MoveGuideToStairs
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 13 "data/maps/RustboroCity_Gym/scripts.pory"

# 14 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 18 "data/maps/RustboroCity_Gym/scripts.pory"

# 19 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 23 "data/maps/RustboroCity_Gym/scripts.pory"

# 24 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 28 "data/maps/RustboroCity_Gym/scripts.pory"

# 29 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 34 "data/maps/RustboroCity_Gym/scripts.pory"

# 35 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 40 "data/maps/RustboroCity_Gym/scripts.pory"

# 41 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 45 "data/maps/RustboroCity_Gym/scripts.pory"

# 46 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 50 "data/maps/RustboroCity_Gym/scripts.pory"

# 51 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 52 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 65 "data/maps/RustboroCity_Gym/scripts.pory"

# 66 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Midnite is a wonderful mentor.\n"
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Even for an old guy like me!$"
# 69 "data/maps/RustboroCity_Gym/scripts.pory"

# 70 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I just got schooled…$"
# 72 "data/maps/RustboroCity_Gym/scripts.pory"

# 73 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You might be strong, but Midnite\n"
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "is the strongest!$"
# 76 "data/maps/RustboroCity_Gym/scripts.pory"

# 77 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Even in the middle of nowhere,\n"
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rika has a Gym!\p"
# 80 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "How cool is that?$"
# 81 "data/maps/RustboroCity_Gym/scripts.pory"

# 82 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Even in the middle of nowhere,\n"
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost!$"
# 85 "data/maps/RustboroCity_Gym/scripts.pory"

# 86 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Even in the middle of nowhere,\n"
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost!\p"
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "How lame is that?$"
# 90 "data/maps/RustboroCity_Gym/scripts.pory"

# 91 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 93 "data/maps/RustboroCity_Gym/scripts.pory"

# 94 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE'S CERTIFIED TRAINERS:\n"
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 98 "data/maps/RustboroCity_Gym/scripts.pory"

# 99 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 115 "data/maps/RustboroCity_Gym/scripts.pory"

# 116 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER ROXANNE\n"
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 119 "data/maps/RustboroCity_Gym/scripts.pory"

# 120 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"

# 128 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 131 "data/maps/RustboroCity_Gym/scripts.pory"

# 132 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling POKéMON.\p"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"

# 138 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 146 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one POKéMON with you?\p"
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON.$"

DarkwingGrove_Gym_EventScript_Roxanne::
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, DarkwingGrove_Gym_Text_RoxanneIntro, DarkwingGrove_Gym_Text_RoxanneDefeat, DarkwingGrove_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, DarkwingGrove_Gym_EventScript_GiveSnatch
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox DarkwingGrove_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	return


DarkwingGrove_Gym_EventScript_RoxanneDefeated::
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	message DarkwingGrove_Gym_Text_ReceivedStoneBadge
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox DarkwingGrove_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
	goto DarkwingGrove_Gym_EventScript_GiveSnatch
	return


DarkwingGrove_Gym_EventScript_GiveSnatch::
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_SNATCH
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox DarkwingGrove_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	return


DarkwingGrove_Gym_EventScript_GymGuide::
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, DarkwingGrove_Gym_EventScript_GymGuide_2
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 0
	goto_if_eq DarkwingGrove_Gym_EventScript_GymGuide_3
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox DarkwingGrove_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
DarkwingGrove_Gym_EventScript_GymGuide_1:
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	return

DarkwingGrove_Gym_EventScript_GymGuide_2:
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox DarkwingGrove_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
	goto DarkwingGrove_Gym_EventScript_GymGuide_1

DarkwingGrove_Gym_EventScript_GymGuide_3:
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox DarkwingGrove_Gym_Text_GymGuideEarly, MSGBOX_DEFAULT
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq DarkwingGrove_Gym_EventScript_GymGuide_8
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_GYMGUIDE, DarkwingGrove_Gym_Movement_MoveGuideSouthWest
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
DarkwingGrove_Gym_EventScript_GymGuide_7:
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
	goto DarkwingGrove_Gym_EventScript_GymGuide_1

DarkwingGrove_Gym_EventScript_GymGuide_8:
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_GYMGUIDE, DarkwingGrove_Gym_Movement_MoveGuideEast
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
	goto DarkwingGrove_Gym_EventScript_GymGuide_7


DarkwingGrove_EventScript_MoveGuideToStairs::
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_GYMGUIDE, 5, 15
	return


DarkwingGrove_Gym_EventScript_Tommy::
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, DarkwingGrove_Gym_Text_TommyIntro, DarkwingGrove_Gym_Text_TommyDefeat
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox DarkwingGrove_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
	return


# 214 "data/maps/RustboroCity_Gym/scripts.pory"
DarkwingGrove_Gym_Movement_MoveGuideEast:
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_in_place_down
	step_end

# 221 "data/maps/RustboroCity_Gym/scripts.pory"
DarkwingGrove_Gym_Movement_MoveGuideSouthWest:
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_in_place_down
	step_end

DarkwingGrove_Gym_Text_GymGuideEarly::
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hey, {PLAYER}! Welcome to the Rika\n"
	.string "League!\p"
	.string "I'll be your guide for this Gym. Because\n"
	.string "I know you personally, I also happen to\l"
	.string "know you just got your Pokémon.\p"
	.string "Now, you have an eligible party. I can't\n"
	.string "officially stop you from competing.\p"
	.string "But heed this warning!\p"
	.string "Your Mom is a tough opponent. If you\n"
	.string "haven't sufficiently trained, you'll\l"
	.string "likely lose this fight.\p"
	.string "I'll let you pass. But don't say I didn't\n"
	.string "warn you!$"

DarkwingGrove_Gym_Text_GymGuideAdvice::
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Midnite is ruthless. She battles with\n"
	.string "Dark-type Pokémon, so you should be\l"
	.string "sure to keep Psychic and Ghost types\l"
	.string "out of her way.\p"
	.string "She's talented, {PLAYER}. Her team\n"
	.string "has a lot of trickery you might not be\l"
	.string "used to. Be on guard!$"

DarkwingGrove_Gym_Text_GymGuidePostVictory::
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Way to go, {PLAYER}! We'll be sure to\n"
	.string "send all your battle data to the Rika\l"
	.string "League officials. Keep it up!$"

DarkwingGrove_Gym_Text_TommyIntro::
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo! You think you've got what it takes\n"
	.string "to beat Midnite?$"

DarkwingGrove_Gym_Text_TommyDefeat::
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! That was rough!$"

DarkwingGrove_Gym_Text_TommyPostBattle::
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Midnite is your Mom? No wonder you're so\n"
	.string "strong!$"

DarkwingGrove_Gym_Text_RoxanneIntro::
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Mom: Hi, {PLAYER}.\p"
	.string "It makes me so proud to finally see you\n"
	.string "standing here, on my mat, in my Gym!\p"
	.string "But I should warn you, {PLAYER}. As an\n"
	.string "official Gym Leader for the Rika\l"
	.string "League, I have a duty to push my\l"
	.string "Pokémon to their limits.\p"
	.string "Battling is about trust, understanding,\n"
	.string "and cooperation. You may understand\l"
	.string "this, but you don't have the experience\l"
	.string "that we do. You don't have the bond we\l"
	.string "do.\p"
	.string "Go ahead, {PLAYER}. Prove me wrong…\p"
	.string "Or be overwhelmed by darkness!$"

DarkwingGrove_Gym_Text_RoxanneDefeat::
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Mom: I lost…\p"
	.string "{PLAYER}, amazing job!\p"
	.string "You and your Pokémon truly understand\n"
	.string "each other.\p"
	.string "Against all odds, you've proven\n"
	.string "yourself a fine Trainer.\p"
	.string "Please, on behalf of the Rika League,\n"
	.string "accept this official Somber Badge!$"

DarkwingGrove_Gym_Text_ReceivedStoneBadge::
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Somber Badge\n"
	.string "from Mom!$"

DarkwingGrove_Gym_Text_StoneBadgeInfoTakeThis::
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Mom: The Somber Badge is the first of\n"
	.string "many, {PLAYER}!\p"
	.string "You've earned this, too.$"

DarkwingGrove_Gym_Text_ExplainRockTomb::
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Mom: That TM contains Snatch. It's a\n"
	.string "really tricky move!\p"
	.string "Snatch always goes first. It lets your\n"
	.string "Pokémon steal a beneficial Status move\l"
	.string "an opponent plans to use that turn,\l"
	.string "letting you use it instead. I hope it\l"
	.string "helps you on your journey, {PLAYER}!$"

DarkwingGrove_Gym_Text_RoxannePostBattle::
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Mom: You've really grown already,\n"
	.string "{PLAYER}.\p"
	.string "I couldn't be more proud of you and your\n"
	.string "Pokémon.$"
