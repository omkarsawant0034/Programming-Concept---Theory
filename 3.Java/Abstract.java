    
    abstract class Demo
    {
        public int A;
        public int B;

        public Demo()
        {
            System.out.println("Inside Demo Constructor");
            A = 0;
            B = 0;
        }
        abstract void fun();   // virtual void fun() = 0;

        void gun()
        {
            System.out.println("Inside Demo gun");
        }
    }
    
    class Hello extends Demo
    {
        public Hello()
        {
            System.out.println("Inside Hello Constructor");
        }

        public void fun()
        {
            System.out.println("Inside Fun of Hello");
        }
    }

    class Abstract{

    public static void main(String args[])
    {
        System.out.println("******Omkar Abhyaas Kar !!!******");

       // Demo obj = new Demo();
      
       Hello hobj = new Hello();

       hobj.fun();
       hobj.gun();
    } 
    
}
