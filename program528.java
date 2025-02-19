//Binary Search
import java.util.*;
class program528
{
    public static void BubbleSort(int Brr[])
    {
        int i=0,j=0,temp=0;

        for(i=0;i<Brr.length;i++)
        {
            for(j=0;j<Brr.length-i-1;j++)
            {
                if(Brr[j]>Brr[j+1])
                {
                    temp=Brr[j];
                    Brr[j]=Brr[j+1];
                    Brr[j+1]=temp;
                }
            }
        }
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
        
        System.out.println("Elements of the Array :");

        for(i=0;i<iSize;i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();

        BubbleSort(Arr);

        System.out.println("Elements of the Array after Sorting:");

        for(i=0;i<iSize;i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();
        
    }
}
