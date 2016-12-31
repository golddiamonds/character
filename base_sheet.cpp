#include "base_sheet.h"

BaseSheet::BaseSheet(DndClass myClass)
{
    printf("STARTING UP\n");
    _level = 0;
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
    set_class(myClass);
}

void BaseSheet::print_stats()
{
    printf("==========================\n");
    printf("Level: %d\n",_level);
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

void BaseSheet::set_class(DndClass myClass)
{
    _class = myClass;
    switch (myClass)
    {
	case Barbarian: _class_text = "Barbarian"; break;
	case Bard: _class_text = "Bard"; break;
	case Cleric: _class_text = "Cleric"; break;
	case Druid: _class_text = "Druid"; break;
	case Fighter: _class_text = "Fighter"; break;
	case Monk: _class_text = "Monk"; break;
	case Paladin: _class_text = "Paladin"; break;
	case Ranger: _class_text = "Ranger"; break;
	case Rogue: _class_text = "Rogue"; break;
	case Sorcerer: _class_text = "Sorcerer"; break;
	case Warlock: _class_text = "Warlock"; break;
	case Wizard: _class_text = "Wizard"; break;
        case NoClass: _class_text = "NoClass"; break;
	default: _class_text = "NoClass"; break;
    }
}

void BaseSheet::level_up()
{
    _level += 1;
    printf("DING!!!\n");
    printf("You are now level %d. Congratulations!\n",_level);
    // Now this calls BaseSheet::check_for_abilities() or calls
    // BarbarianSheet::check_for_abilities() since I used virtual
    // in the declaration
    check_for_abilities();
}

void BaseSheet::check_for_abilities()
{
    // When leveling up, this function will check for new abilities
    // or skills that depend on the DND class of the character.
    // I fully expect this method to be overloaded by each DND class
    // that inherits from "base_sheet".
    if ( _class == NoClass )
    {
        printf("You don't even have a class!");
	printf(" You won't ever learn new abilities.\n");
    }
    else
    {
        //Default print statement here warning for devs to overload this
	printf("You are a %s.",_class_text.c_str());
	printf(", but the devs are lazy and haven't given you abilities yet.\n");
	printf("Ask them for OP powers or something.\n");
    }
}
