#include <stdio.h>

int main()
{
    int r = 1;
    int n = 0;
    int i;
    int f = 1;

    while (n - 1 || f)
    {
        f = 0;
        n = r;
        for (i = 1; i < 10; i++)
        {
            if (n % 2)
            {
                f = 1;
                break;
            }
            n = n / 2 - 1;
        }
        r++;
    }
    
    printf("The total quantity picked on the first day is: %d\n", r - 1);
    return 0;
}
