#include<iostream>
using namespace std;

class Demo 
{
    public:
    int i;
    const int j;
    const int k;

    Demo(int a ,int b,int c) : j(b),k(c)
    {
        i = a;
        // j = b;
        // k = c;

    }
};

int main()
{
    Demo obj(11,21,51);

    cout<<obj.i<<endl;
    cout<<obj.j<<endl;
    cout<<obj.k<<endl;

    obj.i++;
    // obj.j++;
    // obj.k++;

    return 0;
}