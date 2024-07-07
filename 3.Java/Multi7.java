
class Demo extends Thread
{
    public void run()      // Running state
    {   
       
    }
    synchronized public void Display()
    {
        //Logic
    }
}

public class Multi7
{
    public static void main(String Args[]) throws Exception
    {
         System.out.println("Current Thread is : "+Thread.currentThread().getName());

        Demo obj1 = new Demo();  // New State
        Demo obj2 = new Demo();  // New State
        obj1.start();            // Runnable
        obj2.start();            // Runnable
        
        System.out.println("Priority of obj1 is :"+obj1.getPriority());
        System.out.println("Priority of obj1 is :"+obj2.getPriority());

        obj1.setPriority(8);
        obj2.setPriority(10);
        System.out.println("Priority of obj1 is :"+obj1.getPriority());
        System.out.println("Priority of obj1 is :"+obj2.getPriority());

    }    
}
