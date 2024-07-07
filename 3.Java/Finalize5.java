class Employee implements Cloneable 
{
    public String Name;
    public int Salary;
    public int Age;
    public String Address;

    Employee(String str, int amount, int A, String addr) 
    {
        this.Name = str;
        this.Salary = amount;
        this.Age = A;
        this.Address = addr;
    }

    void Display() 
    {
        System.out.println("Employee Name: " + this.Name);
        System.out.println("Employee Salary: " + this.Salary);
        System.out.println("Employee Age: " + this.Age);
        System.out.println("Employee Address: " + this.Address);
    }

    //Override
    public String toString() 
    {
        return Name + " " + Salary + " " + Age + " " + Address;
    }
}

public class Finalize5 
{
    public static void main(String Args[]) 
    {
        Employee eobj1 = new Employee("Omkar", 1000000, 20, "Karad");
        System.out.println(eobj1);  // This will call the toString method
    }
}
