#include <stdio.h>

int main()
{
    int a, b, c;
    int l, m, n;
    printf("Please enter three integers\n");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a >= b && b >= c)
    {
        l = a;
        m = b;
        n = c;
    }
    else if (a >= c && c >= b)
    {
        l = a;
        m = c;
        n = b;
    }
    else if (b >= a && a >= c)
    {
        l = b;
        m = a;
        n = c;
    }
    else if (b >= c && c >= a)
    {
        l = b;
        m = c;
        n = a;
    }
    else if (c >= b && b >= a)
    {
        l = c;
        m = b;
        n = a;
    }
    else
    {
        l = c;
        m = a;
        n = b;
    }
    
    printf("%d %d %d\n", n, m, l);
    return 0;
}
