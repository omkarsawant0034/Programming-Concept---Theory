import java.util.*;


class ExceptionDemo1 
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number : ");
        int iNo1 = sobj.nextInt();
        
        System.out.println("Enter second number : ");
        int iNo2 = sobj.nextInt();

        int Ans = 0;
        Ans = iNo1/iNo2;

        System.out.println("Division is :"+Ans);
    }    
}
