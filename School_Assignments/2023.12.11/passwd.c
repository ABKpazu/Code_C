#include <stdio.h>
#include <stdbool.h>

bool isPasswordSetted = false;
static char password[6];

void setPassword(char* setpass)
{
    int i;
    int length = 0;
    for (i = 0; i < 6; i++)
    {
        if (setpass[i])
        {
            length++;
        }
    }
    if (length == 6)
    {
        for (i = 0; i < 6; i++)
        {
            password[i] = setpass[i];
        }
        isPasswordSetted = true;
    }
    else
    {
        printf("The password must be 6 letters!\n");
        isPasswordSetted = false;
    }
}

bool checkPassword(char* inpass)
{
    int i;
    for (i = 0; i < 6; i++)
    {
        if (inpass[i] != password[i])
        {
            return false;
        }
    }
    return true;
}
