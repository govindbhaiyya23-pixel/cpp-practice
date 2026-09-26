#include <iostream>
#include <string>
using namespace std;
class student {
public:
    string name;
    int age;
    int *marks;
    // student(){  //non-parameterized
        // name = "Yogesh";
        // age = 18;
    // }
    // student(string name,int age){  //parameterized
    //     this->name = name;
    //     this->age= age;
    // }
    student(string name, int age, int m) {
        this->name = name;
        this->age = age;
        marks = new int(m);
    }
    // student(const student &obj) { //shallow copy
    //     name = obj.name;
    //     age = obj.age;
    //     marks = obj.marks;
    // }
    student(const student &obj) { //deep copy
        name = obj.name;
        age = obj.age;
        marks = new int(*obj.marks);
    }
};
int main() {
    student s1("Govind",19,90);
    student s2 = s1;
    *s2.marks = 95;
    //student s1("Govind",19);
    // student s1;
    cout << s1.name <<endl;
    cout << s1.age << endl;
    cout << *s1.marks << endl;
    cout << *s2.marks << endl;
    return 0;
}
