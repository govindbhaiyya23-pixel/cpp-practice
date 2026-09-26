#include <iostream>
#include <string>
using namespace std;
class person {
    public:
    string name;
    int age;
    // person (string name,int age){
    //     this->name = name;
    //     this->age = age;
    // }
};
class student: public person{
    public:
    int rollno;
    // student(string name,int age,int rollno) : person(name,age){
    //     this->rollno = rollno;
};
class Gradstudent: public student{ //multilevel inheritance
    public:
    string researcharea;
};
//     void getInfo() {
//         cout << "name: " << name << endl;
//         cout << "age: " << age << endl;
//         cout << "rollno: " << rollno << endl;
//     }
// };
int main(){
    // student s1("Govind",19,2);
    // s1.getInfo();
    Gradstudent s1;
    s1.name = "Govind";
    s1.age = 19;
    s1.rollno = 2;
    s1.researcharea = "AI";
    cout << s1.name << endl;
    return 0;
}