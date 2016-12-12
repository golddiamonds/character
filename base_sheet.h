#include "helper.h"
#include <string>

using namespace std;

class BaseSheet
{
	private:
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
	public:
		BaseSheet();
		void print_stats();
};
