#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double l, m, n;
    double R_cos, R_sin, R_S;
    printf("Please enter the length of three sides:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (b > a)
    {
        if(c > b)
        {
            l = c, m = a, n = b;
        }
        else
        {
            l = b, m = c, n = a;
        }
    }
    else if (c > a)
    {
        l = c, m = a, n = b;
    }
    else
    {
        l = a, m = b, n = c;
    }
    if (m + n <= l || a <= 0 || b <= 0 || c <= 0)
    {
        printf("Unreasonable length!\n");
        return 0;
    }
    R_cos = (pow(m, 2) + pow(n, 2) - pow(l, 2)) / (2 * m * n);
    R_sin = sqrt(1 - pow(R_cos, 2));
    R_S = 0.5 * m * n * R_sin;

    printf("The area of this triangle is %f\n", R_S);
    if (R_sin == 1)
    {
        printf("This triangle is a right triangle\n");
    }
    else if (a == b && b == c)
    {
        printf("This triangle is an equilateral triangle\n");
    }
    else
    {
        printf("This triangle is a regular triangle\n");
    }
    return 0;
}
