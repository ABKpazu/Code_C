#include <stdio.h>

int main()
{
    int arr[20] = {0, 1};
    int i;
    for (i = 2; i < 20; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    printf("The first twenty items of the sequence are:\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
