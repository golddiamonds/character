enum Size
{
    Small,
    Medium,
    Large,
    Giant
};

enum Race
{
    NoRace,
    Dwarf,
    Elf,
    Halfling,
    Human,
    Dragonborn,
    Gnome,
    HalfElf,
    HalfOrc,
    Tiefling
};

//Named DndClass rather than Class, since Class is used
//in C++ elsewhere.
enum DndClass
{
    NoClass,
    Barbarian,
    Bard,
    Cleric,
    Druid,
    Fighter,
    Monk,
    Paladin,
    Ranger,
    Rogue,
    Sorcerer,
    Warlock,
    Wizard
};

enum Alignment_0
{
    Chaotic,
    Neutral0,
    Lawful
};

enum Alignment_1
{
    Evil,
    Neutral1,
    Good
};

enum CastTimeType
{
    Action,
    BonusAction,
    Reaction
};

// Currently not used. Instead use _is_X where 
// X is verbal, somatic, or material
enum Components
{
    Verbal,
    Somatic,
    Material
};

enum TargetType
{
    Self,
    Friendly,
    Enemy,
    Creature
};

enum SpellSchool
{
    Abjuration,
    Conjuration,
    Divination,
    Enchantment,
    Evocation,
    Illusion,
    Necromacy,
    Transmutation
};

enum DamageType
{
    Piercing,
    Bludgeoning,
    Fire,
    Lightning
};

enum AreaOfEffect
{
    Cone,
    Cube,
    Cylinder,
    Line,
    Sphere,
    NoAoe
};

enum SavingThrow
{
    StrSt,
    DexSt,
    ConSt,
    IntSt,
    WisSt,
    ChaSt,
    NoneSt
};

