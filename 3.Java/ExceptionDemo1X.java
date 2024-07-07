import java.util.*;


class ExceptionDemo1X 
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number : ");
        int iNo1 = sobj.nextInt();
        
        System.out.println("Enter second number : ");
        int iNo2 = sobj.nextInt();

        int Ans = 0;

        try
        {
            System.out.println("Inside try Block");
            Ans = iNo1/iNo2;
        }
       
        catch(ArithmeticException obj)
        {
            System.out.println("Inside catch Block "+ obj);
        }
        catch(ArrayIndexOutOfBoundsException obj)
        {
            System.out.println("Array Index Out Of Bound Exception "+ obj);
        }
        catch(Exception obj)
        {
            System.out.println("Inside generic catch block"+ obj);   
        }
       
        finally
        {
            System.out.println("Inside finally block");
        }

        System.out.println("Division is :"+Ans);
    }    
}
