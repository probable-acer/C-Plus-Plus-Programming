#include <iostream>
using namespace std;
int main(){
    int x = 9;
    int* p = &x;
    cout << *p;
    *p = 40;
    cout << endl << *p;
}