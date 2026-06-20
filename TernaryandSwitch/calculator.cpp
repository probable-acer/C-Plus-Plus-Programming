#include <iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout << "Enter the problem : ";
    cin >> a >> op >> b;
    //using if else
    if(op == '+') cout << a + b;
    if(op == '-') cout << a - b;
    if(op == '*') cout << a * b;
    if(op == '/') cout << a / b;
    // cout << endl;
    cout << "\n";
    // using switch
    switch(op){
        case '+' :
            cout << a+b;
            break;
        case '-' :
            cout << a-b;
            break;
        case '*' :
            cout << a * b;
            break;
        case '/' :
            cout << a / b;
            break;
        default :
            cout << "invalid operator";
    }
}