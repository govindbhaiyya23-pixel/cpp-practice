//Run time polymorphism
//Function overriding and virtual funtions
#include <iostream>
#include <string.h>
using namespace std;
class Parent {
    public:
    getInfo() {
        cout << "parent class\n";
    }
    virtual void hello() {
        cout << "Hello from parent\n";
    }
};
class child : public Parent {
    public:
    getInfo() {
        cout << "child class\n";
    }
    void hello() {
        cout << "Hello from child\n";
    }
};
int main() {
    child c1;
    c1.hello(); // for virtual function calling
    return 0;
}