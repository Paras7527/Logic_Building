import java.util.*;
class program537
{
    public static void main(String A[])
    {
        LinkedList <Integer>lobj= new LinkedList<Integer>();

        lobj.add(11);
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);
        lobj.add(111);

        lobj.add(4, 75);
        
        for(Integer no : lobj)
        {
            System.out.println(no);
        }

        lobj.add(4, 75);
        
    }
}
