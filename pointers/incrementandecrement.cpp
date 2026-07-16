#include <iostream>
using namespace std;
int main(){
    int x = 5;
    int* ptr = &x;
    (*ptr)++; //always advised that before increment and decrement
    // to use ()

    cout << *ptr << " " << --(*ptr);
}