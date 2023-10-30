#include <stdio.h>

int Combine(int n, int m);

int main()
{
    int n, m;
    printf("Please enter values for n and m:\n");
    scanf("%d %d", &n, &m);
    
    printf("The combinatorial number is:\n");
    printf("%d\n", Combine(n, m));
    return 0;
}

int Combine(int n, int m)
{
    int ret = 1;
    int i;
    for (i = n; i > n - m; i--)
    {
        ret *= i;
    }
    for (i = m; i > 0; i--)
    {
        ret /= i;
    }
    return ret;
}
