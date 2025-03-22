//Linear Search Reduce Time Complexity
import java.util.*;
class program526
{
    public static boolean LinearSearchBiDirectional(int Brr[],int iNo)
    {
        int iStart=0,iEnd=0;
        boolean bResult=false;
        for(iStart=0,iEnd=Brr.length-1;iStart<=iEnd;iEnd--)
        {
            if(Brr[iStart]==iNo || Brr[iEnd]==iNo)
            {
                bResult=true;
                break;
            }
        }
        return bResult;
    }
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);
        int i=0,iSize=0,iValue=0;
        boolean bRet=false;

        System.out.println("Enter the number of Elements:");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter the Values:");

        for(i=0;i<iSize;i++)
        {
            Arr[i]=sobj.nextInt();
        }

        System.out.println("Elements of the Array are:");

        for(i=0;i<iSize;i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();

        System.out.println("Enter the Element that you want to Search:");
        iValue=sobj.nextInt();

        bRet=LinearSearchBiDirectional(Arr,iValue);
        if(bRet==true)
        {
            System.out.println("Element is present in the Array");
        }
        else
        {
            System.out.println("There is no Such elements in the Array");
        }


    }
}
