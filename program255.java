import java.util.*;

class program255
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize=0;

        System.out.println("Enter the number of elements:");    //step 1
        iSize=sobj.nextInt();

        int Arr[] = new int[iSize];                              //step 2

        System.out.println("Enter the elements:");
        for (int i=0;i<iSize;i++)                                 //step 3
        {
            Arr[i]=sobj.nextInt();
        }

        System.out.println("elements of array are:");               //step 4
        for (int i=0;i<iSize;i++)
        {
            System.out.println(Arr[i]);
        }

                                                                    //Deallocation
    }
}