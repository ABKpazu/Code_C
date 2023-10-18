#include <stdio.h>

int main()
{
    int i1, i2, i3;

    printf("The number of numbers that meet the criteria is: %d\n", 4 * 3 * 2);
    for (i1 = 1; i1 <= 4; i1++)
    {
        for (i2 = 1; i2 <= 4; i2++)
        {
            if (i2 != i1)
            {
                for (i3 = 1; i3 <= 4; i3++)
                {
                    if (i3 != i1 && i3 != i2)
                    {
                        printf("%d", i1);
                        printf("%d", i2);
                        printf("%d\n", i3);
                    }
                }
            }
        }
    }
    return 0;
}
