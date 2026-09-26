#include <iostream>
using namespace std;
void assignValue(int *a) {
    *a = 4; 
}
int main() {
    int x = 3;
    assignValue(&x);
    cout << x << '\n';
    return 0;
}