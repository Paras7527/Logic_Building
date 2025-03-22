import java.io.*;
import java.util.*;

class program454 {
    public static void main(String A[]) {
        try {
            boolean bRet = false;
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name that you want to write :");
            String name = sobj.nextLine();

            File fobj = new File(name);

            if (fobj.exists()) {
                System.out.println("File is Already Existing in the folder\n");
            } else {

                bRet = fobj.createNewFile();

                if (bRet == true) 
                {
                    int iRet = 0;
                    System.out.println("File is Succesfully created\n");
                    FileOutputStream foobj = new FileOutputStream(fobj);
                    String str = "Jay Ganesh...";

                    byte Arr[] = str.getBytes();
                    foobj.write(Arr);
                } 
                else 
                {
                    System.out.println("Unable to create file\n");
                }
            }
        } 
        catch (Exception eobj)
        {
            System.out.println("Exception Occured.." + eobj);
        }
    }
}