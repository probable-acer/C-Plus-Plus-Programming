#include <iostream>
using namespace std;;
int main(){
    int a,b,c;
    cout << "Enter 1st Number : ";
    cin >> a;
    cout << "Enter 2nd Number : ";
    cin >> b;
    cout << "Enter 3rd Number : ";
    cin >> c;
    if(a>b){
        if(a>c){
            cout << a << " is greatest";
        }
        else{ // c > a,  a > b - > c > a > b
            cout << c << " is greatest";
        }
    }
    else{ // b > a(Equality Possible)
        if(b>c){
            cout << b << " is greatest";
        }
        else{ // c > b > a(if a == b == c then it prints c)
            cout << c << " is greatest";
        }
    }
    return 0;
}