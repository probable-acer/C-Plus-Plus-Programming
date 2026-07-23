#include <iostream>
using namespace std;
void display(int a[], int size){ // int* a both are same
    // int size = sizeof(a)/sizeof(a[0]); will return the size of pointer;
    for(int i=0;i<=size-1;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}
void change(int b[], int size){
    b[0] = 100;
}
int main(){
    int arr[] = {1,2,3,4,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    // accessing the elements of array in another function
    // updation , pass by value /refernce ?
    display(arr,size);
    change(arr,size);
    display(arr,size);
}