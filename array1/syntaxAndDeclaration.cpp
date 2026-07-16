#include <iostream>
using namespace std;
int main(){
    //array cannot declare int a(25) or int c = {1,2,3}
    int arr[7]; //0 1 2 3 4 5 6
    int arr1[2] = {1,5};
    //t taking input
    cin >> arr[0]; // ask manually 
    //or use for loop
    for(int i=0;i<=6;i++){
        cin >> arr[i];
    }
    cout << arr[0] << " ";
    cout << arr[1] << " ";
    cout << arr[2] << " ";
    cout << arr[3] << " ";
    cout << arr[4] << " ";
    cout << arr[5] << " ";
    cout << arr[6] << " ";
    cout << endl;
    // or use loop
    for(int i=0;i<=6;i++){
        cout << &arr[i] << " ";

    }
}