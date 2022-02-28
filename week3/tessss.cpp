#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> a;
    int n; cin>>n;
    int pos;
    for(int i=0;i<n;i++){
        cin>>pos;
        a.push_back(pos);
    }
    unique(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}