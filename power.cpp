#include <iostream>
using namespace std;
int main(){
    int power , base;
    cout << "Enter the base : ";
    cin >> base;
    cout << "Enter the power : ";
    cin >> power;
    bool flag  = true; // true means power positive
    if(power<0){
        flag = false; //false means neagtive power
        power = -power;
    }
    float result = 1;
    for(int i =1;i<=power;i++){
        result *= base;
    }
    if(flag == false){
        result = 1/result;
        power = -power;
    }
    if(base==0 && power == 0)  cout << "Not Defined";
    else cout << base << " raised to the power " << power << " is " <<  result;
}