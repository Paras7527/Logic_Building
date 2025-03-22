import java.io.*;
import java.util.*;

class program455 {
    public static void main(String A[]) {
        try {
            boolean bRet = false;
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name that you want to open :");
            String name = sobj.nextLine();

            File fobj = new File(name);

            if (fobj.exists()) 
            {
                System.out.println("File Name is:" + fobj.getName());
                System.out.println("File size is:"+fobj.length());
            } 
            else 
            {
                System.out.println("There is No such File");
            }
        } 
        catch (Exception eobj) 
        {
            System.out.println("Exception Occured.." + eobj);
        }
    }
}