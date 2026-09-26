#include <iostream>
#include <string.h>
using namespace std;
class Teacher {
private:
    float salary;
public:
    string name;
    string dept;
    void changedept(string Newdept){
        dept = Newdept;
    }
    void setsalary(int s){
        salary = s;
    }
    float getsalary(){
        return salary;
    }
    
};
int main() {
    Teacher t1;
    t1.name = "Govind";
    t1.dept = "ENTC";
    t1.setsalary(22222);
    cout << t1.getsalary() << endl;
    return 0;
}