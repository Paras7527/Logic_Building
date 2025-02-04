import java.util.*;
class Rectangle
{
    public int CalculateArea(int A,int B)
    {
        int Area=0;
        Area=A*B;
        return Area;

    }
}
class program234
{
    
    public static void main(String A[])
    {
        int No1=0;
        int No2=0;
        float Ans=0.0f;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter Length: ");
        No1 = sobj.nextInt();

        System.out.println("Enter Breadth: ");
        No2 = sobj.nextInt();

       Rectangle aobj=new Rectangle();

        Ans = aobj.CalculateArea(No1,No2);
        System.out.println("Area is: "+Ans);
    }   
}
