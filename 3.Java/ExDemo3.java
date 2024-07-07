import java.util.*;

class Demo {
    public void Division() throws ArithmeticException {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        int iNo2 = sobj.nextInt();

        int Ans = 0;
        Ans = iNo1 / iNo2;
        System.out.println("Division is : " + Ans);
    }
}

class ExDemo3 {
    public static void main(String Args[]) {
        
        Demo dobj = new Demo();
        
        try 
        {
            dobj.Division();
        } 
        
        catch (ArithmeticException obj) {
            System.out.println("Inside catch");
        } 
        
        finally 
        {
            System.out.println("Inside Finally");
        }
    }
}
