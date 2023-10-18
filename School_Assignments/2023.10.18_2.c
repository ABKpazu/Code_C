#include <stdio.h>

int main()
{
    double t1 = 0, t2 = 1;
    int i;
    
    for (i = 1; i <= 1000000; i++)
    {
        if (i % 2)
        {
            t1 += 1.0 / (2 * i - 1);
        }
        else
        {
            t1 -= 1.0 / (2 * i - 1);
        }
    }
    
    for (i = 1; i <= 1000000; i++)
    {
        t2 *= 2.0 * i * 2 * i / (2 * i - 1) / (2 * i + 1);
    }
    
    if (t1 * 4 - t2 * 2 < 1e-6 && t2 * 2 - t1 * 4 < 1e-6)
    {
        printf("The approximate value of the constant pi is: %f\n", t1 * 4);
    }
    else 
    {
        printf("Error!\n");
    }
    return 0;
}
