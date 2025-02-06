#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;

class SinglyLL
{
public:
    PNODE head;
    int iCount;

    SinglyLL()
    {
        head = NULL;
        iCount = 0;
    }

    void InsertFirst(int no)
    {
        PNODE newn = new NODE;

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

    void InsertLast(int no)
    {
        PNODE newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        if (head == NULL)
        {
            head = newn;
        }
        else
        {
            PNODE temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newn;
        }
        iCount++;
    }

    void DeleteFirst()
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
            PNODE temp = head;
            head = head->next;
            delete temp;
        }
        iCount--;
    }

    void DeleteLast()
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
            PNODE temp = head;

            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }

            delete temp->next;
            temp->next = NULL;
        }
        iCount--;
    }

    void InsertAtPos(int no, int ipos)
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
            PNODE newn = new NODE;
            newn->data = no;
            newn->next = NULL;

            PNODE temp = head;

            for (int i = 1; i < ipos - 1; i++)
            {
                temp = temp->next;
            }

            newn->next = temp->next;
            temp->next = newn;

            iCount++;
        }
    }

    void DeleteAtPos(int ipos)
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

            PNODE temp =NULL;
            PNODE target = NULL;
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
    void Display()
    {
        PNODE temp = head;

        cout << "Elements of LinkedList are: \n";

        while (temp != NULL)
        {
            cout << "| " << temp->data << " | -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }

    int Count()
    {
        return iCount;
    }
};

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
