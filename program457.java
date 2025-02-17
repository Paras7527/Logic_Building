import java.io.*;
import java.util.*;

class program457 {
    public static void main(String A[]) {
        try {
            boolean bRet = false;
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name that you want to open :");
            String name = sobj.nextLine();

            File fobj = new File(name);

            if (fobj.exists()) {
                FileInputStream fiobj = new FileInputStream(fobj);

                byte arr[] = new byte[20];

                fiobj.read(arr);
                String str = new String(arr);
                System.out.println("Data from file is:" + str);
            } else {
                System.out.println("There is No such File");
            }
        } catch (Exception eobj) {
            System.out.println("Exception Occured.." + eobj);
        }
    }
}