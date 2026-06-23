#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int reverse_num = 0;
    int lastdigit = 0;
    while(n>0){
        lastdigit = n%10;
        reverse_num = reverse_num * 10 + lastdigit;
        n /= 10;
    }
    cout << reverse_num;
}