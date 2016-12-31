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
