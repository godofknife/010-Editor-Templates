/* PlayerGrow */
/* Project\Content\Blueprints\Gamedata\BinTable\Common\PlayerGrow.uexp */

typedef struct
{
  int _x0;
  int _x4;
  int stats[ 5 ]; // guess
} PlayerGrow0 <optimize=false, read=PlayerGrow0_Read>;

string PlayerGrow0_Read( PlayerGrow0 &o )
{
  local string s;
  SPrintf( s, "%d, %d, %d, %d, %d, %d, %d",
    o._x0, o._x4, o.stats[ 0 ], o.stats[ 1 ], o.stats[ 2 ], o.stats[ 3 ], o.stats[ 4 ] );
  return s;
}