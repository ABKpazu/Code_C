#include <stdio.h>

int main()
{
    int m, n, gcd1, gcd2, t;
    int i;
    printf("Please enter two positive integers:\n");
    scanf("%d %d", &m, &n);
    
    for (i = 1; i <= m && i <= n; i++)
    {
        if (!(m % i) && !(n % i))
        {
            gcd1 = i;
        }
    }
    
    while (m && n)
    {
        m %= n;
        t = m;
        m = n;
        n = t;
    }
    if (m)
    {
        gcd2 = m;
    }
    else
    {
        gcd2 = n;
    }
    
    if (gcd1 == gcd2)
    {
        printf("%d\n", gcd1);
    }
    else
    {
        printf("Error!\n");
    }
    return 0;
}
