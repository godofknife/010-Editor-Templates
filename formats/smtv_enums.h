typedef char bool;
typedef char s8;
typedef uchar u8;
typedef int16 s16;
typedef uint16 u16;
typedef int16 s16;
typedef int32 s32;
typedef uint32 u32;
typedef int64 s64;
typedef uint64 u64;
typedef hfloat f16;
typedef float f32;
typedef double f64;

typedef enum<int> 
{
  Skill_Agi = 1,
  Skill_Agilao = 3,
  Skill_Agidyne = 5,
  Skill_Agibarion = 7,
  Skill_Trisagion = 8,
  Skill_Maragi = 9,
  Skill_Maragion = 10,
  Skill_Maragidyne = 11,
  Skill_Maragibarion = 12,
  Skill_Ragnarok = 13,
  Skill_FireBreath = 14,
  Skill_Bufu = 16,
  Skill_Bufula = 18,
  Skill_Bufudyne = 20,
  Skill_Bufubarion = 22,
  Skill_IceAge = 23,
  Skill_Mabufu = 24,
  Skill_Mabufula = 25,
  Skill_Mabufudyne = 26,
  Skill_Mabufubarion = 27,
  Skill_GlacialBlast = 28,
  Skill_IceBreath = 29,
  Skill_Zio = 31,
  Skill_Zionga = 33,
  Skill_Ziodyne = 35,
  Skill_Ziobarion = 37,
  Skill_Narukami = 38,
  Skill_Mazio = 39,
  Skill_Mazionga = 40,
  Skill_Maziodyne = 41,
  Skill_Maziobarion = 42,
  Skill_ThunderReign = 43,
  Skill_Shockbound = 44,
  Skill_Zan = 46,
  Skill_Zanma = 48,
  Skill_Zandyne = 50,
  Skill_Zanbarion = 52,
  Skill_KillingWind = 53,
  Skill_Mazan = 54,
  Skill_Mazanma = 55,
  Skill_Mazandyne = 56,
  Skill_Mazanbarion = 57,
  Skill_FloralGust = 58,
  Skill_WindBreath = 59,
  Skill_OmagatokiCritical = 60,
  Skill_Mudo = 61,
  Skill_Mudoon = 62,
  Skill_Mudobarion = 63,
  Skill_Mamudo = 64,
  Skill_Mamudoon = 65,
  Skill_Mamudobarion = 66,
  Skill_Hama = 67,
  Skill_Hamaon = 68,
  Skill_Hamabarion = 69,
  Skill_Mahama = 70,
  Skill_Mahamaon = 71,
  Skill_Mahamabarion = 72,
  Skill_Megido = 73,
  Skill_Megidola = 74,
  Skill_Megidolaon = 75,
  Skill_BigBang = 76,
  Skill_Freikugel = 77,
  Skill_FreikugelEX = 78,
  Skill_LifeDrain = 79,
  Skill_SpiritDrain = 80,
  Skill_EnergyDrain = 81,
  Skill_SlumberVortex = 82,
  Skill_Dormina = 83,
  Skill_Lullaby = 84,
  Skill_Poisma = 85,
  Skill_ToxicCloud = 86,
  Skill_SoulDrain = 87,
  Skill_LightningPulse = 88,
  Skill_Pulinpa = 89,
  Skill_Tentarafoo = 90,
  Skill_MarinKarin = 91,
  Skill_SexyDance = 92,
  Skill_Makajama = 93,
  Skill_Makajamaon = 94,
  Skill_Dustoma = 95,
  Skill_Fogna = 96,
  Skill_Dia = 97,
  Skill_Diarama = 98,
  Skill_Diarahan = 99,
  Skill_Media = 100,
  Skill_Mediarama = 101,
  Skill_Mediarahan = 102,
  Skill_Dia2 = 103,
  Skill_Diarama2 = 104,
  Skill_Media2 = 105,
  Skill_Mediarama2 = 106,
  Skill_Patra = 107,
  Skill_MePatra = 108,
  Skill_TwilightWave = 109,
  Skill_EternalPrayer = 110,
  Skill_SeaofStars = 111,
  Skill_WatersofYouth = 112,
  Skill_AccursedPoison = 113,
  Skill_RasetsuFeast = 114,
  Skill_Recarm = 115,
  Skill_Samarecarm = 116,
  Skill_HeavenlyCounter = 117,
  Skill_Tarukaja = 118,
  Skill_Matarukaja = 119,
  Skill_FairyBanquet = 120,
  Skill_ExpandCriticalAura = 121,
  Skill_Sukukaja = 122,
  Skill_Masukukaja = 123,
  Skill_Rakukaja = 124,
  Skill_Marakukaja = 125,
  Skill_LusterCandy = 126,
  Skill_Dekaja = 127,
  Skill_Tarunda = 128,
  Skill_Matarunda = 129,
  Skill_ExpandPiercingAura = 130,
  Skill_ShieldofGod = 131,
  Skill_Sukunda = 132,
  Skill_Masukunda = 133,
  Skill_Rakunda = 134,
  Skill_Marakunda = 135,
  Skill_Debilitate = 136,
  Skill_Dekunda = 137,
  Skill_ImpalersGlory = 138,
  Skill_Tetrakarn = 139,
  Skill_Makarakarn = 140,
  Skill_Charge = 142,
  Skill_Concentrate = 143,
  Skill_CriticalAura = 144,
  Skill_Dekajaon = 145,
  Skill_OmagatokiPierce = 146,
  Skill_OmagatokiHit = 147,
  Skill_ImpalersAnimus = 148,
  Skill_BowlofHygieia = 149,
  Skill_Diamrita = 150,
  Skill_Donothing = 151,
  Skill_CallAllies = 152,
  Skill_Waitandsee = 153,
  Skill_Trafuri = 154,
  Skill_Estoma = 155,
  Skill_Escape = 156,
  Skill_Lunge = 157,
  Skill_BerserkerGod = 158,
  Skill_MortalJihad = 159,
  Skill_AkashicArts = 160,
  Skill_HeatWave = 161,
  Skill_Deathbound = 162,
  Skill_HadesBlast = 163,
  Skill_BraveBlade = 164,
  Skill_HeavyBlow = 165,
  Skill_HellThrust = 166,
  Skill_CriticalWave = 167,
  Skill_Titanomachia = 168,
  Skill_Beatdown = 169,
  Skill_PowerPunch = 170,
  Skill_FangBreaker = 171,
  Skill_PuncturePunch = 172,
  Skill_PierceArmor = 173,
  Skill_BlindingStrike = 174,
  Skill_DreamFist = 175,
  Skill_PurpleSmoke = 176,
  Skill_OmagatokiAdversity = 177,
  Skill_FireDracostrike = 178,
  Skill_IceDracostrike = 179,
  Skill_StormDracostrike = 180,
  Skill_WindDracostrike = 181,
  Skill_HystericalSlap = 182,
  Skill_GramSlice = 183,
  Skill_FatalSword = 184,
  Skill_MyriadSlashes = 185,
  Skill_Blight = 186,
  Skill_OmagatokiFree = 187,
  Skill_DarkSword = 188,
  Skill_MistRush = 189,
  Skill_Counter = 190,
  Skill_Retaliate = 191,
  Skill_Catastrophe = 192,
  Skill_OmagatokiDoubler = 193,
  Skill_FigmentSlash = 194,
  Skill_BouncingClaw = 195,
  Skill_DamascusClaw = 196,
  Skill_NihilClaw = 197,
  Skill_ScratchDance = 198,
  Skill_AxelClaw = 199,
  Skill_MadnessNails = 200,
  Skill_OmagatokiDance = 201,
  Skill_VenomChaser = 202,
  Skill_BestialBite = 203,
  Skill_SeveringBite = 204,
  Skill_FrenziedChomp = 205,
  Skill_EatWhole = 206,
  Skill_DreamNeedle = 207,
  Skill_ToxicSting = 208,
  Skill_NeedleSpray = 209,
  Skill_MadnessNeedle = 210,
  Skill_YabusameShot = 211,
  Skill_SteelNeedle = 212,
  Skill_CrusherOnslaught = 213,
  Skill_MegatonPress = 214,
  Skill_OmagatokiSincerity = 215,
  Skill_Rampage = 216,
  Skill_DieForMe = 217,
  Skill_KingBufula = 218,
  Skill_EternalBlizzard = 219,
  Skill_JackBufula = 220,
  Skill_HellishBrand = 221,
  Skill_RagingHellfire = 222,
  Skill_RagingBlizzard = 223,
  Skill_RagingLightning = 224,
  Skill_RagingTempest = 225,
  Skill_FireofSinai = 226,
  Skill_MacanLuin = 227,
  Skill_BabylonGoblet = 228,
  Skill_Frolic = 229,
  Skill_CautiousCheer = 230,
  Skill_GhastfireRain = 231,
  Skill_Gungnir = 232,
  Skill_HassouTobi = 233,
  Skill_Andalucia = 234,
  Skill_Terrorblade = 235,
  Skill_Pestilence = 236,
  Skill_GodsBow = 237,
  Skill_SoulDivide = 238,
  Skill_EvilMelody = 239,
  Skill_MesektetsPath = 240,
  Skill_CriticalSlash = 242,
  Skill_MightyCleave = 243,
  Skill_BlackDracostrike = 244,
  Skill_WhiteDracostrike = 245,
  Skill_DonumGladi = 246,
  Skill_DonumMagici = 247,
  Skill_Taunt = 248,
  Skill_OmagatokiSavage = 249,
  Skill_ToxicSpray = 250,
  Skill_SouffleDeclair = 251,
  Skill_HellishSlash = 252,
  Skill_HarvestDance = 253,
  Skill_MirageShot = 254,
  Skill_MoonlightFrost = 255,
  Skill_StormcallerSong = 256,
  Skill_Karnak = 257,
  Skill_AcrobatKick = 258,
  Skill_HeliopolisDawn = 259,
  Skill_FierceRoar = 260,
  Skill_Tandava = 261,
  Skill_HellishSpurt = 262,
  Skill_MegidoFlame = 263,
  Skill_Walpurgisnacht = 264,
  Skill_CarnageFang = 265,
  Skill_SunsRadiance = 266,
  Skill_WitnessMe = 267,
  Skill_HellSpin = 268,
  Skill_LightsDescent = 269,
  Skill_FallenDestroyer = 270,
  Skill_SanguineDrain = 271,
  Skill_DancingStrike = 272,
  Skill_SacrificeofClay = 273,
  Skill_OmagatokiLuck = 274,
  Skill_Preach = 275,
  Skill_GoldenApple = 276,
  Skill_MatriarchsLove = 277,
  Skill_RedCapote = 278,
  Skill_MatriarchsLove2 = 279,
  Skill_HumbleBlessing = 280,
  Skill_EleusinianHarvest = 281,
  Skill_Keraunos = 282,
  Skill_Frenzy = 283,
  Skill_GalvanicSlash = 284,
  Skill_Electrify = 285,
  Skill_RisingStormDragon = 286,
  Skill_Attack = 287,
  Skill_Charge2 = 288,
  Skill_BabylonCurse = 289,
  Skill_SiltofRuin = 291,
  Skill_Sakanagi = 292,
  Skill_DivineArrowfall = 293,
  Skill_Murakumo = 294,
  Skill_RedCapote2 = 295,
  Skill_Meditation = 296,
  Skill_HellBurner = 297,
  Skill_Aramasa = 298,
  Skill_WrathTempest = 299,
  Skill_RuinousThunder = 300,
  Skill_ThalassicCalamity = 301,
  Skill_HellExhaust = 302,
  Skill_DeathLust = 303,
  Skill_Headcrush = 304,
  Skill_Somersault = 305,
  Skill_KannabiVeil = 306,
  Skill_ProfanedLand = 307,
  Skill_StagnantAir = 308,
  Skill_OmagatokiPotential = 309,
  Skill_MiracleWater = 310,
  Skill_RevivalChant = 311,
  Skill_DreadfulGleam = 312,
  Skill_DreadfulGleam2 = 313,
  Skill_HarvestDance2 = 314,
  Skill_ToxicBreath = 315,
  Skill_CallAngels = 316,
  Skill_CallSoldiers = 317,
  Skill_CallSouls = 318,
  Skill_CallEvil = 319,
  Skill_Purgatorium = 320,
  Skill_Impetus = 321,
  Skill_MesektetsPath2 = 322,
  Skill_DeathFlies = 325,
  Skill_LightofOrder = 326,
  Skill_AstralSaintstrike = 328,
  Skill_InfernoofGod = 329,
  Skill_HailstormofGod = 330,
  Skill_LightningofGod = 331,
  Skill_TornadoofGod = 332,
  Skill_ColdDarkMatter = 333,
  Skill_HotDarkMatter = 334,
  Skill_Freikugel2 = 335,
  Skill_GaeaRage = 336,
  Skill_MagmaAxis = 337,
  Skill_JavelinRain = 338,
  Skill_XerosBeat = 339,
  Skill_DeadlyFury = 340,
  Skill_WildDance = 341,
  Skill_ContemptofGod = 342,
  Skill_HolyCrucifixion = 343,
  Skill_OmagatokiCharge = 345,
  Skill_FallingStar = 347,
  Skill_FallingStar2 = 348,
  Skill_MorningStar = 349,
  Skill_Attack2 = 350,
  Skill_Dia3 = 352,
  Skill_Diarama3 = 353,
  Skill_Media3 = 354,
  Skill_Mediarama3 = 355,
  Skill_Electrify2 = 356,
  Skill_TrueReplication = 357,
  Skill_FalseReplication = 358,
  Skill_RisingStormDragon2 = 359,
  Skill_RisingStormDragon3 = 360,
  Skill_RisingStormDragon4 = 361,
  Skill_RisingStormDragon5 = 362,
  Skill_PhysBlock = 363,
  Skill_FireBlock = 364,
  Skill_IceBlock = 365,
  Skill_ElecBlock = 366,
  Skill_ForceBlock = 367,
  Skill_LightBlock = 368,
  Skill_DarkBlock = 369,
  Skill_Freikugel3 = 370,
  Skill_GaeaRage2 = 371,
  Skill_JavelinRain2 = 372,
  Skill_DeadlyFury2 = 373,
  Skill_ChaoticWill = 374,
  Skill_MadnessGlint = 378,
  Skill_PantaSpane = 379,
  Skill_MagatsuhiHarvest = 380,
  Skill_Dia4 = 381,
  Skill_Diarama4 = 382,
  Skill_Media4 = 383,
  Skill_Mediarama4 = 384,
  Skill_Dia5 = 385,
  Skill_Diarama5 = 386,
  Skill_ViolentRage = 388,
  Skill_PandemonicCrush = 389,
  Skill_EvilGleam = 390,
  Skill_SonicBoom = 392,
  Skill_GaeaRage3 = 394,
  Skill_ChaoticWill2 = 395,
  Skill_JavelinRain3 = 397,
  Skill_DeadlyFury3 = 398,
  Skill_ResistPhys = 401,
  Skill_NullPhys = 402,
  Skill_DrainPhys = 403,
  Skill_RepelPhys = 404,
  Skill_ResistFire = 405,
  Skill_NullFire = 406,
  Skill_DrainFire = 407,
  Skill_RepelFire = 408,
  Skill_ResistIce = 409,
  Skill_NullIce = 410,
  Skill_DrainIce = 411,
  Skill_RepelIce = 412,
  Skill_ResistElec = 413,
  Skill_NullElec = 414,
  Skill_DrainElec = 415,
  Skill_RepelElec = 416,
  Skill_ResistForce = 417,
  Skill_NullForce = 418,
  Skill_DrainForce = 419,
  Skill_RepelForce = 420,
  Skill_ResistDark = 421,
  Skill_NullDark = 422,
  Skill_DrainDark = 423,
  Skill_RepelDark = 424,
  Skill_ResistLight = 425,
  Skill_NullLight = 426,
  Skill_DrainLight = 427,
  Skill_RepelLight = 428,
  Skill_LightLifeAid = 429,
  Skill_LifeAid = 430,
  Skill_LightManaAid = 431,
  Skill_ManaAid = 432,
  Skill_Counter2 = 434,
  Skill_Retaliate2 = 435,
  Skill_HeavenlyCounter2 = 436,
  Skill_LifeSpring = 437,
  Skill_GreatLifeSpring = 438,
  Skill_ManaSpring = 439,
  Skill_GreatManaSpring = 440,
  Skill_CurseSiphon = 441,
  Skill_GreatCurseSiphon = 442,
  Skill_Endure = 443,
  Skill_EnduringSoul = 444,
  Skill_CriticalZealot = 447,
  Skill_Restore = 464,
  Skill_HighRestore = 465,
  Skill_BoonBoost = 468,
  Skill_BoonBoostEX = 469,
  Skill_PoisonAdept = 470,
  Skill_PoisonMaster = 471,
  Skill_Safeguard = 472,
  Skill_HellishMask = 474,
  Skill_AbyssalMask = 475,
  Skill_InspiringLeader = 477,
  Skill_BeastEye = 478,
  Skill_DragonEye = 479,
  Skill_BloodyGlee = 480,
  Skill_MurderousGlee = 481,
  Skill_PhysPleroma = 489,
  Skill_HighPhysPleroma = 490,
  Skill_FirePleroma = 491,
  Skill_HighFirePleroma = 492,
  Skill_IcePleroma = 493,
  Skill_HighIcePleroma = 494,
  Skill_ElecPleroma = 495,
  Skill_HighElecPleroma = 496,
  Skill_ForcePleroma = 497,
  Skill_HighForcePleroma = 498,
  Skill_HealPleroma = 499,
  Skill_HighHealPleroma = 500,
  Skill_DarkPleroma = 501,
  Skill_HighDarkPleroma = 502,
  Skill_LightPleroma = 503,
  Skill_HighLightPleroma = 504,
  Skill_AlmightyPleroma = 505,
  Skill_HighAlmightyPleroma = 506,
  Skill_LightningPulse2 = 511,
} SkillNames;

