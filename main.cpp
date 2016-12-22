#include "base_sheet.h"

using namespace std;

int main()
{
    printf("Making a default base sheet\n");
    BaseSheet bs_0(NoClass);
    bs_0.print_stats();
    bs_0.level_up();

    printf("\n\nMaking a Barbarian base sheet\n");
    BaseSheet bs_1(Barbarian);
    bs_1.print_stats();
    bs_1.level_up();
    return 0;
}
