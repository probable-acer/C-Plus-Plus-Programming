#include <iostream>
using namespace std;
int main(){
    int x = 7;
    int* ptr = &x;
    cout << ptr << endl; //0x9c5b3ffc6c
    ptr = ptr + 1;
    cout << ptr << endl; // 0x9c5b3ffc70
    bool flag = 1;
    bool* ptr1 =&flag; 
    cout << ptr1 << endl; // 0x9c5b3ffc6b
    ptr1 = ptr1 + 1;
    cout << ptr1 << endl; // 0x9c5b3ffc6c
    int a = 4;
    int* ptr2 = &a;
    cout << *ptr2 << endl; // 4
    ptr2 = ptr2 + 1;
    cout << *ptr2 << endl; //24647920
    // int -> 4 bytes se aage
    // bool/char -> 1 byte se aage
}