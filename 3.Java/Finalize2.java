
class Employee 
{
    public String Name;
    public int Salary;
    public int Age;
    public String Address;

    Employee(String str,int amount,int A,String addr)
    {
        this.Name = str;
        this.Salary = amount;
        this.Age = A;
        this.Address = addr;
    }

    protected void finalize()
    {
        System.out.println("Inside Finalize Method...!");
    }

    void Display()
    {
        System.out.println("Employee Name : "+this.Name);
        System.out.println("Employee Salary : "+this.Salary);
        System.out.println("Employee Age : "+this.Age);
        System.out.println("Employee Address : "+this.Address);
    }
}


public class Finalize2
{
        public static void main(String Args[])
        {
            Employee eobj = new Employee("Omkar",1000000,20,"Karad");
            eobj.Display();
            
            Employee eobj2 = eobj;

            Employee eobj3 = new Employee("Ruturaj",1000000,21,"Masur");
            
            System.out.println("Hash code of eobj is :"+eobj.hashCode());
            System.out.println("Hash code of eobj is :"+eobj2.hashCode());
            System.out.println("Hash code of eobj is :"+eobj3.hashCode());
            eobj = null;
            System.gc();
        }    
}
