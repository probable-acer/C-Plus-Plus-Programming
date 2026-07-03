#include <iostream>
using namespace std;
int a = 7; // global variable
void function(int x,int y){ // formal parameters
    cout <<  "Address of function x: " << &x << endl << "Address of function y: " << &y;
}
int main(){
    int x = 3;
    int y = 7;
    cout <<  "Address of main x: " << &x << endl << "Address of main y: " << &y << endl;
    function(x,y); // actual parameters
    int a = 2; //local variable
}