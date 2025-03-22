import java.util.*;

class ArrayX
{
    public int Arr[];
    public ArrayX(int iSize)
    {
        Arr=new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements:");
        for (int i=0;i<Arr.length;i++)                            
        {
            Arr[i]=sobj.nextInt();
        }
    }
    public void Display()
    {
        System.out.println("elements of array are:");           
        for (int i=0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }

    protected void finalize()
    {
        Arr=null;
        System.out.println("Inside Finalize");
    }
}

class program260
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iLength=0;

        System.out.println("Enter the number of elements:");    
        iLength=sobj.nextInt();
        
        ArrayX aobj=new ArrayX(iLength);
        aobj.Accept();
        aobj.Display();
                           
        aobj=null;
        System.gc();
    }
}