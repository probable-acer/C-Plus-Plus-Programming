#include <iostream>
using namespace std;
int main(){
    int arr[] = {4,2,3,4,1};
    int* ptr = arr; // giving address // ptr = &arr[0]
    cout << ptr << endl;
    for(int i=0;i<=4;i++){
        cout << *ptr << " "; // or ptr[i] or i[ptr] or i[arr]
        ptr++;
    }
    ptr = arr; // ptr is pointing to first element
    *ptr = 8; //ptr[0] = 8;
    ptr++; //ptr is pointing to second element
    *ptr = 9;
    ptr--; //ptr is pointing to first element
    cout << endl;
    for(int i=0;i<=4;i++){
        cout << *ptr << " ";
        ptr++; // ptr out of range
    }
    ptr = arr; //pointing to first element
}