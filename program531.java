//Binary Search
import java.util.*;
class program531
{
    public static void SelectionSort(int Brr[])
    {
        int i=0,j=0,min_index=0,temp=0;

        for(i=0;i<Brr.length;i++)
        {
            min_index=i;
            for(j=i;j<Brr.length;j++)
            {
                if(Brr[min_index]>Brr[j])
                {
                    min_index=j;

                }
            }
            temp=Brr[i];
            Brr[i]=Brr[min_index];
            Brr[min_index]=temp;
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

        SelectionSort(Arr);

        System.out.println("Elements of the Array after Sorting:");

        for(i=0;i<iSize;i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();
        
    }
}
