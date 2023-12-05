//本程序的测试环境：在gcc的c17标准下成功编译并运行
//本程序已上传 https://github.com/ABKpazu/Code_C
//本程序为原创程序，转载请标明出处
//本程序仅供学习交流使用，请勿用于商业用途

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* SPACE = " ";

typedef struct str_temp
{
    char name[20];
    struct str_temp* pPrior;
    struct str_temp* pNext;
} str;

str* List_Create(int length);
void List_Add(str* pHead, char* name);
void List_Traverse(str* pHead);

int main()
{
    char name[20] = {0};  //输入的名字长度请小于18
    int length = 5;  //可以在这里修改初始链表长度，最少为1
    str* pHead = NULL;
    pHead = List_Create(length);  //注意在初始链表中不要有重复的名字，请不要给这个脆弱的程序输入中文！！！
    //以上是原始链表的初始化

    scanf("%s", name);  //请不要给这个脆弱的程序输入中文！！！
    getchar();
    strcat(name, SPACE);
    while (*name != '0')
    {
        List_Add(pHead, name);
        scanf("%s", name);  //请不要给这个脆弱的程序输入中文！！！
        getchar();
        strcat(name, SPACE);
    }
    //以上是增加新的学生节点，输入“0”可以退出循环

    List_Traverse(pHead);
    //以上是遍历链表，可以验证结果

    return 0;
}

str* List_Create(int length)
{
    int i;
    str *pHead = NULL, *pNode = NULL, *pTail = NULL;
    for (i = 0; i < length; i++)
    {
        pNode = (str*)malloc(sizeof(str));
        scanf("%s", (char *)&pNode -> name);
        getchar();
        strcat(pNode -> name, SPACE);
        pNode -> pNext = NULL;
        if (pHead == NULL)
        {
            pHead = pNode;
            pTail = pNode;
        }
        else
        {
            pTail -> pNext = pNode;
            pTail = pTail -> pNext;
        }
    }
    return pHead;
}

void List_Add(str* pHead, char* name)
{
    str *pi = NULL, *pNode = NULL;
    char mark[2] = "A";
    for (pi = pHead; pi; pi = pi -> pNext)
    {
        if (strncmp(pi -> name, name, strlen(name) - 1) == 0)
        {
            if (pi -> name[strlen(pi -> name) - 1] == ' ')
            {
                strcat(pi -> name, mark);
            }
            mark[0]++;
        }
        if (pi -> pNext == NULL)
        {
            pNode = (str*)malloc(sizeof(str));
            strcpy(pNode -> name, name);
            if (mark[0] > 'A')
            {
                strcat(pNode -> name, mark);
            }
            pNode -> pNext = NULL;
            pi -> pNext = pNode;
            break;
        }
    }
}

void List_Traverse(str* pHead)
{
    str* pi = NULL;
    printf("Traverse Starting--------------------\n");
    for (pi = pHead; pi; pi = pi -> pNext)
    {
        printf("%s\n", pi -> name);
    }
    printf("Traverse Ending----------------------\n");
}
