#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

        void fun()      //DEFINATION
        {
            cout<<"Inside Base fun"<<endl;
        }
        void gun()      //DEFINATION
        {
            cout<<"Inside Base gun"<<endl;
        }
        void sun()      //DEFINATION
        {
            cout<<"Inside Base sun"<<endl;
        }
        void run()      //DEFINATION
        {
            cout<<"Inside Base run"<<endl;
        }
};

class Derived : public Base
{
    public:
        int a,b;
        
        void gun()      //REDEFINATION
        {
            cout<<"Inside Derived gun"<<endl;
        }
        void run()      //REDEFINATION
        {
            cout<<"Inside Derived run"<<endl;
        }
};

int main()
{
 
    Base *bp = new Derived;
    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    
    return 0;
}