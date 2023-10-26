#include <stdio.h>

int main()
{
    int arr[3][3] = {0};
    int count[3] = {0};
    int i, j;
    printf("Please enter integers for array:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
            if (!(arr[i][j] % 2))
            {
                count[i]++;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        printf("The total number of even numbers in the row%d is:\n", i + 1);
        printf("%d\n", count[i]);
    }
    return 0;
}
