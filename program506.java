class node {
    public int data;
    public node next; // Self Referntial object

    public node(int x) {
        data = x;
        next = null;
    }
}

class SinglyLL {
    public node head;
    public int iCount;

    public SinglyLL() {
        this.head = null;
        this.iCount = 0;
    }

    public void InsertFirst(int no) {
        node newn = null;
        newn = new node(no);

        if (head == null) 
        {
            head = newn;
        } 
        else 
        {
            newn.next = head;
            head = newn;
        }
        iCount++;
    }

    public void InsertLast(int no) {
        node newn = null;
        node temp = null;
        newn = new node(no);

        if (head == null) 
        {
            head = newn;
        } 
        else 
        {
            temp = head;
            while (temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }
        iCount++;
    }

}

class program506 {
    public static void main(String A[]) {
        SinglyLL sobj = new SinglyLL();

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);
    }
}
