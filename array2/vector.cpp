#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v; //you need not mention the size of the vector array
    //inserting // input do not use []
    v.push_back(6);
    cout << v.capacity() << endl;
    v.push_back(3);
    cout << v.size() << endl;
    v.push_back(5);
    cout << v.size() << endl << v.capacity();
    v.push_back(5);
    cout << v.size() << endl << v.capacity();
    //v.size -> size of the array v.capacity -> capacity of the array
    //if u want to update/access do like normal array only
    cout << v[0];
    cout << v[1];
}