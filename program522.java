import java.util.*;
class program522 
{
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);
        int i=0,iSize=0;

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

    }
}
