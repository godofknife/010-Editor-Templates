/* EncountData */
/* file located at: Project\Content\Blueprints\Gamedata\BinTable\Map\EncountData.uexp */

typedef struct
{
  u16 EncounterID;
  u16 Chance;
} EncounterVariant<optimize=false, read=EncounterVariant_Read>;

string EncounterVariant_Read( EncounterVariant &o )
{
  local string s;

  if ( o.EncounterID == 0 )
  {
    s = "N/A";
  }
  else SPrintf( s, "Encounter %d, %d%% chance", o.EncounterID, o.Chance ); 

  return s;
}

typedef struct
{
  u32 Flags;
  BattleUnit Symbol;
  u16 Unk3;
  u16 Unk4;
  u16 Unk5;
  u16 Unk6;
  u16 Unk7;
  u16 Unk8;
  u16 Unk9;
  u16 Unk10;
  u16 Unk11;
  u16 Unk12;
  u16 Unk13;
  u16 Unk14;
  u16 Unk15;
  u16 Unk16;
  u16 Unk17;
  EncounterVariant PossibleEncounter[15];
} EncountData0 <optimize=false, read=EncountData0_Read>;

string EncountData0_Read( EncountData0 &o )
{
  local string s;

  local BattleUnit unitID = o.Symbol;
  if ( unitID == 0 )
  {
    s = "Dummy Encounter";
  }
  else SPrintf( s, "Symbol Encounter %s", EnumToString( unitID ) ); 

  return s;
}

typedef struct
{
  u16 flags <format=hex>; // guess
  BGM_ID BGM;
  BattleUnit demons[ 6 ];
  short _[ 6 ]; // guess
} EncountData1 <optimize=false, read=EncountData1_Read>;

string EncountData1_Read( EncountData1 &o )
{
  local string s;
  local int i;

  SPrintf( s, "<%04x> <BGM %d> %03d", o.flags, o.BGM, o.demons[ 0 ] ); 
  for ( i = 1; i < 5; i++ ) SPrintf( s, "%s, %03d", s, o.demons[ i ] );

  return s;
}