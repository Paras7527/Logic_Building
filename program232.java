import java.util.*;
class Arithematic
{
    public int iValue1;
    public int iValue2;

    Arithematic(int A,int B)
    {
        int iValue1=A;
        int iValue2=B;
    }

    public int Addition()
    {
        int Result=0;
        Result=A+B;
        return Result;
    }
}
class program232
{
    public static void main(String A[])
    {
        int iNo1=0;
        int iNo2=0;
        int iAns=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter first number: ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter second number: ");
        iNo2 = sobj.nextInt();

        Arithematic aobj=new Arithematic(iNo1,iNo2);
        iAns = aobj.Addition();
        
        System.out.println("Addition is: "+iAns);
    }   
}