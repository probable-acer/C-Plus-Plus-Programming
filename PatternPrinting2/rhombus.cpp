#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no. of rows : ";
    cin >> n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-1;j++){
            cout << " ";
        }
        //stars
        for(int k=1;k<=4;k++){
            cout << "*";
        }
        cout << endl;
    }
}