import java.io.*;
import java.util.*;

class program475 {
    public static void main(String Arg[]) throws Exception {

        System.out.println("-------------------------------------------------------------------");
        System.out.println("---------------Marvellous Packer Unpacker CUI Module---------------");
        System.out.println("-------------------------------------------------------------------");

        Scanner sobj = new Scanner(System.in);

        System.out.println("---------------------------Packing Activity-------------------------");

        System.out.println("Enter the name of directory that you want to open : ");
        String DirName = sobj.nextLine();

        File fobj = new File(DirName);

        if (fobj.exists()) {
            System.out.println("Directory is Succesfully opened");

            File Arr[] = fobj.listFiles();

            System.out.println("Total Number of files in directory are : " + Arr.length);

            int i = 0;
            int j = 0;

            String Header = "";
            for (i = 0; i < Arr.length; i++) {
                Header = Arr[i].getName() + " " + Arr[i].length();

                System.out.println(Header);

                for (j = Header.length(); j < 100; j++) {
                    Header = Header + " ";
                }

                System.out.println("Header Length is:" + Header.length());

                Header = "";
            }

        } else {
            System.out.println("There is no such director");
        }

        System.out.println("-------------------------------------------------------------------");

    }
}