#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

        void fun()
        {
            cout<<"Inside Base fun"<<endl;
        }
};

class Derived : public Base
{
    public:
        int a,b;
        
        void gun()
        {
            cout<<"Inside Derived gun"<<endl;
        }
};

int main()
{
    Base bobj;
    Derived dobj;
    
    cout<<sizeof(bobj)<<endl;
    cout<<sizeof(dobj)<<endl;

    bobj.fun();   
    
    dobj.fun();   
    dobj.gun();   
    
    return 0;
}