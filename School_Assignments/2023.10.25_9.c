#include <stdio.h>

int main()
{
    int v;
    int i, j, k;

    printf("1\t\n");
    for (i = 1; i < 10; i++)
    {
        printf("1\t");
        for (j = 1; j <= i; j++)
        {
            v = 1;
            for (k = i; k > i - j; k--)
            {
                v *= k;
            }
            for (k = 1; k <= j; k++)
            {
                v /= k;
            }
            printf("%d\t", v);
        }
        printf("\n");
    }
    return 0;
}
