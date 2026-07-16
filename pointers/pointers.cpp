#include <iostream>
using namespace std;
int main(){
    int x = 4;
    int* p = &x;
    bool y = true;
    bool* p1 = &y;
    char ch = 's';
    char *p2 = &ch;
    float m = 9.3;
    float * p3 = &m;
    cout << &x << " " << &y << " " << &ch << " " << &m << endl;
    cout << p << " " <<p1 << " " << p2 << " " << p3;
}