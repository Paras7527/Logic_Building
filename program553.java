//Customised Data Based Management System(Research Based Project)
import java.util.*;

class Employee
{
    public int E_no;
    public String E_name;
    public int E_age;
    public String E_address;
    public int E_salary;

    public static int Counter;

    static
    {
        Counter=1;
    }

    public Employee(String B,int C,String D,int E)
    {
        E_no=Counter++;
        E_name=B;
        E_age=C;
        E_address=D;
        E_salary=E;
    }

    public void DisplayInformation()
    {
        System.out.println("\tEmployee No:"+E_no+"\tName : "+E_name+"\tAddress : "+E_address+"\tAge : "+E_age+"\tSalary : "+E_salary);
    }
}
class MarvellousDBMS
{
    public LinkedList<Employee>lobj;

    public MarvellousDBMS()
    {
        System.out.println("Marvellous DBMS Started Succesfully...");
        lobj=new LinkedList<Employee>();
    }

    protected void finalize()
    {
        System.out.println("Deallocating All the Resources of Marvellous DBMS");
        lobj.clear();
        lobj=null;
    }

    //Insert into the Employee values(1,"Paras",20,"Pune",75000)
    public void InsertIntoTabel(String name, int age, String address, int salary)
    {
        Employee eobj=new Employee(name, age, address, salary);

        lobj.addLast(eobj);
        System.out.println("Record Inserted Succesfully into the Tabel");
    }
}
class program553
{
    public static void main(String A[])
    {
        MarvellousDBMS mobj=new MarvellousDBMS();
        
        mobj.InsertIntoTabel("Sagar", 27, "Pune", 11000);
        mobj.InsertIntoTabel("Amit", 27, "Mumbai", 21000);

        
        mobj=null;
        System.gc();
    }
}