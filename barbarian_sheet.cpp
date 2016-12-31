#include "barbarian_sheet.h"

BarbarianSheet::BarbarianSheet()
: BaseSheet(Barbarian) // Call the parent's constructor
{
    printf("Making a barbarian\n");
}

void BarbarianSheet::check_for_abilities()
{
    printf("You're a REAL barbarian! ");
    printf("But...still lazy devs. So no actual skills.\n");
}


void BarbarianSheet::assign_stats(int stats[])
{
    std::sort(stats,stats+6,std::greater<int>()); // descending sort in place
    printf("Called assign_stats() from BarbarianSheet.\n");
    printf("Assigning stats with following priority:\n");
    printf("STR, CON, DEX, WIS, CHA, INT\n");
    _str= stats[0];
    _con = stats[1];
    _dex = stats[2];
    _wis = stats[3];
    _cha = stats[4];
    _int = stats[5];
}
