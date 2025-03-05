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
        System.out.println(E_no+"\t"+E_name+"\t"+E_age+"\t"+E_address+"\t\t"+E_salary);
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

    //select * from Employee;
    public void SelectStarFrom()
    {
        System.out.println("-------------------------------------------------------------------------------");
        System.out.println("No \t Name \t Age \t Address \t Salary");
        System.out.println("-------------------------------------------------------------------------------");
        for(Employee eref:lobj)
        {
            eref.DisplayInformation();
        }
        System.out.println("-------------------------------------------------------------------------------");
    }

    //select * from Employee where E_no=3
    public void SelectSpecific(int id)
    {
        System.out.println("-------------------------------------------------------------------------------");
        System.out.println("No \t Name \t Age \t Address \t Salary");
        System.out.println("-------------------------------------------------------------------------------");
        for (Employee eref :lobj)
        {
            if(eref.E_no==id)
            {
                eref.DisplayInformation();
                break;
            }
        }
        System.out.println("-------------------------------------------------------------------------------");

    }

    //select * from employee where Ename=Amit;
    public void SelectSpecific(String str)
    {
        System.out.println("-------------------------------------------------------------------------------");
        System.out.println("No \t Name \t Age \t Address \t Salary");
        System.out.println("-------------------------------------------------------------------------------");
        for (Employee eref :lobj)
        {
            if(str.equals(eref.E_name))
            {
                eref.DisplayInformation();
                break;
            }
        }
        System.out.println("-------------------------------------------------------------------------------");
    }

    //delete from Employee where E_no=2
    public void DeleteData(int no)
    {
        System.out.println("-------------------------------------------------------------------------------");
        System.out.println("No \t Name \t Age \t Address \t Salary");
        System.out.println("-------------------------------------------------------------------------------");
        int index=0;
        boolean bFlag=false;

        for(Employee eref :lobj)
        {
            if(eref.E_no==no)
            {
                bFlag=true;
                break;
            }
            index++;
        }
        if(bFlag==false)
        {
            System.out.println("Unable to remove the element as element is not there in database");
        }
        else
        {
            lobj.remove(index);
        }
        
        System.out.println("-------------------------------------------------------------------------------");
    }

    //delete from Employee where E_name="Amit"
    public void DeleteData(String str)
    {
        System.out.println("-------------------------------------------------------------------------------");
        System.out.println("No \t Name \t Age \t Address \t Salary");
        System.out.println("-------------------------------------------------------------------------------");
            int index=0;
            boolean bFlag=false;

            for(Employee eref :lobj)
            {
                if(str.equals(eref.E_name))
                {
                    bFlag=true;
                    break;
                }
                index++;
            }
            if(bFlag==false)
            {
                System.out.println("Unable to remove the element as element is not there in database");
            }
            else
            {
                lobj.remove(index);
            }
        
        System.out.println("-------------------------------------------------------------------------------");
    }
    
}

class program559
{
    public static void main(String A[])
    {
        MarvellousDBMS mobj=new MarvellousDBMS();
        
        mobj.InsertIntoTabel("Sagar", 27, "Pune", 11000);
        mobj.InsertIntoTabel("Amit", 26, "Mumbai", 21000);
        mobj.InsertIntoTabel("Pooja", 27, "Satara", 51000);
        mobj.InsertIntoTabel("Gauri", 28, "Nashik", 18000);

        mobj.DeleteData(3);
        mobj.SelectStarFrom();

        mobj.DeleteData("Amit");
        mobj.SelectStarFrom();

        mobj=null;
        System.gc();
    }
}