import java.util.*;

public class OOP 
{
    public static void main(String args[])
    {
        int No1 = 0, No2 = 0 ,Ans = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("First Number :");
        No1 = sobj.nextInt();
      
        System.out.println("Sencond Number :");
        No2 = sobj.nextInt();

        Arithmatic aobj = new Arithmatic(No1, No2);
        
        Ans = aobj.Addition();
        System.out.println("Addition :"+Ans);
        
        Ans = aobj.Substraction();
        System.out.println("Substraction :"+Ans);
        
        Ans = aobj.Multiplication();
        System.out.println("Multiplication :"+Ans);
        
        Ans = aobj.Division();
        System.out.println("Division :"+Ans);
    }   
}
class Arithmatic
{
    public int Value1 ;
    public int Value2;

    public Arithmatic(int A ,int B)
    {
        this.Value1 = A;
        this.Value2 = B;
    }

    public int Addition()    
    {   int Result = 0;
        Result = this.Value1+this.Value2;
        return Result;
    }
    
    public int Substraction()    
    {   int Result = 0;
        Result = this.Value1-this.Value2;
        return Result;
    }
    
    public int Multiplication()    
    {   int Result = 0;
        Result = this.Value1*this.Value2;
        return Result;
    }
    
    public int Division()    
    {   int Result = 0;
        Result = this.Value1/this.Value2;
        return Result;
    }
}