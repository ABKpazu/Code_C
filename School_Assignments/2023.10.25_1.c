#include <stdio.h>

int main()
{
    int arr[10] = {0};
    int sum = 0, count = 0;
    int i;
    printf("Please enter ten integers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    for (i = 0; i < 10; i++)
    {
        if (arr[i] >= sum / 10.0)
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
