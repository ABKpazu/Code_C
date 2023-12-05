//本程序的测试环境：在gcc的c17标准下成功编译并运行
//本程序已上传 https://github.com/ABKpazu/Code_C
//本程序为原创程序，转载请标明出处
//本程序仅供学习交流使用，请勿用于商业用途

#include <stdio.h>
#include <stdlib.h>

typedef struct str_temp
{
    int num;
    struct str_temp* pPrior;
    struct str_temp* pNext;
} str;

str* List_Create(int length);
void List_Traverse(str* pHead);
int List_Search(str* pHead, int data);
void List_Insert(str* pHead, int index);
void List_Remove(str* pHead, int index);
void List_Sort(str* pHead);
void List_Destroy(str* pHead);

int main()
{
    int length = 5;  //可在此更改链表的初始长度
    str* pHead = NULL;
    int index;
    pHead = List_Create(length);
    List_Traverse(pHead);
    List_Remove(pHead, 2);  //第二个参数表示删除节点的序号
    List_Traverse(pHead);
    List_Insert(pHead, 3);  //第二个参数表示在第几个元素后面插入新节点
    List_Traverse(pHead);
    List_Sort(pHead);
    List_Traverse(pHead);
    index = List_Search(pHead, 10);  //第二个参数表示需要查找的数据，查找不到则返回“0”
    if (index)
    {
        printf("The Index of data is:\n%d\n", index);
    }
    else
    {
        printf("The data is NOT found!\n");
    }
    List_Destroy(pHead);
    pHead = NULL;
    printf("END!\n");
    return 0;
}

str* List_Create(int length)
{
    int i;
    str *pHead = NULL, *pNode = NULL, *pTail = NULL;
    for (i = 0; i < length; i++)
    {
        pNode = (str*)malloc(sizeof(str));
        scanf("%d", &pNode -> num);
        getchar();
        pNode -> pPrior = pTail;
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
    pTail -> pNext = pHead;
    pHead -> pPrior = pTail;
    return pHead;
}

void List_Traverse(str* pHead)
{
    str* pi = pHead;
    printf("Traverse Starting--------------------\n");
    printf("%d\n", pi -> num);
    for (pi = pi -> pNext; pi != pHead; pi = pi -> pNext)
    {
        printf("%d\n", pi -> num);
    }
    printf("Traverse Ending----------------------\n");
}

int List_Search(str* pHead, int data)
{
    int index = 0;
    str* pi = NULL;
    for (pi = pHead; pi != pHead || index == 0; pi = pi -> pNext)
    {
        index++;
        if (pi -> num == data)
        {
            return index;
        }
    }
    return 0;
}

void List_Insert(str* pHead, int index)
{
    int i;
    str *pi = pHead, *pNode = NULL;
    for (i = 0; i < index; i++)
    {
        if (i + 1 == index)
        {
            pNode = (str*)malloc(sizeof(str));
            scanf("%d", &pNode -> num);
            getchar();
            pNode -> pPrior = pi;
            pNode -> pNext = pi -> pNext;
            pi -> pNext -> pPrior = pNode;
            pi -> pNext = pNode;
        }
        pi = pi -> pNext;
    }
}

void List_Remove(str* pHead, int index)
{
    int i;
    str* pi = pHead;
    for (i = 0; i < index; i++)
    {
        if (i + 1 == index)
        {
            pi -> pPrior -> pNext = pi -> pNext;
            pi -> pNext -> pPrior = pi -> pPrior;
            free(pi);
        }
        pi = pi -> pNext;
    }
}

void List_Sort(str* pHead)
{
    int i, j;
    int length = 0;
    str temp;
    str* pi = NULL;
    str *pTemp1 = NULL, *pTemp2 = NULL;
    for (pi = pHead; pi != pHead || length == 0; pi = pi -> pNext)
    {
        length++;
    }
    for (i = 0; i < length; i++)
    {
        pi = pHead;
        for (j = 0; j < length - i - 1; j++)
        {
            if (pi -> num > pi -> pNext -> num)
            {
                pTemp1 = pi -> pNext;
                pTemp2 = pi -> pNext -> pNext;
                pi -> pNext -> pNext = pi -> pNext;
                pi -> pNext = pTemp2;
                temp = *pi;
                *pi = *pTemp1;
                *pTemp1 = temp;
            }
            pi = pi -> pNext;
        }
    }
}

void List_Destroy(str* pHead)
{
    str* pi = pHead;
    str* pTemp = pi;
    for (pi = pi -> pNext; pi != pHead; pi = pi -> pNext)
    {
        free(pTemp);
        pTemp = pi;
    }
    free(pTemp);
}
