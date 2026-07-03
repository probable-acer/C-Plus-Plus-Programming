#include <iostream>
using namespace std;
int maxthree(int a,int b,int c){
    if(a>b && a>c) return a;
    if(b>a && b>c) return b;
    if(c>a && c>b) return c;
}
int main(){
    int a = 200,b=9,c=4;
    cout << maxthree(a,b,c);
}