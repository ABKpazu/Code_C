#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int i;
    printf("Please enter the number of integers:\n");
    scanf("%d", &n);
    int* arr = (int*)malloc(sizeof(int) * n);
    int* t = (int*)malloc(sizeof(int) * n);
    printf("Please enter integers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Please enter a value for m:\n");
    scanf("%d", &m);

    if (m > n)
    {
        printf("Error!\n");
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        t[i] = arr[i];
        arr[i] = 0;
    }
    for (i = 0; i < n - m; i++)
    {
        arr[i + m] = t[i];
    }
    for (i = 0; i < m; i++)
    {
        arr[i + n - m] = t[i];
    }

    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    free(arr);
    free(t);
    return 0;
}
