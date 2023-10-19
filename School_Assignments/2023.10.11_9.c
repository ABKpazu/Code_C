#include <stdio.h>

struct Date
{
    int y;
    int m;
    int d;
}
Yesterday, Today, Tomorrow;

int main()
{
    int maxDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("Please enter a date (year month day):\n");
    scanf("%d %d %d", &Today.y, &Today.m, &Today.d);

    if (Today.y % 400 == 0 || (Today.y % 100 != 0 && Today.y % 4 == 0))
    {
        maxDay[1] = 29;
    }

    if (maxDay[Today.m - 1] >= Today.d && Today.y > 0 && Today.m > 0 && Today.d > 0)
    {
        if (Today.d == maxDay[Today.m - 1])
        {
            if (Today.m == 12)
            {
                Tomorrow.y = Today.y + 1;
                Tomorrow.m = 1;
            }
            else
            {
                Tomorrow.y = Today.y;
                Tomorrow.m = Today.m + 1;
            }
            Tomorrow.d = 1;
            Yesterday.y = Today.y;
            Yesterday.m = Today.m;
            Yesterday.d = Today.d - 1;
        }
        else if (Today.d == 1)
        {
            if (Today.m == 1)
            {
                Yesterday.y = Today.y - 1;
                Yesterday.m = 12;
                Yesterday.d = 31;
            }
            else
            {
                Yesterday.y = Today.y;
                Yesterday.m = Today.m - 1;
                Yesterday.d = maxDay[Yesterday.m - 1];
            }
            Tomorrow.y = Today.y;
            Tomorrow.m = Today.m;
            Tomorrow.d = 2;
        }
        else
        {
            Yesterday.y = Tomorrow.y = Today.y;
            Yesterday.m = Tomorrow.m = Today.m;
            Yesterday.d = Today.d - 1;
            Tomorrow.d = Today.d + 1;
        }
        printf("The date of yesterday is %d %d %d (year month day)\n", Yesterday.y, Yesterday.m, Yesterday.d);
        printf("The date of tomorrow is %d %d %d (year month day)\n", Tomorrow.y, Tomorrow.m, Tomorrow.d);
    }
    else
    {
        printf("Invalid value!\n");
    }
    return 0;
}
