#include <stdio.h>
#include <math.h>

int main()
{
    double h, w;
    double t;
    printf("Please enter height (m) and weight (kg):\n");
    scanf("%lf %lf", &h, &w);
    
    t = w / pow(h, 2);
    
    if (t < 18)
    {
        printf("Thin\n");
    }
    else if (t <= 25)
    {
        printf("Normal weight\n");
    }
    else if (t < 27)
    {
        printf("Overweight\n");
    }
    else
    {
        printf("Obesity\n");
    }
    return 0;
}
