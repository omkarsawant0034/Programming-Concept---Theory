#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

        virtual void fun()      //1000
        {
            cout<<"Inside Base fun"<<endl;
        }
        virtual void gun()      //2000
        {
            cout<<"Inside Base gun"<<endl;
        }
        void sun()      //3000
        {
            cout<<"Inside Base sun"<<endl;
        }
        void run()      //4000
        {
            cout<<"Inside Base run"<<endl;
        }
};

class Derived : public Base
{
    public:
        int a,b;
        
       virtual void gun()      //5000
        {
            cout<<"Inside Derived gun"<<endl;
        }
        void run()      //6000
        {
            cout<<"Inside Derived run"<<endl;
        }
        virtual void bun()      //7000
        {
            cout<<"Inside Derived bun"<<endl;
        }
};

int main()
{
 
    cout<<sizeof(Base)<<endl;      
    cout<<sizeof(Derived)<<endl;
    
    Base *bp = new Derived;
    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    //bp->bun();  //Error
    
    return 0;
}