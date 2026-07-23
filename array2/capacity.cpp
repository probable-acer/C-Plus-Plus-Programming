#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(6);
    v.push_back(10);
    v.push_back(11);
    v.push_back(3);
    v.push_back(2);
    v.push_back(3);
    v.push_back(6);
    v.push_back(3);
    cout << "Size is : " << v.size() <<  endl;
    cout << "Capacity is : " << v.capacity() << endl;
    v.pop_back();
    v.pop_back();
    cout << "Size is : " << v.size() <<  endl;
    cout << "Capacity is : " << v.capacity() << endl;
}