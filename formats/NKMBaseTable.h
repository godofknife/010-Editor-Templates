/* NKMBaseTable */
/* file located at: Project\Content\Blueprints\Gamedata\BinTable\Devil\NKMBaseTable.uexp */

//Added by Mori
//E_CHAR_ATTR_Type enum
typedef enum <uint8>
{
    None_Align = 0,
	Neutral_Align = 1,
	Light_Align = 2,
	Dark_Align = 3,
	Law_Align = 4,
	Chaos_Align = 5
} Align<optimize=false>;

//Figured out from data, no idea if existng enum
typedef enum <uint8>
{
    NotGuest = 0,
    Yuzuru = 1,
    Dazai = 2,
    Tao = 3,
    Yoko = 4,
} Guest<optimize=false>;

//Boolean
typedef enum <uint8>
{
    No = 0,
    Yes = 1,
} Recruitable<optimize=false>;

//Boolean
typedef enum <uint8>
{
    AccidentRequiredORNoFuseLimit = 0,
    NoAccidentRequired = 1,
} AccidentBool<optimize=false>;

//E_Talk_Moon_Temper_Data enum
typedef enum <uint8>
{
    None_Moon,
    Silent_Moon,
    Full_Moon,
} TalkMoonTemperData<optimize=false>;

//AddGetSkill struct
typedef struct
{
    int32 AddLevel;
    SkillNames AddSkill;
} AddGetSkill <optimize=false>;

//ItemDrop struct
typedef struct
{
    int32 ItemID;
    int32 Rate;
    int32 Flag;
} ItemDropData <optimize=false>;

//E_Talk_Tone_Type
typedef enum <uint8>
{
    None_Talk,
    Boy_Talk,
    Young_Talk,
    Hero_Talk,
    DUMMY_4_Talk,
    Gentle_Talk,
    Ijin_Talk,
    OldMan_Talk,
    Girl_Talk,
    Gal_Talk,
    Lady_Talk,
    Witch_Talk,
    Beast_Talk,
    Heeho_Talk,
    Kaijin_Talk,
    LoupGarou_Talk,
    Kayano_Talk,
    DUMMY_17_Talk,
    DUMMY_18_Talk,
    Mermaid_Talk,
    DUMMY_20_Talk,
    DUMMY_21_Talk,
    Tutorial_Talk,
    RESERVE_2_Talk,
    RESERVE_3_Talk,
    RESERVE_4_Talk,
    RESERVE_5_Talk,
    RESERVE_6_Talk,
    RESERVE_7_Talk,
    RESERVE_8_Talk,
    RESERVE_9_Talk,
    RESERVE_10_Talk,
    TaoGoddess_Talk,
    Hayataro_Talk,
    Abdiel_Talk,
    AbdielFallen_Talk,
    Nuwa_Joka_Talk,
    Lahmu_Talk,
    Fionn_Talk,
    Shiva_Talk,
    Beelzebub_Talk,
    Metatron_Talk,
    Odin_Talk,
    Zeus_Talk,
    Khonsu_Talk,
    KhonsuRa_Talk,
    Vasuki_Talk,
    Surt_Talk,
    Ishtar_Talk,
    Idun_Talk,
    Arioch_Talk,
    Artemis_Talk,
    Mephisto_Talk,
    Cleopatra_Talk,
    Danu_Talk,
    SukunaHikona_Talk,
    Inanna_Talk,
    Demeter_Talk,
    Amon_Talk,
    Anahita_Talk,
    Maria_Talk,
    Trumpeter_Talk,
    MotherHarlot_Talk,
    BlackRider_Talk,
    RedRider_Talk,
    WhiteRider_Talk,
    Alice_Talk,
    HellBiker_Talk,
    Daisoujou_Talk,
    PaleRider_Talk,
    Matador_Talk,
    Bishamonuten_Talk,
    Jikokuten_Talk,
    Koumokuten_Talk,
    Zochouten_Talk,
    Michael_Talk,
    Gabriel_Talk,
    Raphael_Talk,
    Uriel_Talk,
    CuChulainn_Talk,
    Mara_Talk,
    Sandalphon_Talk,
    Amanozako_Talk,
    HeroWa_Talk,
    GalWa_Talk,
    Angel_Talk,
    Scathach_Talk,
    Madame_Talk,
    Fiend_Talk,
    Satan_Talk,
    Lucifer_Talk,
    Dagda_Talk,
    Kresnik_Talk,
    Anansi_Talk,
    Nahobino_Talk,
    TurboGranny_Talk,
    DUMMY_96_Talk,
    Masakado_Talk,
    Mastema_Talk,
    Onyankopon_Talk,
    Amabie_Talk,
    Lilith_Talk,
    Agrat_Talk,
    Naamah_Talk,
    Eisheth_Talk,
    TaoHuman_Talk,
    Yuzuru_Talk,
    Dazai_Talk,
    YokoHuman_Talk,
    YokoGoddess_Talk,
    Hitoshura_Talk,
    KnohanaSakuya_Talk,
} DevilTalkType<optimize=false>;

