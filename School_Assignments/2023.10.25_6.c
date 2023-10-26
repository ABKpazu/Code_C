#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i, j, k;
    printf("Please enter the number of integers:\n");
    scanf("%d", &n);
    int* arr = (int*)malloc(sizeof(int) * n);
    printf("Please enter integers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n");
    for (i = 0; i < n; i++)
    {
        if (i)
        {
            printf(", %d", arr[i]);
        }
        else
        {
            printf("%d", arr[i]);
        }
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                for (k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
            }
        }
    }
    printf("\n");
    free(arr);
    return 0;
}
