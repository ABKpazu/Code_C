#include <stdio.h>

int main()
{
    int y, m, d;
    int maxDay[12] = {31, 28, 31, 30, 31 ,30 ,31, 31, 30, 31, 30, 31};
    printf("Please enter a date (year month day):\n");
    scanf("%d %d %d", &y, &m, &d);

    if (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0))
    {
        maxDay[1] = 29;
    }

    if (maxDay[m - 1] >= d && y > 0 && m > 0 && d > 0)
    {
        printf("Valid\n");
    }
    else
    {
        printf("Invalid\n");
    }
    return 0;
}
