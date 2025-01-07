/* UniteTable */
/* file located at Project\Content\Blueprints\Gamedata\BinTable\Unite\UniteCombineTable.uexp */

typedef struct
{
  byte race1;
  byte race2;
  byte result;

  byte _;
} UniteTable1 <optimize=false, read=UniteTable1_Read>;

string UniteTable1_Read( UniteTable1 &o )
{
  local string s;
  SPrintf( s, "%d, %d, %d", o.race1, o.race2, o.result );
  return s;
}