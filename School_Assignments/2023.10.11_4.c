#include <stdio.h>

int main()
{
    double t, p1, p2, p3, w, s;
    int c;
    printf("Please enter the weight of the goods to be shipped (t) and the shipping distance (km):\n");
    scanf("%lf %lf", &w, &s);
    
    if (s < 100)
    {
        p1 = 30;
        c = 1;
    }
    else if (s < 200)
    {
        p1 = 27.5;
        c = 2;
    }
    else if (s < 300)
    {
        p1 = 25;
        c = 3;
    }
    else if (s < 400)
    {
        p1 = 22.5;
        c = 4;
    }
    else
    {
        p1 = 20;
        c = 5;
    }

    switch (c)
    {
        case 1:
        p2 = 30;
        break;
        case 2:
        p2 = 27.5;
        break;
        case 3:
        p2 = 25;
        break;
        case 4:
        p2 = 22.5;
        break;
        case 5:
        p2 = 20;
        break;
    }

    p3 = s < 100 ? 30 : s < 200 ? 27.5 : s < 300 ? 25 : s < 400 ? 22.5 : 20;

    t = p1 * w * s;

    if (p1 == p2 && p2 == p3)
    {
        printf("%f\n", t);
    }
    else
    {
        printf("Error!\n");
    }
    return 0;
}
