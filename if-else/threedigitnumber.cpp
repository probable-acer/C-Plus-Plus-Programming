#include <iostream>
using namespace std;
int main(){
    cout << "Enter a number : ";
    int n;
    cin >> n;
    if(n>=100){
        cout << "Three Digit Number";
    }
    else{
        cout << "Not a Three digit Number";
    }
}