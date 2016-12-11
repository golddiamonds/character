#include "base_sheet.h"

BaseSheet::BaseSheet()
{
	printf("STARTING UP\n");
}

void BaseSheet::print_stats()
{
	printf("==========================\n");
	printf("RACE: %s\n",_race_text.c_str());
	printf("CLASS: %s\n",_class_text.c_str());
	printf("\n");
	printf("PRIMARY ATTRIBUTES:\n");
	printf("Strength: %d\n",_str);
	printf("Dexterity: %d\n",_dex);
	printf("Constitution: %d\n",_con);
	printf("Intelligence: %d\n",_int);
	printf("Wisdom: %d\n",_int);
	printf("Charisma: %d\n",_cha);
	printf("\n");
	printf("SECONDARY ATTRIBUTES:\n");
	printf("Speed: %d\n",_speed);
	printf("Alignment: %s\n",_alignment_text.c_str());
	printf("==========================\n");
}
