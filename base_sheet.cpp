#include "base_sheet.h"

BaseSheet::BaseSheet()
{
	printf("STARTING UP\n");
    _str = 8;
    _dex = 8;
    _con = 8;
    _int = 8;
    _wis = 8;
    _cha = 8;
    _speed = 25;
    _size = Medium;
    _size_text = "Medium";
    _alignment_0 = Neutral0;
    _alignment_1 = Neutral1;
    _alignment_text = "Neutral/Neutral";
    _race = NoRace;
    _race_text = "NoRace";
    _class = NoClass;
    _class_text = "NoClass";
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
	printf("Wisdom: %d\n",_wis);
	printf("Charisma: %d\n",_cha);
	printf("\n");
	printf("SECONDARY ATTRIBUTES:\n");
	printf("Speed: %d\n",_speed);
	printf("Alignment: %s\n",_alignment_text.c_str());
    printf("Size: %s\n",_size_text.c_str());
	printf("==========================\n");
}
