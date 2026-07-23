#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v(5); // intial size and capacity = 5 where all elements 
    //are assigned value 0
    vector<int>v1(5,6); //assgined 7 to each of the 5 elements
    cout << v[2];
    cout << " " << v1[3];
}