#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
void push(PPNODE head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    if(*head==NULL)
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
    if(*head==NULL)
    {
        return;
    }
    else if((*head)->next==NULL)
    {
        free(*head);
        *head = NULL;
    }
}
void Display(PNODE head)
{
    printf("Elements in the Stack :\n");
    while(head->next!=NULL)
    {
        printf("%d", head->data);
        head = head->next;
    }
}
void Count(PNODE head)
{
    int iCount = 0;
    while (head->next != NULL)
    {
        iCount++;
        head = head->next;
    }
    return iCount;
}
int main()
{
    PNODE first = NULL;

    return 0;
}