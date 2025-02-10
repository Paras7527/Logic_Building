#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;
void push(PPNODE head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    if (*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}
int pop(PPNODE head)
{
    PNODE temp = NULL;
    int no = -1;
    if (*head == NULL)
    {
        printf("Stack is Empty\n");
        return -1;
    }
    else if ((*head)->next == NULL)
    {
        no = (*head)->data;
        free(*head);
        *head = NULL;
    }
    else
    {
        no = (*head) -> data;
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
    return no;
}
void Display(PNODE head)
{
    printf("Elements in the Stack :\n");
    while (head!= NULL)
    {
        printf("|%d|\n", head->data);
        head = head->next;
    }
}
int Count(PNODE head)
{
    int iCount = 0;
    while (head!= NULL)
    {
        iCount++;
        head = head->next;
    }
    return iCount;
}
int main()
{
    PNODE first = NULL;
    int iRet = 0;

    push(&first, 101);
    push(&first, 51);
    push(&first, 21);
    push(&first, 11);

    Display(first);
    iRet = Count(first);
    printf("Number of Elements are:%d\n", iRet);

    iRet = pop(&first);
    printf("Popped Element is:%d\n", iRet);
    Display(first);
    iRet = Count(first);
    printf("Number of Elements are:%d\n", iRet);

    iRet = pop(&first);
    printf("Popped Element is:%d\n", iRet);
    Display(first);
    iRet = Count(first);
    printf("Number of Elements are:%d\n", iRet);

    iRet = Count(first);
    printf("Number of Elements are:%d\n", iRet);

    return 0;
}