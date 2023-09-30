#include <stdio.h>
#include <math.h>

int main()
{
    double h, i;
    int f;
    printf("Enter a height in centimeters:\n");
    scanf("%lf", &h);

    while(h > 0)
    {
        f = h / 30.48;
        i = (h / 30.48 - f) * 12;

        printf("%.1f cm = %d feet, %.1f inches\n", h, f, i);
        printf("Enter a height in centimeters (<=0 to quit):\n");
        scanf("%lf", &h);
    }
    printf("bye\n");
    return 0;
}
