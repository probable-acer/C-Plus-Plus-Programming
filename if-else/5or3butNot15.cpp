#include <iostream>
using namespace std;
int main(){
    cout << "Enter a number : ";
    int n;
    cin >> n;
    if((n%5==0 || n%3==0) && n%15!=0){ 
        cout << "Divisible by 5 or 3 but not 15";
    }
    else {
        cout << "Neither Divisible by 5 nor 3";
    }
    //nested if else
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            cout << "The number is divisible by 5 or 3 but not 15";
        }
        else{
            cout << "Not matching condiiton";
        }
    }
    else{
        cout << "Not matching condiiton";
    }
}