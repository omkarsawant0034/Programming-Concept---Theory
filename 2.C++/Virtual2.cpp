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
    Base *bp1 = new Base;
    Derived *dp1 = new Derived;
    Base *bp2 = new Derived;
    // Derived *dp2 = new Base;

    

    return 0;
}