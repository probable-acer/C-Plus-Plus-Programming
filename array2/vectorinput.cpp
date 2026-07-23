#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v1(5); 
    // if the vector is initialized with size then input can be taken like normal array
    // if not given size then use manually push_back()
    vector <int> v2;
    int n;
    cout << "enter the size : ";
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v2.push_back(x);
    }
}