// #include<iostream>
// using namespace std;

// class Demo
// {
//     public:
//         int value;

//         Demo(int A = 10)
//         {
//             value = A;
//              this ->value = A;
            
//         }
//         void Display()
//         {
//             cout<<this<<endl;
//         }


// };
// int main()
// {
//     Demo obj(12);
//     obj.Display();

//     return 0;
// }

#include <iostream>
//#include <string>
using namespace std;

class Person {
public:
 string name;
    Person(string name) {
        // Set the name using the constructor parameter
        this -> name = name;
        
        // Call a member function using the this pointer
        
    }

    void introduce() {
        cout << "Hello, my name is " << name << "." <<endl;
    }

   
};

int main() {
    Person person("Alice");
    person.introduce();
    return 0;
}
