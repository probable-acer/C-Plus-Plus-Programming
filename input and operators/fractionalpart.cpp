#include <iostream>
using namespace std;
int main(){
    float x;
    cin >> x; 
    if(x<0) cout << x - ((int)x - 1);
    else
    cout << x - (int)x;
}