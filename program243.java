import java.util.*;

class Digits
{
    public int SummationDigits(int iNo)
    {
        int iSum=0,iDigit=0;
        
        while(iNo!=0)
        {
            iDigit=iNo%10;
            if(iDigit!=0)
            {
                iSum=iDigit+iSum;
            }
            iNo=iNo/10;
            
        }
        return iSum;
    }
}
class program243
{
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);
        int iValue=0,iRet=0;

        System.out.println("Enter number:");
        iValue=sobj.nextInt();

        Digits dobj = new Digits();
        iRet=dobj.SummationDigits(iValue);

        System.out.println("Multiplication of digits is :"+iRet);
        
    }
}