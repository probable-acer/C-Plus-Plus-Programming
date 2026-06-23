#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int product = 1;
    if(n==1) cout << "The factorial of 1 is : " << product;
    else{
        for(int i=1;i<=n;i++){
            product *= i;
            cout << "The factorial of " << i <<" is " << product << endl;
        }
    }
}