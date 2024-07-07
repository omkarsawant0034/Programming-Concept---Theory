
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


public class Finalize1
{
        public static void main(String Args[])
        {
            Employee eobj = new Employee("Omkar",100000,20,"Karad");
            eobj.Display();
           //eobj.finalize();  // No need to call explicitely 
           eobj = null;
            System.gc();
        }    
}
