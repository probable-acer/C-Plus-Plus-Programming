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
    for(int i=0;i<n;i++){
        if(max<arr[i]) max = arr[i];
    }
    int max2 = arr[0];
    for(int i=0;i<=n-1;i++){
        if(max2<arr[i] && arr[i]<max) max2 = arr[i]; // or arr[i]!=max2
    }
    cout << max << " " <<max2;
}