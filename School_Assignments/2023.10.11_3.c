#include <stdio.h>

int main()
{
    int choose;
    char g;
    double s;
    printf("Enter '1' to convert the grade level to a score range;\n");
    printf("Alternatively, enter '2' to convert the score to a grade level:\n");
    scanf("%d", &choose);
    
    if (choose == 1)
    {
        printf("Please enter the grade level:\n");
        scanf(" %c", &g);
        
        switch (g)
        {
            case 65:
            ;
            case 97:
            printf("[85, 100]\n");
            break;
            case 66:
            ;
            case 98:
            printf("[70, 85)\n");
            break;
            case 67:
            ;
            case 99:
            printf("[60, 70)\n");
            break;
            case 68:
            ;
            case 100:
            printf("[0, 60]\n");
            break;
        }
    }
    else if (choose == 2)
    {
        printf("Please enter the score:\n");
        scanf("%lf", &s);
        
        if (s >= 85)
        {
            printf("A\n");
        }
        else if (s >= 70)
        {
            printf("B\n");
        }
        else if (s >= 60)
        {
            printf("C\n");
        }
        else if (s >= 0)
        {
            printf("D\n");
        }
    }
    return 0;
}
