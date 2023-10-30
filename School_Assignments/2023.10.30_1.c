#include <stdio.h>
#include <math.h>

int Goldbach(int m);

int Prime(int n);

int main()
{
    int m;
    int f = 1;
    while (f)
    {
        printf("Please enter an integer:\n");
        scanf("%d", &m);
        f = !Goldbach(m);
        if (f)
        {
            printf("The number does not meet the requirements!\n");
        }
    }
    return 0;
}

int Goldbach(int m)
{
    int i;
    if (m < 6 || m % 2)
    {
        return 0;
    }
    else
    {
        for (i = 1; i < m / 2 + 1; i++)
        {
            if (Prime(i) && Prime(m - i))
            {
                printf("%d = %d + %d\n", m, i, m - i);
                return 1;
            }
        }
    }
    return 0;
}

int Prime(int n)
{
    int i;
    if (n == 1)
    {
        return 0;
    }
    for (i = 2; i <= sqrt(n); i++)
    {
        if (!(n % i))
        {
            return 0;
        }
    }
    return 1;
}
