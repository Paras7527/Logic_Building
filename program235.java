import java.util.*;
class Rectangle
{
    public float CalculateArea(float A,float B)
    {
        float Area=0.0f;
        Area=A*B;
        return Area;

    }
}
class program235
{
    
    public static void main(String A[])
    {
        float No1=0.0f;
        float No2=0.0f;
        float Ans=0.0f;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter Length: ");
        No1 = sobj.nextFloat();

        System.out.println("Enter Breadth: ");
        No2 = sobj.nextFloat();

       Rectangle aobj=new Rectangle();

        Ans = aobj.CalculateArea(No1,No2);
        System.out.println("Area is: "+Ans);
    }   
}