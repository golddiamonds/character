#include "helper.h"
#include <string> // string
#include <stdlib.h> // srand, rand
#include <time.h> // time - for rand seed
#include <algorithm> // sort

using namespace std;

class BaseSheet
{
    protected:
        int _level;
        int _str;
        int _dex;
        int _con;
        int _int;
        int _wis;
        int _cha;
        int _speed ;
        // All of these others have enums and a string
        // The string is to print out - maybe not the best way
        Size _size;
        string _size_text;
        Alignment_0 _alignment_0;
        Alignment_1 _alignment_1;
        string _alignment_text;
        Race _race;
        string _race_text;
        DndClass _class;
        string _class_text;
        void set_class(DndClass myClass);
    public:
        BaseSheet(DndClass myClass);
        void print_stats();
        void level_up();
        virtual void check_for_abilities();
        void roll_stats(int[]);
        virtual void assign_stats(int[]);
};
