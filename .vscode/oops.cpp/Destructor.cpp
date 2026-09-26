#include <iostream>
#include <string>
using namespace std;
class student{
    public:
    string name;
    double *cgpaPtr;
    student(string name,double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    ~student(){
        cout << "Deleted Everything" << endl;
        delete cgpaPtr;//memory leak
    }
    void getInfo() {
        cout << "name :" << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl; 
    }
};
int main() {
    student s1("Govind ",8.9);
    s1.getInfo();
    return 0;
}