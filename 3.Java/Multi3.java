
class Demo extends Thread
{
    public void run()      // Running state
    {   
        String name = Thread.currentThread().getName();
        System.out.println("Current Thread is : "+Thread.currentThread().getName());
        for(int i = 1; i < 1000; i++)
        {
            System.out.println("Name of thread is : "+name+"with counter :"+i);
        }
    }    
}


public class Multi3 
{
    public static void main(String Args[])
    {
         System.out.println("Current Thread is : "+Thread.currentThread().getName());

        Demo obj1 = new Demo();  // New State
        Demo obj2 = new Demo();  // New State
       
        obj1.setName("First_Thread");
        obj2.setName("Second_Thread");
        
        obj1.start();
        obj2.start();
        
        //System.out.println("Thread goes to Dead state");        
    }    
}
