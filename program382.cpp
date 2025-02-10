#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE;

class Queue
{
public:
    PNODE head;
    int iCount;

    Queue()
    {
        head = NULL;
        iCount = 0;
    }

    void enqueue(int no)
    {
        PNODE temp = NULL;
        PNODE newn = NULL;
        newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        if(head==NULL)
        {
            head = newn;
        }
        else
        {
            temp = head;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = newn;
        }
        iCount++;
    }

    int dequeue()
    {
        if (head == NULL)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }

        int no = head->data;
        PNODE temp = head;
        head = head->next;
        delete temp;
        iCount--;
        return no;
    }

    void Display()
    {
        PNODE temp = head;
        cout << "Elements in the Queue:" << endl;
        while (temp != NULL)
        {
            cout << "|" << temp->data << "|" << endl;
            temp = temp->next;
        }
    }

    int Count()
    {
        return iCount;
    }
};

int main()
{
    Queue qobj1;
    Queue qobj2;
    Queue qobj3;

    qobj1.enqueue(5);
    qobj1.enqueue(7);
    qobj1.enqueue(10);

    qobj2.enqueue(2);
    qobj2.enqueue(15);

    qobj3.enqueue(23);
    qobj3.enqueue(67);
    qobj3.enqueue(75);
    qobj3.enqueue(50);

    return 0;
}