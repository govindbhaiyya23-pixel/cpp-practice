#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[5] = {10,20,30,40,50};
    int *ptr;
    ptr = &arr[0];
        cout << "Left to right\n";
        for(int i=0;i < 5;i++) {
            cout << "Value of pointer ptr: " << ptr << '\n';
            cout << "Value of pointer *ptr:" << *ptr << '\n';
            ptr += 1;

        }
        cout <<"\n\n";
        cout << "Rigth to left\n";
        ptr = &arr[4];
        for (int i=4;i >= 0;i--) {
            cout << "Value of pointer ptr:" << ptr << '\n';
            cout << "Value of pinter *ptr: " << *ptr << '\n';
            ptr -= 1;
        }
        return 0;       
}