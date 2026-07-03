#include <iostream>
using namespace std;
int a = 7; // global variable
void function(int x = 71,int y = 98){ // formal parameters
    // if default values are given it need to be given to all arguments
    cout << x << " " << y;
}
int main(){
    int x = 3;
    int y = 7;
    function();
}