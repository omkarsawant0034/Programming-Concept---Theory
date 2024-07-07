import java.util.Scanner;

class InOut
{
    public static void main (String args[])
    {
        Addition obj = new Addition(10, 10);
        obj.Add();      
    }
}

class Addition
{
    public int A;
    public int B;
    

    Addition(int i ,int j)
    {
        A = i;
        B = j;
    }

    void Add()
    {
       int  C = A + B;
        System.out.println("Addition is :"+C);
    }
}
