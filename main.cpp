#include "barbarian_sheet.h"

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

    printf("\n\nMaking a BarbarianSheet\n");
    BarbarianSheet barb_0;
    barb_0.print_stats();
    barb_0.level_up();
    int stats[6] = {};
    barb_0.roll_stats(stats); // assigns inside
    barb_0.assign_stats(stats);
    barb_0.print_stats(); // Now has new stats
    return 0;
}
