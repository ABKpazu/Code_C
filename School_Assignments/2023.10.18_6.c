#include <stdio.h>
#include <math.h>

int isPrime(int n);

int main()
{
    int n, m, num;
    int i;
    printf("Please enter a positive integer:\n");
    scanf("%d", &n);

    if (isPrime(n))
    {
        printf("This number is a prime number.\n");
    }
    else
    {
        printf("This number is NOT a prime number.\n");
    }

    printf("Please enter values for n and m:\n");
    scanf("%d %d", &n, &m);

    for (i = n; i <=m; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n", i);
            num++;
        }
    }
    printf("The number of prime numbers is: %d\n", num);
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
