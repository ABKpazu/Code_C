#include <stdio.h>
#include "graph.h"
#include "passwd.h"

int main()
{
    int i;
    char passwordSet[6] = {0};
    char passwordCheck[6] = {0};
    int selection;
    Rect_st strRec;
    Triangle_st strTri;
    Circle_st strCir;
    float girth, area;

    printf("Welcome to use the Graphic Calculation Software!\n");
    while (isPasswordSetted == false)
    {
        printf("Please set your password:\n");
        for (i = 0; i < 6; i++)
        {
            scanf("%c", &passwordSet[i]);
            if (passwordSet[i] == '\n')
            {
                passwordSet[i] = 0;
                break;
            }
        }
        setPassword(passwordSet);
    }
    printf("Please select the graph to be calculated:\n"
           "Enter \"1\" to calculate a Rectangle, OR\n"
           "Enter \"2\" to calculate a Triangle, OR\n"
           "Enter \"3\" to calculate a Circle, OR\n"
           "Enter other values to close the program.\n"
           "Please enter your selection:\n");
    scanf("%d", &selection);

    printf("Please enter password:\n");
    getchar();
    for (i = 0; i < 6; i++)
    {
        scanf("%c", &passwordCheck[i]);
    }
    if (checkPassword(passwordCheck))
    {
        switch (selection)
        {
            case 1:
            printf("Please enter the Length and Width of the rectangle:\n");
            scanf("%f %f", &strRec.width, &strRec.height);
            girth = getRectGirth(&strRec);
            area = getRectArea(&strRec);
            break;
            case 2:
            printf("Please enter the Bottom and Height of the triangle:\n");
            scanf("%f %f", &strTri.bottom, &strTri.height);
            girth = getTriangleGirth(&strTri);
            area = getTriangleArea(&strTri);
            break;
            case 3:
            printf("Please enter the Radius of the circle:\n");
            scanf("%f", &strCir.radius);
            girth = getCircleGirth(&strCir);
            area = getCircleArea(&strCir);
            break;
            default:
            goto END;
            break;
        }
        printf("The Girth of the graph is:\n%.2f\n", girth);
        printf("The Area of the graph is:\n%.2f\n", area);
    }
    else
    {
        printf("Password Error!\n");
    }
    
END:
    printf("The program has ended. Thank you for using it!\n");
    return 0;
}
