#include <stdio.h>
#include <math.h>

int isPerfectnum(int n);

int isPrime(int n);

int main()
{
    int i;
    for (i = 1; i <= 1000; i++)
    {
        if (isPerfectnum(i))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

int isPerfectnum(int n)
{
    int sum = 0;
    int i;
    if (isPrime(n))
    {
        return 0;
    }
    else
    {
        for (i = 1; i < n; i++)
        {
            if (!(n % i))
            {
                sum += i;
            }
        }
        if (sum == n)
        {
            return 1;
        }
    }
    return 0;
}

int isPrime(int n)
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
