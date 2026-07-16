#include <iostream>
using namespace std;
int main(){
    int* ptr = 0; //reserved address
    // NULL , nullptr, 0 , '\0' gives same answer in pointer 
    // '\0' -> null character
    cout << ptr << endl;
    char ch = '\0';
    cout << (int)ch;
}