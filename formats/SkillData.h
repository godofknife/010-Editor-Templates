/* Skill Data */
/* file located at: Project\Content\Blueprints\Gamedata\BinTable\Battle\Skill\SkillData.uexp */

typedef struct
{
	byte skillString[32];
  	uint32 SkillID;
	uint32 pad;
	short MPCost;//0x28
	byte SkillType; //(0 physical, 1 Magical, 2 Infliction,3 Healing, 4 Buff, 7 Summon demon from stock, 8 Etc effect, 9 Reinforcement? D Level based, E Current Hp ratio, F ???On two unused skills)
	byte Element;
	uint inheritFlags; //could be inherit flags?
	uint32 unk;//0x30
	uint32 unk;
	int unk;
	byte unk; //0x3c
	byte unk;
	byte unk;
  	byte unk;
	byte unk; //0x40
	byte unk;
	byte AOEType; // 0 = Single target, 1 = AOE, 3 = all party members, 4 = Check Waters of Youth  6 = Random Target, 7 = Stock only,  8 = All party members including stock
	byte Target; // 2 = Enemy, 3 = Ally, 
	byte MinHits;
	byte MaxHits;
	ubyte CritRate;
	byte unk;
	int BasePower; //0x48
	uint32 unk;
	uint32 unk;
	short Accuracy; // 0x54
	byte PoisonFlag;
	byte unusedAilment1;
	byte ConfuseFlag;
	byte CharmFlag;
	byte SleepFlag;
	byte MuteFlag;
	byte unusedAilment2;
	byte unusedAilment3;
	byte MirageFlag;
	byte unk1[10];
	uint32 AilmentChance;
	uint32 unk2[4];//0x6c
	byte unk3[67];//0x7c
} SkillData0 <optimize=false, read=SkillData0_Read>;

string SkillData0_Read( SkillData0 &o )
{
  local string s;
  local SkillNames SkillName = o.SkillID;
  SPrintf( s, "%s", EnumToString( SkillName ) );
  return s;
}