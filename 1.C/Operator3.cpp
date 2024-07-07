#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;
        Demo(int a = 10,int b = 20)
        {
            i = a;
            j = b;
        }

        void Display()
        {
            cout<<i<<endl;
            cout<<j<<endl;
        }
        
Demo operator +(Demo op2)
{
    cout<<"Inside opertaor overloaded function :"<<endl;
    return Demo(this->i+op2.i,this->j+op2.j);
}

};

int main()
{
    Demo obj1(11,21);
    Demo obj2(5,6);
    Demo obj(0,0);
    
    obj = obj1 + obj2;
    // obj = +(obj1,obj2);

    cout<<obj.i<<endl;
    cout<<obj.j<<endl;

    return 0;
}