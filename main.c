#include <stdio.h>
#include <stdlib.h>

/*This program takes a value in minutes via terminal,
and convert this value to days and years format.

The program should display both the inputed and the converted value.

*/

int main()
{
    int minutes = 0;
    double minutesInDay = 1440.0;
    double minutesInYear = 525600.0;
    double days = 0.0;
    double years = 0.0;

    printf("Please, enter a integer value\n");
    scanf("%d", &minutes);

    days = (double)minutes / minutesInDay;
    years = ((double)minutes / minutesInYear);

    printf("%d is approximately %lf Days, %lf Years", minutes, days, years);
    return 0;
}