//Original
typedef struct
{
  int32 phys;
  int32 fire;
  int32 ice;
  int32 elec;
  int32 force;
  int32 light;
  int32 dark;
  int32 almighty;
  int32 ailment;
  int32 support;
  int32 heal;
} SkAff <optimize=false, read=Read_SkAff>;

string Read_SkAff( SkAff &o )
{
  local string s;
  local int i;

  local int aff = ReadInt( startof( o ) );
  SPrintf( s, "%s%d", aff >= 0 ? "+" : "", aff );

  for ( i = 1; i < 11; i++ )
  {
    aff = ReadInt( startof( o ) + i * 4 );
    SPrintf( s, "%s %s%d", s, aff >= 0 ? "+" : "", aff );
  }

  return s;
}
//E_Attribute_Type enum
typedef struct
{
  Res Phys;
  Res Fire;
  Res Ice;
  Res Thunder;
  Res Force;
  Res Light;
  Res Dark;
  Res Almighty;
  Res Poison;
  Res Vertigo;
  Res Confusion;
  Res Charm;
  Res Sleep;
  Res Silence;
  Res Stray;
  Res Burn;
  Res Freeze;
  Res Shock;
  Res Laceration;
  Res Stone;
  Res Mirage;
  Res Mud;
  Res Darkness;
  Res RECV02;
  Res RECV03;
  Res RECV04;
  Res RECV05;
  Res RECV06;
} Aff<optimize=false>;

//DevilBaseData Struct
typedef struct
{
  int ID <bgcolor=cRed>;
  BattleUnit Name_ID <bgcolor=cYellow>;
  FSeek( startof (this) + 8 );
  DemonRace Race<bgcolor=cAqua>;
  int8 Weapon  <hidden=true,bgcolor=cDkGray>;
  int8 Physical <hidden=true,bgcolor=cDkGray>;
  int8 Needle  <hidden=true,bgcolor=cDkGray>;
  int8 Bite <hidden=true,bgcolor=cDkGray>;
  int8 Claw <hidden=true,bgcolor=cDkGray>;
  int8 Magic <hidden=true,bgcolor=cDkGray>;
  Align Alignment1 <bgcolor=cSilver>;
  Align Alignment2<bgcolor=cSilver>;
  Guest IsGuest <bgcolor=cPurple>;
  int8 AssumedLevelAtJoining <bgcolor=cPurple>;
  
  FSeek( startof( this ) + 20 );
  int32 Level <bgcolor=cDkAqua>;
  Recruitable IsRecruitable <bgcolor=cPurple>;
  uint8 AtkNum <bgcolor=cLtRed>;
  uint8 AtkNumMax <bgcolor=cLtRed>;
  uint8 AtkNumAttr <bgcolor=cLtRed>;
  FSeek( startof( this ) + 29 );
  uint8 HitRate <bgcolor=cLtRed>;
  uint8 AddBst <bgcolor=cLtRed>;
  uint8 AddHitRate <bgcolor=cLtRed>;
  int32 AtkCoe <bgcolor=cLtRed>;
  int32 StanHP <bgcolor=cLtRed>;
  int32 WaitRev <bgcolor=cLtRed>;
  int32 DevilIDForDescription <bgcolor=cPurple>;
  FSeek( startof( this ) + 48 );
  int HP <bgcolor=cLtBlue>;
  int SP <bgcolor=cLtBlue>;
  int HPGrow <bgcolor=cLtBlue>;
  int SPGrow <bgcolor=cLtBlue>;

  FSeek( startof( this ) + 64 );
  Stt Stats <bgcolor=cLtBlue>;
  uint8 GiftEv;
  uint8 GiftTypeVal;
  uint8 AcquireThroughFusionOnly <bgcolor=cPurple>;
  AccidentBool IsNotFusionAccidentOnly <bgcolor=cPurple>;
  DevilTalkType TalkType  <bgcolor=cLtYellow>;
  DevilTalkType BackupTalkType<bgcolor=cLtYellow>;
  uint8 NonTalkType<bgcolor=cLtYellow>;
  uint8 BattleVoice <bgcolor=cLtYellow>;
  uint8 VoiceType <bgcolor=cLtYellow>;
  uint8 BadVoice <bgcolor=cLtYellow>;
  uint8 CriticalAddValue;
  uint8 CannotSummonFromCompendium;
  int32 EventFlagToUnlock;
  int32 DicParam;
  int32 SkillSlotNum;
  int32 AutoSkillSlotNum;

  FSeek( startof( this ) + 132 );
  SkillNames Skills[ 12 ] <bgcolor=cDkGreen>;
  SkillNames AutoSkills[12]<bgcolor=cDkPurple>;
  AddGetSkill AddGetSkillArray[3];
  AddGetSkill AddGetAutoSkillArray[3];
  FSeek( startof( this ) + 276 );;
  SkillNames UniqueSkill;

  
  Aff Affinities;
  FSeek( startof( this ) + 392 );;
  SkAff sk_aff;
  int32 NotDeleteFlag;
  int32 AntiNotDeleteFlag;
  int32 PopLocationLabelOldRoute1;
  int32 PopLocationLabelOldRoute2;
  int32 PopLocationLabelNewRoute1;
  int32 PopLocationLabelNewRoute2;
} NKMBaseTable0 <optimize=false, read=NKMBaseTable0_Read>;

