#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no. of lines : ";
    cin >> n;
    int m = n-1; //new lines
    int nsp = 1;
    for(int i=1;i<=2*n-1;i++){
        cout << i;
    }
    cout << endl;
    for(int i=1;i<=m;i++){
        int num = 1;
        // numbers
        for(int j=1;j<=m+1-i;j++){
            cout << num++;
        }
        //spaces
        for(int k=1;k<=nsp;k++){
            cout << " ";
            num++;
        }
        nsp+=2;
        //numbers
        for(int j=1;j<=m+1-i;j++){
            cout << num;
            num++;
        }
        cout << endl;
    }
}