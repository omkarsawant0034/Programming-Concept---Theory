#include<iostream>
using namespace std ;

class Demo 
{

    public:
    int i;
    int j;

    void fun()
    {
        cout<<"Inside fun Demo class\n";
    }
};
int main()
{

    Demo obj1;
    Demo obj2;

    obj1.i = 10;
    obj1.i = 21;

    obj2.i = 10;
    obj2.i = 20;

    obj1.fun();
    obj2.fun();
    
    return 0;
}