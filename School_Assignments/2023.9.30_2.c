#include <stdio.h>
#include <math.h>

int main()
{
    int h, m;
    double t, T;
    printf("Enter the value of hours:\n");
    scanf("%d", &h);
    printf("Enter the value of minutes:\n");
    scanf("%d", &m);

    t = h + m / 60.0;
    T = 4 * pow(t, 2) / (t + 2) - 20;

    if(t >= 11.20)
    {
        printf("The value of temperature is 18.00\n");
    }
    else
    {
        printf("The value of temperature is %.2f\n", T);
    }    
    return 0;
}
