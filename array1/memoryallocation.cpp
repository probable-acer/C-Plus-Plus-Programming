#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout << &arr << endl; //address of array is the address of its first element
    // &arr and arr works the same prints the address of the array
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl; 
    // here as the memory of the array is stacked toghether that is why 
    // memmory gap is of 4 as size of int variable is 4 bytes
    // 0x45dc7ff6b0
    // 0x45dc7ff6b4
    // 0x45dc7ff6b8
    // 0x45dc7ff6bc
    // 0x45dc7ff6c0
}