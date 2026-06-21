#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for(int i=1;i<=2*n-1;i+=2){
        cout << i << " ";
    }
    cout << endl;
    int a = 1;
    for(int i=1;a<=n;i+=2){
        cout << i << " ";
        a++;
    }
    cout << endl;
    int b = 1;
    for(int i=1;i<=n;i++){
        cout << b << " ";
        b+=2;
    }
}