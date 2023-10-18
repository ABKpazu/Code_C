#include <stdio.h>

int main()
{
    int n, tk, k, h, t, o;
    printf("Please enter a number:\n");
    scanf("%d", &n);

    tk = n / 10000;
    k = n % 10000 / 1000;
    h = n % 1000 / 100;
    t = n % 100 / 10;
    o = n % 10;

    if (tk)
    {
        printf("%d + %d + %d + %d + %d = %d\n", tk, k, h, t, o, tk + k + h + t + o);
    }
    else if (k)
    {
        printf("%d + %d + %d + %d = %d\n", k, h, t, o, tk + k + h + t + o);
    }
    else if (h)
    {
        printf("%d + %d + %d = %d\n", h, t, o, tk + k + h + t + o);
    }
    else if (t)
    {
        printf("%d + %d = %d\n", t, o, tk + k + h + t + o);
    }
    else
    {
        printf("%d = %d\n", o, tk + k + h + t + o);
    }
    return 0;
}
