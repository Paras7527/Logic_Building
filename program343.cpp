#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
typedef struct node *PNODE;
class DoublyLL
{
    public:
    int iCount;
    PNODE head;

    DoublyLL()
    {
        head = NULL;
        iCount = 0;
    }
    void Display()
    {
    }
    int Count()
    {
        int iCount;
    }
    void InsertFirst(int no)
    {
    }
    void InsertLast(int no)
    {
    }
    void InsertAtPos(int no, int ipos)
    {
    }
    void DeleteFirst()
    {
    }
    void DeleteLast()
    {
    }
    void DeleteAtPos(int ipos)
    {
    }
};
int main()
{
    DoublyLL dobj;
    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.InsertAtPos(75, 4);

    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of Elements are:" << iRet << "\n";

    dobj.DeleteFirst();

    dobj.DeleteLast();

    dobj.DeleteAtPos(4);

    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of Elements are:" << iRet << "\n";

    return 0;
}