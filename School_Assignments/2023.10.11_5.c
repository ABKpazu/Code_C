#include <stdio.h>

int main()
{
    char ch;
    printf("Please enter a character:\n");
    scanf("%c", &ch);
    
    if (ch > 47 && ch < 58)
    {
        printf("Digit\n");
    }
    else if (ch > 64 && ch < 91)
    {
        printf("Capital letter\n");
    }
    else if (ch > 96 && ch < 123)
    {
        printf("Lowercase letter\n");
    }
    else
    {
        printf("Other characters\n");
    }
    return 0;
}
