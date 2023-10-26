#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_a, n_b;
    int i, j;
    printf("Please enter the number of integers in array \"a\":\n");
    scanf("%d", &n_a);
    printf("Please enter the number of integers in array \"b\":\n");
    scanf("%d", &n_b);
    int* arr_c = (int*)malloc(sizeof(int) * (n_a + n_b));
    printf("Please enter integers for array \"a\":\n");
    for (i = 0; i < n_a; i++)
    {
        scanf("%d", &arr_c[i]);
    }
    printf("Please enter integers for array \"b\":\n");
    for (i = n_a; i < n_a + n_b; i++)
    {
        scanf("%d", &arr_c[i]);
    }

    for (i = 0; i < n_a + n_b; i++)
    {
        for (j = 0; j < n_a + n_b - i; j++)
        {
            if (arr_c[j] > arr_c[j + 1])
            {
                int t = arr_c[j];
                arr_c[j] = arr_c[j + 1];
                arr_c[j + 1] = t;
            }
        }
    }

    printf("\n");
    for (i = 0; i < n_a + n_b; i++)
    {
        printf("%d\n", arr_c[i]);
    }
    free(arr_c);
    return 0;
}
