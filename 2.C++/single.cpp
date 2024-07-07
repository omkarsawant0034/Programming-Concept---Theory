#include<iostream>
using namespace std;

class Demo 
{
    public:
     
      int x,y;

    Demo()
    {
        cout<<"inside Demo constructor\n";

        x = 10;
        y = 20;

    }
    ~Demo()
    {
        cout<<"inside Demo destructor\n";
    }

    void Fun()
    {
        cout<<"Inside fun of Demo\n";
    }
};

// class Hello extends Demo (java)
class Hello : public Demo
{
    public:
    int a,b,c;

    Hello()
    {
        cout<<"Inside Hello constructor\n";
        a = 30;
        b = 40;
        c = 50;
    }
   
    ~Hello()
    {
        cout<<"Inside Hello destructor\n";
    }

    void gun()
    {
        cout<<"Inside gun of Hello\n";
    }

};

int main()
{

    Hello hobj;

    cout<<"Size of object :"<<sizeof(hobj)<<"\n"; //20

    cout<<hobj.x<<"\n";
    cout<<hobj.y<<"\n";
    cout<<hobj.a<<"\n";
    cout<<hobj.b<<"\n";
    cout<<hobj.c<<"\n";

    hobj.Fun();
    hobj.gun();

    return 0;
}