#include <iostream>
using namespace std;
int main(){
    int x = 6;
    int y = 5;
    int* p1 = &x;
    int* p2 = &y;
    cout << *p1 + *p2 << endl;
    // or else
    int a,b;
    int* p3 = &x;
    int* p4 = &y;
    cout << "Enter First number : ";
    cin >> *p3;
    cout << "enter second number : ";
    cin >> *p4;
    cout << *p3 + *p4;
}