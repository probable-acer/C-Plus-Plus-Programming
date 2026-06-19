#include <iostream>
using namespace std;
int main(){
    cout << "Enter a number : ";
    int n;
    cin >> n;
    if(n%5==0 && n%3==0){ // or n%15 == 0
        cout << "Divisible by 5 and 3";
    }
    else {
        cout << "Either Not Divisible by 5 or 3";
    }
}
// if condition 1 is false it won't check the condition 2