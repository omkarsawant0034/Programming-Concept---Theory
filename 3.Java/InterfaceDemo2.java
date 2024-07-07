/* 


// One class can implements multiple interfaces  

interface Demo
{
    void fun();
}

interface Hello 
{
    void gun();
}

class Marvellous implements Demo,Hello
{
    public void fun();
    public void gun();
}

public class InterfaceDemo2 {
    
}

// interface can extends another interface

interface Demo
{
    void fun();
}

interface Hello extends Demo
{
    void gun();
}

class Marvellous implements Hello
{
    public void fun()
    {}
    public void gun()
    {}
}

public class InterfaceDemo2 {
    
}

// One class implement one or more interfaces as well as it extends only one class

interface Demo
{
    void fun();
}

class Hello 
{
    void gun()
    {}
}

class Marvellous implements Demo,Hello
{
    public void fun()
    {}
}


*/