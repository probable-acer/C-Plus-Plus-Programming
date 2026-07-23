#include <iostream>
#include <vector>
using namespace std;
void display(vector <int> &a){
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void reversePart(int i,int j,vector <int> &a){
    while(i<j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
int main(){
    int n,k;
    cin >> n >> k;
    k %= n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    if(k==0) display(v);
    else{
        //rotate
        reversePart(0,n-k-1,v); //rotate using two pointers
        reversePart(n-k,n-1,v);
        reversePart(0,n-1,v);
        display(v);
    }
}