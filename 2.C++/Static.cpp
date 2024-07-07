#include <iostream>

class MyClass {
public:
    // A static member function
    static void staticFunction() {
        std::cout << "This is a static function." << std::endl;
    }

    // A non-static member function
    void nonStaticFunction() {
        std::cout << "This is a non-static function." << std::endl;
    }
};

int main() {
    // Call the static member function using the class name
    //MyClass::staticFunction();

    // Create an object of the class
    MyClass obj;

    obj.staticFunction();

    // Call the non-static member function using the object
    obj.nonStaticFunction();

    return 0;
}

