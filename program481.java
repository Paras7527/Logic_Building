import java.io.*;
import java.util.*;

class program481 {
    public static void main(String Arg[]) throws Exception {
        String DirName = "", PackName = "", Header = "";
        FileOutputStream fopackobj = null;
        File fobj = null;
        FileInputStream fiobj = null;
        File Packobj = null;
        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0, iRet = 0, iCount = 0;
        boolean bret = false;
        byte Buffer[] = new byte[1024];

        try {
            System.out.println("---------------------------------------------------------------------");
            System.out.println("-------------- Marvellous Packer Unpacker CUI Module ----------------");
            System.out.println("---------------------------------------------------------------------");

            System.out.println("---------------------------- Packing Activity -----------------------");

            System.out.println("Enter the name of directory that you want to open for packing : ");
            DirName = sobj.nextLine();

            System.out.println("Enter the name of packed file that you want to create : ");
            PackName = sobj.nextLine();

            bret = Packobj.createNewFile();
            if (bret == true) {
                System.out.println("Packed file gets succesfully created with the name : " + PackName);
            } else {
                System.out.println("Unable to proceed as pack file is not created");
                return;
            }

            fopackobj = new FileOutputStream(Packobj);

            fobj = new File(DirName);

            if (fobj.exists()) {
                System.out.println("Directory is succesfully opened");

                File Arr[] = fobj.listFiles();

                for (i = 0; i < Arr.length; i++) {

                    if ((Arr[i].getName()).endsWith(".txt")) {
                        Header = Arr[i].getName() + " " + Arr[i].length();

                        for (j = Header.length(); j < 100; j++) {
                            Header = Header + " ";
                        }
                        // Header Writing
                        fopackobj.write(Header.getBytes(), 0, 100);
                        fiobj = new FileInputStream(Arr[i]);

                        // File Data Writing
                        while ((iRet = fiobj.read(Buffer)) != -1) {
                            fopackobj.write(Buffer, 0, iRet);
                        }
                        fiobj.close();
                        Header = "";
                        iCount++;
                    }
                }
                System.out.println("Total number of files scanned from the Directory are : " + Arr.length);
                System.out.println("Total number of files packed : " + iCount);

                //fobj.close();
                fiobj.close();
                //Packobj.close();
                fopackobj.close();
            } else {
                System.out.println("There is no such director");
            }
            System.out.println("---------------------------------------------------------------------");
            System.out.println("-----------Thank you for using Marvellous Packer Unpacker------------");
            System.out.println("---------------------------------------------------------------------");
        } 
        catch (Exception eobj) {}
    }
}