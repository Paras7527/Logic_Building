import java.io.*;

class program447 
{
    public static void main(String A[]) 
    {
        try 
        {
            boolean bRet = false;
            File fobj = new File("Demo.txt");
            fobj.createNewFile();

            if(bRet==true)
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