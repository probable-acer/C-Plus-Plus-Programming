#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cout << "Enter array size : ";
    cin >> n;
    cout << "Enter array elements : ";
    for(int i=0;i<n;i++){
        int q;
        cin >> q;
        v.push_back(q);
    }
    vector <int> v1(v.size());
    for(int i=0;i<n;i++){
        v1[i] = v[v.size()-1-i];
    }
    for(int i=0;i<n;i++){
        cout << v1[i] << " ";
    }
}