string NKMBaseTable0_Read( NKMBaseTable0 &o )
{
  local string s;
  SPrintf( s, "ID %d LV %d ( %s )",
    o.ID, o.Level, Read_Stt( o.Stats ) );
  return s;
}

typedef struct
{
  BattleUnit ID <bgcolor=cRed>;
  int32 Level <bgcolor=cDkAqua>;
  int32 HP <bgcolor=cLtBlue>;
  int32 SP <bgcolor=cLtBlue>;
  SttEn Stats <bgcolor=cLtBlue>;
  //Accuracy Unsure
  uint8 DisplayAnalyze <bgcolor=cPurple>;
  uint8 IsNoBegLife <bgcolor=cPurple>;
  uint8 EnableScout <bgcolor=cPurple>;
  uint8 IsNoMercyTalk <bgcolor=cPurple>;
  uint8 IsBusinessRare <bgcolor=cPurple>;
  uint8 IsFriendTalk <bgcolor=cPurple>;
  TalkMoonTemperData MoonTemper <bgcolor=cSilver>;
  uint8 IsBoss;
  uint8 RandAffinity;
  FSeek( startof( this ) + 47 );
  uint8 PressTurnNumber;
  uint8 ActNum;
  FSeek( startof( this ) + 49 );
  uint8 AtkNum <bgcolor=cLtRed>;
  uint8 AtkNumMax <bgcolor=cLtRed>;
  uint8 AtkAttr <bgcolor=cLtRed>;
  //Accurate from here down for sure
  FSeek( startof( this ) + 53 );
  uint8 HitRate <bgcolor=cLtRed>;
  uint8 AddBst <bgcolor=cLtRed>;
  uint8 AddHitRate <bgcolor=cLtRed>;
  uint32 AtkCoe <bgcolor=cLtRed>;
  uint32 StanHP <bgcolor=cLtRed>;
  uint32 MagatsuhiSkill <bgcolor=cLtRed>;
  uint32 DefenceAffinityRootDevilID <bgcolor=cLtRed>;
  uint32 EXP <bgcolor=cLtRed>;
  uint32 Macca <bgcolor=cLtRed>;
  //Unknown
  uint32 Reichi <bgcolor=cLtRed>;

  FSeek( startof( this ) + 72 );
  int32 EnemyAIPtr<format=hex>;
  int32 ModelPtr<format=hex>;
  int32 AnalyzeID<format=hex>;
  //Unknown
  int32 AcquaintanceID<format=hex>;
  uint8 WorshipHealRate;
  uint8 BlackmailRate;
  uint8 CriticalAddValue;
  uint8 DeathAddPercent;
  ItemDropData DroppedItems[4] <bgcolor=cDkYellow>;

  FSeek( startof( this ) + 140 );
  SkillNames Skills[ 6 ] <bgcolor=cDkGreen>;
  SkillNames AutoSkills[ 6 ] <bgcolor=cDkPurple>;
  FSeek( startof( this ) + 188 );
  SkillNames UniqueSkill;
  Aff affinities;
  SkAff sk_aff;
  //uint8 SymbolScaleType;
  BattleUnit QuizChoices[5];
} NKMBaseTable1 <optimize=false, read=NKMBaseTable1_Read>;

string NKMBaseTable1_Read( NKMBaseTable1 &o )
{
  local string s;
  SPrintf( s, "ID %d LV %d ( %s )",
    o.ID, o.Level, Read_SttEn( o.Stats ) );
  return s;
}
