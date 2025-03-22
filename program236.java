import java.util.*;
class Arithmatic
{
    public int Power(int A,int B)
    {
        int iCnt=0;
        int iMult=1;
        for(iCnt=1;iCnt<=B;iCnt++)
        {
            iMult=iMult*A;
        }
        
        return iMult;

    }
}
class program236
{
    
    public static void main(String A[])
    {
        int No1=0;
        int No2=0;
        int Ans=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter Base: ");
        No1 = sobj.nextInt();

        System.out.println("Enter Index: ");
        No2 = sobj.nextInt();

       Arithmatic aobj=new Arithmatic();

        Ans = aobj.Power(No1,No2);
        System.out.println("Result is: "+Ans);
    }   
}
