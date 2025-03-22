import java.io.*;
import java.util.*;

class program448 
{
    public static void main(String A[]) 
    {
        try 
        {
            boolean bRet = false;
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name that you want to create :");
            String name = sobj.nextLine();

            File fobj = new File(name);

            bRet=fobj.createNewFile();

            if (bRet == true) 
            {
                System.out.println("File is Succesfully created\n");
            } 
            else 
            {
                System.out.println("Unable to create file\n");
            }
        } 
        catch (Exception eobj) 
        {
            System.out.println("Exception Occured.." + eobj);
        }
    }
}