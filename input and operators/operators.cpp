#include <iostream>
using namespace std;
int main(){
    int x = 3;
    cout <<(x = 7) << endl;
    int y = 8;
    int z = 4;
    cout << (x==y==z) << endl;
    x = y = z;
    cout << x << " " << y << " " << z << endl;
}