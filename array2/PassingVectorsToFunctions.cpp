#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void change(vector <int> &a){ // &a(alias) -> reflecting the original variable/array
    //&a -> for pass by refernce
    // a -> pass by value
    a[0] = 100;
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    vector <int> v;
    v.push_back(9);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    //hence  we can say for vector array it is pass by array not pass by reference
}