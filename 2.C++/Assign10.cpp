#include<iostream>
using namespace std;

class Max
{
    public:
       // int a,b;

        Max(int a,int b)
        {
           if(a>b){
            cout<<"Greater: "<<a<<endl;
           } 
           else
           {
            cout<<"Greater: "<<b<<endl;
           }
        }
};

int main()
{   int x,y;
    cout<<"Enter Two Numbers:";
    cin>>x>>y ;

    Max(x,y);

    return 0;
}