/* NKMBaseTable */
/* file located at: Project\Content\Blueprints\Gamedata\BinTable\Devil\NKMBaseTable.uexp */

typedef struct
{
	int phys;
  int fire;
  int ice;
  int elec;
  int force;
  int light;
  int dark;
  int almighty;
  int ailment;
  int support;
  int heal;
  int special;
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

typedef struct
{
	Res InnateSkill;
  Res Phys;
  Res Fire;
  Res Ice;
  Res Elec;
  Res Force;
  Res Light;
  Res Dark;
  Res Almighty;
  Res Poison;
  Res Ailment1;
  Res Confusion;
  Res Charm;
  Res Sleep;
  Res Silence;
  Res Ailment2;
  Res Ailment3;
  Res ResUnused1;
  Res ResUnused2;
  Res ResUnused3;
  Res ResUnused4;
  Res Mirage;
  Res ResUnused5;
  Res ResUnused6;
  Res ResUnused7;
  Res ResUnused8;
  Res ResUnused9;
  Res ResUnused10;
  Res ResUnused11;
} Aff<optimize=false>;

typedef struct
{
  int id;
  int name_id;
  DemonRace race;

  FSeek( startof( this ) + 20 );
  int level;

  FSeek( startof( this ) + 48 );
  int hp;
  int sp;

  FSeek( startof( this ) + 64 );
  Stt stats;

  FSeek( startof( this ) + 132 );
  SkillNames skills[ 12 ];

  FSeek( startof( this ) + 276 );
  Aff affinities;
  SkAff sk_aff;
} NKMBaseTable0 <optimize=false, read=NKMBaseTable0_Read>;

string NKMBaseTable0_Read( NKMBaseTable0 &o )
{
  local string s;
  SPrintf( s, "id %d lv %d ( %s )",
    o.id, o.level, Read_Stt( o.stats ) );
  return s;
}

typedef struct
{
  int id;
  int level;
  int hp;
  int sp;
  Stt stats;
  u8 Field24;
  u8 Field25;
  u8 Field26;
  u8 Field27;
  int Field28;
  u8 Field2C;
  u8 Field2D;
  u8 Field2E;
  u8 PressTurns;

  FSeek( startof( this ) + 72 );
  int EnemyAIPtr<format=hex>;
  int unkPtr<format=hex>;

  FSeek( startof( this ) + 140 );
  SkillNames skills[ 12 ];
  Aff affinities;
  SkAff sk_aff;
} NKMBaseTable1 <optimize=false, read=NKMBaseTable1_Read>;

string NKMBaseTable1_Read( NKMBaseTable1 &o )
{
  local string s;
  SPrintf( s, "id %d lv %d ( %s )",
    o.id, o.level, Read_Stt( o.stats ) );
  return s;
}