#include <stdio.h>
#include <math.h>

const r = 60;

int main()
{
    int v, h, m;
    printf("Enter the value of minutes:\n");
    scanf("%d", &v);

    while(v > 0)
    {
        h = v / r;
        m = v % r;

        printf("The time is %d hours and %d minutes\n", h, m);
        printf("Enter the value of minutes:\n");
        scanf("%d", &v);
    }
    return 0;
}
