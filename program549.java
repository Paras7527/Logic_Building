//Customised Data Based Management System(Research Based Project)
import java.util.*;

class Employee
{
    public int E_no;
    public String E_name;
    public int E_age;
    public String E_address;
    public int E_salary;

    public Employee(int A,String B,int C,String D,int E)
    {
        E_no=A;
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

class program549
{
    public static void main(String A[])
    {
        LinkedList <Employee>lobj=new LinkedList<Employee>();

        Employee eobj1=new Employee(1, "Sagar", 27, "Mumbai", 21000);
        Employee eobj2=new Employee(2, "Nikhil", 28, "Mumbai", 251000);
        Employee eobj3=new Employee(3, "Amit", 25, "Satara", 11000);

        lobj.add(eobj1);
        lobj.add(eobj2);
        lobj.add(eobj3);

        for(Employee eref:lobj)
        {
            eref.DisplayInformation();
        }

    }
}