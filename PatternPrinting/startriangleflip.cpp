#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cout << "Enter row no. : ";
    
    cin >> n; // n -> no. of rows
    int k = 0;
    for(int i=1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(j>=(n-k)){
                cout << '*';
            }
            else cout << " ";
        }
        k++;
        cout << endl;
    }
}