//Binary Search
import java.util.*;
class program527
{
    public static boolean BinarySearch(int Brr[],int iNo)
    {
        int iStart=0,iMid=0,iEnd=Brr.length-1;
        boolean bResult=false;

        while(iStart<=iEnd)
        {
            iMid=iStart+(iEnd-iStart)/2;
            if(Brr[iMid]==iNo)
            {
                bResult=true;
                break;
            }
            
            if(iNo>Brr[iMid])
            {
                iStart=iMid+1;
            }
            else
            {
                iEnd=iMid-1;
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

        bRet=BinarySearch(Arr,iValue);
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
