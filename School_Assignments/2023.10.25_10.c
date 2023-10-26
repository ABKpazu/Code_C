#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    int rowMax, isSaddle;
    int Exist = 0;
    int i, j, k;
    printf("Please enter the number of digits in the row:\n");
    scanf("%d", &row);
    printf("Please enter the number of digits in the column:\n");
    scanf("%d", &col);
    int** arr = (int**)malloc(sizeof(int*) * row);
    for (i = 0; i < row; i++)
    {
        arr[i] = (int*)malloc(sizeof(int) * col);
    }
    printf("Please enter integers:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The coordinates of the saddle points are:\n");
    for (i = 0; i < row; i++)
    {
        rowMax = arr[i][0];
        for (j = 0; j < col; j++)
        {
            if (arr[i][j] > rowMax)
            {
                rowMax = arr[i][j];
            }
        }
        for (j = 0; j < col; j++)
        {
            if (arr[i][j] == rowMax)
            {
                isSaddle = 1;
                for (k = 0; k < row; k++)
                {
                    if (arr[k][j] < rowMax)
                    {
                        isSaddle = 0;
                    }
                }
                if (isSaddle)
                {
                    printf("(%d, %d)\n", i, j);
                    Exist = 1;
                }
            }
        }
    }
    if (!Exist)
    {
        printf("Saddle point does NOT exist!\n");
    }
    for (i = 0; i < row; i++)
    {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
