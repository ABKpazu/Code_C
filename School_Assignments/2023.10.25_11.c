#include <stdio.h>

void arraySort(double *arr, int n);

int main()
{
    double arr[5][3] = {0};
    double ave_course[3] = {0}, ave_student[5] = {0};
    int i, j;
    for (i = 0; i < 5; i++)
    {
        printf("Please enter the grade of the student %d:\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            ave_course[j] += arr[i][j];
            if (i == 5 - 1)
            {
                ave_course[j] /= 5;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            ave_student[j] += arr[j][i];
            if (i == 3 - 1)
            {
                ave_student[j] /= 3;
            }
        }
    }
    arraySort(ave_course, 3);
    arraySort(ave_student, 5);

    printf("Output 1:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%5.1f ", ave_course[i]);
    }
    printf("\n");
    printf("Output 2:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%5.1f ", ave_student[5 - 1 - i]);
    }
    printf("\n");
    return 0;
}

void arraySort(double *arr, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}
