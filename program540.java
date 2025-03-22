import java.util.*;
class program540
{
    public static void main(String A[])
    {
        LinkedList <Integer>lobj= new LinkedList<Integer>();

        lobj.addFirst(51);
        lobj.addFirst(21);
        lobj.addFirst(11);

        lobj.addLast(101);
        lobj.addLast(111);
        lobj.addLast(121);

        lobj.add(3, 75);
        
        for(Integer no : lobj)
        {
            System.out.println(no);
        }

        boolean bRet=lobj.contains(111);
        if(bRet==true)
        {
            System.out.println("Element is Present");
        }
        else
        {
            System.out.println("Element is Absent");
        }
        System.out.println(lobj);

        
    }
}
