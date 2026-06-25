#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "No. of rows : ";
    cin >> n;
    int a;
    for(int i=1;i<=n;i++){
        if(i%2==0) a = 0; // even row no.
        else a = 1; // odd row no.
        for(int j=1;j<=i;j++){
            cout << a << " ";
            if(a==1) a = 0;
            else a = 1;
        }
        cout << endl;
    }
    // another method
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==j) cout << 1 << " ";
            else if ((i+j)%2==0) cout << 1 << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}