class Arithmatic
{
    public int Addition(int A,int B)
    {
        return A+B;
    }
    public int Addition(int A,int B,int C)
    {
        return A+B+C;
    }
    public Double Addition(Double A,Double B)
    {
        return A+B;
    }

    public void Addition(int A,double B)
    {
        System.out.println("Inside First Addition");
    } 
    public void Addition(double A,int B)
    {
        System.out.println("Inside Second Addition");
    } 
}

class OverloadingX
{
    public static void main(String args[])
    {
        Arithmatic aobj = new Arithmatic();

        int iret = 0;
        Double dret = 0.0;

        iret = aobj.Addition(10, 11);
        System.out.println("Addition is : "+iret);
        
        iret = aobj.Addition(10, 11,21);
        System.out.println("Addition is : "+iret);
        
        dret = aobj.Addition(10.8, 11.7);
        System.out.println("Addition is : "+dret);

        aobj.Addition(11, 20.9);
        aobj.Addition(11.11,20);
       
    }
}