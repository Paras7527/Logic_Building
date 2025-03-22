#include<iostream>
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
    int iCount;
    PNODE head;

    DoublyLL()
    {
        head = NULL;
        iCount = 0;
    }
    public:
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
    void InsertAtPos(int no,int ipos)
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
    return 0;
}