#include <iostream>
using namespace std;
int main(){
    int x = 9;
    int *ptr = &x;
    int **p = &ptr;
    int ***p1 = &p;
    cout << *ptr << " " << **p;
}