
class Demo extends Thread
{
    public void run()      // Running state
    {   
       // String name = Thread.currentThread().getName();
        System.out.println("Current Thread is : "+Thread.currentThread().getName());
        for(int i = 1; i < 100; i++)
        {
           // System.out.println("Name of thread is : "+name+"with counter :"+i);
        }
        System.out.println("End of main thread");
    }    
}


public class Multi4
{
    public static void main(String Args[]) throws Exception
    {
         System.out.println("Current Thread is : "+Thread.currentThread().getName());

        Demo obj1 = new Demo();  // New State
        obj1.start();            // Runnable
        obj1.join();
        System.out.println("End of main thread");
                
    }    
}
