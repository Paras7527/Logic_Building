
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

void InsertLast(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        temp = *head;

        while(temp -> next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void Display(PNODE head)
{
    printf("Elements of LinkedList are : \n");

    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCount = 0;

    while(head != NULL)
    {
        iCount++;
        head = head -> next;
    }

    return iCount;
}

void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    if((*head) -> next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;
        *head = (*head) ->next;
        free(temp);
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    if((*head) -> next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;
        
        while(temp -> next->next != NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE head, int no, int ipos)
{
    int CountNode = 0;
    int i = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;

    CountNode = Count(*head);

    if((ipos < 1) || (ipos > CountNode+1))  // Filter
    {
        printf("Invalid position\n");
        return;
    }
 
    if(ipos == 1)                       // Pos == 1
    {
        InsertFirst(head, no);
    }
    else if(ipos == CountNode + 1)      // Pos == Last
    {
        InsertLast(head, no);
    }
    else                                // In between position
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;

        temp = *head;

        for(i = 1; i < ipos-1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE head, int ipos)
{
    int CountNode = 0;
    int i = 0;

    PNODE temp = NULL;
    PNODE target = NULL;

    CountNode = Count(*head);

    if((ipos < 1) || (ipos > CountNode))  // Filter
    {
        printf("Invalid position\n");
        return;
    }
 
    if(ipos == 1)                       // Pos == 1
    {
        DeleteFirst(head);
    }
    else if(ipos == CountNode)      // Pos == Last
    {
        DeleteLast(head);
    }
    else                                // In between position
    {
        temp = *head;

        for(i = 1; i < ipos - 1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;

        temp->next = target->next;
        free(target);
    }
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;
    int iOption=0,iValue=0,ipos=0;

    while(1)
    {
        printf("_________________________________________________\n");
        printf("Please Select the targeted Operation:\n");
        printf("1:Insert new Element at First Position\n");
        printf("2:Insert new Element at Last Position\n");
        printf("3:Insert new Element at Given Position\n");
        printf("4:Delete new Element at First Position\n");
        printf("5:Delete new Element at Last Position\n");
        printf("6:Delete new Element at Given Position\n");
        printf("7:Display the Elements\n");
        printf("8:Count the elements\n");
        printf("9:Terminate the Application\n");
        printf("_________________________________________________\n");

        printf("Please select the targeted operation:\n");
        scanf("%d",&iOption);
        printf("_________________________________________________\n");

        if(iOption==1)
        {
            printf("Enter the Element:\n");
            scanf("%d",&iValue);

            InsertFirst(&first,iValue);
            printf("Element inserted Succesfully");
        }
        else if(iOption==2)
        {
            printf("Enter the Element:\n");
            scanf("%d",&iValue);

            InsertLast(&first,iValue);
            printf("Element inserted Succesfully");
        }
        else if(iOption==3)
        {
            printf("Enter the Element:\n");
            scanf("%d",&iValue);

            printf("Enter the position:\n");
            scanf("%d",&ipos);

            InsertAtPos(&first,iValue,ipos);
            printf("Element inserted Succesfully");
        }
        else if(iOption==4)
        {
            DeleteFirst(&first);
            printf("Element Deleted Succesfully");
        }
        else if(iOption==5)
        {
            DeleteLast(&first);
            printf("Element Deleted Succesfully");
        }
        else if(iOption==6)
        {
            printf("Enter the position:\n");
            scanf("%d",&ipos);

            DeleteAtPos(&first,ipos);
            printf("Element Deleted Succesfully");
        }
        else if(iOption==7)
        {
            printf("Elements of the Linked list:");
            Display(first);
        }
        else if(iOption==8)
        {
            printf("Number of Elements in the Linked List:");
            Count(first);
        }
        else if(iOption==9)
        {
            printf("Terminate the Application Succesfully");
            exit;
        }
    }
    return 0;
}