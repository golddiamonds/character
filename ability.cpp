#include "ability.h"

Ability::Ability(int abilityId)
{
    // The constructor needs to have a unique ID, which will be used
    // to look up all of the ability's information from some sort of
    // database (right now just a JSON file or something)
    load_ability(abilityId);
};

void Ability::load_ability(int abilityId)
{
    // I don't know the best way to store the ability information.
    // Right now just hard code to see how this whole thing will 
    // look after we load the necessary stuff
    switch (abilityId)
    {
        case 0:
            printf("Loading magic missles...\n");
            load_magic_missles();
            break;
        default:
            printf("ERROR: abilityId %d is not recognized\n",abilityId);
    }
};

void Ability::load_magic_missles()
{
    _name = "Magic Missile";
    _level = -1; // Unknown how this will work for now
    _spell_level = 1;
    _cast_time_type = Action;
    _cast_time = 0;
    _range = 120;
    _duration = 0;
    _target_type = Creature;
    _num_targets = 3; // Max
    _is_verbal = true;
    _is_somatic = true;
    _is_material = false;
    _is_concentration = false;
    _spell_school = Evocation;
    _aoe = NoAoe;
    _aoe_range = -1;
    _saving_throw = NoneSt;
    // The following is per missle. So is this really 3d4+1? or
    // would it be better to think of this as 3 instances of one
    // ability?
    _num_damage_dice = 1;
    _damage_dice = 4;
    _base_damage = 1;
    _description = "You create three glowing darts of magical force. "
        "Each dart hits a creature of our choice that you can see "
        "within range. A dart deals 1d4 + 1 force damage to its "
        "target. The darts all strike simultaneously, and you can "
        "direct them to hit one creature or several.";
    _higher_level_description = "When you cast this spell using a "
        "spell slot of 2nd level or higher, the spell creates one "
        "more dart for each slot level above 1st.";
};

void Ability::print_ability()
{
    printf("NAME: %s\n",_name.c_str());
    printf("DESCRIPTION: %s\n",_description.c_str());
    printf("More to come...\n");

}
