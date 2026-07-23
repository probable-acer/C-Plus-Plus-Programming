#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(6);
    v.push_back(10);
    v.push_back(11);
    v.push_back(3);
    v.push_back(2);
    for(int i=0;i<v.size();i++){
        cout << v.at(i) << " "; // use v.at(index) or v[index] both are same
    }
    cout << endl;
    //sort
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << v.at(i) << " "; // use v.at(index) or v[index] both are same
    }
     
}