typedef enum <int>
{
  Null = 0,
  Resist = 50,
  Neutral = 100,
  Weak = 125,
  RndNullWk = 900,
  Repel = 999,
  Drain = 1000,
} Res;

typedef struct
{
  int strength;
  int vitality;
  int magic;
  int agility;
  int luck;
} Stt <optimize=false, read=Read_Stt>;

string Read_Stt( Stt &o )
{
  local string s;
  SPrintf( s, "%d %d %d %d %d", o.strength, o.vitality, o.magic, o.agility, o.luck );
  return s;
}

typedef enum <short>
{
  DUMMY,
  GROUP_ID_SHINREI,
  Herald,
  Megami,
  Avian,
  Divine,
  Yoma,
  Vile,
  Raptor,
  GROUP_ID_REIKEN,
  Deity,
  Wargod,
  Avatar,
  Holy,
  Genma,
  Element,
  Mitama,
  Fairy,
  Beast,
  Jirae,
  Fiend,
  Jaki,
  Wilder,
  Fury,
  Lady,
  Dragon,
  Kishin,
  Kunitsu,
  Femme,
  Brute,
  Fallen,
  Night,
  Snake,
  Tyrant,
  Drake,
  Haunt,
  Foul,
  King,
  GROUP_ID_DAIMAO,
  Meta,
  Nahobino,
  Protofiend,
  Matter,
  Panagia,
} DemonRace;

