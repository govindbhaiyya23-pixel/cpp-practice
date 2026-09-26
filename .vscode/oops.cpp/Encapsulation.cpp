#include <iostream>
#include <string.h>
using namespace std;
class Account {
private:
    double balance;
    string password; //datahiding
public:
    float accountid;
    string username;
    void setbalance(int b){
        balance = b;
    }
    double getbalance(){
        return balance;
    }
    void setpassword(string p){
        password = p;
    }
    string getpassword(){
        return password;
    }
};
int main() {
    Account a1;
    a1.setbalance(200000);
    a1.username = "Govind";
    a1.setpassword("Ram");
    a1.accountid = 2007;
    cout << a1.username << endl;
    cout << a1.getbalance() << endl;
    cout << a1.getpassword() << endl;
    return 0;
}