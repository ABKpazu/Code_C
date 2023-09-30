#include <stdio.h>
#include <math.h>

int main()
{
    const double c1 = 5.0 / 9.0;
    const double c2 = 32.0;
    const double k1 = 273.16;
    double f, c, k;
    int n = 1;
    printf("Enter a Fahrenheit temperature:\n");
    scanf("%lf", &f);

    while(n == 1)
    {
        c = c1 * (f - c2);
        k = c + k1;

        printf("Fahrenheit temperature is %.2f\n", f);
        printf("Celsius temperature is %.2f\n", c);
        printf("Kelvin temperature is %.2f\n", k);
        printf("Enter a Fahrenheit temperature:\n");
        n = scanf("%lf", &f);
    }
    return 0;
}
