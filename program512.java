//stack

class node {
    public int data;
    public node next; // Self Referntial object

    public node(int x) {
        data = x;
        next = null;
    }
}

class Stack {
    public node head;
    public int iCount;

    public Stack() {
        this.head = null;
        this.iCount = 0;
    }

    public void push(int no) 
    {
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

    public void Display() {
        System.out.println("elements of the Stack are:");
        node temp = head;
        while (temp != null) {
            System.out.println("|"+temp.data+"|");
            temp = temp.next;
        }
    }

    public int Count() {
        return iCount;

    }

    public int pop() 
    {
        int no = 0;
        node temp = null;
        if (head == null) 
        {
            System.out.println("Stack is Empty");
            return -1;
        } 
        else if (head.next == null) 
        {
            no = head.data;
            head = null;
            System.gc();
        } 
        else 
        {
            no = head.data;
            head = head.next;
            System.gc();
        }
        iCount--;
        return no;
    }

}

class program512 {
    public static void main(String A[]) {
        Stack sobj = new Stack();
        int iRet = 0;

        sobj.push(121);
        sobj.push(111);
        sobj.push(101);
        sobj.push(51);
        sobj.push(21);
        sobj.push(11);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements in the linked list are:" + iRet);

        sobj.pop();
        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements in the linked list are:" + iRet);

        sobj.pop();
        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements in the linked list are:" + iRet);

    }
}
