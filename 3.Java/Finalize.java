
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

    void Display()
    {
        System.out.println("Employee Name : "+this.Name);
        System.out.println("Employee Salary : "+this.Salary);
        System.out.println("Employee Age : "+this.Age);
        System.out.println("Employee Address : "+this.Address);
    }
}


public class Finalize 
{
        public static void main(String Args[])
        {
            Employee eobj = new Employee("Omkar",100000,20,"Karad");
            eobj.Display();
        }    
}
