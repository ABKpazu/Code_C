#include <stdio.h>

int main()
{
    int arr_1[20] = {0};
    int arr_2[20][2] = {0};
    int o = 0, e = 0;
    int i, j;
    printf("Please enter integers for array:\n");
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &arr_1[i]);
    }

    for (i = 0; i < 20; i++)
    {
        if (arr_1[i] % 2)
        {
            arr_2[o++][1] = arr_1[i];
        }
        else
        {
            arr_2[e++][0] = arr_1[i];
        }
    }

    printf("\n");
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", arr_2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
