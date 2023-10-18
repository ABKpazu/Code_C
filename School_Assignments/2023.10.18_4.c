#include <stdio.h>

int main()
{
    int f0 = 0, f1 = 1;
    int t;
    int i = 0;
    printf("The first twenty items of the sequence are:\n");
    
    printf("0\t");
    while (i < 20 - 1)
    {
        t = f1;
        f1 += f0;
        f0 = t;
        i++;
        if (!(i % 8))
        {
            printf("\n"); 
        }
        printf("%d\t", f0);
    }
    printf("\n");
    return 0;
}
