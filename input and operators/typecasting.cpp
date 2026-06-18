#include <iostream>
using namespace std;
int main(){
    //int , float , bool , char -> typecasting
    float x = 7.1;
    int  y =  (int) x;
    cout << y << " " << x;
    bool flag = false;
    cout << " " << flag + 9 << endl;
    char ch = 'A';
    int m = (int)ch;
    cout << (int)ch + 100;
}