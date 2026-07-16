#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    int first = INT_MIN;
    int second  = INT_MIN;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second && arr[i]!=first) second = arr[i];
    }
    cout << second;
}