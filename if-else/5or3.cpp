#include <iostream>
using namespace std;
int main(){
    cout << "Enter a number : ";
    int n;
    cin >> n;
    if(n%5==0 || n%3==0){ 
        cout << "Divisible by 5 or 3";
    }
    else {
        cout << "Neither Divisible by 5 nor 3";
    }
}