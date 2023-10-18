#include <stdio.h>
#include <math.h>

int isPrime(int n);

int main()
{
    int n;
    int i;
    int count = 1;
    printf("Please enter a positive integer:\n");
    scanf("%d", &n);

    if (isPrime(n))
    {
        printf("This number is a prime number.\n");
    }
    else
    {
        printf("%d = ", n);
        for (i = 2; i <=n; i++)
        {
            if (count && !(n % i))
            {
                printf("%d", i);
                n /= i;
                i = 1;
                count = 0;
            }
            else if (!(n % i))
            {
                printf(" * %d", i);
                n /= i;
                i = 1;
            }
        }
    }
    printf("\n");
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
