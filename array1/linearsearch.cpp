#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin >> arr[i];
    }
    int x;
    cout << "enter the element u want to search : ";
    cin >> x;
    //search
    //check mark
    bool flag = false; //false -> not present
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag = true; // true -> present
    }
    if(flag) cout << "present";
    else cout << "not present";
}