#include<iostream>
using namespace std;

class Demo {

        public: //Access Specifier 
            int i,j; //Characteristics


            Demo() //Default constructor
            {
                cout<<"Inside default constructor\n";
                i = 0;
                j = 0;
            }

            Demo(int A,int B)  //Parameterised constructor
            {
                cout<<"Inside parameterised constructor\n";
                i = A;
                j = B;
            }

            Demo(Demo&ref)  //Copy constructor
            {
                    cout<<"Inside copy constructor\n";
                    i = ref.i;
                    j = ref.j;
            }  

            ~Demo()
            {
                cout<<"Inside Destructor\n";
            }

};

int main()
{

   Demo obj1;
   Demo obj2(11,21);
   Demo obj3(obj2);


    return 0;
}