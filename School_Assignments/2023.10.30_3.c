#include <stdio.h>

struct Date
{
    int y;
    int m;
    int d;
}
;

int maxDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void isLeap(struct Date d);

int isValid(struct Date d);

int countDays(struct Date d);

int main()
{
    struct Date Today;
    printf("Please enter a date (year month day):\n");
    scanf("%d %d %d", &Today.y, &Today.m, &Today.d);
    
    if (isValid(Today))
    {
        printf("The ordinal of this date in that year is:\n");
        printf("%d\n", countDays(Today));
    }
    return 0;
}

void isLeap(struct Date d)
{
    if (d.y % 400 == 0 || (d.y % 100 != 0 && d.y % 4 == 0))
    {
        maxDay[1] = 29;
    }
}

int isValid(struct Date d)
{
    isLeap(d);
    if (maxDay[d.m - 1] >= d.d && d.y > 0 && d.m > 0 && d.d > 0)
    {
        return 1;
    }
    printf("Invalid value!\n");
    return 0;
}

int countDays(struct Date d)
{
    int count = 0;
    int i;
    for (i = 1; i < d.m; i++)
    {
        count += maxDay[i - 1];
    }
    count += d.d;
    return count;
}
