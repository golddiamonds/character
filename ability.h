// I don't know how to get the includes working as expected
// This depends on helper.h, <string>, but those are already included
// in base_sheet.h.
#ifndef HELPER_H
#define HELPER_H
#include "helper.h"
#endif

#include <string>

// Note that I plan on using this "Ability" class for most things that could
// be considered "actions" or "abilities" or "spells" as of now.
class Ability
{
    protected:
        std::string _name;
        int _level; // Level needed to aquire/use - depends on class/etc
        int _spell_level; // Level of a spell (i.e. min slot level)
        CastTimeType _cast_time_type; //Action, BonusAction, Reaction
        int _cast_time; // In seconds, 0 for Action/Bonus/Reaction
        int _range; // 0 = touch/self
        int _duration; // In seconds
        TargetType _target_type;
        int _num_targets;
        // Could also use enum Components?
        bool _is_verbal;
        bool _is_somatic;
        bool _is_material;
        bool _is_concentration;
        SpellSchool _spell_school;
        AreaOfEffect _aoe;
        int _aoe_range;
        SavingThrow _saving_throw;
        std::string _description;
        // Higher level needs to be converted into values to be used
        std::string _higher_level_description;
        // 2d4 + 1 =>
        //     _num_damage_dice = 2
        //     _damage_dice = 4
        //     _base_damage = 1
        int _num_damage_dice;
        int _damage_dice; // num sides
        int _base_damage;
    public:
        Ability(int abilityId);
        void load_ability(int abilityId);
        void load_magic_missles();
        void print_ability();
};
