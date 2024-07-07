#include<iostream>
using namespace std ;

class Max{
        public:
            int value1,value2;

            Max(int No1,int No2)
            {
                value1 = No1;
                value2 = No2;
            }

            void Max1()
            {
                if(value1>value2)
                {
                    cout<<value1<<" is Greater";
                }
                else if(value1<value2)
                {
                    cout<<value2<<" is  Greater";
                }
            }
};

int main()
{
    int a ,b;

    cout<<"Enter First Number:";
    cin>>a;
    cout<<"Enter Second Number:";
    cin>>b;
    
    Max obj(a,b);
    obj.Max1();
    return 0;
}