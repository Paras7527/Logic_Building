import java.util.*;
class Calculations
{
    public float CalculatePercentage(int A,int B)
    {
        float Percentage=0.0f;
        Percentage=((float)A/ (float)B) * 100;
        return Percentage;

    }
}
class program233
{
    
    public static void main(String A[])
    {
        int No1=0;
        int No2=0;
        float Ans=0.0f;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter Obtained Marks number: ");
        No1 = sobj.nextInt();

        System.out.println("Enter Total marks: ");
        No2 = sobj.nextInt();

       Calculations aobj=new Calculations();

        Ans = aobj.CalculatePercentage(No1,No2);
        System.out.println("Percentage is: "+Ans);
    }   
}