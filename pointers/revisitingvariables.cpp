#include <iostream>
using namespace std;
int main(){
   int x = 9;
   cout << &x << '\n';
   char y = 's';
   cout<<(void*)&y;
}