#include <iostream>
using namespace std;
int main(){
    char x;
    int a;
    cin >> a;
    x = (a<0) ? 'a' : 'S';
    cout << "Value of x : " << x << endl;
    cout << "Value of a : " << a << endl;
    int test = 0;
    cout << (test>=0 ? x : 0) << endl;
    return 0;
}