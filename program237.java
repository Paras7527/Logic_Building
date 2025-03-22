import java.util.*;
class Arithmatic
{
    public long Power(int A,int B)
    {
        int iCnt=0;
        long iMult=1;
        for(iCnt=1;iCnt<=B;iCnt++)
        {
            iMult=iMult*A;
        }
        
        return iMult;

    }
}
class program237
{
    
    public static void main(String A[])
    {
        int No1=0;
        int No2=0;
        long Ans=0;

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
