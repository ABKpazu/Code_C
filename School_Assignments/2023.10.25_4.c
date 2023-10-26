#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n;
    int a = 0, d = 0, s = 0, o = 0;
    int i;
    printf("Please enter the number of characters:\n");
    scanf("%d", &n);
    char* arr = (char*)malloc(sizeof(char) * n);
    printf("Please enter characters:\n");
    for (i = 0; i < n; i++)
    {
        getchar();
        scanf("%c", &arr[i]);
        if (isalpha(arr[i]))
        {
            a++;
        }
        else if (isdigit(arr[i]))
        {
            d++;
        }
        else if (isspace(arr[i]))
        {
            s++;
        }
        else
        {
            o++;
        }
    }

    printf("The number of letters, numbers, spaces, and other characters is:\n");
    printf("%d\n%d\n%d\n%d\n", a, d, s, o);
    free(arr);
    return 0;
}
