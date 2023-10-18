#include <stdio.h>

int main()
{
    int f0 = 0, f1 = 1;
    double sum = 0;
    int t;
    int i = 0;
    
    while (i <= 20)
    {
        t = f1;
        f1 += f0;
        f0 = t;
        i++;
        sum += (double)f1 / f0;
    }
    printf("The sum of the first twenty items in this sequence is: %f\n", sum - 1);
    return 0;
}
