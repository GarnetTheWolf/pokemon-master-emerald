//
// DO NOT MODIFY THIS FILE! It is auto-generated from test/battle/trainer_control.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'test/battle/trainer_control.h' to remove #line markers.
//

#line 1 "test/battle/trainer_control.party"

#line 1
    [DIFFICULTY_NORMAL][0] =
    {
#line 2
        .trainerName = _("Test1"),
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7
        .doubleBattle = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9
            .nickname = COMPOUND_STRING("Bubbles"),
#line 9
            .species = SPECIES_WOBBUFFET,
#line 9
            .gender = TRAINER_MON_FEMALE,
#line 9
            .heldItem = ITEM_ASSAULT_VEST,
#line 14
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
#line 13
            .iv = TRAINER_PARTY_IVS(25, 26, 27, 28, 29, 30),
#line 12
            .ability = ABILITY_TELEPATHY,
#line 11
            .lvl = 67,
#line 17
            .ball = ITEM_MASTER_BALL,
#line 15
            .friendship = 42,
#line 10
            .nature = NATURE_HASTY,
#line 16
            .isShiny = TRUE,
#line 18
            .dynamaxLevel = 5,
            .shouldUseDynamax = TRUE,
            .moves = {
#line 19
                MOVE_AIR_SLASH,
                MOVE_BARRIER,
                MOVE_SOLAR_BEAM,
                MOVE_EXPLOSION,
            },
            },
            {
#line 24
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 27
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 26
            .ability = ABILITY_SHADOW_TAG,
#line 25
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 29
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 31
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 30
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 33
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 33
            .heldItem = ITEM_STICKY_BARB,
#line 38
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
#line 37
            .iv = TRAINER_PARTY_IVS(25, 26, 27, 28, 29, 30),
#line 36
            .ability = ABILITY_TELEPATHY,
#line 35
            .lvl = 69,
#line 39
            .ball = ITEM_DUSK_BALL,
#line 34
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 40
            .isShadow = TRUE,
#line 41
            .heartGauge = 3000,
            .moves = {
#line 42
                MOVE_AIR_SLASH,
                MOVE_BARRIER,
                MOVE_SOLAR_BEAM,
                MOVE_EXPLOSION,
            },
            },
        },
    },
#line 47
#line 54
    [DIFFICULTY_NORMAL][1] =
    {
#line 48
        .trainerName = _("Test2"),
#line 49
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 50
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 52
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 53
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 56
            .species = SPECIES_MEWTWO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 58
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 57
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 59
#line 66
    [DIFFICULTY_HARD][1] =
    {
#line 60
        .trainerName = _("Test2"),
#line 61
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 62
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 64
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 65
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 68
            .species = SPECIES_YVELTAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 70
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 69
            .lvl = 99,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 71
#line 78
    [DIFFICULTY_NORMAL][2] =
    {
#line 72
        .trainerName = _("Test2"),
#line 73
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 74
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 76
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 77
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 80
            .species = SPECIES_MEWTWO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 82
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 81
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 83
#line 90
    [DIFFICULTY_EASY][2] =
    {
#line 84
        .trainerName = _("Test2"),
#line 85
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 86
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 88
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 89
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 92
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 94
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 93
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 95
#line 102
    [DIFFICULTY_HARD][2] =
    {
#line 96
        .trainerName = _("Test2"),
#line 97
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 98
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 100
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 101
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 104
            .species = SPECIES_ARCEUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 105
            .lvl = 99,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
