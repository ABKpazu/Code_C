#include <stdio.h>
#include <math.h>

int main()
{
    int a1, a2, h1, m1, s1, h2, m2, s2;
    double v;
    int t;
    printf("Enter the starting mileage:\n");
    scanf("%d", &a1);
    printf("Enter the start time(hours, minutes, seconds):\n");
    scanf("%d %d %d", &h1, &m1, &s1);
    printf("Enter the ending mileage:\n");
    scanf("%d", &a2);
    printf("Enter the end time(hours, minutes, seconds):\n");
    scanf("%d %d %d", &h2, &m2, &s2);

    t = (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);
    v = (a2 - a1) / ((h2 - h1) + (m2 - m1) / 60.0 + (s2 - s1) / 3600.0);

    printf("The car has traveled %d kilometers\n", a2 - a1);   
    printf("The time consumed is %d hours, %d minutes, and %d seconds\n", t / 3600, t % 3600 / 60, t % 60);  
    printf("The average speed is %f Km/h\n", v);  
    return 0;
}
