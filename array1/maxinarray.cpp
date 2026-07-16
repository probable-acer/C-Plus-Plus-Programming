#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout << "enter sise of array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin >> arr[i];
    }
    int max = arr[0]; //instead can use INT_MIN or INT_MAX
    int max1 = INT_MIN;
    int min2 = INT_MAX;
    for(int i=0;i<n;i++){
        if(max<arr[i]) max = arr[i];
    }
    cout << max;
    cout << endl << max1;
    cout << endl << min2;
}