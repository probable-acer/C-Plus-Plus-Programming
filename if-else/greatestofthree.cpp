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
    if(a>b && a>c){
        cout << a << " is the largest";
    }
    if(c>a && c>b){
        cout << c << " is the largest";
    }
    if(a<b && b>c){
        cout << b << " is the largest";
    }
    return 0;
}