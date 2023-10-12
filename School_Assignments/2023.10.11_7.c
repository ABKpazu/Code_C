#include <stdio.h>

int main()
{
    double a, b;
    char ch;
    char i = 0;

    do
    {
        printf("Please enter an expression:\n");
        scanf("%lf %c %lf", &a, &ch, &b);

        if (ch == '+')
        {
            printf("%f + %f = %f\n", a, b, a + b);
        }
        else if (ch == '-')
        {
            printf("%f - %f = %f\n", a, b, a - b);
        }
        else if (ch == '*')
        {
            printf("%f * %f = %f\n", a, b, a * b);
        }
        else if (ch == '/')
        {
            printf("%f / %f = %f\n", a, b, a / b);
        }
        printf("Do you want to continue? (Y/N)\n");
        scanf(" %c", &i);
    }
    while (i == 89 || i == 121);
    return 0;
}
