#include <stdio.h>

int main()
{
    int n;
    int k, h, t, o;
    char* DaXie[] = {"Ling", "Yi", "Er", "San", "Si", "Wu", "Liu", "Qi", "Ba", "Jiu", "Shi", "Bai", "Qian"};
    printf("Please enter a number:\n");
    scanf("%d", &n);

    k = n / 1000;
    h = n % 1000 / 100;
    t = n % 100 / 10;
    o = n % 10;

    if (k != 0)
    {
        printf("%s%s", DaXie[k], DaXie[12]);
        if (h != 0)
        {
            printf("%s%s", DaXie[h], DaXie[11]);
            if (t != 0)
            {
                printf("%s%s", DaXie[t], DaXie[10]);
                if (o != 0)
                {
                    printf("%s", DaXie[o]);
                }
            }
            else
            {
                if (o != 0)
                {
                    printf("%s", DaXie[0]);
                    printf("%s", DaXie[o]);
                }
            }
        }
        else
        {
            if (t != 0)
            {
                printf("%s", DaXie[0]);
                printf("%s%s", DaXie[t], DaXie[10]);
                if (o != 0)
                {
                    printf("%s", DaXie[o]);
                }
            }
            else
            {
                if (o != 0)
                {
                    printf("%s", DaXie[0]);
                    printf("%s", DaXie[o]);
                }
            }
        }
    }
    else
    {
        if (h != 0)
        {
            printf("%s%s", DaXie[h], DaXie[11]);
            if (t != 0)
            {
                printf("%s%s", DaXie[t], DaXie[10]);
                if (o != 0)
                {
                    printf("%s", DaXie[o]);
                }
            }
            else
            {
                if (o != 0)
                {
                    printf("%s", DaXie[0]);
                    printf("%s", DaXie[o]);
                }
            }
        }
        else
        {
            if (t != 0)
            {
                printf("%s%s", DaXie[t], DaXie[10]);
                if (o != 0)
                {
                    printf("%s", DaXie[o]);
                }
            }
            else
            {
                printf("%s", DaXie[o]);
            }
        }
    }
    printf("\n");
    return 0;
}
