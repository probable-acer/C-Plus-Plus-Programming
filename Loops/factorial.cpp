#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a nnumber : ";
    cin >> n;
    int product = 1;
    for(int i =0;i<=n;i++){
        product *= i;
    }
    cout << product;
}