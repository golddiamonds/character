#include "helper.h"
#include <string>

using namespace std;

class BaseSheet
{
	private:
		int _str = 8;
		int _dex = 8;
		int _con = 8;
		int _int = 8;
		int _wis = 8;
		int _cha = 8;
		int _speed = 25;
		// All of these others have enums and a string
		// The string is to print out - maybe not the best way
		Size _size = Medium;
		string _size_text = "Medium";
		Alignment_0 _alignment_0 = Neutral0;
		Alignment_1 _alignment_1 = Neutral1;
		string _alignment_text = "Neutral/Neutral";
		Race _race = NoRace;
		string _race_text = "NoRace";
		DndClass _class = NoClass;
		string _class_text = "NoClass";
	public:
		BaseSheet();
		void print_stats();
};
