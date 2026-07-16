#include <iostream>
using namespace std;
void swap(int &a, int &b){ //pass by reference alias
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main(){
    int a = 8, b = 6;
    swap(a,b);
    cout << a << " " << b;
}