enum<short> BattleUnit
{
	_1 = 1,
	_2 = 2,
	_3 = 3,
	_4 = 4,
	_5 = 5,
	_6 = 6,
	Khonsu_7 = 7,
	Zeus_8 = 8,
	Odin_9 = 9,
	_10 = 10,
	Mitra_11 = 11,
	Atavaka_12 = 12,
	Horus_13 = 13,
	Thoth_14 = 14,
	KhonsuRa_15 = 15,
	Vishnu_16 = 16,
	Baal_17 = 17,
	_18 = 18,
	Demeter_19 = 19,
	Anahita_20 = 20,
	Lakshmi_21 = 21,
	Norn_22 = 22,
	Idun_23 = 23,
	Sarasvati_24 = 24,
	Ishtar_25 = 25,
	Scathach_26 = 26,
	Parvati_27 = 27,
	AmeNoUzume_28 = 28,
	Fortuna_29 = 29,
	Maria_30 = 30,
	Artemis_31 = 31,
	_32 = 32,
	_33 = 33,
	Hanuman_34 = 34,
	Fionn_35 = 35,
	CuChulainn_36 = 36,
	KuramaTengu_37 = 37,
	Amanozako_38 = 38,
	BerserkAmanozako_39 = 39,
	_40 = 40,
	_41 = 41,
	KoppaTengu_42 = 42,
	Apsaras_43 = 43,
	Agathion_44 = 44,
	Mandrake_45 = 45,
	_46 = 46,
	_47 = 47,
	_48 = 48,
	_49 = 49,
	_50 = 50,
	Titania_51 = 51,
	Oberon_52 = 52,
	Silky_53 = 53,
	Setanta_54 = 54,
	Kelpie_55 = 55,
	HighPixie_56 = 56,
	PyroJack_57 = 57,
	JackFrost_58 = 58,
	Pixie_59 = 59,
	_60 = 60,
	_61 = 61,
	_62 = 62,
	_63 = 63,
	QueenMedb_64 = 64,
	Succubus_65 = 65,
	Kaiwan_66 = 66,
	Lilim_67 = 67,
	Incubus_68 = 68,
	Mokoi_69 = 69,
	Sandman_70 = 70,
	Lilith_71 = 71,
	BlackFrost_72 = 72,
	_73 = 73,
	_74 = 74,
	Nuwa_75 = 75,
	Amon_76 = 76,
	Mara_77 = 77,
	Mephisto_78 = 78,
	ChiYou_79 = 79,
	Surt_80 = 80,
	Beelzebub_81 = 81,
	Arioch_82 = 82,
	Belial_83 = 83,
	Abaddon_84 = 84,
	Moloch_85 = 85,
	Belphegor_86 = 86,
	KingFrost_87 = 87,
	Mithras_88 = 88,
	Loki_89 = 89,
	_90 = 90,
	_91 = 91,
	_92 = 92,
	_93 = 93,
	HuangLong_94 = 94,
	Quetzalcoatl_95 = 95,
	QingLong_96 = 96,
	Xuanwu_97 = 97,
	Ananta_98 = 98,
	_99 = 99,
	_100 = 100,
	_101 = 101,
	_102 = 102,
	YamataNoOrochi_103 = 103,
	NagaRaja_104 = 104,
	Yurlungur_105 = 105,
	Naga_106 = 106,
	_107 = 107,
	_108 = 108,
	_109 = 109,
	_110 = 110,
	Vasuki_111 = 111,
	Seth_112 = 112,
	Basilisk_113 = 113,
	Aitvaras_114 = 114,
	Hydra_115 = 115,
	Fafnir_116 = 116,
	_117 = 117,
	_118 = 118,
	Barong_119 = 119,
	Anubis_120 = 120,
	Makami_121 = 121,
	_122 = 122,
	_123 = 123,
	_124 = 124,
	_125 = 125,
	Baihu_126 = 126,
	Chimera_127 = 127,
	Cironnup_128 = 128,
	Shiisaa_129 = 129,
	_130 = 130,
	_131 = 131,
	_132 = 132,
	_133 = 133,
	Cerberus_134 = 134,
	Orthrus_135 = 135,
	LoupGarou_136 = 136,
	Nekomata_137 = 137,
	Inugami_138 = 138,
	Orobas_139 = 139,
	CaitSith_140 = 140,
	_141 = 141,
	_142 = 142,
	_143 = 143,
	Bugs_144 = 144,
	Nue_145 = 145,
	Bicorn_146 = 146,
	Mothman_147 = 147,
	_148 = 148,
	_149 = 149,
	_150 = 150,
	_151 = 151,
	Hayataro_152 = 152,
	_153 = 153,
	_154 = 154,
	Flaemis_155 = 155,
	Aquans_156 = 156,
	Aeros_157 = 157,
	Erthys_158 = 158,
	_159 = 159,
	_160 = 160,
	_161 = 161,
	_162 = 162,
	SakiMitama_163 = 163,
	KushiMitama_164 = 164,
	NigiMitama_165 = 165,
	AraMitama_166 = 166,
	SakiMitama2_167 = 167,
	SakiMitama3_168 = 168,
	SakiMitama4_169 = 169,
	_170 = 170,
	BlackOoze_171 = 171,
	Legion_172 = 172,
	Slime_173 = 173,
	_174 = 174,
	_175 = 175,
	_176 = 176,
	_177 = 177,
	Shiva_178 = 178,
	Mot_179 = 179,
	ZaouGongen_180 = 180,
	Asura_181 = 181,
	Chernobog_182 = 182,
	Dionysus_183 = 183,
	_184 = 184,
	_185 = 185,
	_186 = 186,
	_187 = 187,
	Danu_188 = 188,
	Inanna_189 = 189,
	Kali_190 = 190,
	Cybele_191 = 191,
	Skadi_192 = 192,
	Isis_193 = 193,
	KikuriHime_194 = 194,
	Hariti_195 = 195,
	_196 = 196,
	Nuwa_Snake_197 = 197,
	Alilat_198 = 198,
	_199 = 199,
	Thor_200 = 200,
	Futsunushi_201 = 201,
	Attis_202 = 202,
	Bishamonten_203 = 203,
	Jikokuten_204 = 204,
	Koumokuten_205 = 205,
	Zouchouten_206 = 206,
	_207 = 207,
	_208 = 208,
	_209 = 209,
	_210 = 210,
	Arahabaki_211 = 211,
	Oyamatsumi_212 = 212,
	KushinadaHime_213 = 213,
	SukunaHikona_214 = 214,
	Okuninushi_215 = 215,
	TakeMinakata_216 = 216,
	_217 = 217,
	_218 = 218,
	_219 = 219,
	_220 = 220,
	Ganesha_221 = 221,
	Siegfried_222 = 222,
	Valkyrie_223 = 223,
	Yoshitsune_224 = 224,
	NekoShogun_225 = 225,
	_226 = 226,
	_227 = 227,
	_228 = 228,
	_229 = 229,
	Lahmu_230 = 230,
	Mada_231 = 231,
	Girimehkala_232 = 232,
	Pazuzu_233 = 233,
	Mishaguji_234 = 234,
	Baphomet_235 = 235,
	Lahmu_236 = 236,
	_237 = 237,
	_238 = 238,
	_239 = 239,
	Abdiel_240 = 240,
	Metatron_241 = 241,
	Michael_242 = 242,
	Gabriel_243 = 243,
	Sraosha_244 = 244,
	Raphael_245 = 245,
	Sandalphon_246 = 246,
	Uriel_247 = 247,
	Camael_248 = 248,
	Melchizedek_249 = 249,
	_250 = 250,
	_251 = 251,
	_252 = 252,
	_253 = 253,
	Throne_254 = 254,
	Dominion_255 = 255,
	Power_256 = 256,
	Principality_257 = 257,
	Archangel_258 = 258,
	Angel_259 = 259,
	_260 = 260,
	_261 = 261,
	_262 = 262,
	_263 = 263,
	Abdiel_Fallen_264 = 264,
	Adramelech_265 = 265,
	Flauros_266 = 266,
	Nebiros_267 = 267,
	Berith_268 = 268,
	Ose_269 = 269,
	Eligor_270 = 270,
	Forneus_271 = 271,
	Andras_272 = 272,
	Decarabia_273 = 273,
	_274 = 274,
	_275 = 275,
	_276 = 276,
	_277 = 277,
	Garuda_278 = 278,
	Zhuque_279 = 279,
	Yatagarasu_280 = 280,
	Jatayu_281 = 281,
	FengHuang_282 = 282,
	Thunderbird_283 = 283,
	_284 = 284,
	_285 = 285,
	_286 = 286,
	Anzu_287 = 287,
	Zhen_288 = 288,
	MuuShuwuu_289 = 289,
	Onmoraki_290 = 290,
	_291 = 291,
	_292 = 292,
	_293 = 293,
	_294 = 294,
	Cleopatra_295 = 295,
	Rangda_296 = 296,
	Dakini_297 = 297,
	Atropos_298 = 298,
	Yakshini_299 = 299,
	Lachesis_300 = 300,
	Clotho_301 = 301,
	Manananggal_302 = 302,
	Lamia_303 = 303,
	Mermaid_304 = 304,
	LeananSidhe_305 = 305,
	_306 = 306,
	_307 = 307,
	_308 = 308,
	_309 = 309,
	OngyoKi_310 = 310,
	ShikiOuji_311 = 311,
	SuiKi_312 = 312,
	FuuKi_313 = 313,
	KinKi_314 = 314,
	Azumi_315 = 315,
	IpponDatara_316 = 316,
	Daemon_317 = 317,
	Oni_318 = 318,
	_319 = 319,
	_320 = 320,
	_321 = 321,
	Hecatoncheires_322 = 322,
	Loa_323 = 323,
	Rakshasa_324 = 324,
	Turdak_325 = 325,
	Macabre_326 = 326,
	_327 = 327,
	_328 = 328,
	_329 = 329,
	KayaNoHime_330 = 330,
	Tsuchigumo_331 = 331,
	Narcissus_332 = 332,
	HuaPo_333 = 333,
	Koropokkur_334 = 334,
	Sudama_335 = 335,
	Kodama_336 = 336,
	_337 = 337,
	_338 = 338,
	_339 = 339,
	_340 = 340,
	Pisaca_341 = 341,
	Kumbhanda_342 = 342,
	Poltergeist_343 = 343,
	Obariyon_344 = 344,
	Preta_345 = 345,
	_346 = 346,
	_347 = 347,
	_348 = 348,
	_349 = 349,
	Trumpeter_350 = 350,
	MotherHarlot_351 = 351,
	BlackRider_352 = 352,
	RedRider_353 = 353,
	WhiteRider_354 = 354,
	Alice_355 = 355,
	HellBiker_356 = 356,
	Daisoujou_357 = 357,
	PaleRider_358 = 358,
	Matador_359 = 359,
	_360 = 360,
	_361 = 361,
	_362 = 362,
	_363 = 363,
	Tao_GoddessofLaw_FirstForm_Unused_364 = 364,
	Tao_GoddessofLaw_SecondForm_365 = 365,
	Yoko_GoddessofChaos_FirstForm_Unused_366 = 366,
	Yoko_GoddessofChaos_SecondForm_Unused_367 = 367,
	_368 = 368,
	_369 = 369,
	_370 = 370,
	KushiMitama2_371 = 371,
	KushiMitama3_372 = 372,
	KushiMitama4_373 = 373,
	NigiMitama2_374 = 374,
	NigiMitama3_375 = 375,
	NigiMitama4_376 = 376,
	AraMitama2_377 = 377,
	AraMitama3_378 = 378,
	AraMitama4_379 = 379,
	_380 = 380,
	_381 = 381,
	_382 = 382,
	_383 = 383,
	_384 = 384,
	_385 = 385,
	_386 = 386,
	_387 = 387,
	_388 = 388,
	_389 = 389,
	_390 = 390,
	_391 = 391,
	_392 = 392,
	_393 = 393,
	_394 = 394,
	_395 = 395,
	_396 = 396,
	_397 = 397,
	_398 = 398,
	_399 = 399,
	Hayataro_6AllyUncertain_400 = 400,
	Cleopatra_6NormalEnemyUncertain_401 = 401,
	CuChulainn_6NormalEnemyUncertain_402 = 402,
	LahmuTentacle_403 = 403,
	Preta_6WeakEnemyUncertain_404 = 404,
	Turdak_6WeakEnemyUncertain_405 = 405,
	Daemon_6WeakEnemyUncertain_406 = 406,
	Beelzebub_6BossUncertain_407 = 407,
	Daemon_Endof7Uncertain_408 = 408,
	ShoheiYakumo_409 = 409,
	NahobinoProtagonist_DatareferstoLahmuUncertain_410 = 410,
	Anahita_Endof7Uncertain_411 = 411,
	Aitvaras_a1_point_5Uncertain_412 = 412,
	Fortuna_a1_point_5Uncertain_413 = 413,
	HighPixie_a1_point_5AllyUncertain_414 = 414,
	KayaNoHime_a1_point_5Uncertain_415 = 415,
	Adramelech_a2Uncertain_416 = 416,
	Decarabia_a2Uncertain_417 = 417,
	Legion_a2Uncertain_418 = 418,
	KingFrost_UnusedPunishingEnemyUncertain_419 = 419,
	Amon_UnusedPunishingEnemyUncertain_420 = 420,
	SukunaHikona_Endof7Uncertain_421 = 421,
	Idun_Endof7Uncertain_422 = 422,
	KayaNoHime_a2DefenceMissionUncertain_423 = 423,
	LahmuTentacles_UnusedUncertain_424 = 424,
	LahmuMask_UnusedUncertain_425 = 425,
	LawChild_ForTesting_Lawko_Tao_internal_name_Uncertain_UsesKhonsuData_ = 426,
	Idun2_Endof7Uncertain_427 = 427,
	Idun3_Endof7Uncertain_428 = 428,
	_429 = 429,
	Daemon_MiscellaneousEventenemy_430 = 430,
	Preta_MiscellaneousEventenemy_431 = 431,
	Hydra_EventBoss_TokyoTower_432 = 432,
	Eligor_RequiredQuest_433 = 433,
	Andras_RequiredQuest_434 = 434,
	Nuwa_EventBoss_DietBuilding_435 = 435,
	Daemon_Uncertain_436 = 436,
	NagaRaja_Uncertain_437 = 437,
	Naga_Uncertain_438 = 438,
	Anzu_JojojiTemple_439 = 439,
	Lamia_JojojiTemple_440 = 440,
	LahmuFirstForm_EventBoss_JojojiTemple_441 = 441,
	Aitvaras_School_442 = 442,
	Andras_School_443 = 443,
	Rakshasa_School_444 = 444,
	Incubus_School_445 = 445,
	Oni_School_446 = 446,
	Manananggal_School_447 = 447,
	ShikiOuji_School_448 = 448,
	Tsuchigumo_School_449 = 449,
	LoupGarou_RequiredQuest_450 = 450,
	FionnMacCumhaill_EventBoss_Shinagawa_451 = 451,
	LahmuSecondForm_EventBoss_Shinagawa_452 = 452,
	LahmuThirdForm_EventBoss_Shinagawa_453 = 453,
	Surt_EventBoss_NeartheFlameWall_454 = 454,
	Ishtar1_EventBoss_455 = 455,
	Ishtar2_EventBoss_456 = 456,
	Ishtar3_EventBoss_457 = 457,
	Ishtar4_EventBoss_458 = 458,
	Ishtar5_EventBoss_459 = 459,
	Ishtar6_EventBoss_460 = 460,
	Ishtar7_EventBoss_461 = 461,
	Ishtar8_EventBoss_462 = 462,
	Arioch_EventBoss_DemonKingsCastle_463 = 463,
	Decarabia_AriochsAlly_464 = 464,
	ShoheiYakumo_EventBoss_Akihabara_465 = 465,
	Chernobog_EventBoss_DemonKingsCastle_466 = 466,
	Abdiel_EventBoss_Summit_467 = 467,
	Vasuki_EventBoss_Taito_468 = 468,
	Zeus_EventBoss_Taito_469 = 469,
	Odin_EventBoss_Taito_470 = 470,
	Melchizedek_EventBoss_Empyrean_471 = 471,
	Sraosha_EventBoss_Empyrean_472 = 472,
	Alilat_EventBoss_Empyrean_473 = 473,
	Flauros_AlilatsAlly_474 = 474,
	Ose_AlilatsAlly_475 = 475,
	Melchizedek_ReinforcementsforMelchizedekboss_476 = 476,
	Metatron_EventBoss_TempleofEternity_477 = 477,
	_478 = 478,
	_479 = 479,
	_480 = 480,
	_481 = 481,
	_482 = 482,
	_483 = 483,
	_484 = 484,
	_485 = 485,
	_486 = 486,
	_487 = 487,
	_488 = 488,
	_489 = 489,
	_490 = 490,
	_491 = 491,
	_492 = 492,
	_493 = 493,
	_494 = 494,
	_495 = 495,
	_496 = 496,
	_497 = 497,
	_498 = 498,
	_499 = 499,
	_500 = 500,
	_501 = 501,
	_502 = 502,
	_503 = 503,
	_504 = 504,
	_505 = 505,
	_506 = 506,
	_507 = 507,
	_508 = 508,
	_509 = 509,
	_510 = 510,
	_511 = 511,
	_512 = 512,
	_513 = 513,
	_514 = 514,
	_515 = 515,
	Khonsu_EventBoss_516 = 516,
	Anubis_KhonsuRasAlly_517 = 517,
	Thoth_KhonsuRasAlly_518 = 518,
	KhonsuRa_EventBoss_519 = 519,
	Nuwa_Nahobino_MainBody_520 = 520,
	Nuwa_Nahobino_ThunderBit1_521 = 521,
	Nuwa_Nahobino_ThunderBit2_522 = 522,
	Nuwa_Nahobino_ThunderBit3_523 = 523,
	Nuwa_Nahobino_ThunderBit4_524 = 524,
	Abdiel_Nahobino_MainBody_525 = 525,
	Abdiel_Nahobino_Hand_526 = 526,
	Abdiel_Nahobino_Wing_527 = 527,
	Tsukuyomi_EventBoss_Real_528 = 528,
	Lucifer_EventBoss_White1_529 = 529,
	Tsukuyomi_EventBoss_Fake_530 = 530,
	Lucifer_FallingStar_Fire_531 = 531,
	Lucifer_FallingStar_Ice_532 = 532,
	Lucifer_MorningStar_533 = 533,
	Lucifer_EventBoss_Black_534 = 534,
	Lucifer_EventBoss_White2_535 = 535,
	DemiFiend_536 = 536,
	WeakLucifer_537 = 537,
	WeakLucifer_FallingStar_Fire_538 = 538,
	WeakLucifer_FallingStar_Ice_539 = 539,
	Tsukuyomi_RealReplica_540 = 540,
	_541 = 541,
	_542 = 542,
	_543 = 543,
	_544 = 544,
	_545 = 545,
	_546 = 546,
	_547 = 547,
	_548 = 548,
	_549 = 549,
	_550 = 550,
	KingFrost_Unique_UnusedUncertain_551 = 551,
	HellBiker_Unique_UnusedUncertain_552 = 552,
	Zeus_Unique_UnusedUncertain_553 = 553,
	Odin_Unique_UnusedUncertain_554 = 554,
	Azura_Unique_UnusedUncertain_555 = 555,
	Abaddon_Unique_UnusedUncertain_556 = 556,
	Vasuki_Unique_UnusedUncertain_557 = 557,
	Seth_Unique_UnusedUncertain_558 = 558,
	Inanna_Unique_UnusedUncertain_559 = 559,
	Sandalphon_Unique_UnusedUncertain_560 = 560,
	Hecatoncheires_Unique_UnusedUncertain_561 = 561,
	Byakko_Unique_UnusedUncertain_562 = 562,
	Suzaku_Unique_UnusedUncertain_563 = 563,
	Seiryu_Unique_564 = 564,
	Genbu_Unique_UnusedUncertain_565 = 565,
	Anahita_Unique_UnusedUncertain_566 = 566,
	Demeter_Unique_UnusedUncertain_567 = 567,
	Kohryu_Unique_UnusedUncertain_568 = 568,
	_569 = 569,
	_570 = 570,
	_571 = 571,
	_572 = 572,
	_573 = 573,
	_574 = 574,
	_575 = 575,
	_576 = 576,
	_577 = 577,
	_578 = 578,
	_579 = 579,
	_580 = 580,
	_581 = 581,
	_582 = 582,
	_583 = 583,
	_584 = 584,
	_585 = 585,
	_586 = 586,
	_587 = 587,
	_588 = 588,
	_589 = 589,
	_590 = 590,
	_591 = 591,
	_592 = 592,
	_593 = 593,
	_594 = 594,
	_595 = 595,
	_596 = 596,
	_597 = 597,
	_598 = 598,
	_599 = 599,
	_600 = 600,
	_601 = 601,
	_602 = 602,
	_603 = 603,
	_604 = 604,
	_605 = 605,
	_606 = 606,
	_607 = 607,
	_608 = 608,
	_609 = 609,
	_610 = 610,
	_611 = 611,
	_612 = 612,
	_613 = 613,
	_614 = 614,
	_615 = 615,
	_616 = 616,
	_617 = 617,
	_618 = 618,
	_619 = 619,
	_620 = 620,
	_621 = 621,
	_622 = 622,
	_623 = 623,
	_624 = 624,
	_625 = 625,
	_626 = 626,
	_627 = 627,
	_628 = 628,
	_629 = 629,
	_630 = 630,
	_631 = 631,
	_632 = 632,
	_633 = 633,
	_634 = 634,
	_635 = 635,
	_636 = 636,
	_637 = 637,
	_638 = 638,
	_639 = 639,
	_640 = 640,
	_641 = 641,
	_642 = 642,
	_643 = 643,
	_644 = 644,
	_645 = 645,
	_646 = 646,
	_647 = 647,
	_648 = 648,
	_649 = 649,
	_650 = 650,
	_651 = 651,
	_652 = 652,
	_653 = 653,
	_654 = 654,
	_655 = 655,
	_656 = 656,
	_657 = 657,
	_658 = 658,
	_659 = 659,
	_660 = 660,
	_661 = 661,
	_662 = 662,
	_663 = 663,
	_664 = 664,
	_665 = 665,
	_666 = 666,
	_667 = 667,
	_668 = 668,
	_669 = 669,
	_670 = 670,
	_671 = 671,
	_672 = 672,
	_673 = 673,
	_674 = 674,
	_675 = 675,
	_676 = 676,
	_677 = 677,
	_678 = 678,
	_679 = 679,
	_680 = 680,
	_681 = 681,
	_682 = 682,
	_683 = 683,
	_684 = 684,
	_685 = 685,
	_686 = 686,
	_687 = 687,
	_688 = 688,
	_689 = 689,
	_690 = 690,
	_691 = 691,
	_692 = 692,
	_693 = 693,
	_694 = 694,
	_695 = 695,
	_696 = 696,
	_697 = 697,
	_698 = 698,
	_699 = 699,
	_700 = 700,
	_701 = 701,
	_702 = 702,
	_703 = 703,
	_704 = 704,
	_705 = 705,
	_706 = 706,
	_707 = 707,
	_708 = 708,
	_709 = 709,
	_710 = 710,
	_711 = 711,
	_712 = 712,
	_713 = 713,
	_714 = 714,
	_715 = 715,
	_716 = 716,
	_717 = 717,
	_718 = 718,
	_719 = 719,
	_720 = 720,
	_721 = 721,
	_722 = 722,
	_723 = 723,
	_724 = 724,
	_725 = 725,
	_726 = 726,
	_727 = 727,
	_728 = 728,
	_729 = 729,
	_730 = 730,
	_731 = 731,
	_732 = 732,
	_733 = 733,
	_734 = 734,
	_735 = 735,
	_736 = 736,
	_737 = 737,
	_738 = 738,
	_739 = 739,
	_740 = 740,
	_741 = 741,
	_742 = 742,
	_743 = 743,
	_744 = 744,
	_745 = 745,
	_746 = 746,
	_747 = 747,
	_748 = 748,
	_749 = 749,
	_750 = 750,
	_751 = 751,
	_752 = 752,
	_753 = 753,
	_754 = 754,
	_755 = 755,
	_756 = 756,
	_757 = 757,
	_758 = 758,
	_759 = 759,
	_760 = 760,
	_761 = 761,
	_762 = 762,
	_763 = 763,
	_764 = 764,
	_765 = 765,
	_766 = 766,
	_767 = 767,
	_768 = 768,
	_769 = 769,
	_770 = 770,
	_771 = 771,
	_772 = 772,
	_773 = 773,
	_774 = 774,
	_775 = 775,
	_776 = 776,
	_777 = 777,
	_778 = 778,
	_779 = 779,
	_780 = 780,
	_781 = 781,
	_782 = 782,
	_783 = 783,
	_784 = 784,
	_785 = 785,
	_786 = 786,
	_787 = 787,
	_788 = 788,
	_789 = 789,
	_790 = 790,
	_791 = 791,
	_792 = 792,
	_793 = 793,
	_794 = 794,
	_795 = 795,
	_796 = 796,
	_797 = 797,
	_798 = 798,
	_799 = 799,
	_800 = 800,
	_801 = 801,
	_802 = 802,
	_803 = 803,
	_804 = 804,
	_805 = 805,
	_806 = 806,
	_807 = 807,
	_808 = 808,
	_809 = 809,
	_810 = 810,
	_811 = 811,
	_812 = 812,
	_813 = 813,
	_814 = 814,
	_815 = 815,
	_816 = 816,
	_817 = 817,
	_818 = 818,
	_819 = 819,
	_820 = 820,
	_821 = 821,
	_822 = 822,
	_823 = 823,
	_824 = 824,
	_825 = 825,
	_826 = 826,
	_827 = 827,
	_828 = 828,
	_829 = 829,
	_830 = 830,
	_831 = 831,
	_832 = 832,
	_833 = 833,
	_834 = 834,
	_835 = 835,
	_836 = 836,
	_837 = 837,
	_838 = 838,
	_839 = 839,
	_840 = 840,
	_841 = 841,
	_842 = 842,
	_843 = 843,
	_844 = 844,
	_845 = 845,
	_846 = 846,
	_847 = 847,
	_848 = 848,
	_849 = 849,
	_850 = 850,
	_851 = 851,
	_852 = 852,
	_853 = 853,
	_854 = 854,
	_855 = 855,
	_856 = 856,
	_857 = 857,
	_858 = 858,
	_859 = 859,
	_860 = 860,
	_861 = 861,
	_862 = 862,
	_863 = 863,
	_864 = 864,
	_865 = 865,
	_866 = 866,
	_867 = 867,
	_868 = 868,
	_869 = 869,
	_870 = 870,
	_871 = 871,
	_872 = 872,
	_873 = 873,
	_874 = 874,
	_875 = 875,
	_876 = 876,
	_877 = 877,
	_878 = 878,
	_879 = 879,
	_880 = 880,
	_881 = 881,
	_882 = 882,
	_883 = 883,
	_884 = 884,
	_885 = 885,
	_886 = 886,
	_887 = 887,
	_888 = 888,
	_889 = 889,
	_890 = 890,
	_891 = 891,
	_892 = 892,
	_893 = 893,
	_894 = 894,
	_895 = 895,
	_896 = 896,
	_897 = 897,
	_898 = 898,
	_899 = 899,
	_900 = 900,
	_901 = 901,
	_902 = 902,
	_903 = 903,
	_904 = 904,
	_905 = 905,
	_906 = 906,
	_907 = 907,
	_908 = 908,
	_909 = 909,
	_910 = 910,
	_911 = 911,
	_912 = 912,
	_913 = 913,
	_914 = 914,
	_915 = 915,
	_916 = 916,
	_917 = 917,
	_918 = 918,
	_919 = 919,
	_920 = 920,
	_921 = 921,
	_922 = 922,
	_923 = 923,
	_924 = 924,
	_925 = 925,
	_926 = 926,
	_927 = 927,
	_928 = 928,
	_929 = 929,
	_930 = 930,
	_931 = 931,
	_932 = 932,
	_933 = 933,
	_934 = 934,
	_935 = 935,
	_936 = 936,
	_937 = 937,
	_938 = 938,
	_939 = 939,
	_940 = 940,
	_941 = 941,
	_942 = 942,
	_943 = 943,
	_944 = 944,
	_945 = 945,
	_946 = 946,
	_947 = 947,
	_948 = 948,
	_949 = 949,
	_950 = 950,
	_951 = 951,
	_952 = 952,
	_953 = 953,
	_954 = 954,
	_955 = 955,
	_956 = 956,
	_957 = 957,
	_958 = 958,
	_959 = 959,
	_960 = 960,
	_961 = 961,
	_962 = 962,
	_963 = 963,
	_964 = 964,
	_965 = 965,
	_966 = 966,
	_967 = 967,
	_968 = 968,
	_969 = 969,
	_970 = 970,
	_971 = 971,
	_972 = 972,
	_973 = 973,
	_974 = 974,
	_975 = 975,
	_976 = 976,
	_977 = 977,
	_978 = 978,
	_979 = 979,
	_980 = 980,
	_981 = 981,
	_982 = 982,
	_983 = 983,
	_984 = 984,
	_985 = 985,
	_986 = 986,
	_987 = 987,
	_988 = 988,
	_989 = 989,
	_990 = 990,
	_991 = 991,
	_992 = 992,
	_993 = 993,
	_994 = 994,
	_995 = 995,
	_996 = 996,
	_997 = 997,
	_998 = 998,
	_999 = 999,
	_1000 = 1000,
	_1001 = 1001,
	_1002 = 1002,
	_1003 = 1003,
	_1004 = 1004,
	_1005 = 1005,
	_1006 = 1006,
	_1007 = 1007,
	_1008 = 1008,
	_1009 = 1009,
	_1010 = 1010,
	_1011 = 1011,
	_1012 = 1012,
	_1013 = 1013,
	_1014 = 1014,
	_1015 = 1015,
	_1016 = 1016,
	_1017 = 1017,
	_1018 = 1018,
	_1019 = 1019,
	_1020 = 1020,
	_1021 = 1021,
	_1022 = 1022,
	_1023 = 1023,
	_1024 = 1024,
	_1025 = 1025,
	_1026 = 1026,
	_1027 = 1027,
	_1028 = 1028,
	_1029 = 1029,
	_1030 = 1030,
	_1031 = 1031,
	_1032 = 1032,
	_1033 = 1033,
	_1034 = 1034,
	_1035 = 1035,
	_1036 = 1036,
	_1037 = 1037,
	_1038 = 1038,
	_1039 = 1039,
	_1040 = 1040,
	_1041 = 1041,
	_1042 = 1042,
	_1043 = 1043,
	_1044 = 1044,
	_1045 = 1045,
	_1046 = 1046,
	_1047 = 1047,
	_1048 = 1048,
	_1049 = 1049,
	_1050 = 1050,
	_1051 = 1051,
	_1052 = 1052,
	_1053 = 1053,
	_1054 = 1054,
	_1055 = 1055,
	_1056 = 1056,
	_1057 = 1057,
	_1058 = 1058,
	_1059 = 1059,
	_1060 = 1060,
	_1061 = 1061,
	_1062 = 1062,
	_1063 = 1063,
	_1064 = 1064,
	_1065 = 1065,
	_1066 = 1066,
	_1067 = 1067,
	_1068 = 1068,
	_1069 = 1069,
	_1070 = 1070,
	_1071 = 1071,
	_1072 = 1072,
	_1073 = 1073,
	_1074 = 1074,
	_1075 = 1075,
	_1076 = 1076,
	_1077 = 1077,
	_1078 = 1078,
	_1079 = 1079,
	_1080 = 1080,
	_1081 = 1081,
	_1082 = 1082,
	_1083 = 1083,
	_1084 = 1084,
	_1085 = 1085,
	_1086 = 1086,
	_1087 = 1087,
	_1088 = 1088,
	_1089 = 1089,
	_1090 = 1090,
	_1091 = 1091,
	_1092 = 1092,
	_1093 = 1093,
	_1094 = 1094,
	_1095 = 1095,
	_1096 = 1096,
	_1097 = 1097,
	_1098 = 1098,
	_1099 = 1099,
	_1100 = 1100,
	_1101 = 1101,
	_1102 = 1102,
	_1103 = 1103,
	_1104 = 1104,
	_1105 = 1105,
	_1106 = 1106,
	_1107 = 1107,
	_1108 = 1108,
	_1109 = 1109,
	_1110 = 1110,
	_1111 = 1111,
	_1112 = 1112,
	_1113 = 1113,
	_1114 = 1114,
	_1115 = 1115,
	_1116 = 1116,
	_1117 = 1117,
	_1118 = 1118,
	_1119 = 1119,
	_1120 = 1120,
	_1121 = 1121,
	_1122 = 1122,
	_1123 = 1123,
	_1124 = 1124,
	_1125 = 1125,
	_1126 = 1126,
	_1127 = 1127,
	_1128 = 1128,
	_1129 = 1129,
	_1130 = 1130,
	_1131 = 1131,
	_1132 = 1132,
	_1133 = 1133,
	_1134 = 1134,
	_1135 = 1135,
	_1136 = 1136,
	_1137 = 1137,
	_1138 = 1138,
	_1139 = 1139,
	_1140 = 1140,
	_1141 = 1141,
	_1142 = 1142,
	_1143 = 1143,
	_1144 = 1144,
	_1145 = 1145,
	_1146 = 1146,
	_1147 = 1147,
	_1148 = 1148,
	_1149 = 1149,
	_1150 = 1150,
	_1151 = 1151,
	_1152 = 1152,
	_1153 = 1153,
	_1154 = 1154,
	_1155 = 1155,
	_1156 = 1156,
	_1157 = 1157,
	_1158 = 1158,
	_1159 = 1159,
	_1160 = 1160,
	_1161 = 1161,
	_1162 = 1162,
	_1163 = 1163,
	_1164 = 1164,
	_1165 = 1165,
	_1166 = 1166,
	_1167 = 1167,
	_1168 = 1168,
	_1169 = 1169,
	_1170 = 1170,
	_1171 = 1171,
	_1172 = 1172,
	_1173 = 1173,
	_1174 = 1174,
	_1175 = 1175,
	_1176 = 1176,
	_1177 = 1177,
	_1178 = 1178,
	_1179 = 1179,
	_1180 = 1180,
	_1181 = 1181,
	_1182 = 1182,
	_1183 = 1183,
	_1184 = 1184,
	_1185 = 1185,
	_1186 = 1186,
	_1187 = 1187,
	_1188 = 1188,
	_1189 = 1189,
	_1190 = 1190,
	_1191 = 1191,
	_1192 = 1192,
	_1193 = 1193,
	_1194 = 1194,
	_1195 = 1195,
	_1196 = 1196,
	_1197 = 1197,
	_1198 = 1198,
	_1199 = 1199,
	_1200 = 1200,
	_1201 = 1201,
	_1202 = 1202
};

typedef enum <u16>
{
  Battle_Daat = 0,
  Battle_Daat_ = 1,
  DemonKingCastle1 = 2,
  RESERVE1 = 3,
  RESERVE2 = 4,
  FionnMacCumhaill = 5,
  Metatron = 6,
  RESERVE3 = 7,
  NO_BGM = 8,
  Shiva = 9,
  Abscess = 10,
  Ferocity = 11,
  Strength = 12,
  HumansDemonsAnd = 13,
  RESERVE4 = 14,
  Tsukuyomi = 15,
  Abdiel = 16,
  Nuwa = 17,
  Lucifer1 = 18,
  Lucifer2 = 19,
  Seeker = 20,
  Seeker_ = 21,
  Ferocity_ = 22,
  Bethel = 23,
  Pazuzu = 24,
  Quest = 25,
  Mitama_ = 29,
} BGM_ID;