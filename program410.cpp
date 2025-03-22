#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
class SinglyLL
{
public:
    struct node* head;
    int iCount;

    SinglyLL();
    void InsertFirst(int no);
    void InsertLast(int no);
    void DeleteFirst();
    void DeleteLast();
    void InsertAtPos(int no, int ipos);
    void DeleteAtPos(int ipos);
    void Display();
    int Count();
};
SinglyLL::SinglyLL()
{
    head = NULL;
    iCount = 0;
}
void SinglyLL ::InsertFirst(int no)
{
    struct node* newn = new node;

    newn->data = no;
    newn->next = NULL;

    if (head == NULL)
    {
        head = newn;
    }
    else
    {
        newn->next = head;
        head = newn;
    }
    iCount++;
}
void SinglyLL ::InsertLast(int no)
{
    struct node* newn = new node;
    newn->data = no;
    newn->next = NULL;

    if (head == NULL)
    {
        head = newn;
    }
    else
    {
        struct node* temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
    iCount++;
}
void SinglyLL ::DeleteFirst()
{
    if (head == NULL)
    {
        return;
    }

    if (head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    else
    {
        struct node* temp = head;
        head = head->next;
        delete temp;
    }
    iCount--;
}
void SinglyLL ::DeleteLast()
{
    if (head == NULL)
    {
        return;
    }

    if (head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    else
    {
        struct node* temp = head;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}
void SinglyLL ::InsertAtPos(int no, int ipos)
{
    if ((ipos < 1) || (ipos > iCount + 1))
    {
        cout << "Invalid position\n";
        return;
    }

    if (ipos == 1)
    {
        InsertFirst(no);
    }
    else if (ipos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        struct node* newn = new node;
        newn->data = no;
        newn->next = NULL;

        struct node* temp = head;

        for (int i = 1; i < ipos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}
void SinglyLL ::DeleteAtPos(int ipos)
{
    if ((ipos < 1) || (ipos > iCount + 1))
    {
        cout << "Invalid position\n";
        return;
    }

    if (ipos == 1)
    {
        DeleteFirst();
    }
    else if (ipos == iCount + 1)
    {
        DeleteLast();
    }
    else
    {

        struct node* temp = NULL;
        struct node* target = NULL;
        temp = head;
        for (int i = 1; i < ipos - 1; i++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = target->next;
        delete (target);

        iCount++;
    }
}
void SinglyLL ::Display()
{
    node* temp = head;

    cout << "Elements of LinkedList are: \n";

    while (temp != NULL)
    {
        cout << "| " << temp->data << " | -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}
int SinglyLL ::Count()
{
    return iCount;
}
int main()
{
    SinglyLL sobj;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();
    cout << "Number of elements: " << sobj.Count() << "\n";

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    cout << "Number of elements: " << sobj.Count() << "\n";

    sobj.InsertAtPos(75, 4);
    sobj.Display();
    cout << "Number of elements: " << sobj.Count() << "\n";

    sobj.DeleteAtPos(4);
    sobj.Display();
    cout << "Number of elements: " << sobj.Count() << "\n";

    return 0;
}
