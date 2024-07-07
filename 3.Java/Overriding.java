
class Base
{
    public void fun()       //1000
    {
        System.out.println("Inside Base fun");
    }
    public void gun()      //2000
    {
        System.out.println("Inside Base gun");
    }
    public void sun()       //3000
    {
        System.out.println("Inside Base sun");
    }
    public void run()       //4000
    {
        System.out.println("Inside Base run");
    }
}

class Derived extends Base
{
    public void fun()        //5000
    {
        System.out.println("Inside Derived fun");
    }
    public void sun()        //6000
    {
        System.out.println("Inside Derived sun");
    }
    public void run(int A)   //7000
    {
        System.out.println("Inside Derived run with one parameter");
    }
    public void mun()        //8000
    {
        System.out.println("Inside Derived mun");
    }
    
}

public class Overriding 
{
    public static void main(String args[])
    {
        Base bobj = new Derived();
        Derived dobj = new Derived();
        //Base bobj = new Derived();     //upcasting
        //Derived dobj = new Derived();  //Nocasting
        //Derived dobj = new Base();     //Downcasting
        bobj.fun();
        bobj.gun();
        bobj.sun();
        bobj.run();
        dobj.run(11);
        dobj.mun();
    }   

}
