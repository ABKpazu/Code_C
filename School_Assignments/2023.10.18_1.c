#include <stdio.h>

int main()
{
    int n, m;
    int f, sum = 0;
    double e = 1, x = 1, v = 1, t = 1;
    int i;
    printf("Please enter a positive integer n:\n");
    scanf("%d", &n);
    
    for (i = 1, f = 1; i <= n; i++)
    {
        f *= i;
    }
    
    printf("%d\n", f);
    
    printf("Please enter a positive integer m:\n");
    scanf("%d", &m);
    
    for (i = 1, f = 1; i <= m; i++)
    {
        f *= i;
        sum += f;
    }
    
    printf("%d\n", sum);
    
    for (i = 1, t = 1; i <= 1000; i++)
    {
        t /= i;
        e += t;
    }
    
    printf("The approximate value of the constant e is: %f\n", e);
    
    printf("Please enter a value for x:\n");
    scanf("%lf", &x);
    
    for (i = 1, t = 1; i <= 1000; i++)
    {
        t /= i;
        t *= x;
        v += t;
    }
    
    printf("%f\n", v);
    return 0;
}
