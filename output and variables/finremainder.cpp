#include <iostream>
using namespace std;
int main(){
    int a = 14; //a means dividend
    int b = 3; // b means divisor
    int q = a/b; // q means quotient
    // a = (b*q) + r;
    int r;
    r = a - b * q;
    cout << r;
    // q*b(4) and b * a/b(5) are not same 
}