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


class Hello 
{
    public:
      int a,b;

    Hello()
    {
        cout<<"Inside Hello constructor\n";
        a = 30;
        b = 40;
    
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

//class Marvellous : public Demo, public Hello
class Marvellous : public Hello, public Demo
{
    public:
        int p;

    Marvellous()
    {
        cout<<"Inside constructor of Marvellous\n";
    }
    ~Marvellous()
    {
        cout<<"Inside destructor of Marvellous\n";
    }

    void sun()
    {
        cout<<"Inside sun of Marvellous\n";
    }

};

int main()
{

    Marvellous mobj;

    cout<<"Size of object : "<<sizeof(mobj)<<"\n"; //24

    // cout<<mobj.x<<"\n";
    // cout<<mobj.y<<"\n";
    // cout<<mobj.a<<"\n";
    // cout<<mobj.b<<"\n";

    mobj.Fun();
    mobj.gun();
    mobj.sun();

    return 0;
}