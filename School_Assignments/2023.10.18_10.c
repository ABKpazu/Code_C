#include <stdio.h>

int main()
{
    int n[5 + 1] = {0};
    int f;
    int sum = 0;
    int i;
    printf("Please enter a number:\n");
    for (i = 0; i < 5 + 1; i++)
    {
        if (i > 5 || (n[i] = getchar()) == '\n')
        {
            f = i;
            break;
        }
        n[i] -= 48;
    }

    for (i = 0; i < f; i++)
    {
        if (i)
        {
            printf(" + %d", n[i]);
        }
        else
        {
            printf("%d", n[i]);
        }
        sum += n[i];
    }
    printf(" = %d\n", sum);
    return 0;
}
