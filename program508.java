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

        if (head == null) {
            head = newn;
        } else {
            newn.next = head;
            head = newn;
        }
        iCount++;
    }

    public void InsertLast(int no) {
        node newn = null;
        node temp = null;
        newn = new node(no);

        if (head == null) {
            head = newn;
        } else {
            temp = head;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newn;
        }
        iCount++;
    }

    public void Display() {
        System.out.println("elements of the linked list are:");
        node temp = head;
        while (temp != null) {
            System.out.print("|" + temp.data + "|->");
            temp = temp.next;
        }
        System.out.println("|null|");
    }

    public int Count() {
        return iCount;

    }

    public void DeleteFirst()
    {
        node temp = null;
        if (head == null) {
            return;
        } else if (head.next == null) {
            head = null;
            System.gc();
        } else {
            head = head.next;
            System.gc();
        }
        iCount--;
    }

}

class program508 {
    public static void main(String A[]) {
        SinglyLL sobj = new SinglyLL();
        int iRet = 0;

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements in the linked list are:" + iRet);

        sobj.DeleteFirst();
        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements in the linked list are:" + iRet);
    }
}
